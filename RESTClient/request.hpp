#include "common.hpp"
#include "header.hpp"

#include <vector>
_START_HTTP_NAMESPACE
class Request {
public:
	Request() {}
	~Request(){}

	std::vector<char> Body;
	Header Header;
	std::string Method;
	std::string Url;
	std::string Proto; // "HTTP/1.0"
private:
};


_END_HTTP_NAMESPACE