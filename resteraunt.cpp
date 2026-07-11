#include <iostream>
#include <vector>

void greet(){
    std::cout<<"Welcome to the costco food court!"<<std::endl;
    std::cout<<"Please look at the menu and make your selection"<<std::endl;
}

void menu(){
    std::cout<<"Your menu options are as follows:"<<std::endl;
    std::cout<<"1) Hot Dog and Soda - $1.50\n2) 18\" Peperoni Pizza - $9.95\n3) 18\" Cheese Pizza - $9.95\n4) Peperoni Pizza Slice - $1.99\n5) Cheese Pizza Slice - $1.99\n6) Chicken Bake - $3.99\n7) Rotisserie Chicken Caesar Salad - $6.99\n8) 20-Ounce Soda with Refill - $0.79\n9) Ice Cream Cup - $1.99\n10) Strawberry Ice Cream Sundae - $2.49\n11) Chocolate Ice Cream Sundae - $2.49\n12) Strawberry Banana Smoothie - $2.99"<<std::endl;

}

int order (){
    int item;
    bool repeat = true;
    while (repeat == true){
        std::cout<<"Please enter your order."<<std::endl;
        std::cin>>item;

        switch (item){
            case 1:
                repeat = false;
                item = 1;
                break;
            case 2:
                repeat = false;
                item = 2;
                break;
            case 3:
                repeat = false;
                item = 3;
                break;
            case 4:
                repeat = false;
                item = 4;
                break;
            case 5:
                repeat = false;
                item = 5;
                break;
            case 6:
                repeat = false;
                item = 6;
                break;
            case 7:
                repeat = false;
                item = 7;
                break;
            case 8:
                repeat = false;
                item = 8;
                break;
            case 9:
                repeat = false;
                item = 9;
                break;
            case 10:
                repeat = false;
                item = 10;
                break;
            case 11:
                repeat = false;
                item = 11;
                break;
            case 12:
                repeat = false;
                item = 12;
                break;
            default:
                std::cout<<"not a valid order, please try again"<<std::endl;
                std::cin.clear(); 
                std::cin.ignore(1000, '\n');
        }
            
    }
    return item;
}


int main (){
    float total = 0;
    std::string user_in = "y";
    std::vector<std::string> all_items = {
    "Hot Dog and Soda"
    ,"18\" Peperoni Pizza"
    ,"18\" Cheese Pizza"
    ,"Peperoni Pizza Slice"
    ,"Cheese Pizza Slices"
    ,"Chicken Bake"
    ,"Rotisserie Chicken Caesar Salad"
    ,"20-Ounce Soda with Refill"
    ,"Ice Cream Cup"
    ,"StrawberryIce Cream Sundae"
    ,"Chocolate Ice Cream Sundae"
    ,"Strawberry Banana Smoothie"};
    std::vector<float> items_cost{
        1.50,
        9.95,
        9.95,
        1.99,
        1.99,
        3.99,
        6.99,
        0.79,
        1.99,
        2.49,
        2.49,
        2.99,
      };
    std::vector<int> order_list;

    greet();
    menu();
    char user_input;
    bool add_to_order = true;
    while (add_to_order == true){
        order_list.push_back(order()-1);
        std::cout<<"would you like to add something to your order?"<<std::endl;
        bool repeat_verification = true;
        while (repeat_verification == true){
            std::cin>>user_input;
            switch (user_input){
                case 'y':
                case 'Y':
                    add_to_order = true;
                    repeat_verification = false;
                    break;
                case 'n':
                case 'N':
                    add_to_order = false;
                    repeat_verification = false;
                    break;
                default:
                    
                    std::cout<<"That is not a valid option, please type \"Y\" for yes or \"N\" for no."<<std::endl;
                    std::cin.clear(); 
                    std::cin.ignore(1000, '\n');
            }
        }
    }
    
    //checkout
    std::cout<<"Your order is as follows:"<<std::endl;
    for (int i = 0; i < order_list.size(); i++) {
        std::cout << all_items[order_list[i]]<<" - $"<< items_cost[order_list[i]] <<std::endl;
        total +=  items_cost[order_list[i]];
    }
    std::cout<<"Your total is $"<<total<<std::endl;
    return 0;
}//end of main
