#include "common.hpp"

#include <string>
#include <map>

_START_HTTP_NAMESPACE

class Header {
	typedef std::map<std::string, std::string> Header_T;
public:
	Header() {}
	~Header() {}
	// Add adds the key, value pair to the header.
	// It appends to any existing values associated with key.
	void Add(std::string key, std::string value) {
		if (header_.find(key) != header_.end()) {
			header_[key] = header_[key] + ";" + value; // add value with character ';'
		}
		else {
			header_.insert(std::make_pair(key, value));
		}
	}
	// Set sets the header entries associated with key to
	// the single element value. It replaces any existing
	// values associated with key.
	void Set(std::string key, std::string value) {
		if (header_.find(key) != header_.end()) { 
			header_[key] = value; // reset value for specified key
		}
		else {
			header_.insert(std::make_pair(key, value));
		}	
	}

	std::string Get(std::string key) {
		return (header_.find(key) != header_.end()) ? header_[key] : "";
	}
private:
	Header_T header_;
};



_END_HTTP_NAMESPACE
