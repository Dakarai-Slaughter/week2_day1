#include <iostream>

int main() {
    int num1;
    int num2;
    char op;
    double total;
    std::string answer;

    std::cout<<"Insert first number"<<std::endl;
    std::cin>>num1;
    while (answer != "no"){
        std::cout<<"Insert another number"<<std::endl;
        std::cin>>num2;
        std::cout<<"Insert the opporater you would like to use"<<std::endl;
        std::cin>>op;

        if(op == '+'){
            total = num1 + num2;
        }
        if(op == '-'){
            total = num1 - num2;
        }
        if(op == '/'){
            total = num1 / num2;
        }
        if(op == '*'){
            total = num1 * num2;
        }
        num1=total;
        std::cout<<"the result is: "<<total<<std::endl;
    }//end of while loop
    return 0;
}//end of main 