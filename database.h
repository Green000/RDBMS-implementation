//database header

#ifndef _databaseh_
#define _databaseh_

#include "Attribute.h"

using namespace std;


class Table{

public:
  string name;
<<<<<<< HEAD
  vector<string> id;
  vector<Attribute> att;

  Table(string new_name, vector<Attribute> new_att, vector<string> new_id){
  		name = new_name;
  		att = new_att;
  		id = new_id;
  }
=======
  vector<Attribute> attributes;
>>>>>>> f659fbb3ee6b8babdbb19d5a36bfebcf55d01a73
};


class Engine{
 
 public:
<<<<<<< HEAD

    vector<Table*> tables;
 	
	void open();
	void close();
	void write();
=======
 	vector <Table> all_tables; // database will contain multiple tables - Human, Superhero, Group
	void open(string table_name);
	void close(string table_name);
	void write(Table table);
>>>>>>> f659fbb3ee6b8babdbb19d5a36bfebcf55d01a73
	void exit();
	void show(string table_name);
	void create(string, vector<Attribute>, vector<string>);
	void insert(string name, vector<Attribute> att);
	void update();
	void destroy();	//because delete is a keyword
	void drop(string table_name); // deletes table from "all tables" vector in database
};

#endif
