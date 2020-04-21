#include<iostream>
#include<string>
using namespace std;
class player{
    public:
        float hp, attack, mana, defense;
        string name;
        int occupation_choice;
        int attack_now;
        int skip;
        int inventory_space = 3;
        void occupation()
        {
            if(occupation_choice==1){
            hp=10; attack=2; defense = 4; mana=0;
        }
        if(occupation_choice==2){
            hp=8; attack=4; defense = 3; mana=1;
        }
        if(occupation_choice==3){
            hp=7; attack=4; defense = 2; mana=2;
        }
        }  
};
main()
{
     player player1; player player2;
     cout<<"What is your name player 1 ?"<<endl;
     cin>>player1.name;
     cout<<"Okay "<<player1.name<<", select your profession"<<endl;
     cout<<"....................."<<endl;
     cout<<"|knight|assasin|mage|"<<" as 1, 2 or 3"<<endl;
     cout<<"'''''''''''''''''''''"<<endl;
     cin>>player1.occupation_choice; /*player1.occupation_choice = player1.occupation_choice==1 ? player1.hp=10 : (player1.occupation_choice==2 ? player1.hp=8 : (player1.occupation_choice==3 ? player1.hp=7: player1.hp=7));*/ //complex
     while (player1.occupation_choice<=0 || player1.occupation_choice>3)
     {
         cout<<"invalid choice, try again!"<<endl;
         if(player1.occupation_choice>0 && player1.occupation_choice<4){
            break;
         }
         cin>>player1.occupation_choice;
     }
        player1.occupation();
     cout<<"What is your name player 2 ?"<<endl;
     cin>>player2.name;
     cout<<"Okay "<<player2.name<<", select your profession"<<endl;
     cout<<"....................."<<endl;
     cout<<"|knight|assasin|mage|"<<" as 1, 2 or 3"<<endl;
     cout<<"'''''''''''''''''''''"<<endl;
     cin>>player2.occupation_choice; /*player1.occupation_choice = player1.occupation_choice==1 ? player1.hp=10 : (player1.occupation_choice==2 ? player1.hp=8 : (player1.occupation_choice==3 ? player1.hp=7: player1.hp=7));*/  //complex
     while (player2.occupation_choice<=0 || player2.occupation_choice>3)
     {
         cout<<"invalid choice, try again!"<<endl;
         if(player2.occupation_choice>0 && player2.occupation_choice<4){
            break;
         }
         cin>>player2.occupation_choice;
     }
        player2.occupation();
     while(player1.hp!=0 || player2.hp!=0)
     {
         cout<<player1.name<<" attacks "<<player2.name<<endl; player2.hp-=player1.attack;
         if(player2.hp<=0){
             cout<<player1.name<<" wins with "<<player1.hp<<" left"<<endl;
             break;
         }
         
         cout<<player2.name<<" attacks "<<player1.name<<endl; player1.hp-=player2.attack;
         if(player1.hp<=0){
             cout<<player2.name<<" wins with "<<player2.hp<<" left"<<endl;
             break;
         } 
     }
}