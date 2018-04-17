#include <iostream>
#include <string>
using namespace std;


class Animal 
{
  public:
  void setValue(string name, int age);
    Animal(int number);
    string getName(void);
  private:
    string animalName;
    int animalAge;
};

Animal::Animal(int number) {
  cout << "构造函数" << number << endl;
}
void Animal::setValue(string name, int age) {
  animalName = name;
  animalAge = age;
}
string Animal::getName(void) {
  return animalName;
};

int main() {
  Animal animal(5);
  animal.setValue("cat", 2);
  cout << animal.getName() << endl;
}