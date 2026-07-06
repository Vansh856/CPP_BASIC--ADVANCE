#include<iostream> 
#include<fstream>
using namespace std;


int main()
{
    ofstream myfile("crash_report.txt");
    if (myfile.is_open()){
        myfile<<"CRITICAL ERROR: RAM overflow detected at memory address 0x00A1.";
        myfile.close();
    }
    cout<<"Crash report saved to hard drive.";
    
    
    return 0;

}