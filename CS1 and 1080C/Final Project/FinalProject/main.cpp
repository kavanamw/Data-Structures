//Matthew Kavanagh
#include "iostream"
#include "vector"

using namespace std;

class ReturnRow
{
public:
    vector<char>row1;   //row declarations
    vector<char>row2;
    vector<char>row3;
    vector<char>row4;
    vector<char>row5;
    vector<char>row6;
    vector<char>row7;

    vector<char> Returnrow1()   //functions to return the rows to the main function
    {
        return row1;
    }
    vector<char> Returnrow2()
    {
        return row2;
    }
    vector<char> Returnrow3()
    {
        return row3;
    }
    vector<char> Returnrow4()
    {
        return row4;
    }
    vector<char> Returnrow5()
    {
        return row5;
    }
    vector<char> Returnrow6()
    {
        return row6;
    }
    vector<char> Returnrow7()
    {
        return row7;
    }
};

int main()
{
    ReturnRow Return1;  //calls for the function from the class
    Return1.row1;
    ReturnRow Return2;
    Return2.row2;
    ReturnRow Return3;
    Return3.row3;
    ReturnRow Return4;
    Return4.row4;
    ReturnRow Return5;
    Return5.row5;
    ReturnRow Return6;
    Return6.row6;
    ReturnRow Return7;
    Return7.row7;

    vector<char>row1;
    vector<char>row2;
    vector<char>row3;
    vector<char>row4;
    vector<char>row5;
    vector<char>row6;
    vector<char>row7;

    int Move;      //extra variables to make everything work
    int Win = 0;
    int X;
    int OneScore = 0;
    int TwoScore = 0;
    char Again = 'y';


    for(int k = 0;k < 7;++k)
    {
        row1.push_back('O');    //start the vectors at 0
        row1[0] = '1';
        row2.push_back('O');
        row2[0] = '2';
        row3.push_back('O');
        row3[0] = '3';
        row4.push_back('O');
        row4[0] = '4';
        row5.push_back('O');
        row5[0] = '5';
        row6.push_back('O');
        row6[0] = '6';
        row7.push_back('O');
        row7[0] = '7';
    }

    while(Again == 'Y'||Again == 'y')       //begining of logic for the game
    {
        cout << "Player 1: " << OneScore << "    Player 2: " << TwoScore;
        for(int k = 0;k < 7;++k)
        {
            if(k == 0)
                cout<<"\n\n\n   "<<row1[k]<<" "<<row2[k]<<" "<<row3[k]<<" "<<row4[k]<<" "<<row5[k]<<" "<<row6[k]<<" "<<row7[k]<<"  \n  ---------------\n";
            if(k > 0 && k < 7)
                cout<<" | "<<row1[k]<<" "<<row2[k]<<" "<<row3[k]<<" "<<row4[k]<<" "<<row5[k]<<" "<<row6[k]<<" "<<row7[k]<<" |\n";
            if(k == 6)
                cout<<"  ---------------\n |               |\n\n\n";
        }

        while(Win == 0)
        {
                if(Win == 0)
                {
                    cout << "Player 1:  ";
                    cin >> Move;
                    cout << "\n\n";
                while(Move<1||Move>7||(Move==1&&(row1[1]=='1'||row1[1]=='2'))||(Move==2&&(row2[1]=='1'||row2[1]=='2'))||(Move==3&&(row3[1]=='1'||row3[1]=='2'))||(Move==4&&(row4[1]=='1'||row4[1]=='2'))||(Move==5&&(row5[1]=='1'||row5[1]=='2'))||(Move==6&&(row6[1]=='1'||row6[1]=='2'))||(Move==7&&(row7[1]=='1'||row7[1]=='2')))
                {
                    cout << "You cannot move there!\n\n\nPlayer 1:  ";
                    cin >> Move;
                }
                if(Move == 1)
                {
                    X = 6;
                    while(row1[X] == '1' || row1[X] == '2')
                {
                    X--;
                }
                    row1[X] = '1';
                }
                else if(Move == 2)
                {
                    X = 6;
                while(row2[X] == '1' || row2[X] == '2')
                {
                    X--;
                }
                    row2[X] = '1';
                }
                else if(Move == 3)
                {
                    X = 6;
                while(row3[X] == '1' || row3[X] == '2')
                {
                    X--;
                }
                    row3[X] = '1';
                }
                else if(Move == 4)
                {
                    X = 6;
                while(row4[X] == '1' || row4[X] == '2')
                {
                    X--;
                }
                    row4[X] = '1';
                }
                else if(Move == 5)
                {
                    X = 6;
                while(row5[X] == '1' || row5[X] == '2')
                {
                    X--;
                }
                    row5[X] = '1';
                }
                else if(Move == 6)
                {
                    X = 6;
                while(row6[X] == '1' || row6[X] == '2')
                {
                    X--;
                }
                    row6[X] = '1';
                }
                else if(Move == 7)
                {
                    X = 6;
                while(row7[X] == '1' || row7[X] == '2')
                {
                    X--;
                }
                    row7[X] = '1';
                }
            }
            for(int k = 0;k < 7;++k = k)
            {
                if(k == 0)
                    cout<<"   "<<row1[k]<<" "<<row2[k]<<" "<<row3[k]<<" "<<row4[k]<<" "<<row5[k]<<" "<<row6[k]<<" "<<row7[k]<<"  \n  ---------------\n";
                if(k > 0 && k < 7)
                    cout<<" | "<<row1[k]<<" "<<row2[k]<<" "<<row3[k]<<" "<<row4[k]<<" "<<row5[k]<<" "<<row6[k]<<" "<<row7[k]<<" |\n";
                if(k == 6)
                    cout<<"  ---------------\n |               |\n\n\n";
            }

            for(int k = 6;k > 0;--k)
            {
                if((row1[k]=='1'&&row2[k]=='1'&&row3[k]=='1'&&row4[k]=='1')||(row5[k]=='1'&&row2[k]=='1'&&row3[k]=='1'&&row4[k]=='1')||(row5[k]=='1'&&row6[k]=='1'&&row3[k]=='1'&&row4[k]=='1')||(row5[k]=='1'&&row6[k]=='1'&&row7[k]=='1'&&row4[k]=='1'))
                    Win = 1; //horizontal
                }
                for(int k = 6;k > 2;--k)
                {
                if((row1[k]=='1'&&row1[k-1]=='1'&&row1[k-2]=='1'&&row1[k-3]=='1')||(row2[k]=='1'&&row2[k-1]=='1'&&row2[k-2]=='1'&&row2[k-3]=='1')||(row3[k]=='1'&&row3[k-1]=='1'&&row3[k-2]=='1'&&row3[k-3]=='1')||(row4[k]=='1'&&row4[k-1]=='1'&&row4[k-2]=='1'&&row4[k-3]=='1')||(row5[k]=='1'&&row5[k-1]=='1'&&row5[k-2]=='1'&&row5[k-3]=='1')||(row6[k]=='1'&&row6[k-1]=='1'&&row6[k-2]=='1'&&row6[k-3]=='1')||(row7[k]=='1'&&row7[k-1]=='1'&&row7[k-2]=='1'&&row7[k-3]=='1'))
                    Win = 1; //vertical
                if((row1[k]=='1'&&row2[k-1]=='1'&&row3[k-2]=='1'&&row4[k-3]=='1')||(row2[k]=='1'&&row3[k-1]=='1'&&row4[k-2]=='1'&&row5[k-3]=='1')||(row3[k]=='1'&&row4[k-1]=='1'&&row5[k-2]=='1'&&row6[k-3]=='1')||(row4[k]=='1'&&row5[k-1]=='1'&&row6[k-2]=='1'&&row7[k-3]=='1'))
                    Win = 1; //diagonally up right
                if((row7[k]=='1'&&row6[k-1]=='1'&&row5[k-2]=='1'&&row4[k-3]=='1')||(row6[k]=='1'&&row5[k-1]=='1'&&row4[k-2]=='1'&&row3[k-3]=='1')||(row5[k]=='1'&&row4[k-1]=='1'&&row3[k-2]=='1'&&row2[k-3]=='1')||(row4[k]=='1'&&row3[k-1]=='1'&&row2[k-2]=='1'&&row1[k-3]=='1'))
                    Win = 1; //diagonally up left
            }
            if(Win == 0)
            {
                    cout << "Player 2:  ";
                    cin >> Move;
                    cout << "\n\n";
                    while(Move<1||Move>7||(Move==1&&(row1[1]=='1'||row1[1]=='2'))||(Move==2&&(row2[1]=='1'||row2[1]=='2'))||(Move==3&&(row3[1]=='1'||row3[1]=='2'))||(Move==4&&(row4[1]=='1'||row4[1]=='2'))||(Move==5&&(row5[1]=='1'||row5[1]=='2'))||(Move==6&&(row6[1]=='1'||row6[1]=='2'))||(Move==7&&(row7[1]=='1'||row7[1]=='2')))
                    {
                        cout << "You cannot move there!\n\n\nPlayer 2:  ";
                        cin >> Move;
                }

                if(Move == 1)
                {
                    X = 6;
                while(row1[X] == '1' || row1[X] == '2')
                {
                    X--;
                }
                    row1[X] = '2';
                }
                else if(Move == 2)
                {
                    X = 6;
                while(row2[X] == '1' || row2[X] == '2')
                {
                    X--;
                }
                    row2[X] = '2';
                }
                else if(Move == 3)
                {
                    X = 6;
                while(row3[X] == '1' || row3[X] == '2')
                {
                    X--;
                }
                    row3[X] = '2';
                }
                else if(Move == 4)
                {
                    X = 6;
                while(row4[X] == '1' || row4[X] == '2')
                {
                    X--;
                }
                    row4[X] = '2';
                }
                else if(Move == 5)
                {
                    X = 6;
                while(row5[X] == '1' || row5[X] == '2')
                {
                    X--;
                }
                    row5[X] = '2';
                }
                else if(Move == 6)
                {
                    X = 6;
                while(row6[X] == '1' || row6[X] == '2')
                {
                    X--;
                }
                    row6[X] = '2';
                }
                else if(Move == 7)
                {
                        if(row7[1] == '1' || row7[1] == '2')
                            cout << "Nope";
                        else
                        {
                                X = 6;
                            while(row7[X] == '1' || row7[X] == '2')
                            {
                                X--;
                            }
                                row7[X] = '2';
                        }
                }

            }
            for(int k = 0;k < 7;++k)
            {
                if(k == 0)
                    cout<<"   "<<row1[k]<<" "<<row2[k]<<" "<<row3[k]<<" "<<row4[k]<<" "<<row5[k]<<" "<<row6[k]<<" "<<row7[k]<<"  \n  ---------------\n";
                if(k > 0 && k < 7)
                    cout<<" | "<<row1[k]<<" "<<row2[k]<<" "<<row3[k]<<" "<<row4[k]<<" "<<row5[k]<<" "<<row6[k]<<" "<<row7[k]<<" |\n";
                if(k == 6)
                    cout<<"  ---------------\n |               |\n\n\n";
            }


            for(int k = 6;k > 0;--k)
            {
                if((row1[k]=='2'&&row2[k]=='2'&&row3[k]=='2'&&row4[k]=='2')||(row5[k]=='2'&&row2[k]=='2'&&row3[k]=='2'&&row4[k]=='2')||(row5[k]=='2'&&row6[k]=='2'&&row3[k]=='2'&&row4[k]=='2')||(row5[k]=='2'&&row6[k]=='2'&&row7[k]=='2'&&row4[k]=='2'))
                Win = 2; //horizontal
            }
            for(int k = 6;k > 2;--k)
            {
                if((row1[k]=='2'&&row1[k-1]=='2'&&row1[k-2]=='2'&&row1[k-3]=='2')||(row2[k]=='2'&&row2[k-1]=='2'&&row2[k-2]=='2'&&row2[k-3]=='2')||(row3[k]=='2'&&row3[k-1]=='2'&&row3[k-2]=='2'&&row3[k-3]=='2')||(row4[k]=='2'&&row4[k-1]=='2'&&row4[k-2]=='2'&&row4[k-3]=='2')||(row5[k]=='2'&&row5[k-1]=='2'&&row5[k-2]=='2'&&row5[k-3]=='2')||(row6[k]=='2'&&row6[k-1]=='2'&&row6[k-2]=='2'&&row6[k-3]=='2')||(row7[k]=='2'&&row7[k-1]=='2'&&row7[k-2]=='2'&&row7[k-3]=='2'))
                    Win = 2; //vertical
                if((row1[k]=='2'&&row2[k-1]=='2'&&row3[k-2]=='2'&&row4[k-3]=='2')||(row2[k]=='2'&&row3[k-1]=='2'&&row4[k-2]=='2'&&row5[k-3]=='2')||(row3[k]=='2'&&row4[k-1]=='2'&&row5[k-2]=='2'&&row6[k-3]=='2')||(row4[k]=='2'&&row5[k-1]=='2'&&row6[k-2]=='2'&&row7[k-3]=='2'))
                    Win = 2; //diagonally up right
                if((row7[k]=='2'&&row6[k-1]=='2'&&row5[k-2]=='2'&&row4[k-3]=='2')||(row6[k]=='2'&&row5[k-1]=='2'&&row4[k-2]=='2'&&row3[k-3]=='2')||(row5[k]=='2'&&row4[k-1]=='2'&&row3[k-2]=='2'&&row2[k-3]=='2')||(row4[k]=='2'&&row3[k-1]=='2'&&row2[k-2]=='2'&&row1[k-3]=='2'))
                    Win = 2; //diagonally up left
            }
        }

        if(Win == 2)        //deciding the winner
        {
            ++TwoScore;
            cout << "Player 2 Wins!!!\n\nPlay again? (Y/N): ";
        }
        else if(Win == 1)
        {
            ++OneScore;
            cout << "Player 1 Wins!!!\n\nPlay again? (Y/N): ";
        }

        cin >> Again;

        while(Again!='Y'&&Again!='y'&&Again!='N'&&Again!='n')   //determining if the user wants to play again
        {
            cout << "Play again? (Y/N): ";
            cin >> Again;
        }

        cout << "\n\n\n\n\n\n";

        Win = 0;

        for(int i = 1;i < 7;++i)
        {
            row1[i] = 'O';
            row2[i] = 'O';
            row3[i] = 'O';
            row4[i] = 'O';
            row5[i] = 'O';
            row6[i] = 'O';
            row7[i] = 'O';
        }
    }
    return 0;
}
