#include <iostream> 
using namespace std; 
int life;
int com;
int playerchoice;
int choice;
int resetGameplay;
int gamestart;


void GameBegin () {
    cout << " Welcome to Rock, Paper, Scissor game. Press 1 to begin!!\n\n";
    gamestart = 0;
    cin >> gamestart;
    while (gamestart == 1){
        com = rand() % 3 + 1;
        cout << com;

        cout << " Select menu: \n";
        cout << "    Rock:    1\n";
        cout << "    Paper:   2\n";
        cout << "    Scissor: 3\n";

        cin  >> playerchoice;

        if (playerchoice < 1 && playerchoice > 3) cout << "You can choose only between 1-3, try again buddy.\n";

    

    }

}
void Compare () {
    if ( com == playerchoice) cout << "Draw...\n"
    if ( com - playerchoice = 1 || playerchoice - com = 2 ){
        cout << " Computer win !!";
        life = life - 1;
    } 
    else { 
        cout << "you win, *Computer is crying*\n";
        point = point + 1;
    }
}

int main(){
    GameBegin();
    Compare();

    
}