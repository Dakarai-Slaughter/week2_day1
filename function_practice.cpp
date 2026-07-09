#include <iostream>

void greet(){
    std::cout<<"Welcome ot my calculator"<<std::endl
    std::cout<<"You can use these opporaters"<<std::endl
    std::cout<<"+"/n"-"/n"*"/n"/"<<std::endl;
}



int add(int a, int b, int c){
    return c = a + b;
}

int subtract(int a, int b){
    return(a - b);
}//end of subtract function

int multiply(int a, int b){
    return(a * b);
}//end of multiply function

int divide(int a, int b){
    return(a / b);
}//end of divide function

int math (char op, int a, int a, int c){   
   // int answer;
    switch(op){
        case '+'
            int answer = add(a, b, c);
            std::cout << answer << std::endl;
            break;
        case '-'
            int answer = subtract(num1, num2);
            std::cout << answer << std::endl;
            break;
        case '*'
            int answer = multiply(num1, num2);
            std::cout << answer << std::endl;
            break;
        case '/'
            int answer = divide(num1, num2);
            std::cout << answer << std::endl;
            break;
    return(answer)
    }//end of switch

}//end of char op


int main(){
    int num1;
    int num2;
    int answer;
    char op;
    int num3;
 
    std::cout<<"Give me a number!"<<std::endl;
    std::cin>>num1;

    std::cout<<"Give me a second number!"<<std::endl;
    std::cin>>num2;

    std::cout<<"What opporeter would you like to use?"
    std::cin>>op

    math(num1, num2, op, num3)

    return 0;
}