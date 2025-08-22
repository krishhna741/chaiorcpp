#include<iostream>
using namespace std;

class chai{
    private:
           string teaname;
           int servings;
    public:
          chai(string name, int serve): teaname(name), servings(serve){

          }
//friend function --to access the private members.....
    friend bool compareservings(const chai &chai1, const chai &chai2);

          void display() const{
                 cout<<"teaname:"<<teaname<<endl;
          }
};

bool compareservings(const chai &chai1, const chai &chai2){
    return chai1.servings > chai2.servings;
}

int main()
{
    chai msalachai("msala chai", 4);
    chai gingerchai("ginger chai", 8);

    msalachai.display();
    gingerchai.display();

    if (compareservings(msalachai, gingerchai))
    {
        cout<<"Msala chai having more servings!"<<endl;
    }else{
        cout<<"Msala chai having less servings!"<<endl;
        
    }
    

return 0;
}