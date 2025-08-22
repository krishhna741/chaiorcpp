#include<iostream>
#include<string>
#include<vector>
using namespace std;

//base class 
class tea{
    protected:
             string teaname;
             int servings;
    public:
          tea(string(name), int serve): teaname(name), servings(serve){
            cout<<" Tea constructor called~! "<<teaname<<endl;
          }

    virtual void brew() const{
          cout<<" Brewing "<<teaname<<" with generic method: "<<endl;
    }
    virtual void serve() const{
          cout<<" servings "<<servings<<" cups of tea with generic method: "<<endl;
    }

virtual ~tea(){
    cout<<" Tea destructor called for "<<teaname<<endl;
}
};

//inherit class!...
class Greentea: public tea{
    public:
          Greentea(int serve): tea("Green tea", serve){    //const override from base class.
            cout<<" Green tea constructor called! "<<endl;
          }

    void brew() const override{
        cout<<"Brewing"<< teaname <<" by steeping Green tea leaves!"<<endl;
    }

    ~Greentea(){
        cout<<" Green tea destructor called: "<<endl;
    }
};

//inherit class!...
class Msalatea: public tea{
    public:
       Msalatea(int serve) : tea("Msalatea", serve){
        cout<<" Msalatea constructor called!"<<endl;
       }

       void brew() const override final{
        cout<<"Brewing"<< teaname <<" with msala's!"<<endl;
    }

    ~Msalatea(){
        cout<<" Msala tea destructor called! "<<endl;
    }

};

int main()
{

    tea* tea1 = new Greentea(2);
    tea* tea2 = new Msalatea(3);
    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

return 0;
}