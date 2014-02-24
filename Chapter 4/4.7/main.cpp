#include <iostream>

using namespace std;

int main()
{
        William Wingate runs a pizza-analysis service.For each pizza,he needs to record
    the following information:
    The name of the pizza company, which can consist of more than one word
    The diameter of the pizza
    The weight of the pizza
    Devise a structure that can hold this information and write a program that uses a
    structure variable of that type.The program should ask the user to enter each of the
    preceding items of information,and then the program should display that informa-
    tion.Use cin(or its methods) and cout.
    cout << "Hello world!" << endl;
    return 0;
}
struct pizza_service
{
    string c_name;
    float diametr;
    float weight;

};
