#ifndef CLASS_TRIAGLE_H
#define CLASS_TRIAGLE_H

#include <string>
using namespace std;


//x1 y1 -координаты точки X
//x2 y2 -координаты точки Y
//x3 y3 -координаты точки Z
//a,b,c-стороны треугольника

class Triangle {
private:
    double x1, y1; // Координаты первой точки
    double x2, y2; // Координаты второй точки
    double x3, y3; // Координаты третьей точки

public:
	Triangle();
//ввод значений точек
	void setX1(double x_1); 
	void setY1(double y_1); 
	void setX2(double x_2); 
	void setY2(double y_2); 
	void setX3 (double x_3);
	void setY3(double y_3); 
//получение значений точек
	double getX1() const; 
	double getY1() const; 
	double getX2() const; 
	double getY2() const; 
	double getX3() const;
    double getY3() const; 
	double getX4() const; 
	double getY4() const; 

	double calculateSide(double x1, double y1, double x2, double y2);  //поиск сторон треугольника
	double calculatePerimeter(double a, double b, double c);           //поиск периметра треугольника
	double calculateArea(double a, double b, double c);                //поиск площади треугольника
	string getTriangleType(double a, double b,double c) ;              //вид треугольника 
};
#endif