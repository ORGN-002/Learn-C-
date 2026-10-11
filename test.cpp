#include <iostream>
#include <string>
class Person{
    private:
    std::string name;
    std::string birth_date;
    public:
    Person(std::string name, std::string birth_date): name(name), birth_date(birth_date){}
    void display_info(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Birth Date: "<<birth_date<<std::endl;
    }
};
int main(){
    Person person("Banan Jdatawi", "12/17/2006");
    person.display_info();
    return 0;
}