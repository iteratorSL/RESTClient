#include "common.hpp"
#include "myclient.hpp"
#include "response.hpp"

_START_HTTP_NAMESPACE
Response Get(std::string url) {
	return defaultClient.request("GET", url);
}
Response Post(std::string url) {
	return defaultClient.request("POST", url);
}
Response Delete(std::string url) {
	return defaultClient.request("DELETE", url);
}
Response Head(std::string url) {
	return defaultClient.request("HEAD", url);
}
Response Put(std::string url) {
	return defaultClient.request("HEAD", url);
}
Response PostForm() {
	
}
Response Delete() {
	
}
Response NewRequest() {}

_END_HTTP_NAMESPACE