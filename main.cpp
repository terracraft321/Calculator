#include <cstdio>
#include <iostream>
#include <cmath>

 
 // A Calculator made in C++
// Copyright Joni Rovio 2021

void Addition() {
    int xx;
    int yy;
    std::cin >> (xx);
    std::cin >> (yy);
    std::cout << (xx + yy) << std::endl;
}

void Substraction(){
    int xx;
    int yy;
std::cin >> (xx);
std::cin >> (yy);
std::cout << (xx - yy) << std::endl;
}

void Division(){
    int xx;
    int yy;
std::cin >> (xx);
std::cin >> (yy);
std::cout << (xx / yy) << std::endl;
}

void Multiplication(){
    int xx;
    int yy;
std::cin >> (xx);
std::cin >> (yy);
std::cout << (xx * yy) << std::endl;
}


void Power(){
    int xx;
    int yy;
std::cin >> (xx);
std::cin >> (yy);
std::cout << pow(xx, yy) << std::endl;
}

void Squareroot(){
    int xx;
    std::cin >> (xx);
    std::cout << sqrt(xx) << std::endl;
}

void question(){
    int x;
    std::cout << ("What do you want to do (1+, 2-, 3/, 4*, 5^, 6sqrt") << std::endl;
    std::cin >> (x);
}

 int main() {
     [[maybe_unused]] int x;
    question();

    if ((x = 1)) {
        Addition();
        question();
    }
    if ((x = 2)) {
        Substraction();
        question();
    }
    if ((x = 3)) {
        Division();
        question();
    }
    if ((x = 4)) {
        Multiplication();
        question();
   }
  if ((x = 5)) {
       Power();
       question();
   }
     if ((x = 6)) {
         Squareroot();
         question();
     }
         }