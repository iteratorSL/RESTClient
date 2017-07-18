#include "common.hpp"
#include "request.hpp"

_START_HTTP_NAMESPACE
class Response {
public:
	Response() {}
	~Response() {}
	Header Header;
	Request Request;
	std::vector<char> Body;
};
_END_HTTP_NAMESPACE
