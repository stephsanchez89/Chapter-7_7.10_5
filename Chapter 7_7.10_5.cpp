// Chapter 7_7.10_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int Calculation_Choice = 0;
    char Shape;
    double Radius = 0;
    double Height = 0;
    double Width = 0;
    const double PI = 3.14159;
    double Area = 0;
    double Volume = 0;


    cout << setw(20) << "Formula Program" << endl;
    
    cout << setw(20) << " -Main Menu- \n" << endl;
    
    cout << "1) Calculate Area" << endl;
    
    cout << "2) Calculate Volume\n" << endl;
    
    cout << "Enter choice from the list above: ";
    
    cin >> Calculation_Choice;



       

    switch (Calculation_Choice)
    {
    case 1:
        cout << "\n\n--Area Menu-- \n a) Rectangle \n b) Circle \n c) Right Triangle\n" << endl;
        cout << "Enter Choice from the list above: ";
       
        cin >> Shape;
        cout << endl;

        switch (Shape)
        {
        case 'a':
            cout << "Enter Width of Rectangle: ";
            cin >> Width;
            
            cout << "Enter Height of Rectangle: ";
            cin >> Height;
            
            Area = Width * Height;
            
            cout << "The Area of Rectangle is: " << Area << endl;
            break;
       
        case 'b':
            cout << "Enter Radius of Circle: ";
            cin >> Radius;
           
            Area = PI * Radius * Radius;
            
            cout << "Area of Circle is: " << Area;
            break;
        
        case 'c':
            cout << "Enter Width of Right Triangle: ";
            cin >> Width;
            
            cout << "Enter Height of Right Triangle: ";
            cin >> Height;
           
            Area = Width * Height * .5;
           
            cout << "The Area of Rectangle is: " << Area << endl;
            break;

        default:
            cout << "Invalid option was selected!" << endl;
            break;
        }
        break;
   
    case 2:
        cout << "--Volume Menu-- \n a) Cylinder \n b) Sphere\n" << endl;
        cout << "Enter Choice from the list above: ";
        cin >> Shape;
       
        cout << endl;

        switch (Shape)
        {
       
        case 'a':
            cout << "Enter Height of Cylinder: ";
            cin >> Height;
           
            cout << "Enter Radius of Cylinder: ";
            cin >> Radius;
            
            Volume = Height * PI * Radius * Radius;
          
            cout << "The Volume of cylinder is: " << Volume;
            break;
        
        case 'b':
            cout << "Enter Radius of Sphere: ";
            cin >> Radius;
           
            Volume = 4 * PI * pow(Radius, 3) / 3;
            
            cout << "The Volume of Sphere is: " << Volume;
            break;
        default:
            cout << "Invalid option was selected!" << endl;
            break;
        }
        break;

    default:
        cout << "Invalid option was selected!" << endl;
        break;
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
