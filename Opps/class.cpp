#include<iostream>
using namespace std;
class Fruit{
  public:
  string name;
  string color;
};
int main(){
  Fruit apple;
  apple.name = "Apple";
  apple.color = "Red";
  cout<<apple.name<<" "<<apple.color<<endl;
  //using variable Pointer also create a pointer object
  Fruit *Mango = new Fruit();
  Mango->name = "Mango";
  Mango->color="yellow";
  cout<<Mango->color<<" "<<Mango->name<<endl;

}