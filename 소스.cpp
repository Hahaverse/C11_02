//2023111359 �ְ���
#include <iostream>
using namespace std;

/*
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
    // �����ڸ� �� 3�� �����ε� �ϼ���.
    // tailLength �ʱ�ȭ ���� �ʾ����� isSetTail ���� false
    Cat() :Animal() {
        isSetTail = false;
    }

    // ����� ������1 (Animal �ʱ�ȭ ���� �Ű����� 3��)
    // tailLength �ʱ�ȭ ���� �ʾ����� isSetTail���� false
    Cat(int age, int weight, string type) :Animal(age, weight, type) {
        isSetTail = false;
    }

    // ����� ������2 (Animal+Cat �ʱ�ȭ ���� �Ű����� 4��)
    // tailLength �ʱ�ȭ �Ǿ����� isSetTail���� true
    Cat(int age, int weight, string type, int t) :Animal(age, weight, type), tailLength(t) {
        isSetTail = true;
    }
    void Meow();
    void showCat();
};

//��� ���� Animal�� ����� �ִ��� �̿��ؼ� Cat�� ����Լ��� �����ϼ���.
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
    // tailLength�� ���� ���� ��� ��µ��� �ʵ��� �ϼ���.
    frisky.showCat();
    cout << endl;

    Cat oreo(5, 10, "American shortcut", 23);
    oreo.showCat();
    return 0;
}
*/

class classA {
private:
    int x, y;
public:
    ~classA() { cout << "A �Ҹ���" << endl; }
};
class classB:public classA {
private:
    int a, b;
public:
    ~classB() { cout << "B �Ҹ���" << endl; }
};
class Myclass :public classB {
private:
    int myclass;
public:
    ~Myclass() { cout << "C �Ҹ���" << endl; }
};

int main() {
    Myclass* pa = new Myclass();
    delete pa;
    classB* ps = new Myclass();
    delete ps;
    classA* pd = new Myclass();
    delete pd;
}