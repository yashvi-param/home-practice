#include <iostream>

using namespace std;

int main(){
    
    
    
    cout << "press 1 for PIZZA" << endl;
    cout << "press 2 for BURGER" << endl;
    cout << "press 3 for SANDWITCH" << endl;
    cout << "press 4 for PASTA" << endl;
    cout << "-----------------------------" << endl;



    int choice;
    cout << "---------------------" << endl;
    cout << "enter choice: ";
    cin >> choice;

    cout << "--------------------------" << endl;

    if (choice==1)
    {
        cout << "you ordered PIZZA" << endl;
    }
    else if(choice==2)
    {
        cout << "you ordered BURGER" << endl;
    }
    else if(choice==3)
    {
        cout << "you ordered SANDWITCH" << endl;
    }
    else if(choice==4)
    {
        cout << "you ordered PASTA" << endl;
    }
    else
    {
        cout << "please select the valid choice...!" << endl;
    }

    cout << "----------------------" << endl;

return 0;

} 