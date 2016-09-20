//database header

#ifndef _databaseh_
#define _databaseh_

#include "Attribute.h"

using namespace std;


class Table{

public:
  string name;
  vector<string> id;
  vector<Attribute> att;

  Table(string new_name, vector<Attribute> new_att, vector<string> new_id){
  		name = new_name;
  		att = new_att;
  		id = new_id;
  }
};


class Engine{
 
 public:

    vector<Table*> tables;
 	
	void open();
	void close();
	void write();
	void exit();
	void show();
	void create(string, vector<Attribute>, vector<string>);
	void insert(string name, vector<Attribute> att);
	void update();
	void destroy();	//because delete is a keyword
};

#endif
