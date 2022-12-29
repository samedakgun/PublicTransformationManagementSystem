#include "Data.hpp"
#include<string>
#include<iostream>
#include<math.h>
#include <cmath>
#include <algorithm>

using namespace std;

vector<pair<int, int>> Edge;
vector<tuple<int,int,int>>Station;
vector<tuple<int, int,int>> StationofCenter;

void initvector()
{
    Edge.push_back(make_pair(1, 6));
    Edge.push_back(make_pair(1, 4));
    Edge.push_back(make_pair(2, 7));
    Edge.push_back(make_pair(2, 5));
    Edge.push_back(make_pair(2, 3));
    Edge.push_back(make_pair(3, 2));
    Edge.push_back(make_pair(3, 8));
    Edge.push_back(make_pair(3, 10));
    Edge.push_back(make_pair(4, 1));
    Edge.push_back(make_pair(5, 6));
    Edge.push_back(make_pair(5, 2));
    Edge.push_back(make_pair(5, 8));
    Edge.push_back(make_pair(6, 1));
    Edge.push_back(make_pair(6, 5));
    Edge.push_back(make_pair(7, 2));
    Edge.push_back(make_pair(7, 6));
    Edge.push_back(make_pair(7, 8));
    Edge.push_back(make_pair(8, 3));
    Edge.push_back(make_pair(8, 7));
    Edge.push_back(make_pair(8, 9));
    Edge.push_back(make_pair(9, 8));
    Edge.push_back(make_pair(10, 3));
    
   
}
void initvector2()
{
    Station.push_back(make_tuple(1, 0,20));
    Station.push_back(make_tuple(2, 20,20));
    Station.push_back(make_tuple(3, 40,20));
    Station.push_back(make_tuple(4, 10,10));
    Station.push_back(make_tuple(5, 30,10));
    Station.push_back(make_tuple(6, 0,0));
    Station.push_back(make_tuple(7, 20,0));
    Station.push_back(make_tuple(8, 40,0));
    Station.push_back(make_tuple(9, 50,0));
    Station.push_back(make_tuple(10, 50,20));
    Station.push_back(make_tuple(11, 0,10));
    Station.push_back(make_tuple(12, 0,5));
    Station.push_back(make_tuple(13, 5,15));
    Station.push_back(make_tuple(14, 5,0));
    Station.push_back(make_tuple(15, 10,0));
    Station.push_back(make_tuple(16, 15,0));
    Station.push_back(make_tuple(17, 25,0));
    Station.push_back(make_tuple(18, 30,0));
    Station.push_back(make_tuple(19, 20,5));
    Station.push_back(make_tuple(20, 20,10));
    Station.push_back(make_tuple(21, 20,15));
    Station.push_back(make_tuple(22, 30,20));
    Station.push_back(make_tuple(23, 40,15));
    Station.push_back(make_tuple(24, 40,10));
    Station.push_back(make_tuple(25, 35,5));
}
void initvector3()
{
    StationofCenter.push_back(make_tuple(1, 0,20));
    StationofCenter.push_back(make_tuple(2, 20,20));
    StationofCenter.push_back(make_tuple(3, 40,20));
    StationofCenter.push_back(make_tuple(4, 10,10));
    StationofCenter.push_back(make_tuple(5, 30,10));
    StationofCenter.push_back(make_tuple(6, 0,0));
    StationofCenter.push_back(make_tuple(7, 20,0));
    StationofCenter.push_back(make_tuple(8, 40,0));
    StationofCenter.push_back(make_tuple(9, 50,0));
    StationofCenter.push_back(make_tuple(10, 50,20));
}


void Data::PrintEdge()
{
    initvector();

     // Iterate over the vector and print the pairs
     for (const auto& p : Edge) {
       std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
     }
}
void Data::PrintStation()
{
    initvector2();
    for (auto it = Station.cbegin(); it != Station.cend(); ++it) {
        // Access the elements of the tuple using std::get
        cout << "Station id: " << get<0>(*it) << " Station x Cordinant: "
                  << get<1>(*it) << " Station Y Cordinant: "
                  << get<2>(*it) << endl;
      }
    cout<<endl;
}
void Data::InsertEdge()
{
    
    int x,y;
    cout<<"Enter start point: ";
    cin>>x;
    cout<<endl<<"Enter end point";
    cin>>y;
    cout<<endl;
    Edge.push_back(make_pair(x, y));
    
}

void Data::InsertStation()
{
    int x,y,z;
    cout<<"Enter station id:  ";
    cin>>x;
    cout<<endl<<"Enter X corsinant";
    cin>>y;
    cout<<endl<<"Enter y corsinant";
    cin>>z;
    cout<<endl;
    Station.push_back(make_tuple(x, y,z));
}
int Data::FindtheStation(int x,int y)
{
    initvector2();
    /*for (auto it = Station.cbegin(); it != Station.cend(); ++it) {
        a=sqrt((x-get<1>(*it))*(x-get<1>(*it))+(y-get<2>(*it))*(y-get<2>(*it)));
        if(b>a)
        {
            b=a;
            re=get<0>(*it);
        }
      }*/
    int minResult = std::numeric_limits<int>::max();
      int minGet0Value = 0;

      // Iterate over the elements in the vector
      for (const auto &t : Station) {
        // Calculate the result by subtracting x and y from the second and third values of the tuple
        int result = sqrt((get<1>(t) - x)*(get<1>(t) - x) +(get<2>(t) - y)*(get<2>(t)-y));

        // Update the minimum result and get<0> value if a smaller result is found
        if (result < minResult) {
          minResult = result;
          minGet0Value = get<0>(t);
        }
      }

      return minGet0Value;
   
   
}
int Data::FindCenterPoint(int x,int y)
{
    initvector2();
    initvector3();
    int minResult = std::numeric_limits<int>::max();
    int minGet0Value = 0;
    FindtheStation(x, y);
    int a=FindtheStation(x, y);
    for (const auto &t : Station)
    {
        if (get<0>(t) == a)
        {
            x = get<1>(t);
            y = get<2>(t);
            break;
        }
    }

      for (const auto &t : StationofCenter)
      {
        int result = sqrt((get<1>(t) - x)*(get<1>(t) - x) +(get<2>(t) - y)*(get<2>(t)-y));

        if (result < minResult) {
          minResult = result;
          minGet0Value = get<0>(t);
        }
      }
      return minGet0Value;
}





