#ifndef  SELECTIONSORT_STUDENT_H
#define SELECTIONSORT_STUDENT_H

#include <iostream>

using namespace std;

struct Student{
    
    string name;
    int score;

    bool operator<(const Student &otherStudent){
        return score != otherStudent.score ? score < otherStudent.score : name < otherStudent.name;
    }

    //运算符重载，友元函数
    friend ostream& operator<<(ostream &os, const Student &student){
        os << "Student: " << student.name << " " << student.score << endl;
        return os;
    }

};

#endif
