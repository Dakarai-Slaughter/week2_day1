#include <iostream>
#include <limits>
int main (){
    int age;
    std::cout<<"please enter you  age"<<std::endl;
    std::cin>>age;
    while(age==0){
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout<<"please enter a valid number"<<std::endl;
        std::cin>>age;
    }
    if(age > 18){
        std::cout<<"You are unc"<<std::endl;
    }
    else if (age < 18){
        std::cout<<"You are a child"<<std::endl;
    }
    else if (age == 18){
        std::cout<<"You have a newfound freedom"<<std::endl;
    }
}