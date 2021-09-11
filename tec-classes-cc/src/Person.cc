#include"Person.hh"

Person::Person(unsigned int armsCount, std::string name, std::string job, Gender gender)
{
    this->armsCount = armsCount;
    this->name = name;
    this->job = job;
    this->gender = gender;
}

Person::~Person()
{
    std::cout << "Person delete"<<std::endl;
}

unsigned int Person::GetArmsCount() const
{
    return armsCount;
}

std::string Person::GetName() const
{
    return name;
}

std::string Person::GetJob() const
{  
    return job;
}

Gender Person::GetGender() const
{  
    return gender;    
}

 const char* Person::GetGenderStr() const
{  
    return gender == 0 ? "male" : gender == 1 ? "female" : "None";  
}
