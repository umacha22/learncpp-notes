// Section: data types
// The smallest unit of memory is a binary digit (also called a bit), which can hold a value of 0 or 1.

// Memory is organized into sequential units called memory addresses 
//  Instead, each memory address holds 1 byte of data. A byte is a group of bits that are operated on as a unit. 
// The modern standard is that a byte is comprised of 8 sequential bits.

// C++ contains three sets of types.

// he first two are built-in to the language itself (and do not require the inclusion of a header to use):

// The “fundamental data types” provide the most the basic and essential data types.
// The “compound data types” provide more complex data types and allow for the creation of custom (user-defined) types. 
// We cover these in lesson 12.1 -- Introduction to compound data types.
// The distinction between the fundamental and compound types isn’t all that interesting or relevant, so it’s generally fine to consider them 
// as a single set of types.

// The third (and largest) set of types is provided by the C++ standard library. Because the standard library is included in all C++ distributions,
//  these types are broadly available and have been standardized for compatibility. Use of the types in the standard library requires the inclusion of 
//  the appropriate header and linking in the standard library.

// A single bit can hold 2 possible values, a 0, or a 1:

// A byte is 8 bits.
// Memory is byte addressable (we can access every byte of memory independently).
// Floating point support is IEEE-754 compliant.
// We are on a 32-bit or 64-bit architecture.

// The sizeof operator is a unary operator that takes either a type or a variable, and returns the size of an object of that type (in bytes). 
// You can compile and run the following program to find out how large some of your data types are:

// sizeof does not include dynamically allocated memory used by an object. We discuss dynamic memory allocation in a future lesson.

// short int	16 bits	
// int	16 bits	Typically 32 bits on modern architectures
// long int	32 bits	
// long long int	64 bits

// Therefore, assigning value 140 to an 8-bit signed integer will result in undefined behavior. (overflow)

// A 1-byte unsigned integer has a range of 0 to 255. Compare this to the 1-byte signed integer range of -128 to 127. Both can store 256 different values, 
// but signed integers use half of their range for negative numbers, whereas unsigned integers can store positive numbers that are twice as large.

// If an unsigned value is out of range, it is divided by one greater than the largest number of the type, and only the remainder kept.

// unsigned integers are not recommended because increased likelihood for overflow on the bottom range and arithmetic with a signed
// integer

//  C++11 provides an alternate set of integer types that are guaranteed to be the same size on any architecture. Because the size of these
//  integers is fixed, they are called fixed-width integers

// We can infer that operator sizeof returns an integer value -- but what integral type is that return value? An int? A short? The answer is that
//  sizeof returns a value of type std::size_t. std::size_t is an alias for an implementation-defined unsigned integral type. In other words, the 
// compiler decides if std::size_t is an unsigned int, an unsigned long, an unsigned long long, etc… 

// double large_number = 1.234e6;   // Represents 1,234,000
// double small_number = 5.67e-4;  // Represents 0.000567

// C++ has three fundamental floating point data types: a single-precision float, a double-precision double, and an extended-precision long double
// The precision of a floating point type defines how many significant digits it can represent without information loss.

    // double zero { 0.0 };

    // double posinf { 5.0 / zero }; // positive infinity
    // std::cout << posinf << '\n';

    // double neginf { -5.0 / zero }; // negative infinity
    // std::cout << neginf << '\n';

    // double z1 { 0.0 / posinf }; // positive zero
    // std::cout << z1 << '\n';

    // double z2 { -0.0 / posinf }; // negative zero
    // std::cout << z2 << '\n';

    // double nan { zero / zero }; // not a number (mathematically invalid)

    //     std::cout << std::boolalpha; // print bools as true or false

    // std::cout << true << '\n';
    // std::cout << false << '\n';

    // You can use std::noboolalpha to turn it back off.

    // To perform an explicit type conversion, in most cases we’ll use the static_cast operator. The syntax for the static cast looks a little funny:

    // static_cast<new_type>(expression)
    // static_cast<int>(5.5)


