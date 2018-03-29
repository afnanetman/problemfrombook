#include <iostream>
#include<bits/stdc++.h>
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: problrm4(20170054).cpp
// Last Modification Date: 04/03/2018
// Author and ID and Group: 20170054 G6
// Teaching Assistant: Eng Khadega and Eng Mohamed Atta
// Purpose:Book problem

using namespace std;

int main()
{
    char gender;
    int weight,height,age,BMR,num,chocolate=230;
    while (true)
    {
        cout <<"Enter M if you're male , F if you're female :";
        cin>>gender;

        if (gender=='M'||gender=='m')
        {
            cout <<"Enter your age :";
            cin >>age;
            cout <<"Enter your weight in pounds :";
            cin >>weight;
            cout <<"Enter your height in inches :";
            cin >>height;
            BMR=66+(6.3*weight)+(12.9*height)-(6.8*age);
            num=ceil(BMR/chocolate);


        }
        else if (gender=='F'||gender=='f')
        {
            cout <<"Enter your age :";
            cin >>age;
            cout <<"Enter your weight in pounds :";
            cin >>weight;
            cout <<"Enter your height in inches :";
            cin >>height;
            BMR=655+(4.3*weight)+(4.7*height)-(4.7*age);
            num=ceil(BMR/chocolate);

        }
        else
        {
            cout <<"something went wrong , please enter the right gender"<<endl;
            continue;
        }
        cout <<"The number of chocolate bars ="<<num<<endl;
        return 0;
    }


}
