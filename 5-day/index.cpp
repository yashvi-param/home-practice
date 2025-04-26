#include<iostream>

using namespace std;

int main(){

    int a = 50;
    int b = 60;
    int c = 30;

    if (a > b)
    {
        if(a > c)
        {
            cout << "a is greater" << endl;
        }
        else
        {
            cout << "c is greater" << endl;
        }
    }
    else
    {
        if(b > c)
        {
            cout << "b is greater" << endl;
        }
        else
        {
            cout << "c is greater" << endl;
        }
    }


    return 0;
}