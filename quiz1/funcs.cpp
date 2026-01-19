#include<iostream>

int readNumber(){
    std::cout << "Give an int: ";
    int num{};
    std::cin >> num;
    return num;
}

void writeAnswer(int num){
    std::cout << "You entered " << num;
}