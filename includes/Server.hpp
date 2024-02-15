
#ifndef SERVER_HPP
# define SERVER_HPP

# define MAXCLIENTS 32
# include "Common.hpp"
# include "Client.hpp"
# include "Message.hpp"
# include "Commands.hpp"

class Client;
class Message;

	enum command {
		CAP,
		PASS,
		NICK,
		USER,
		JOIN,
		INVITE,
		KICK,
		TOPIC,
		MODE,
		MOTD,
		PRIVMSG,
		WHOIS,
		KILL,
		OPER,
		INVALID,
		// what else?
	};

class Server
{
	private:
		Server();
		std::string port;
		std::string serverName;
		std::string password;
		std::vector<struct pollfd> pfds;
		int pollfd_count;
		int client_id;
		std::map<int, Client*>	_clients;

	public:
		Server(std::string port, std::string password);
		~Server();
		int getClientId();
		void setClientId(const int id);
		int serverSetup(std::string prt);
		int acceptPendingConnections();
		int cmd_nick(Message &msg, int client_fd);
		int recieve_msg(int new_fd, int i);
		int send_msg(int send_fd);
		int poll_loop();
		void close_client(int i, int fd);
		void setMessage(const char* msg);
		int findCommand(int client_fd);
		int get_command_type(std::string command);
		const std::string &getServerName() const;
};

#endif
