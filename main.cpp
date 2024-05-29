#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generatePassword(int length) {
    const std::string charset =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz"
            "!@#$%^&*()_+{}[]<>?";

    std::string password;
    password.reserve(length);
    srand(time(nullptr));
    for (int i = 0; i < length; ++i) {
        password += charset[rand() % charset.length()];
    }
    return password;
}

int main() {
    int length;
    std::cout << "Enter the length of the password: ";
    std::cin >> length;

    std::string password = generatePassword(length);
    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}
