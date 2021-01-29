#include <iostream>
using namespace std;
void PrintIntroduction(int Difficulty){
    cout<<"\n\nYou are a secret agent braeking into a level "<<Difficulty;
    cout<<" secure servre room...\nEnter the correct code to continue... \n\n";
}
bool PlayGame(int Difficulty){
    PrintIntroduction(Difficulty);
    const int CodeA = rand()%4;
    const int CodeB = rand()%4;
    const int CodeC = rand()%4;
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct =  CodeA * CodeB * CodeC;
    cout<<"There are 3 numbers in the code\n";
    cout<<"The codes add upto : "<<CodeSum<<endl;
    cout<<"The codes multiply to give : "<<CodeProduct<<endl;

    int GuessA, GuessB, GuessC; 
    cin>>GuessA>>GuessB>>GuessC;
    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    if(GuessSum == CodeSum && GuessProduct == CodeProduct){
        cout<<"Well Done Agent! Keep Going"<<endl;
        return true;
    }else{
        cout<<"Hard Luck Agent! Try Again"<<endl;
        return false;
    }
}

int main(){
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
   while (LevelDifficulty <= MaxDifficulty){
    bool bLevelComplete = PlayGame(LevelDifficulty);
    cin.clear();
    cin.ignore();
    if (bLevelComplete)
    {
        ++LevelDifficulty;
    }
    
   }
   if (LevelDifficulty = MaxDifficulty)
   {
       cout<<"Well Done Agent! You did it,now get out of here!";
   }
   
   

    return 0;
}