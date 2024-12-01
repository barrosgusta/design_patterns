//
//  main.cpp
//  SingletonPattern
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#include "UserRegistration.h"
#include <thread>

/**
 * @brief Test function to demonstrate Singleton behavior.
 */
void testSingletonBehavior() {
    UserRegistration& instance1 = UserRegistration::getInstance();
    UserRegistration& instance2 = UserRegistration::getInstance();

    // Ensure both references point to the same instance
    if (&instance1 == &instance2) {
        std::cout << "Singleton test passed: Both instances are the same.\n";
    } else {
        std::cout << "Singleton test failed: Instances are different.\n";
    }
}

/**
 * @brief Test function to validate thread-safe user registration.
 */
void testThreadSafety() {
    auto task = [](const std::string& username) {
        UserRegistration::getInstance().registerUser(username);
    };

    std::thread t1(task, "Alice");
    std::thread t2(task, "Bob");
    std::thread t3(task, "Alice"); // Attempt to register the same user

    // Wait for all threads to finish
    t1.join();
    t2.join();
    t3.join();

    // Display all registered users
    UserRegistration::getInstance().displayRegisteredUsers();
}

int main(int argc, const char * argv[]) {
    std::cout << "Testing Singleton Behavior:\n";
    testSingletonBehavior();

    std::cout << "\nTesting Thread Safety:\n";
    testThreadSafety();

    return 0;
}
