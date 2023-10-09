
#include <string>
#include <iostream>

int main() {
    using namespace std;
    using sv = std::string_view;

    static constexpr sv username = "root",
                        hostname = "Zex",
                        prompt = "$",  // prompt symbol
                        black_bg = "\033[40m",
                        color = "\033[1;36m",
                        ansi_exit = "\033[0m";

    string input;

    while (true) {
        // set text color to cyan and background color to black
        cout << color << black_bg << username << "@" << hostname << ":~" << prompt << " ";
        // set text color back to white and background color back to black
        cout << "\033[0m";

        getline(cin, input);
    }
    return 0;
}