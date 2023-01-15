#include <iostream>  
#include <string>

using namespace std;

class Circle{
public:
    int radius;
    int x,y;
    Circle();
    Circle(int r,int cx, int cy);
    double getArea();
};

Circle::Circle(): Circle(1,0,0){ }

Circle::Circle(int r, int cx, int cy){
    radius=r;
    x=cx;
    y=cy;
}

double Circle::getArea(){
    return 3.141592*radius*radius;
}

int main(void) {
    freopen("input.txt","r",stdin);
    Circle a(20,1,5);
    cout<<a.getArea();
}
