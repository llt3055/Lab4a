// COMSC-210 | Lab 4a | Tianyi Cao
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Color{
    int red;
    int green;
    int blue;
};

int main(){
    srand(time(0));
    Color color = {255, 0, 0};
    cout << "Milestone 1 - Initialized Color: "
    << "R: " << color.red
    << ", G: " << color.green 
    << ", B: " << color.blue << endl;
}