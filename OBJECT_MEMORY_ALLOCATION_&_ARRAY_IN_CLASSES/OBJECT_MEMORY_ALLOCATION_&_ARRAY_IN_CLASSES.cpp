#include<iostream> 
using namespace std;
class Student{
private:
    int grades[5];
    int gradeCount;
public:
    void init(){
        gradeCount=0;
    }
    void addGrade(int grade){
        grades[gradeCount]=grade;
        gradeCount++;
    }
    void printGrades(){
        for(int i=0;i<gradeCount;i++){
            cout<<grades[i]<<endl;
        }
    }
};
int main() {
    Student obj;
    obj.init();
    obj.addGrade(85);
    obj.addGrade(92);
    obj.addGrade(78);
    obj.printGrades();
    
    return 0;

}