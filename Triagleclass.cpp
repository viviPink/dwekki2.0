#include "class_triagle.h"
#include <cmath>
#include <string>
using namespace std;

//x1 y1 -координаты точки X
//x2 y2 -координаты точки Y
//x3 y3 -координаты точки Z
/// Конструктор
 Triangle::Triangle()
 {
		x1=y1=x2=y2=x3=y3=0.0;//задаем начальные значения координат
	}
    //Функции ввода координат вершин треугольника
    //для X(x1;y1); Y(x2,y2); Z(x3,y3)

	 void Triangle::setX1(double x_1) {
        x1=x_1;
    }
    void  Triangle::setY1(double y_1) {
       y1=y_1;
    }
    void  Triangle::setX2(double x_2) {
        x2=x_2;
    }
    void  Triangle::setY2(double y_2) {
        y2=y_2;
    }
    void  Triangle::setX3(double x_3) {
        x3=x_3;
    }
    void  Triangle::setY3(double y_3) {
         y3=y_3;
    }


    //Функции вывода координат вершин треугольника
    //для X(x1;y1); Y(x2,y2); Z(x3,y3)
    double Triangle::getX1() {
        return x1;
    }
     double Triangle::getY1() {
        return y1;
    }
     double Triangle::getX2() {
        return x2;
    }
     double Triangle::getY2() {
        return y2;
    }
     double Triangle::getX3() {
       return x3;
    }
     double Triangle::getY3() {
       return y3;
    }

    ///функция для поиска сторон треугольника по координатам
     double  Triangle::calculateSide(double x1, double y1, double x2, double y2) {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

    /// функция для поиска периметра треугольника по координатам
     double  Triangle::calculatePerimeter(double a, double b, double c) {
        return a + b + c;
    }

    ///функция для поиска площади треугольника по координатам
    //по формуле с использованием полупериметра (semiPerimeter)
     double  Triangle::calculateArea(double a, double b, double c) {
        double semiPerimeter = (a + b + c) / 2;  
        return sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
    }

    ///функция поиска вида треугольника
     string  Triangle::getTriangleType(double a, double b,double c) {
        if (a == b && b == c) {
            return "Equilateral";//равносторонний треугольник
        }
        if (a == b || b == a || c == a) {
            return "Isosceles";//равнобедренный треугольник
        }
        if(pow(a,2)+pow(b,2)==pow(c,2) || pow(b,2)+pow(c,2)==pow(a,2) ||pow(c,2)+pow(a,2)==pow(b,2)){
        	 return "Rectangular";//прямоугольник
        }
        else {
            return "Versatile";//разносторонний
        }
    }









