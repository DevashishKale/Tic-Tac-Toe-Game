#include<bits/stdc++.h>
using namespace std;

char matrix[3][3] = {'_','_','_','_','_','_','_','_','_'};//Declaring matrix as global
int input;//taking input
string player1;//String for taking player1 name
string player2;//String for taking player2 name

//Conditions for winning. Below conditions should be checked everytime the player has made a move
char win()
{
    if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
    {
        return 'X';
    }
    else if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
    {
        return 'X';
    }
    else if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
    {
        return 'X';
    }
    else if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
    {
        return 'X';
    }
    else if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
    {
        return 'X';
    }
    else if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
    {
        return 'X';
    }
    else if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
    {
        return 'X';
    }
    else if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X')
    {
        return 'X';
    }



    if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
    {
        return 'O';
    }
    else if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
    {
        return 'O';
    }
    else if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
    {
        return 'O';
    }
    else if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
    {
        return 'O';
    }
    else if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
    {
        return 'O';
    }
    else if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
    {
        return 'O';
    }
    else if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
    {
        return 'O';
    }
    else if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O')
    {
        return 'O';
    }

    else 
    {
        char m = '/';
        return m;
    }
}

//Function for printing the matrix
void draw()
{
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

//The is the function for playing. 
void play()
{
    bool isInvalid;
    int counter=0;
    while(true)
    {
        isInvalid=false;
        if(counter%2==0)
        {
            cout<<"Its "<<player1<<"'s "<<"turn"<<endl;
            cout<<"Enter an unoccupied space from 0-9: ";
            cin>>input;
        }
        else
        {
            cout<<"Its "<<player2<<"'s "<<"turn"<<endl;
            cout<<"Enter an unoccupied space from 0-9: ";
            cin>>input;
        }
        
//switching different cases based on input
        switch(input)
        {
            case 1: 
            {
                if(counter%2==0)
                {
                    if(matrix[0][0]=='_')
                    {
                         matrix[0][0] = 'X';
                        counter++;
                        draw();
                    }  
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                }
                    
                else
                {
                    if(matrix[0][0]=='_')
                    {
                        matrix[0][0] = 'O';
                        counter++;
                        draw();
                    }
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                } 
                break;
            }
            case 2: 
            {
              if(counter%2==0)
                {
                    if(matrix[0][1]=='_')
                    {
                         matrix[0][1] = 'X';
                        counter++;
                        draw();
                    }  
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                }
                    
                else
                {
                    if(matrix[0][1]=='_')
                    {
                        matrix[0][1] = 'O';
                        counter++;
                        draw();
                    }
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                } 
                break;
            }
            case 3: 
            {
               if(counter%2==0)
                {
                    if(matrix[0][2]=='_')
                    {
                         matrix[0][2] = 'X';
                        counter++;
                        draw();
                    }  
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                }
                    
                else
                {
                    if(matrix[0][2]=='_')
                    {
                        matrix[0][2] = 'O';
                        counter++;
                        draw();
                    }
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                } 
                break;
            }
            case 4: 
            {
                if(counter%2==0)
                {
                    if(matrix[1][0]=='_')
                    {
                         matrix[1][0] = 'X';
                        counter++;
                        draw();
                    }  
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                }
                    
                else
                {
                    if(matrix[1][0]=='_')
                    {
                        matrix[1][0] = 'O';
                        counter++;
                        draw();
                    }
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                } 
                break;
            }
            case 5: 
            {
                if(counter%2==0)
                {
                    if(matrix[1][1]=='_')
                    {
                         matrix[1][1] = 'X';
                        counter++;
                        draw();
                    }  
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                }
                    
                else
                {
                    if(matrix[1][1]=='_')
                    {
                        matrix[1][1] = 'O';
                        counter++;
                        draw();
                    }
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                        
                } 
                break;
            }
            case 6: 
            {
                if(counter%2==0)
                {
                    if(matrix[1][2]=='_')
                    {
                         matrix[1][2] = 'X';
                        counter++;
                        draw();
                    }  
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                }
                    
                else
                {
                    if(matrix[1][2]=='_')
                    {
                        matrix[1][2] = 'O';
                        counter++;
                        draw();
                    }
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                } 
                break;
            }
            case 7: 
            {
                if(counter%2==0)
                {
                    if(matrix[2][0]=='_')
                    {
                         matrix[2][0] = 'X';
                        counter++;
                        draw();
                    }  
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                }
                    
                else
                {
                    if(matrix[2][0]=='_')
                    {
                        matrix[2][0] = 'O';
                        counter++;
                        draw();
                    }
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                } 
                break;
            }
            case 8: 
            {
                if(counter%2==0)
                {
                    if(matrix[2][1]=='_')
                    {
                         matrix[2][1] = 'X';
                        counter++;
                        draw();
                    }  
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                }
                    
                else
                {
                    if(matrix[2][1]=='_')
                    {
                        matrix[2][1] = 'O';
                        counter++;
                        draw();
                    }
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                } 
                break;
            }
            case 9: 
            {
                if(counter%2==0)
                {
                    if(matrix[2][2]=='_')
                    {
                         matrix[2][2] = 'X';
                        counter++;
                        draw();
                    }  
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                }
                    
                else
                {
                    if(matrix[2][2]=='_')
                    {
                        matrix[2][2] = 'O';
                        counter++;
                        draw();
                    }
                    else
                    {
                        cout<<"Invalid Input. Try again: "<<endl;
                        isInvalid  = true;
                    }
                } 
                break;
            }
            default:
            {
                cout<<"Invalid Input. Try again: "<<endl;
                isInvalid  = true;
            }
        }

        if(!isInvalid)
        {
            char result = win();
            char temp='/';
            if(result== temp && counter==9)//Draw Condition
            {
                cout<<"The Match is Drawn"<<endl<<endl;
                break;
            }
            else if(result=='X')//'x' Win Condition
            {
                cout<<player1<<" Wins!!! "<<endl<<endl;
                break;
            }
            else if(result=='O')//'O' Win Condition
            {
                cout<<player2<<" Wins!!! "<<endl<<endl;
                break;
            }
        }

    }
}



//Start of program
int main(){
    cout<<"OK Let us begin "<<endl<<endl;
    cout<<"Enter the players names: "<<endl;
    cout<<"Player1: ";
    cin>>player1;//taking input of player1 name
    cout<<"Player2: ";
    cin>>player2;//taking input of player2 name

    draw();
    play();

    return 0;
}