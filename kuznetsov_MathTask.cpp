#include <iostream>
#include "M:\Kuznetsov_IST\kuznetsov_LR5\kuznetsov_lr5_part2\kuznetsov_MathTask.h"
int main(){
    int number;
    EnterNumberInt(number, "Введите натуральное число X: ");
    
    bool sameDigits = task_2(number);
    bool oddEnd = task_3(number);
    
    
    // Вывод результатов без переменной sameDigits
cout << "Число " << number << ":\n";
cout << "- Первая и последняя цифра " 
     << (task_2(number) ? "совпадают" : "не совпадают") << endl;
cout << "- Последняя цифра "
     << (task_3(number) ? "нечётная" : "чётная") << endl;
}