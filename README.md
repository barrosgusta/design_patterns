# C++ Design Patterns

This repository contains C++ projects that demonstrate popular design patterns.

---

## Projects Overview

### 1\. Singleton User Registration System

**Purpose:** To implement a user registration system where only a single instance of the registration class is created during the program's execution. This ensures centralized user management and prevents data duplication or inconsistencies.

#### Key Features

- Thread-safe Singleton implementation using **Meyers' Singleton**.
- Centralized user registration with deduplication.
- Synchronization using `std::mutex`.

#### How It Works

1.  A `UserRegistration` class is implemented using the Singleton pattern.
2.  The singleton instance is accessed via `getInstance()`.
3.  Thread-safe registration ensures no duplicate entries.

---

### 2\. Shape Factory

**Purpose:** To implement a **Factory Method** pattern that dynamically creates geometric shapes.

#### Key Features

- Factory pattern encapsulates object creation in `ShapeFactory`.
- Polymorphic behavior with a base `Shape` class.
- Extensibility: Adding new shapes requires minimal changes.

#### How It Works

1.  `ShapeFactory` creates instances of `Circle`, `Rectangle`, `Triangle` and `Square` shapes.
2.  Shapes implement a polymorphic `draw()` method.

---

### Prerequisites

- A C++ compiler (e.g., `g++`, `clang++`).
- Xcode (optional).

---

### Build and Run

#### Using Xcode

1.  Open the Xcode project
2.  Select the desired scheme
3.  Run the App

#### Mannualy

##### Singleton

1.  Compile

```bash
g++ SingletonPattern/SingletonRegistration/src/main.cpp SingletonRegistration/UserRegistration.cpp -o SingletonRegistrationApp -pthread
```

1.  Execution

```bash
./SingletonRegistrationApp
```

##### Factory

1.  Compile

```bash
g++ FactoryPattern/ShapeFactory/src/main.cpp ShapeFactory/*.cpp -o ShapeFactoryApp
```

2.  Execution

```bash
./ShapeFactoryApp
```

---

## Why These Patterns?

- **Singleton:** Centralized control over resources like user registration.
- **Factory Method:** Simplifies object creation and improve extensibility.
