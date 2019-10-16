#include "header.h"

class Student
{
  private:
    string name, stuClass;
    int id;
    
  public:  
    void setName(string newName);
    void setID(int newID);
    void setClass(string newClass);
    
    string getName();
    int getID();
    string getClass();
};