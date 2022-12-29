#include "MainPanel.hpp"
#include"Admin.hpp"
#include"Data.hpp"
#include"Algo.hpp"
#include"Graph.hpp"
#include"Display.hpp"
#include<iostream>
#include<string>
using namespace std;





MainPanel::MainPanel(Data& d1,Graph& g)
{
    Admin admin(d1,g);
        g.addEdge(1,6);
        g.addEdge(1,4);
        g.addEdge(2,7);
        g.addEdge(2,5);
        g.addEdge(2,3);
        g.addEdge(3,2);
        g.addEdge(3,8);
        g.addEdge(3,10);
        g.addEdge(4,1);
        g.addEdge(5,6);
        g.addEdge(5,2);
        g.addEdge(5,8);
        g.addEdge(6,1);
        g.addEdge(6,5);
        g.addEdge(7,2);
        g.addEdge(7,6);
        g.addEdge(7,8);
        g.addEdge(8,3);
        g.addEdge(8,7);
        g.addEdge(8,9);
        g.addEdge(9,8);
        g.addEdge(10,3);

   
    bool b = true;
     while (b) {
       cout << "1->Admin Panel" << endl
            << "2->User Panel" << endl
            << "3->Display Panel" << endl
            << "4->Close the Program"<<endl;
         
       int a;
         cout<<endl<<"Enter the options: ";
       cin >> a;
       switch (a)
       {
         case 1:
           {
           string q, w;
           cout << "Enter the username: ";
           cin >> q;
           cout << "Enter password: ";
           cin >> w;
           if (this->a ==q && this->b ==w)
           {
               cout<<endl;
               bool t=true;
               while (t)
               {
                  
                   admin.display_admin(d1, g);
                   cout<<"If you want to return to the main menu, press 0: ";
                   int l;
                   cin>>l;
                   cout<<endl;
                   if(l==0)
                   {
                       t=false;
                    }
               }
               
               
           }
           else
           {
             cout << "Password or username is incorrect" <<endl;
           }
           break;
         }
         case 2:
           {
               User u1(g,d1);
           }
           break;
           case 3:
           {
               /*for (int i = 0; i < Station.size(); i++)
               {
                   cout << "Station id: " << get<0>(Station[i]) << " Station x Cordinant: "<< get<1>(Station[i]) << " Station Y Cordinant: " << get<2>(Station[i]) << ")" << endl;
               }*/
               d1.PrintStation();

            }
           case 4:
               b=false;
               break;
       }
     }
   }

MainPanel::~MainPanel()
{
    
}


