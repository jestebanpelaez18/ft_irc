
#ifndef REPLY_HPP
# define REPLY_HPP

# define USER(nick, username, userIP)(":" + nick + "!~" + username + "@" + userIP)

//ERROR REPLIES
# define ERR_NEEDMOREPARAMS(hostname)(":" + hostname + " 461 * :Not enough parameters" + "\r\n")
# define ERR_ALREADYREGISTRED(hostname)(":" + hostname + " 462 * :You may not reregister" + "\r\n")
# define ERR_PASSWDMISMATCH(servername)(":" + servername + " 464 * :Password incorrect" + "\r\n")
# define ERR_RESTRICTED(servername)(":" + servername + " 484 :Your connection is restricted!" + "\r\n")
# define ERR_RESTRICTED(servername)(":" + servername + " 484 :Your connection is restricted!" + "\r\n")
// # define ERR_PASSWDMISMATCH()("Password incorrect\r\n")
# define ERR_NONICKNAMEGIVEN(hostname)(":" + hostname + " 431 * :No nickname given" + "\r\n")
# define ERR_ERRONEUSNICKNAME(hostname, nick)(":" + hostname + " 432 * " + nick + " :Erroneus nickname" + "\r\n")
# define ERR_NICKNAMEINUSE(hostname, nick)(":" + hostname + " 433 * " + nick +  " :Nickname is already in use" + "\r\n")
# define ERR_NICKCOLLISION(hostname, nick, user, host)(":" + hostname + " 436 * " + nick + " Nickname collision KILL from " + user + "@" + host + + "\r\n")
# define ERR_NOTREGISTERED(hostname)(":" + hostname + " 451 * :You have not registered" + "\r\n")
# define ERR_NOSUCHSERVER(hostname, servername)(":" + hostname + " 402 " + servername + " :No such server" + "\r\n")
# define ERR_NOOPERHOST(hostname)(":" + hostname + " 491 * :You have not registered" + "\r\n")
# define ERR_TOOMANYCHANNELS(username, channel) ("405 " + username + " " + channel + " :You have joined too many channels\r\n")
# define ERR_BADCHANNELKEY(username, channel) ("475 " + username + " " + channel + " :Cannot join channel (+k)\r\n")
# define ERR_CHANNELISFULL(username, channel) ("471 " + username + " " + channel + " :Cannot join channel (+l)\r\n")
# define ERR_INVITEONLYCHAN(username, channel) ("473 " + username + " " + channel + " :Cannot join channel (+i)\r\n")
// # define ERR_NOSUCHCHANNEL(username, channel) ("403 " + username + " " + channel + " :No such channel\r\n")
# define ERR_UNKNOWNMODE()("472 * :Unknown MODE flag\r\n")
// # define ERR_CHANOPRIVSNEEDED(hostname, nickname, channel) (":" + hostname + " 482 " + nickname + " " + channel + " :You're not channel operator\r\n")
# define ERR_CHANOPRIVSNEEDED(channel) (":"  + channel + " :You're not channel operator\r\n")
# define ERR_NOSUCHNICK(nick)("401 * " + nick + " :No such nick" + "\r\n")
# define ERR_NOSUCHCHANNEL(channel)("403 * " + channel + " :No such channel" + "\r\n")
# define ERR_CANNOTSENDTOCHAN(hostname, channel)(":" + hostname + " 404 * " + channel + " :Cannot send to channel" + "\r\n")
# define ERR_NORECIPIENT(hostname)(":" + hostname + " 411 * :No recipient given" + "\r\n")
# define ERR_NOTEXTTOSEND(hostname)(":" + hostname + " 412 * :No text to send" + "\r\n")
# define ERR_TOOMANYTARGETS(hostname)(":" + hostname + " 407 * :Too many recipients" + "\r\n")
// # define ERR_CHANOPRIVSNEEDED(channel)("482 " + channel + " :You're not channel operator\r\n")
# define ERR_NOTONCHANNEL(hostname,channel) (":" + hostname + " 442 " + channel + " :You're not on that channel\r\n")
# define ERR_USERNOTINCHANNEL(hostname,nick,channel) (":" + hostname + " 441 " + channel + " " + nick + " :Not on this channel\r\n")
# define ERR_USERONCHANNEL(hostname,nick,channel) (":" + hostname + " 443 " + channel + " " + nick + " :is already on the channel\r\n")
# define ERR_RESTRICTED(servername)(":" + servername + " 484 :Your connection is restricted!" + "\r\n")

//NORMAL REPLIES
# define QUIT_MESSAGE(nick, username, userIP)(":" + nick + "!" + username + "@" + userIP + " QUIT :Quit: ")
# define KICK_MESSAGE(USER, channel, nick, usernick)(USER + " KICK " + channel + " " + nick +  " :" + usernick)
# define TOPIC_MESSAGE(USER, channel)(USER + " TOPIC " + channel + " :")
# define INVITE_MESSAGE(USER, nick, channel)(USER + " INVITE " + nick + " :" + channel + "\r\n")
# define NICK_REPLY(old_nick, usesrname, userIP, new_nick)(":" + old_nick + "!~" + usesrname + "@" + userIP + " Nick :" + new_nick+ "\r\n")
# define RPL_MOTDSTART(hostname, nickname)(":" + hostname+ " 375 * :- " + nickname + " Message of the day - " + "\r\n")
# define RPL_MOTD(hostname, nickname, motd_line) (":" + hostname + " 372 " + nickname + " :" + motd_line + "\r\n")
# define RPL_ENDOFMOTD(hostname, nickname) (":" + hostname + " 376 " + nickname + " :End of /MOTD command.\r\n")
# define RPL_WELCOME(hostname, servername, nick, userIP)(":" + hostname + " 001 " + nick + " :Welcome to the Internet Relay Network " + servername + "!" + nick + "@" + userIP + "\r\n")
# define RPL_YOURHOST(hostname, nickname, servername)(":" + hostname + " 002 " + nickname + " :Your host is " + servername + ", running version 1.0\r\n")
# define RPL_CREATED(hostname, nickname, date)(":" + hostname + " 003 " + nickname + " :This server was created " + date + "\r\n")
# define RPL_MYINFO(hostname, version, usermodes, channelmodes)(":" + hostname + " 004 " + version + " " + usermodes + " "+ channelmodes + "\r\n")
# define RPL_MODE(nickname, mode)(":" + nickname + " MODE " + nickname + " :" + mode + "\r\n")
# define RPL_YOUREOPER(hostname, username)(":" + hostname + " 381 " + username + " :You are now an IRC operator " + "\r\n")
// # define RPL_YOURECHANOPER(username, channel)(": username + " is now an operator on channel " + channel + \r\n")
# define RPL_JOIN(USER, channel, realname)(USER + " JOIN " + channel + " * :" + realname + "\r\n")
# define RPL_NAMREPLY(hostname, username, channel, nicklist) (":" + hostname + " 353 " + username + " = " + channel + " :" + nicklist + "\r\n")
# define RPL_ENDOFNAMES(hostname, username, channel) (":" + hostname + " 366 " + username + " " + channel + " :End of /NAMES list.\r\n")
# define RPL_TOPIC(hostname, username, channel, topic) (":" + hostname + " 332 " + username + " " + channel +  " :" + topic + "\r\n")
# define RPL_NOTOPIC(hostname, username, channel) (":" + hostname + " 331 " + username + " " + channel + " :No topic is set\r\n")
# define RPL_PRIVMSG(USER, target, text) (USER + " PRIVMSG " + target + " :" + text + "\r\n")
# define RPL_INVITING(hostname, nick, invited, channel) (":" + hostname + " 341 " + nick + " " + invited + " " + channel + "\r\n")

#endif
