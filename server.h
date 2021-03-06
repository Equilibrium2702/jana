#pragma once

#include <array>
#include <thread>

#include <boost/asio.hpp>


class Server
{
public:
    Server();

    void receive();
    void send();

    std::thread run();

private:
    boost::asio::io_service _ioContext;
    boost::asio::ip::udp::socket _sock;
    boost::asio::ip::udp::endpoint _clientEP;

    std::array<char, 1024> _buff;

};
