#pragma once

#include "Common.hpp"
#include "Client.hpp"

class Client;

// _clientlist[channelname] = client class
//userlimit = user capacity limits in channel
class Channel
{
	private:
		std::map<std::string, Client *>	_clientList;
		// std::vector<std::string>		_kickedUsers;
		std::vector<std::string>		_operators;
		std::string 					_channel;
		std::string						_channelKey;
		std::string						_topic;
		std::string						_mode;
		int								_userLimit;
		int								_useramount;

	public:
		Channel(std::string const &name);
		~Channel();

		/*getters and setters*/
		std::map <std::string, Client *>	&getClientList();
		// std::vector<std::string>&		getKickedUsers();
		std::vector<std::string>&		getChannelOperators();
		const std::string&				getChannelName();
		const std::string&				getChannelKey();
		const std::string&				getTopic();
		const std::string&				getMode();
		const int&						getUserLimit();
		void							addToChannel(Client &client);
		void							removeFromChannel(std::string &nick);
		// void							addToKicked(std::string &nick);
		// void							removeFromKicked(std::string &nick);
		void							addOperator(std::string clientNickName);
		void							removeOperator(std::string operatoName);
		void							setChannelKey(std::string password);
		void							setTopic(std::string& newTopic);
		void							setMode(std::string mode, Client *client);
		void							addMode(std::string const mode);
		void							removeMode(std::string const mode);

		/*helping functions*/
		bool							isAlreadyInChannel(std::string &nick);
		bool							isOperator(std::string &clientNickName);
		void							removeChannelPassword();
		bool 							goodModeFLag(std::string modeFlag);

};
