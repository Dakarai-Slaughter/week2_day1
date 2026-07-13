#include <iostream>
#include <random>

int random_gen(int min, int max){
    std::random_device rd;
    std::mt19937 gen(rd());  
    std::uniform_int_distribution<int> distrib(min, max); 
    int roll = distrib(gen);
    return roll;
}

int player_attack(char choice){
    int accuracy = random_gen(1,100);
    int damage = 0;
    switch (choice){
        case 'A':
        case 'a':
            if (accuracy > 25){
                damage = random_gen(1,10);
                std::cout<<"You have hit successfully and did "<<damage<<" damage"<<std::endl;
            } else if (accuracy < 26){
                std::cout<<"you have missed"<<std::endl;
            }


            break;
        case 'B':
        case 'b':
            if (accuracy > 65){
                damage = random_gen(11,20);
                std::cout<<"You have hit successfully and did "<<damage<<" damage"<<std::endl;
            } else if (accuracy < 66){
                std::cout<<"you have missed"<<std::endl;
            }
            break;
    }
    return damage;
}

int enemy_damage(){
    int accuracy = random_gen(1,100);
    int damage = 0;
    if(accuracy > 50){
        damage = random_gen(5,15);
        std::cout<<"The enemy landed their attack and did "<<damage<<" damage"<<std::endl;
    } else if (accuracy < 51){
        std::cout<<"The enemy missed"<<std::endl;
    }
    return damage;
}


int main(){
    int player_health = 100;
    int enemy_health = 100;
    char player_choice;

    while (player_health > 0 && enemy_health > 0){
        std::cout<<"Your health is "<< player_health <<std::endl;
        std::cout<<"your enemy's health is "<< enemy_health <<std::endl;
        std::cout<<"Would you like to A:light attack or B:heavy attack"<<std::endl;
        std::cin>>player_choice;
        enemy_health = enemy_health - player_attack(player_choice);
        player_health = player_health - enemy_damage();
        
    }
    if(player_health < 1 && enemy_health < 1){
        std::cout<<"You died in eachothers arms"<<std::endl;
    }else if(player_health < 1){
        std::cout<<"You have lost :("<<std::endl;
    }else if(enemy_health < 1){
        std::cout<<"You win :)"<<std::endl;
    }
    return 0;
}