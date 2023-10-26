// Demo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
 
#include <iostream>
 
 
int kum(int a , int b) {
 
    return a + b;
 
}
 
 
int main()
{
    std::cout << "Hello World!\n";
    std::cout << "My Name hac\n";
 
    int age = 27;
    float weight = 99.9;
    char first_letter = 'a';
 
    std::cout << "Age :- " << age << std::endl;
    std::cout << "Weight:- " << weight << std::endl;
    std::cout << "First letter:- " << first_letter << std::endl;
 
    std::cout << "Age:- " << age << "\nWeight:- " << weight << "\nFirst Letter:- " << first_letter  << std::endl;
 
    // If conditions 
 
    if (age == 27) {
        printf("Yeah");
    }
    else {
        printf("Nah broo");
 
    }
 
    // Loops 
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += 1;
        printf("%i\n",sum);
    }
 
 
    std::cout << "\nKUM:- " << kum(10, 1) << std::endl;
 
}
 
