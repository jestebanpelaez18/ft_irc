#include "../../includes/Server.hpp"
#include "../../includes/Commands.hpp"
#include "../../includes/Reply.hpp"

/**
 * @brief The QUIT command is used to terminate a client’s connection to the server. The server acknowledges 
 * this by replying with an ERROR message and closing the connection to the client.
 * Syntax: PASS [<reason>]
 *
 * This message may also be sent from the server to a client to show that a client has exited from the network. 
 * This is typically only dispatched to clients that share a channel with the exiting user. 
 * When the QUIT message is sent to clients, <source> represents the client that has exited the network.
 * 
 *
 * Example : /QUIT Gone to have lunc
 */

// void sendMsgtoClients(std::string message, Client *Client, std::vector<std::string> &nick_names)
// {
//     for(size_t i = 0; i < nick_names.size(); i++)
//     {
//         if(Client != NULL && nick_names[i] == Client->getNickName())
//             continue;
        
        
//     }
// }


void cmdQuit(Message &msg, Client *Client)
{   
    std::string quit_message;
    quit_message = QUIT_MESSAGE(Client->getNickName(), Client->getUserName(), Client->getIPaddress());
    if(msg.params.size())
        quit_message.append(msg.params.front() + "\n");
    else
        quit_message.append("\n");
    // sendMsgtoClients(quit_message,Client, nick_names);
    close(Client->getClientFd());
    return ;
}