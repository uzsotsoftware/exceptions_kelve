/* 
 * File:   main.cpp
 * Author: R135278L
 *
 * Created on January 20, 2015, 12:33 AM
 */


#include <iostream>
#include <cstdlib>
#include <cstring>


using namespace std;

bool EnterRegNum()
{
    string regNum;
    try
    {
        cout<<"Enter Reg Number...";
        getline(cin,regNum);
        if((regNum.length())!=8)
            throw 10;
        return 1;
    }
    catch(int err)
    {
        cout<<"Invalid reg number"<<endl;
        cout<<"Enter a correct reg number"<<endl;
        return 0;
    }

}
bool checkIntake()
{
    string intake;
    try{
        cout<<"enter the intake...";
        getline(cin, intake);
        if((intake.length())!= 6)
            throw 6;
        return 1;

    }
    catch(int err){
        cout<<"Error "<<err<<" Invalid Intake details"<<endl;
        return 0;
    }
}
void CheckAddress(int houseNumber, string streetName)throw(string){
    try{
        if((streetName.length()) > 10)
            throw streetName;
        if(houseNumber < 0)
            throw 10;

    }
    catch(int err){
        cout<<"Error "<<err<<" Please enter a correct house number\n"<<endl;
    }
    catch(std::string err){
        cout<<"Error,Street name must have 10 or less characters\n";
    }
}

bool Details(float thisWeight, int thisAge)
{

    int age;
    float weight;


    try
    {
        cout<<"Enter weight ";
        cin>>weight;

        if(!(weight>0)){
            throw 1.1;

        thisWeight = weight;
        return 1;
        }
        cin.ignore();
        cout<<"Enter age ";
        cin>>age;
        if(!(age>0))
            throw 10;

        thisAge = age;
        cin.ignore();
        return 1;
    }
    catch(int err){
        cout<<"Error "<<err<<"Please enter a positive value for age\n";
        return 0;
    }

    catch(...){
        cout<<"Error Please enter a positive value for weight\n";
        return 0;
    }

}
int main()
{
    string theName;
    float theWeight;
    int theAge;

    cout<<"Enter student name ";
    getline(cin, theName);


    bool valid, correct, positive;

    while(valid == 0)
    {
        valid=EnterRegNum();
    }

    while(correct == 0)
    {
        correct=checkIntake();
    }

    while(positive == 0)
    {
        positive=Details(theWeight,theAge);
    }
    CheckAddress(-10,"a very long name");

    return 0;

}
