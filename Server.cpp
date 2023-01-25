#include <iostream>
#include <uwebsockets/App.h>
#define UWS_WEBSOCKET_H

using namespace std;
using json = nlohmann::json;

const string COMMAND = "command";

const string PRIVATE_MSG = "private_msg";

const string MESSAGE = "message";

const string USER_ID = "user_id";

const string PUBLIC_MSG = "public_msg";

const string SET_NAME = "set_name";

const string USER_ID_FROM = "user_id_from";

const string NEW_NAME = "new_name";


struct UserData {
	int user_id;
	string name;
};

int main()
{

	int latest_id = 10;

	uWS::App().ws<UserData>("/*"), {
		.idleTimeout = 1000,
		.open = [&latest_id](auto* ws) {
			
			UseData* data = ws->getUserData();
			data->user_id = latest_id++;
			data->name = "UNNAMED";

			cout << "New user connected ID: " << data->user_id << endl;
			ws->subscribe("user¹" + to_string(data->user_id));
			ws->subscribe("public_all");
		}
		.message = [](auto* ws,string_view message, uWS:OpCode) {
			UserData* data = ws->getUserData();

			cout << "Message from user ID:" << data->user_id << "message: " << message << endl;
			auto parsed = json::parse(message);
			if (parsed[COMMAND] == PRIVATE_MSG) {
				int user_id_to = parsed[USER_ID];
				string user_msg = parsed[MESSAGE];

				json response;
				response[COMMAND] = PRIVATE_MSG;
				response[USER_ID_FROM] = data->user_id;
				response[MESSAGE] = user_msg;

				ws->publish("user¹" + to_string(user_id_to), response.dump());
			}
		
			if (parsed[COMMAND] == PUBLIC_MSG) {
				string user_msg = parsed[MESSAGE];

				json response;
				response[COMMAND] = PRIVATE_MSG;
				response[USER_ID_FROM] = data->user_id;
				response[MESSAGE] = user_msg;

				ws->publish("public_all", response.dump());
			}
			if (parsed[COMMAND] == SET NAME) {
				string user_name = parsed[NAME]; b
				},
				.close = [](auto* ws, int code, string_view message) {
					UserData* data = ws->getUserData();

					cout << "User disconnected ID: " << data->user_id << endl;
				};


				}).listen(9001, [](auto*) {
					cout << "Server Started	successfully" << endl;
				}).run();
	}
}