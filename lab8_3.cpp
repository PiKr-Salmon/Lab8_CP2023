/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y,z = 0;
    string cha;
    cout << "Enter your age: ";
    cin >> x;
    cin.ignore();

    if(x <= 25){
        cout << "Enter your height: ";
        cin >> y;
        if(y < 100){
            cha = "Chopper";
        }else if(y < 180){
            cha = "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> z;
            if(z > 1100000000){
                cha = "Zoro";
            }else{
                cha = "Sanji";
            }
        }
        
    }else if(x <= 60){
            cout << "Enter your bounty: ";
            cin >> z;
            if(z > 500000000){
                cha = "Jinbe";
            }else{
                cha = "Franky";
            }
    }else{
        cha = "Brook";
    }
    cout << "Your character = ";
    cout << cha;

    return 0;
}