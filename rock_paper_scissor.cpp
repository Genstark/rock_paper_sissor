#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

int main(){
    srand(time(NULL));
    system("CLS");

    std::string option[3] = {"r","p","s"};

    int machine_choice = 1+(rand()%3);
    int i = 0;
    
    std::string user, machine;
    
    machine = option[machine_choice];

    while(i != 10){
        
        std::cout<<"Enter the option: ";
        std::cin>>user;

        if(user=="r" || user=="s" || user=="p"){
            
            std::cout<<"machine: "<<machine<<std::endl;
            std::cout<<"user: "<<user<<std::endl;
            
            if(user=="r" && option[machine_choice]=="s"){
                std::cout<<"user is winner"<<std::endl;
                i++;
            }
            
            else if(user=="p" && option[machine_choice]=="r"){
                std::cout<<"user is winner"<<std::endl;
                i++;
            }
            
            else if(user=="s" && option[machine_choice]=="p"){
                std::cout<<"user is winner"<<std::endl;
                i++;
            }
            
            else if(user==option[machine_choice]){
                std::cout<<"draw match"<<std::endl;
                i++;
            }
            
            else{
                std::cout<<"machine is winner"<<std::endl;
                i++;
            }
            std::cout<<std::endl;
        }
        else{
            std::cout<<"Invalid Input"<<std::endl;
        }
    }
    return 0;
}