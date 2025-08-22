#include<iostream>
using namespace std;

//abstruct class!...
class tea{
    public:
    virtual void prepareingredients()=0; //pure virtual function..
    virtual void brew()=0; //pure virtual function..
    virtual void serve()=0; //pure virtual function..

    void maketea(){
        prepareingredients();
        brew();
        serve();
    }
};

//derived class!...
class greentea : public tea{
    public:
          void prepareingredients() override{
            cout<<"Green leaves and water is ready!"<<endl;
          }
          void  brew() override{
            cout<<" Green Tea brewed!"<<endl;
          }
          void  serve() override{
            cout<<" Green Tea served!"<<endl;
          }

};
class msalatea : public tea{
public:
          void prepareingredients() override{
            cout<<"Green leaves and water is ready with msala!"<<endl;
          }
          void  brew() override{
            cout<<" msala Tea brewed!"<<endl;
          }
          void  serve() override{
            cout<<" msala Tea served!"<<endl;
          }

};
int main()
{
    greentea greentea;
    msalatea msalatea;

    greentea.maketea();
    msalatea.maketea();

 
return 0;
}