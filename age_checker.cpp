#include <iostream>
int main (){
    int age;
    std::cout<<"please enter you  age"<<std::endl;
    std::cin>>age;

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