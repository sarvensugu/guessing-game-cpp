#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game(){
    int random_num = rand() % 251;
    int trial = 10;
    int user_guess;

    std::cout<<"GUESSING GAME HAS STARTED...."<<std::endl;
    std::cout<<random_num<<std::endl;

    while (trial != 0){

        printf("You have %d chances. \n", trial);
        std::cout<<"Key in your guess : ";
        std::cin>>user_guess;

        if (random_num > user_guess){
            std::cout<<"Value is more than "<<user_guess<<std::endl;
            trial--;
        }
        else if (random_num < user_guess){
            std::cout<<"Value is less than "<<user_guess<<std::endl;
            trial--;
        }
        else{
            std::cout<<"Congratulations! You have found the right value "<<user_guess<<std::endl;
            std::cout<<"Please select your options again : ";
            break;
        }
    }
    if (trial == 0){
        std::cout<<"Your chances are now zero. You have lost."<<std::endl;
        std::cout<<"Please select your options again";
    }

}

int main() {

    srand(time(NULL));

    bool game_status = true;

    while (game_status){



        int user_choice;

        std::cout<<"0. Quit"<<std::endl;
        std::cout<<"1. Play Game"<<std::endl;
        std::cout<<"2. Help"<<std::endl;

        std::cout<<"Enter your choice : ";
        std::cin>>user_choice;

        if(user_choice == 0){
            std::cout<<"We will exit the game now."<<std::endl;
            break;
        }
        else if(user_choice == 1){
            play_game();
        }
        else if(user_choice == 2){
            std::cout<<"Guess the invisible number of the game."<<std::endl;
            std::cout<<"the number will be from 1 to 250."<<std::endl;
            std::cout<<"You will be given 10 trials."<<std::endl;
        }
    }

    return 0;
}
