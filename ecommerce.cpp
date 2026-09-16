#include<iostream>
using namespace std;
class Product{
    string name;
    int id;
    float price;
    public:
    Product(string n, int i, float p){
        name = n;
        id = i;
        price = p;
    }
    Product comparePrice(Product p){
        if(price > p.price){
            return *this;
        }
        else{
            return p;
        }
    }
    void display(){
        cout<<"Product Name: "<<name<<endl;
        cout<<"Product ID: "<<id<<endl;
        cout<<"Product Price: "<<price<<endl;
    }
};
int main(){
    Product p1("Laptop", 101, 1500.00);
    Product p2("Smartphone", 102, 800.00);
    Product higher=p1.comparePrice(p2);
    higher.display();
    return 0;
}
