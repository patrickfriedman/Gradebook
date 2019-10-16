/*
#include "courses.h"
#include "students.h"
#include "enrollments.h"

void customers::loadcust()
{
    ifstream fin;
    int id;
    string name;
    fin.open("customers.dat");
    fin >> cust_cnt; fin.ignore();
    cust_list = new customer[cust_cnt];
    
    for ( int i=0; i < cust_cnt; i++)
    {
        
        fin >> id >> name;
        cust_list[i] .setname(name);
        cust_list[i].setid(id);
    }
    fin.close();

}

void items::loaditems()
{
    ifstream fin;
    int id;
    float price;
    fin.open("items.dat");
    fin >> item_cnt; fin.ignore();
    item_list = new item[item_cnt];
    
    for ( int i=0; i < item_cnt; i++)
    {
        
        fin >> id >> price;
        item_list[i].setprice(price);
        item_list[i].setid(id);
    }
    fin.close();
    
}

void orders::loadorders()
{
    ifstream fin;
    int id, id2, id3;
    fin.open("orders.dat");
    fin >> order_cnt; fin.ignore();
    order_list = new order[order_cnt];
    
    for ( int i=0; i < order_cnt; i++)
    {
        
        fin >> id >> id2 >> id3;
       
        order_list[i].setcustid(id2);
        order_list[i].setitemid(id3);
        order_list[i].setid(id);
    }
    fin.close();
    
}