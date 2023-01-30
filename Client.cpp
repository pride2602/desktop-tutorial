#include "Client.h"
#include <iostream>
#include "User.h"

using namespace std;

class user_id : public UserData
{
private:
	int user_id;
	string name;

public:
	void register_1();
	void read();
	void login();
};