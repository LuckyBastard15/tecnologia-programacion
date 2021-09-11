#include<iostream>
#include"Person.hh"

// {  }

int main()
{
    Person* person1{new Person(2 , "Jesus", "Developer", none)};
    std::cout<<person1->GetName()<<std::endl;
    std::cout<<person1->GetArmsCount()<<std::endl;
    std::cout<<person1->GetJob()<<std::endl;
    std::cout<<person1->GetGenderStr()<<std::endl;
    delete person1;
    std::cin.get();
    return 0;
}
