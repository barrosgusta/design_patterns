//
//  UserRegistration.cpp
//  DesignPatterns
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#include "UserRegistration.h"

// Meyers' Singleton ensures thread-safe, lazy initialization.
UserRegistration& UserRegistration::getInstance() {
    static UserRegistration instance; // Thread-safe initialization
    return instance;
}

bool UserRegistration::registerUser(const std::string& username) {
    std::lock_guard<std::mutex> lock(mutex_); // Ensure thread-safe access
    if (users_.find(username) != users_.end()) {
        std::cout << "User \"" << username << "\" is already registered.\n";
        return false;
    }
    users_.insert(username);
    std::cout << "User \"" << username << "\" successfully registered.\n";
    return true;
    // Mutex is automatically unlocked when `lock` goes out of scope
}

void UserRegistration::displayRegisteredUsers() const {
    std::lock_guard<std::mutex> lock(mutex_); // Ensure thread-safe access
    std::cout << "Registered users:\n";
    for (const auto& user : users_) {
        std::cout << "- " << user << "\n";
    }
}
