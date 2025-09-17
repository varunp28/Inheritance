#include <iostream>
using namespace std;
class EPL{
    public:
    void Manchester (){
        cout<<"4th place Finish last season"<<endl;
        }
    void MCItransfer(){
        cout<<"Signed Donnaruma"<<endl;
    }
};

class SerieA{
    public:
    void Napoli(){
        cout<<"4th place Finish last season"<<endl;
    }
    void NPLtransfers(){
        cout<<"Signed DeBruyne and Hojlund"<<endl;
    }
};

class stats: public EPL, public SerieA{
    public:
    void Displaystats(){
        cout<<"Stats: "<<endl;
    }
};


int main(){
    stats s;
    s.Manchester();
    s.MCItransfer();
    s.Napoli();
    s.NPLtransfers();
    
}

Output:

//4th place Finish last season
//Signed Donnaruma
//4th place Finish last season
//Signed DeBruyne and Hojlund
