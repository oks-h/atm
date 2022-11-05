#include "Client.h"

Client::Client(
	size_t id,
	std::string f_name,
	std::string l_name,
	std::string mobile_phone)
	: id(id), f_name(f_name),
	  l_name(l_name), mobile_phone(mobile_phone) {};


std::ostream& operator<<(std::ostream& os, const Client& client) {
	return os
		<< "Client id:" << client.get_id() << "\n"
		<< "First name: " << client.get_first_name() << "\n"
		<< "Last name:" << client.get_last_name() << "\n"
		<< "Mobile phone:" << client.get_mobile_phone() << "\n";
}