
#include <iostream>
using namespace std;

class  Overcoat {
    string type;
    int price;
public:
    Overcoat(string type, int price) : type(type), price(price) {}

    bool operator==(const Overcoat other) {
        return this->type == other.type;
   }

    Overcoat operator=( Overcoat other) {
        other.type = this->type;
        other.price = this->price;
    }
    bool operator>(const Overcoat other) {
        if (other.type == this->type) {
            return this->price > other.price;
        }
        else {
            cout << "invalid types" << endl;
        }
    }
};
//=============================================
class Flat {
    int area;
    int price;
public:
    bool operator==(const Flat other) {
        return this->area == other.area;
    }
    Flat operator=(Flat other) {
        other.area = this->area;
        other.price = this->price;
    }
    bool operator>(const Flat other) {
       return this->price > other.price; 
    }

};
int main()
{
    
}

