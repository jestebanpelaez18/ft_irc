<p align="center">
  <a href="" rel="noopener">
 <img width=200px height=200px src="https://cestoliv.com/projects/imgs/42/ft_irc.webp" alt="Project logo"></a>
</p>

<h3 align="center">Inter Relay Chat</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/kylelobo/The-Documentation-Compendium.svg)](https://github.com/kylelobo/The-Documentation-Compendium/issues)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Creating our own version of Inter Relay Chat(IRC) server
    <br> 
</p>

## 📝 Table of Contents

- [About](#about)
- [Technologies](#technologies)
- [Key Features](#key_features)
- [Getting Started](#getting_started)
- [Running the server](#running_the_server)
- [Commands and its usage](#command)
- [Collaborators](#collaborators)
- [External resources](#sources)

## 🧐 About <a name = "about"></a>

The ft_irc project is an interesting undertaking exploring computer networking and communication protocols. the project aims to challenge to explore sockets, network programming and IRC protocols and develop our own IRC (Internet Relay Chat) server from scratch using C++. 

Internet Relay Chat or IRC is a text-based communication protocol on the Internet. It offers real-time messaging that can be either public or private. Users can exchange direct messages and join group channels. IRC clients connect to IRC servers in order to join channels. IRC servers are connected together to form a network.

## Key Features <a name = "key_features"></a>

- The server must be capable of handling multiple clients at the same time and never hang.
- Forking is not allowed. All I/O operations must be non-blocking, it means that that any input/output operations performed by clients (such as sending messages, receiving messages, or managing connections) must not block the processing flow.
- Only 1 poll() (or equivalent) can be used for handling all these operations (read,
write, but also listen, and so forth).
- We have to choose one IRC client as a reference, in this case we choose IRSSI.
- The reference client must be able to connect to the server without encountering any error.
- Communication between client and server has to be done via TCP/IP (v4 or v6).
- We have to implement the following features:
  - Must be able to authenticate, set a nickname, a username, join a channel, send and receive private messages using your reference client.
  - All the messages sent from one client to a channel have to be forwarded to every other client that joined the channel.
  - have operators and regular users.
  - have to implement the commands that are specific to channel operators:
    - KICK - Eject a client from the channel.
    - INVITE - Invite a client to a channel.
    - TOPIC - Change or view the channel.
    - MODE - Change the channel’s mode:
      - i: Set/remove Invite-only channel
      - t: Set/remove the restrictions of operators the TOPIC command to channel.
      - k: Set/remove the channel key (password).
      - o: Give/take channel operator privilege.
      - l: Set/remove the user limit to channel.

## Technologies <a name = "technologies"></a>

- C++ version: 11.

## 🏁 Getting started <a name = "getting_started"></a>

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.
Firts clone this repository inside the folder that you desire: 

```
git clone https://github.com/ynslee/ft_irc.git
```

### Launch

```
$make
```
when the make file is compiled, run the executable as follow:
```
$./ircserv [port_number] [password]
```
##### 1\. `port_number` : 6667 as default
-  We highly recommend you to use port 6667 because IRC networks have defaulted to listening on TCP port 6667 for plain
   text connections. But you may use other ports that is under IRC assignment such as 6665-6669, for example.

##### 2\. `password` : PASS or any password of your wish


## 🤖 Running the server <a name = "running_the_server"></a>

### Open a new terminal and use Irssi or netcat to connect
-  You can use Irssi or netcat command to connect to server. We recommend you to use nc(netcat) command with the flag 'c' so that the communication between server and client is done properly with '\r\n' ending

##### 1\. Irssi
```
$irssi
$/connect localhost [port_number] [password]
```
##### 2\. Netcat
With netcat, you need to have 'pass', 'nick', 'user' command to connect to server. You need to type 'pass' command first to secure the connection and then you can use either 'nick' or 'user' command to register
```
$nc -c localhost [port_number]
pass [password]
nick [nickname]
user [username] * * :[real_name] (real_name is optional)
```
## Commands and its usage <a name = "command"></a>

| __Command__        | __Usage__   |
| -------------  |:-------------:|
| PASS              | PASS [password] |
| NICK       |       |
| USER  |     |
| MODE  |      |
| INVITE  |       |
| JOIN  |      |
| OPER  |      |
| PRIVMSG  |       |
| TOPIC  |      |
| KICK  |       |
| QUIT  |    |


## Collaborators

[Yoonseon Lee](https://github.com/ynslee) , [Josefina Husso](https://github.com/hussojo) ,[Juan Esteban Pelaez Hoyos](https://github.com/jestebanpelaez18)

 
## External resources <a name = "sources"></a>

+ [RFC 7194](https://datatracker.ietf.org/doc/rfc7194/)
+ [Modern IRC Client Protocol](https://modern.ircdocs.horse/)
+ [Inter Relay Chat Protocol](https://www.rfc-editor.org/rfc/rfc1459.html)
