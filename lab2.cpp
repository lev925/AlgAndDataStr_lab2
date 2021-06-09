#include <iostream>
using namespace std;
struct Point {
public:
    Point(double x, double y)
    {
        this->x = x;
        this->y= y;
    }
    Point()
    {
        x = 0;
        y = 0;
        
    }
   
   double x, y;
 
};
class RectangleA
{
    
private:
    Point a, b,c,d;
    
public:
    
 
    RectangleA(Point ln, Point pv)
    {
        a = ln;
        b = pv;
        c.x = a.x;
        c.y = b.y;
        d.x = b.x;
        d.y = a.y;
 
    }
    RectangleA()
    {
        setlocale(LC_ALL, "rus");
        do {
 
            cout << "Левый нижний x: ";
            cin >> a.x;
            cout << "Левый нижний y: ";
            cin >> a.y;
            cout << "Правый верхний x: ";
            cin >> b.x;
            cout << "Правый верхний y: ";
            cin >> b.y;
            if (a.x > b.x || a.y > b.y)
            {
 
                cout << "Координаты введены некорректно" << endl;
 
            }
        } while (a.x > b.x || a.y > b.y);
        
        
        c.x = a.x;
        c.y = b.y;
        d.x = b.x;
        d.y = a.y;
 
        
 
    }
    double S()
    {
        return abs(a.x - b.x) * abs(a.y - b.y);
    }
    double P()
    {
        return abs(a.x - b.x) * 2 + abs(a.y - b.y) * 2;
    }
    void Sdvig()
    {
        Point s;
        cout << "Сдвиг по х на " << endl;
        cin >> s.x;
        cout<< " Сдвиг по y на "<< endl;
        cin >> s.y;
        a.x = a.x + s.x;
        a.y = a.y + s.y;
        b.x = b.x + s.x;
        b.y = b.y + s.y;
        c.x = c.x + s.x;
        c.y = c.y + s.y;
        d.x = d.x + s.x;
        d.y = d.y + s.y;
    }
    void Sdvig(Point s)
    {
              
        a.x = a.x + s.x;
        a.y = a.y + s.y;
        b.x = b.x + s.x;
        b.y = b.y + s.y;
        c.x = c.x + s.x;
        c.y = c.y + s.y;
        d.x = d.x + s.x;
        d.y = d.y + s.y;
    }
    void izm_x()
    {
        float e;
        cout << "Введите новую длину прямоугольника " << endl;
        cin >> e;
       // cout << "изменение х на " << e << endl;
        if (e > -1)
        {
            b.x = a.x + e;
            d.x = a.x + e;
        }
        else cout << "Значение не может быть отрицательным " << endl;
 
 
    }
    void izm_x(float e)
    {
       
        // cout << "изменение х на " << e << endl;
        if (e >-1)
        {
            b.x = a.x + e;
            d.x = a.x + e;
        }
        else cout << "Значение не может быть отрицательным " << endl;
 
 
    }
    void izm_y()
    {
        float e;
        cout << "Введите новую ширину прямоугольника" << endl;;
        cin >> e;
        //cout << "изменение у на " << e << endl;
        if (e >-1)
        {
            c.y = a.y + e;
            b.y = a.y + e;
        }
        else cout << "Значение не может быть отрицательным" << endl;
    }
    void izm_y(float e)
    {
       
        //cout << "изменение у на " << e << endl;
        if (e > -1)
        {
            c.y = a.y + e;
            b.y = a.y + e;
        }
        else cout << "Значение не может быть отрицательным" << endl;
    }
 
    void info()
    {
        cout << "S=";
        cout << this->S()<<endl;
        cout << "P=";
        cout << this->P() << endl;
        cout << "Точки ";
        cout <<"{"<< a.x << " "<<a.y << "} {" << b.x << " " << b.y << "} {" << c.x << " " << c.y << "} {" << d.x << " " << d.y<<"}"<<endl;
 
    }
 
 
}Def;
 
int main()
{
    RectangleA a = RectangleA(Point(0, 0), Point(4, 4));
    setlocale(LC_ALL, "rus");
    a.info();
    a.Sdvig(Point(4,5));
    a.izm_x(5);
    a.izm_y(3);
    a.info();
    system("pause");
 
    
}
