#include "common.hpp"

#include <vector>
#include <string>
#include <map>

_START_HTTP_NAMESPACE
class Request {
public:
	Request() {}
	~Request(){}
	void Add(){}
	void Set(){}
	void Get(){}

	std::map<std::string, std::vector<std::string>> Header;
	std::vector<char> Body;
	std::string Method;
	std::string Url;
	std::string Proto; // "HTTP/1.0"
private:
};


_END_HTTP_NAMESPACE