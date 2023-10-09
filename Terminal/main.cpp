
#include <string>
#include <iostream>

using namespace std;

int main() {
    string username = "root";
    string hostname = "Zex";
    string input;
    string prompt = "$";  // prompt symbol

    while (true) {
        // set text color to cyan and background color to black
        cout << "\033[1;36m\033[40m" << username << "@" << hostname << ":~" << prompt << " ";
        // set text color back to white and background color back to black
        cout << "\033[0m";

        getline(cin, input);
    }
    return 0;
}