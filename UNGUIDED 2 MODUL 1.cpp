#include <iostream>
#include <string>

class PersonClass {
private:
    std::string name;
    int age;

public:
    void setName(std::string inputName) {
        name = inputName;
    }

    void setAge(int inputAge) {
        age = inputAge;
    }

    void displayInfo() {
        std::cout << "Nama: " << name << ", Umur: " << age << " tahun" << std::endl;
    }
};

struct PersonStruct {
    std::string name;
    int age;

    void setName(std::string inputName) {
        name = inputName;
    }

    void setAge(int inputAge) {
        age = inputAge;
    }

    void displayInfo() {
        std::cout << "Nama: " << name << ", Umur: " << age << " tahun" << std::endl;
    }
};

int main() {
    PersonClass personClass;
    personClass.setName("Alice");
    personClass.setAge(18);
    personClass.displayInfo();

    PersonStruct personStruct;
    personStruct.setName("Jake");
    personStruct.setAge(15);
    personStruct.displayInfo();

    return 0;
}