#include <iostream>
using namespace std ; 
bool GameOver ; 
const int width = 20 ; 
const int height = 20 ; 
int x,y, fruitX, fruitY , score ; 
enum Edirction {Stop = 0 , Left , right, up , down}; 
Edirction  dir ; 

void Setup()
{
    GameOver = false; 
    dir = Stop; 
    x = width/2; 
    y = height /2 ; 

    fruitX = rand() %width ; 
    fruitY = rand() % height; 
    score = 0 ;

}

void Draw ()
{
    system("clear");
    for (int i = 0 ; i < width+1; i++  ){
        cout<<"#";
    }
    cout <<endl; 
    for (int i = 0 ; i < height ; i ++  ){
        for (int j = 0 ; j < width ; j ++ ){
            if (j == 0 ){
                cout << "#";

            } else {
                cout<<" "; 
            }
            if ( j == width-1 ){
                cout << "#";
            }
        }
      cout << endl;
    }
        for (int i = 0 ; i < width+1 ; i++  ){
        cout<<"#";
    }
    cout <<endl; 

}
void Input()
{

}
void Logic ()
{

}
int main (){
 Setup(); 
 while(! GameOver ) {
    Draw(); 
    Input();
    Logic();
    //sleep(10); //to slow game 
 }
 
    return 0 ; 
}