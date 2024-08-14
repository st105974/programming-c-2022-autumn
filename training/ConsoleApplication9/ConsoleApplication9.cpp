#include <iostream>
#include <string>
using namespace std;
class Property
{public:
    Property(double x, string y): worth(x), address(y) {}
    virtual double tax() = 0;
    virtual ~Property() {};
protected:
    double worth;
    string address;
};
class Appartment : public Property {
public:
    Appartment(double worth1, string address1) : Property(worth1, address1) {};
    double tax() {
        return worth / 1000;
    }
};
class Car : public Property {
public:
    Car(float worth1, string address1) : Property(worth1, address1) {};
    double tax() {
        return worth / 200;
    }
};
class CountryHouse : public Property {
public:
    CountryHouse(float worth1, string address1) : Property(worth1, address1) {};
    double tax() {
        return worth / 500;
    }
};

int main()
{
    Property* a[7];
    a[0] = new Appartment(100, "b");
    a[1] = new Appartment(200, "c");
    a[2] = new Appartment(300, "d");
    a[3] = new Car(400, "e");
    a[4] = new Car(500, "f");
    a[5] = new CountryHouse(600, "q");
    a[6] = new CountryHouse(700, "w");
    for (int i = 0; i <= 6; i++) {
        double tx = a[i]->tax();
        std::cout << tx << " ";
    }
    for (int i = 0; i <= 6; i++) {
        delete a[i];

    }
    return EXIT_SUCCESS;
}

