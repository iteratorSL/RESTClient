#include "common.hpp"
#include "header.hpp"
#include "response.hpp"

#include <boost/asio.hpp>
#include <iostream>

_START_HTTP_NAMESPACE
namespace asio = boost::asio;
typedef asio::ip::tcp::socket Http;
static asio::io_service io_service;
static Client<Http> defaultClient;

static int checkMethod(std::string& method) {
	if (method == "")
	{
		method = "GET"; // Get as default
	} 
	else if (method == "GET" || method == "POST" || method == "DELETE"
		|| method == "PUT" || method == "HEAD")
	{
		// valid
	}
	else
	{
		std::cerr << "Invalid request method: " << method << std::endl;
		return -1;
	}
}

template <class protocol>
class ClientBase {
public:
	ClientBase() {}
	~ClientBase() {}
};

template <class protocol>
class Client: public ClientBase<protocol>
{
	
public:
	Client(){
	}
	~Client() {}
	Response request(const std::string& method, std::string url) {
		
	}

private:
	typedef boost::asio::ip::tcp tcp;	
	void makeHeader() {
	
	}

};


_END_HTTP_NAMESPACE
