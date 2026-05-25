#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    int jersey_num;
    char country[100];
};

int main(){
    Cricketer* dhoni = new Cricketer;
    dhoni->jersey_num = 80;
    char temp[100] = "India";
    strcpy(dhoni->country, temp);

    Cricketer *kohli =  new Cricketer;
    *kohli = *dhoni;

    delete dhoni;


    cout << kohli->jersey_num << kohli->country;

    return 0;
}