// Online C++ compiler to run C++ program online
#include <iostream>

int LeapYear(int year){
    if((year%4) == 0){
        if ( ((year%100) != 0) ||  ((year%400) == 0)) {
            std::cout<<"Leap year";
        }
    } else {
        std::cout<<"Not a leap year";
    }
return 0;
}
int main() {
    // Write C++ code here
    std::cout << "Program to find Leap year";
    
    int year;
    
    std::cout<<"Enter a year"<<"\n";
    std::cin>>year;
    
    LeapYear(year);
    

    return 0;
}
