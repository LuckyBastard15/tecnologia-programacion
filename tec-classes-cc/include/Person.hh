#pragma once 
#include <string>
#include <iostream>
#include "Gender.hh"

class Person
{
private:
   unsigned int armsCount{};
   std::string name;
   std::string job;
   Gender gender{male};

public:
    Person(unsigned int amrsCount, std::string name, std::string job, Gender gender);
    ~Person();

    unsigned int GetArmsCount() const;
    std::string GetName() const;
    std::string GetJob() const;
    Gender GetGender() const;
    const char* GetGenderStr() const;
};


