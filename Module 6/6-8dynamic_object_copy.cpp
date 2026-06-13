#include <bits/stdc++.h>
using namespace std;

class Player{
    public:
    int jersey;
    string country;

    Player(int jersey, string country){
        this->jersey = jersey;
        this->country = country;
    }
};

int main(){
    Player* dhoni = new Player(70, "india");
    Player* kholi = new Player(8, "india");
    // kholi = dhoni;
    *kholi = *dhoni;
    delete dhoni;
    cout << dhoni->jersey << endl << kholi->jersey ;
    return 0;
}