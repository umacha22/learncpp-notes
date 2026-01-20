// const double gravity { 9.8 };  // preferred use of const before type
// int const sidesInSquare { 4 }; // "east const" style, okay but not preferred

// More common in C++ is to use intercapped names with a ‘k’ prefix (e.g. kEarthGravity).

// The volatile qualifier is used to tell the compiler that an object may have its value changed at any time.
//  This rarely-used qualifier disables certain types of optimizations.

// By default, floating point literals have a type of double.

// me tweaking about strings
// #include<iostream>
// #include<string>

// std::string myString {"Helly whatty"};


// Modern C++ compilers are optimizing compilers, meaning they are capable of automatically optimizing your programs as part of the 
// compilation process. Just like the preprocessor, these optimizations do not modify your source code files -- rather, they are applied
//  transparently as part of the compilation process.

// In C++, compilers are given a lot of leeway to optimize programs. The as-if rule says that the compiler can modify a program however it likes
//  in order to produce more optimized code, so long as those modifications do not affect a program’s “observable behavior”.

// Constant folding is an optimization technique where the compiler replaces expressions that have literal operands with the result of the 
// expression. Using constant folding, the compiler would recognize that the expression 3 + 4 has constant operands,
//  and then replace the expression with the result 7.

// Constant propagation is an optimization technique where the compiler replaces variables known to have constant values with their values.

// When const modifies the function's return type (e.g., const std::string myFunction()), it signifies that the returned value cannot be 
// modified by the caller. This is most commonly used when returning by reference or pointer to prevent accidental modification of data 
// outside the function's scope. 

// When const modifies a function parameter (e.g., void myFunction(const int value)), it guarantees that the function body will not
//  modify the argument passed to it. 

//     constexpr int sum { 4 + 5 };      // ok: 4 + 5 is a constant expression
    // constexpr int something { sum };  // ok: sum is a constant expression

    // A constexpr variable is always a compile-time constant. As a result, a constexpr variable must be initialized with a 
    // constant expression, otherwise a compilation error will result.

    // A constexpr function is a function that can be called in a constant expression

//     std::cout << "Enter your full name: ";
    // std::string name{};
    // std::getline(std::cin >> std::ws, name); // read a full line of text into name