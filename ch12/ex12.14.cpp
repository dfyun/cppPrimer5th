#include <memory>
#include <iostream>

using std::cout; using std::cin; using std::endl;

struct destination{
    std::string ip;
    int port;
    destination(std::string ip_, int port_):ip(ip_), port(port_){ }
};

struct connection{
    std::string ip;
    int port;
    connection(std::string ip_, int port_):ip(ip_), port(port_){ }
};

connection connect(destination* pDest)
{
    std::shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
    std::cout << "creating connection(" << pConn.use_count() << ")" << std::endl;
    return *pConn;
}

void disconnect(connection pConn)
{
    std::cout << "connection close(" << pConn.ip << ":" << pConn.port << ")" << std::endl;
}

void end_connection(connection* p) { disconnect(*p); } ;

void f(destination& d /* 其他参数 */)
{
    //获得一个连接；记住使用完后关闭它
    connection c = connect(&d);
    std::shared_ptr<connection> p(&c, end_connection);
    std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}

int main()
{
    destination dest("202.118.176.67", 3316);
    f(dest);
}