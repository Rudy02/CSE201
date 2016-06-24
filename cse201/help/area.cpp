#include <iostream>

class Rectangle
{
public:
    Rectangle(int l, int w); // Constructor with two parameters, int l for lenght & int w for width
    int area();              // area function within your Rectangle class
 
// These are the attributes inside our Rectangle Class; They are private; so only the Objects
// that represent our Rectangle Class can access these attributes.
private: 
    int lenght;
    int width;
};

// This is your Constructor; We pass two values and set them to our lenght and width.
Rectangle::Rectangle(int l, int w)
{
    // We set lenght = l because the attributes inside our class are Unique for each object we create.
    // Same applies for width = w; 
    lenght = l; 
    width = w;
}

// area() function; All we do here is access our attributes within our rectangle class
// We use these attributes to calculate the area.
int Rectangle::area()
{
    int area = lenght * width;
    return area;
}


// ----------------------------------------------------------------------------------------------
using namespace std;

int main()
{
    // When this line of code is executed, we create an Object called foo to represent a Rectangle
    // and we set the numbers inside the parenthesis to be the lenght and width of the Object
    Rectangle foo(3,4); 
    Rectangle bar (5,5); // Same thing goes for the second Object called bar. 
    

    cout << "Area of foo is: " << foo.area() << endl; 
    // All we do here is call our area() function inside our Rectangle class; Since the Object foo
    // represents our Rectangle class, we type it as foo.area();  
    
    cout << "Area of bar is: " << bar.area() << endl; // Same thing applies here for bar.area()
}
