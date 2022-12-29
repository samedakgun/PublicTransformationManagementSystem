#include "Display.hpp"
#include <string>
#include <iostream>

using namespace std;

void Display::DisplayStation()
{

        for (int i = 0; i < Station.size(); i++)
        {
            cout << "Station id: " << get<0>(Station[i]) << " Station x Cordinant: "<< get<1>(Station[i]) << " Station Y Cordinant: " << get<2>(Station[i]) << ")" << endl;
        }

}

