#include "class_triagle.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	//
	Triangle NewTriagle;
    //переменные для ввода координат
	double step1,step2;
	for (unsigned i=0; i<3;i++){
		cout<<"write the coordimates(x,y):";
		cin>>step1>> step2;
		switch(i){
			//ввод координат
		case 0: NewTriagle.setX1(step1);
			    NewTriagle.setY1(step2); break;
		case 1: NewTriagle.setX2(step1);
			    NewTriagle.setY2(step2); break;
		case 2: NewTriagle.setX3(step1);
			    NewTriagle.setY3(step2); break;	    	    
		}
	}
	//переменные для поиска сторон треугольника
double a,b,c;
string s;

    //присваиваем значения (a,b,c) функции поиска сторон треугольника по формуле
    //по введенным координатам 
    a = NewTriagle.calculateSide(NewTriagle.getX1(),NewTriagle.getY1(),NewTriagle.getX2(),NewTriagle.getY2());
	b = NewTriagle.calculateSide(NewTriagle.getX2(),NewTriagle.getY2(),NewTriagle.getX3(),NewTriagle.getY3());
	c = NewTriagle.calculateSide(NewTriagle.getX3(),NewTriagle.getY3(),NewTriagle.getX1(),NewTriagle.getY1());
	//проверка на существование треугольника
	 if (a+b>c&&a+c>b&&b+c>a){


  s = "Type of triangle "+NewTriagle.getTriangleType(a,b,c)+"\n"
        + "S  = " + to_string(NewTriagle.calculateArea(a,b,c)) + "\n" 
        + "P  = " + to_string(NewTriagle.calculatePerimeter(a,b,c)) + "\n"
        +"Coordinates:"+"\n"
        + "x:"+to_string(NewTriagle.getX1())+"  "+to_string(NewTriagle.getY1());

cout<<fixed<<setprecision(2)<<s;


 //если треугольник не существует, то операций не выполняется
    }
else cout<<"Triangle no exists";
}
