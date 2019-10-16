/*
#include "courses.h"
#include "students.h"
#include "enrollments.h"

void customers::storecust()
{
    ofstream fout;
    fout.open("customers.dat");
    fout << cust_cnt << endl;
    for ( int i=0; i < cust_cnt; i++)
    {
        
        fout << cust_list[i].getid() << " " <<  cust_list[i].getname() << endl;
    }
    fout.close();
}

void items::storeitems()
{
    ofstream fout;
    fout.open("items.dat");
    fout << item_cnt << endl;
    for ( int i=0; i < item_cnt; i++)
    {
        
        fout << item_list[i].getid() << " " <<  item_list[i].getprice() << endl;
    }
    fout.close();
}

void orders::storeorders()
{
    ofstream fout;
    fout.open("orders.dat");
    fout << order_cnt << endl;
    for ( int i=0; i < order_cnt; i++)
    {
        
        fout << order_list[i].getid() << " " <<  order_list[i].getcustid() << " "<<order_list[i].getitemid() << endl;
    }
    fout.close();
}