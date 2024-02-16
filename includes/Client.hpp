#ifndef CLIENT_HPP
# define CLIENT_HPP

# include "Common.hpp"
# include "Commands.hpp"

// if _registeration == 0, then the client is not registered
// if _registeration == 1, then the client pass is registered
// if _registeration == 2, then the client pass and nick are registered
// if _registeration == 3, then the client pass, nick and user are registered
class Client{
	private:
		int				_clientFd;
		std::string		_serverName;
		std::string		_readbuf;
		std::string		_sendbuf;
		std::string		_nickname;
		std::string		_username;
		std::string		_realname;
		std::string		_mode;
		std::string		_IPaddress;
		std::string 	_hostname;
		int				_isRegistered;
		int				_welcomeSent;
		Client();
		Client(Client const &other);
		Client	&operator=(Client const &other);

	public:
		Client(int new_fd);
		~Client();
		
		//write setters getters
		void	setSocketFd(int new_fd);
		void	setNickName(std::string new_name);
		void	setUserName(std::string new_user);
		void	setRealName(std::string new_real);
		void	setReadbuf(std::string buf);
		void	setSendbuf(std::string buf);
		void	setMode(std::string mode);
		void	setIPaddress(char *ip);
		void	setHostName(char *host);
		void	setRegisteration(int reg);
		void	setWelcomeSent(int sent);
		const int	&getClientFd(void);
		const std::string	&getServerName(void);
		const std::string	&getNickName(void);
		const std::string	&getUserName(void);
		const std::string	&getRealName(void);
		const int	&getSocketFd(void);
		const std::string	&getReadbuf(void);
		const std::string	&getSendbuf(void);
		const std::string	&getIPaddress(void);
		const std::string	&getMode(void);
		const std::string	&getHostName(void);
		const int	&getRegisteration(void);
		const int	&getWelcomeSent(void);

		void addSendbuf(std::string buf);
};

#endif
