#include <iostream>
#include <string>
#include <vector>
int  main(){
    int i=0, num = 0, temp1 = 0, maths = 0, science = 0, english = 0, total = 0;
    float avg = 0.0;
    std::string temp = "", grade = "";
    std::vector <int> totalmarks;
    std::vector <float> avgmarks;
    std::vector <std::string> Grade;
    std::vector <int> age;
    std::vector <std::string> name;
    std::cout << "Enter the number of student's details you want to enter.\n";
    std::cin >> num;
    for (i = 0;i<num;i++){
    std::cout << "Please enter the name and age along with their marks on maths, science, english in order of student " << i+1 <<"\n" << "Name: ";
    std::cin >> temp;
    name.push_back(temp);
    std::cout << "Age: ";
    std::cin >> temp1;
    age.push_back(temp1);
    std::cout << "\nMaths: ";
    std::cin >>  maths;
    std::cout << "\nScience: ";
    std::cin >> science;
    std::cout << "\nEnglish: ";
    std::cin >> english;
    total = maths+science+english;
    totalmarks.push_back(total);
    avg = total/3.0;
    avgmarks.push_back(avg);
    if (avg >= 90){
        grade = "A";
    }
    else if (avg >= 75){
        grade = "B";
    }
    else if (avg >= 50){
        grade = "C";
    }
    Grade.push_back(grade);
    
    }
    std::cout << "\n--- Student Report ---\n";
   for (i = 0; i < num; i++){
       std::cout << i+1 << ") Name: " << name[i] << " | " << "Age: " << age[i] << " | " << "Total: " << totalmarks[i] << " | " << "Avg: " << avgmarks[i] << " | "<< "Grade: " << Grade[i] << "\n";
   }
}
