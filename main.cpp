// COMSC-210 
#include <iostream>
#include <iomanip>
using namespace std;

const int W15 = 15;

class Color {
private:
    int red;
    int green;
    int blue;
public:
    // setters
    void setRed(int r)    { red = r; }
    void setGreen(int g)  { green = g; }
    void setBlue(int b)   { blue = b; }

    // getters
    int getRed()   { return red; }
    int getGreen() { return green; }
    int getBlue()  { return blue; }

    // print method
    void print() {
        cout << setw(W15) << "Red: "   << red   << endl;
        cout << setw(W15) << "Green: " << green << endl;
        cout << setw(W15) << "Blue: "  << blue  << endl;
    }
};

int main() {
    cout << "Color Lab in progress..." << endl;

    // TODO: create Color objects and print them

    return 0;
}
