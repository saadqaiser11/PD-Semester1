#include <iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main()
{
    string name;
    float eng,math,chem,sci,bio;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> eng;
    cout << "Enter marks for Maths: ";
    cin >> math;
    cout << "Enter marks for Chemistry: ";
    cin >> chem;    
    cout << "Enter marks for Social Science: ";
    cin >> sci;
    cout << "Enter marks for Biology: ";
    cin >> bio;
    float average;
    average = calculateAverage(eng,math,chem,sci,bio);
    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << calculateGrade(average);
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float average;
    average = ((((marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology))/500)*100);
    return average;
}
string calculateGrade(float average)
{
    if (average >=90 && average <=100)
    {
        return "A+";
    }
    if (average >=80 && average <90)
    {
        return "A";
    }
    if (average >=70 && average <80)
    {
        return "B+";
    }
    if (average >=60 && average <70)
    {
        return "B";
    }
    if (average >=50 && average <60)
    {
        return "C";
    }
    if (average >=40 && average <50)
    {
        return "D";
    }
    if (average >=80 && average <90)
    {
        return "F";
    }
}