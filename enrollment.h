#include "header.h"

class Enrollment
{
  private:
    int cid, eid, stuid, classGrades[10], numGrades;
    
  public:  
    void addEnroll();
    void setEID(int newEID);
    void setSID(int newSID);
    void setCID(int newCID);
    void setGrade(int grade);
    void setletterGrade(char letter);    
    void setgradeNum(int gradesNum);

    float getAverage();
    int getGrade(int i); 
    int getgradesNum();
    int getEID();
    int getSID();
    int getCID();
};