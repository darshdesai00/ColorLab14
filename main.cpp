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
    cout << "Color values:\n\n";

    // first color
    Color c1;
    c1.setRed(255);
    c1.setGreen(0);
    c1.setBlue(0);
    c1.print();
    cout << endl;

    // second color
    Color c2;
    c2.setRed(0);
    c2.setGreen(255);
    c2.setBlue(0);
    c2.print();
    cout << endl;

    // third color
    Color c3;
    c3.setRed(0);
    c3.setGreen(0);
    c3.setBlue(255);
    c3.print();
    cout << endl;

    return 0;
}
