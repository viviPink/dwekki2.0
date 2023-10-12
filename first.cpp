//Пинчукова Гера ИВТ-22
#include <iostream> 
#include <math.h> 
#include <iomanip> 
#include "modul14z.h"
#include <cassert>

using namespace std; 

const float bi=1e-2;//константа для проверки
 //сила притяжения
int main(int argc, char* argv[]) {
 string carg;
  carg=argv[1];
    if (carg == "help") {
        cout << "Write mass 1 mass 2 and S" << endl;
        return 1;
    }
    else{
    string m1_str = argv[1];
    string m2_str = argv[2];
    string s_str = argv[3];
    
    if (m1_str.empty()&& m2_str.empty()  && s_str.empty()) {
        cout << "Error: Empty argument." << endl;
        return 1;
    }
    // Переменные m1-масса 1го, m2-масса 2 , r-расстояние между центрами
    //stof-из string делает float
    float m1 = stof(m1_str);
    float m2 = stof(m2_str);
    float s = stof(s_str);
    float F;


//проверка
     assert (SerchPower(1,2,3)- 1.48222e-11< bi);
     assert (SerchPower(200,7800,2400)- 1.806453e-11< bi);
     assert (SerchPower(597220000,1 ,87600) - 5.19e-12<bi);

  /*cout << "mass 1 = "; //Вводим массу 1 
  cin >> m1; 
  
  cout << "mass 2 = "; //Вводим массу 2
  cin >> m2; 
  
  cout << "distance = "; //Вводим расстояние
  cin >> s; */

  F = SerchPower(m1, m2, s);//поиск силы притяжения
 
  
  cout << "	The force of attraction = " << setprecision(3)<<F << endl;  //вывод решения
}
}



    
    