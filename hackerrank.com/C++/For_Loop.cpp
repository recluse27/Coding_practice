#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string str[] = {"one","two","three","four","five","six","seven","eight","nine"};
    long long a, b;
    cin >> a;
    cin >> b;
    
    for (int i = a; i <= b; i++)
    {
        if (i <=9 )
            cout << str[i-1] << endl;
        else
        {
            if(i%2 == 0)
                cout << "even" << endl;
            else 
                cout << "odd" << endl;
        }
    }
    return 0;
}