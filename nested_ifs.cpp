#include <iostream>

int main(){
    char choice;
    std::cout<<"You wake up stranded on the beach of an island"<<std::endl;
    std::cout<<"Do You A: walk along the shore or B:Go into the forest"<<std::endl;
    std::cin>>choice;

    if(choice == 'A'){//layer 0 option A
        std::cout<<"You decide to walk up the shore and you find some old dried driftwood."<<std::endl;
        std::cout<<"make a fire or B draw help in the sand"<<std::endl;
        std::cin>>choice;
        if(choice == 'A'){//layer 1 main/shore option A
            std::cout<<" You make a fire to keep you warm "<<std::endl;
            std::cout<<"Do you a hunt for food or B build a shelter"<<std::endl;
            std::cin>>choice;
            if(choice == 'A'){//layer 2 main/shore/A result 1
                std::cout<<" You haunted for food  And you survive until help arrives"<<std::endl;
            } else if(choice == 'B'){//layer 2 main/shore/A result 2
                std::cout<<" You're safe in the shelter but you starve"<<std::endl;

            }


        } else if(choice == 'B'){//layer 1 main/shore option B
            std::cout<<" You wrote help in the sand now all that's left to do is wait"<<std::endl;
            std::cout<<" Do you a look for food or B look for water"<<std::endl;
            std::cin>>choice;
            if(choice == 'A'){//layer 2 main/shore/B result 3
                std::cout<<" You find some coconuts and crack them open for fresh drinking water"<<std::endl;
            } else if(choice == 'B'){//layer 2 main/shore/B result 4
                std::cout<<" You kill some animals for food but you get food poisoning because they weren't cooked"<<std::endl;
            }
        }


    } else if(choice == 'B'){//layer 0 option B
        std::cout<<" You go in the forest and find plenty of fruits and animals"<<std::endl;
        std::cout<<" Do you a get food or B build shelter"<<std::endl;
        std::cin>>choice;
        if(choice == 'A'){//layer 1 main/forest option A
            std::cout<<" Do you get  A get fruits or B hunt animals"<<std::endl;
            std::cout<<"option a or b"<<std::endl;
            std::cin>>choice;
            if(choice == 'A'){//layer 2 main/forest/A result 5
                std::cout<<" The animals are good at dodging you behind trees and you starve"<<std::endl;

            } else if(choice == 'B'){//layer 2 main/forest/A result 6
                std::cout<<" The fruits poison you and you die"<<std::endl;

            }

        } else if(choice == 'B'){//layer 1 main/forest option B
            std::cout<<" You build a makeshift shelter that keeps you safe from the rain"<<std::endl;
            std::cout<<" Do a find food or B build a fire"<<std::endl;
            std::cin>>choice;
            if(choice == 'A'){//layer 2 main/forest/B result 7
                std::cout<<" The fire keeps you warm and you survive"<<std::endl;

            } else if(choice == 'B'){//layer 2 main/forest/B result 8
                std::cout<<" Use find some fruits that don't poison you and you live"<<std::endl;

            }

        }


    }

    
}