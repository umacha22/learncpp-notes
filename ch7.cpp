
    // 
// A compound statement (also called a block, or block statement) is a group of zero or more statements that is treated by the compiler as if it were a single statement.

// namespace NamespaceIdentifier
// {
//     // content of namespace here
// }

// Global variables are created when the program starts (before main() begins execution), 
// and destroyed when it ends. This is called static duration. Variables with static duration are sometimes called static variable

// An identifier’s linkage determines whether other declarations of that name refer to the same object or not

// Global variables and function identifiers can have either internal linkage or external linkage
// An identifier with internal linkage can be seen and used within a single translation unit, but it is not accessible from other translation units. 
// This means that if two source files have identically named identifiers with internal linkage, those identifiers will be treated as independent 
// (and do not result in an ODR violation for having duplicate definitions).

// static int g_x{}; // non-constant globals have external linkage by default, but can be given internal linkage via the static keyword

// const int g_y{ 1 }; // const globals have internal linkage by default
// constexpr int g_z{ 2 }; // constexpr globals have internal linkage by default

// void sayHi() // this function has external linkage, and can be seen by other files
// {
//     std::cout << "Hi!\n";
// }

// extern const int g_y { 3 }; // const globals can be defined as extern, making them external
// extern constexpr int g_z { 3 }; // constexpr globals can be defined as extern, making them external (but this is pretty useless, 

// inline variables, which are variables that can have more than one definition, so long as those definitions are identical.
// constants.h:

// #ifndef CONSTANTS_H
// #define CONSTANTS_H

// // define your own namespace to hold constants
// namespace constants
// {
//     inline constexpr double pi { 3.14159 }; // note: now inline constexpr
//     inline constexpr double avogadro { 6.0221413e23 };
//     inline constexpr double myGravity { 9.2 }; // m/s^2 -- gravity is light on this planet
//     // ... other related constants
// }
// #endif


// Using the static keyword on a local variable changes its duration from automatic duration to static duration. 
// This means the variable is now created at the start of the program, and destroyed at the end of the program (just like a global variable). 
// As a result, the static variable will retain its value even after it goes out of scope!

