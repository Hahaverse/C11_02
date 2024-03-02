#include <iostream>
using namespace std;

class Animal {
private:
    int age;
    int weight;
    string type;

public:
    Animal() {
        age = weight = 0;
        type = "";
    }
    Animal(int age, int weight, string type) {
        this->age = age;
        this->weight = weight;
        this->type = type;
    }
    void eat();
    void sleep();
    void showAnimal();
};

void Animal::eat() {
    cout << "Animal::eat()" << endl;
}

void Animal::sleep() {
    cout << "Animal::sleep()" << endl;
}

void Animal::showAnimal() {
    cout << "Age = " << age << endl;
    cout << "Weight = " << weight << endl;
    cout << "Type = " << type << endl;
}

class Cat : public Animal {
private:
    int tailLength;
    bool isSetTail;

public:
    // 생성자를 총 3개 오버로딩 하세요.
    // tailLength 초기화 되지 않았으면 isSetTail 값은 false
    Cat() :Animal() {
        tailLength = 0;
        isSetTail = false;
    }

    // 명시적 생성자1 (Animal 초기화 관련 매개변수 3개)
    // tailLength 초기화 되지 않았으면 isSetTail값은 false
    Cat(int age, int weight, string type) :Animal(age, weight, type) {
        tailLength = 0;
        isSetTail = false;
    }

    // 명시적 생성자2 (Animal+Cat 초기화 관련 매개변수 4개)
    // tailLength 초기화 되었으면 isSetTail값은 true
    Cat(int age, int weight, string type, int t) :Animal(age, weight, type), tailLength(t) {
        isSetTail = true;
    }
    void Meow();
    void showCat();
};

//상속 받은 Animal의 멤버를 최대한 이용해서 Cat의 멤버함수를 구현하세요.
void Cat::Meow() {
    cout << "Cat::Meow()" << endl;
}
void Cat::showCat() {
    showAnimal();
    if(isSetTail==true)
        cout << "Tail length = " << tailLength << endl;
}

int main() {
    Cat frisky(3, 7, "Russian blue");
    // tailLength에 값이 없는 경우 출력되지 않도록 하세요.
    frisky.showCat();
    cout << endl;

    Cat oreo(5, 10, "American shortcut", 23);
    oreo.showCat();
    return 0;
}
