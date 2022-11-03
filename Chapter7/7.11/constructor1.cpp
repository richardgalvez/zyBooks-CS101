#include <iostream>
#include <string>
using namespace std;

class Pet {
    public:
        Pet();
        Pet(string petName, int yearsOld);
        void Print();

    private:
        string name;
        int age;
};

Pet::Pet() {
    name = "NoName";
    age = -9999;
}

Pet::Pet(string petName, int yearsOld) {
    name = petName;
    age = yearsOld;
}

void Pet::Print() {
    cout << name << ", " << age << endl;
}

int main() {
    Pet dog;
    Pet cat("Nala", 5);

    dog.Print();
    cat.Print();

    return 0;
}