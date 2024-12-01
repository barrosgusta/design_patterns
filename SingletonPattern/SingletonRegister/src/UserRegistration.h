//
//  UserRegistration.h
//  DesignPatterns
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#ifndef USER_REGISTRATION_H
#define USER_REGISTRATION_H

#include <string>
#include <unordered_set>
#include <mutex>
#include <iostream>

/**
 * @class UserRegistration
 * Singleton class to handle user registration.
 * Ensures that only one instance is created during the program's lifecycle.
 */
class UserRegistration {
public:
    // Delete copy constructor and assignment operator to prevent copying
    UserRegistration(const UserRegistration&) = delete;
    UserRegistration& operator=(const UserRegistration&) = delete;

    /**
     * @brief Get the singleton instance of the UserRegistration class.
     * Thread-safe due to Meyers' Singleton implementation.
     */
    static UserRegistration& getInstance();

    /**
     * @brief Registers a user if not already registered.
     * @param username The username to register.
     * @return true if the user was successfully registered, false otherwise.
     */
    bool registerUser(const std::string& username);

    /**
     * @brief Display all registered users.
     */
    void displayRegisteredUsers() const;

private:
    UserRegistration() = default; // Private constructor
    ~UserRegistration() = default; // Private destructor

    // Internal storage for registered usernames
    std::unordered_set<std::string> users_;
    mutable std::mutex mutex_; // To ensure thread-safety
};

#endif // USER_REGISTRATION_H
