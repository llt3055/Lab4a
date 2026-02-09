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
    //formula: rand % (max-min+1) + min
    int n = rand() % 26 + 25;
    //milestone 1 test initialization color
    Color color = {255, 0, 0};
    cout << "Milestone 1 - Initialized Color: "
    << "R: " << color.red
    << ", G: " << color.green 
    << ", B: " << color.blue << endl;

    vector<Color> colors;
    colors.push_back(color);
    cout << colors.size() << endl;
    cout << "Stored color: "<<
    "R=" << colors[0].red 
    << " G=" << colors[0].green 
    << " B=" << colors[0].blue << endl;
    
    colors.clear();
    //loop n times populate random number into vector
    for (int i = 0; i < n; i++) {
        Color temp;
        temp.red = rand() % 256;   // 0-255
        temp.green = rand() % 256; 
        temp.blue = rand() % 256;  
        
        colors.push_back(temp);
    }
    //verify the size of vector
    //cout << colors.size() << endl;
    cout << "Color#\t" << "R value\t" << "G value\t" << "B value" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < colors.size(); i++) {
        cout << colors[i].red << "\t" 
         << colors[i].green << "\t" 
         << colors[i].blue << endl;
}
    
}