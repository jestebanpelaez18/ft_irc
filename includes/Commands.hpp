#ifndef COMMANDS_HPP
# define COMMANDS_HPP

# include "Common.hpp"
# include "Message.hpp"
# include "Client.hpp"

class Client;
class Message;

void cmdCap(Message &msg, Client *Client);
int cmdNick(Message &msg, Client *Client, std::vector<std::string> &nick_names);
int cmdPass(Message &msg, Client *Client, std::string password);
int cmdQuit(Message &msg, Client *Client);
int cmdUser(Message &msg, Client *Client);
int cmdWhois(Message &msg, Client *Client);
int cmdKill(Message &msg, Client *Client);
int cmdPrivmsg(Message &msg, Client *Client);


/*channel commands*/

int cmdJoin(Message &msg, Client *Client);
int cmdKick(Message &msg, Client *Client);
int cmdInvite(Message &msg, Client *Client);
int cmdTopic(Message &msg, Client *Client);
int cmdMode(Message &msg, Client *Client);
void cmdMotd(Message &msg, Client *Client);
int cmdOper(Message &msg, Client *Client);



#endif
