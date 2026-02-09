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
    //milestone 1 test initialization color
    Color color = {255, 0, 0};
    cout << "Milestone 1 - Initialized Color: "
    << "R: " << color.red
    << ", G: " << color.green 
    << ", B: " << color.blue << endl;

    vector<Color> colors;
    cout << colors.size() << endl;
    cout << "Stored color: "<<
    "R=" << colors[0].red 
    << " G=" << colors[0].green 
    << " B=" << colors[0].blue << endl;
}