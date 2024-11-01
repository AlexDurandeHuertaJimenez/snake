#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    auto can = Canvas(300,50);
    can.DrawPointLine(70, 20, 130, 20);         
    can.DrawPointLine(50, 30, 150, 30);         
    can.DrawPointLine(50, 10, 50, 30);           
    can.DrawPointLine(70, 20, 50, 10);
    can.DrawPointLine(130, 20, 150, 30);

    can.DrawPointLine(75, 40, 105, 25);
    can.DrawPointLine(75, 40, 90, 25);

    can.DrawPointLine(40, 20, 30, 20);
    can.DrawPointLine(40, 23, 30, 23);
    can.DrawPointLine(40, 26, 30, 26);

    while (true)
    {
        auto can = Canvas(300,50);
        can.DrawPointLine(frame+70, 20, frame+130, 20);
        can.DrawPointLine(frame+50, 30, frame+150, 30);
        can.DrawPointLine(frame+50, 10, frame+50, 30);
        can.DrawPointLine(frame+70, 20, frame+50, 10);
        can.DrawPointLine(frame+130, 20, frame+150, 30);
        can.DrawPointLine(frame+75, 40, frame+105, 25);
        can.DrawPointLine(frame+75, 40, frame+90, 25); 
        can.DrawPointLine(frame+40, 20, frame+30, 20);
        can.DrawPointLine(frame+40, 23, frame+30, 23);
        can.DrawPointLine(frame+40, 26, frame+30, 26);
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Blue, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}