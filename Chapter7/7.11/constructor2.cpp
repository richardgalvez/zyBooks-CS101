#include <iostream>
#include <string>
using namespace std;

class Pet {
    public:
        Pet();
        Pet(int yearsOld);
        Pet(string petName, int yearsOld);
        void Print();

    private:
        string name;
        int age;
};

Pet::Pet() {
    name = "Unnamed";
    age = -1;
}

Pet::Pet(int yearsOld) {
    name = "NoName";
    age = yearsOld;
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
    Pet cat(4);
    Pet bird("Sunny", 6);

    cat.Print();
    bird.Print();
    dog.Print();

    return 0;
}