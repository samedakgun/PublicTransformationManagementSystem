#ifndef Admin_hpp
#define Admin_hpp
#include"Data.hpp"
#include <stdio.h>
#include"Graph.hpp"
#include "User.hpp"

class Admin
{
public:
    Admin(Data& d1, Graph& g1);
    ~Admin();
    void InsertGraph(Graph& g,int x,int y);
    void display_admin(Data &d1,Graph& g1);
   
    
};

#endif /* Admin_hpp */
