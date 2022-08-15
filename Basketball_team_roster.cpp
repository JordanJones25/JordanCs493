#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int jersey[100];
    int rating[100];
    int i, roster = 5;

    for(i=0;i<5;i++)
    {
        cout << "Enter player "<< i+1 << "'s jersey number:";
        cin >> jersey[i];
        cout<<endl;

        cout << "Enter player " << i+1 << "'s rating:";
        cin >> rating[i];
        cout << endl;
        cout<<endl;
    }

    for(i=0;i<5;i++)
    {
        cout << "Player " << i+1 << " -- Jersey number: " << jersey[i] <<", Rating: "<<rating[i]<<endl;
    }

    char choice = ' ';
    while(true)
    {

        cout << endl << "MENU" << endl 
		cout<< "a - Add player" << endl 
		cout<< "d - Remove player" << endl 
		cout<< "u - Update player rating" << endl
		cout << "r - Output players above a rating" << endl 
		cout << "o - Output roster" << endl 
		cout << "q - Quit" << endl << endl 
		cout << "Choose an option:";
        cin >> choice;


        if(choice == 'q')
        {
        break;
        }


        else if(choice == 'o')
        {
            cout << "ROSTER:" <<endl;
            for(i=0;i<roster;i++)
            {
                if(jersey[i] != 0)
                {
                    cout <<"Player "<< i+1 <<" -- Jersey number:" << jersey[i] <<", Rating"<<rating[i]<<endl<<endl;
                }
            }
        }

        else if(choice == 'a')
        {
            cout << "Enter player another player's jersey number: ";
            cin >> jersey[roster];

            cout << "Enter player another player's rating: ";
            cin >> rating[roster];

            roster++; 
        }

        else if(choice == 'u')
        {
            int jnum;
            cout << "Enter a jersey number: ";
            cin >> jnum;
            cout << "Enter new rating: ";

            for(i=0;i<roster;i++)
            {

                if(jersey[i] == jnum)
                {
                    cin >> rating[i];
                    break;
                }
            }
        }

        else if(choice == 'd')
        {
            int jnum;
            cout << "Enter a jersey number: ";
            cin >> jnum;

            for(i=0;i<roster;i++)
            {
                if(jersey[i] == jnum)
                {
                    jersey[i] = 0;
                    rating[i] = 0;
                    break;
                }
            }
        }
        else if(choice == 'r')
        {   
            int above;
            cout << "Enter a rating: " ;
            cin >> above;
            cout << endl << "ABOVE " << above << endl;
            int x = 1;
            for(i=0;i<roster;i++)
            {
                if(rating[i] > above)
                {
                    cout << "Player " << x++ << " -- Jersey number: " << jersey[i] << ", Rating: " << rating[i] << endl<<endl;
                }
            }
        }
    }
}
