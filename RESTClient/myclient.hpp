#include "common.hpp"
#include "header.hpp"
#include "response.hpp"

#include <boost/asio.hpp>


_START_HTTP_NAMESPACE
namespace asio = boost::asio;

static asio::io_service io_service;
static HTTPClient defaultClient;

static void checkMethod(const std::string& method) {
	if (method == "")
	{

	} 
	else if (method == "GET")
	{
	}
	else if (method == "POST")
	{
	}
	else if (method == "DELETE")
	{
	}
	else if (method == "PUT")
	{
	}
	else if (method == "HEAD") 
	{
	}
	else
	{
	}
}

class ClientBase {
public:
	ClientBase() {}
	~ClientBase() {}
};

template <class protocol>
class HTTPClient<protocol>: public ClientBase
{
	
public:
	HTTPClient(){
	}
	~HTTPClient() {}
	Response request(const std::string& method, std::string url) {
		
	}

private:
	typedef boost::asio::ip::tcp tcp;	
	void makeHeader() {
	
	}

};


_END_HTTP_NAMESPACE
