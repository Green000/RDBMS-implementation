#ifndef PARSER_H_
#define PARSER_H_

#include "Engine.h"
#include "Token_stream.h"

#include <string>
#include <vector>
#include <iostream>
#include <utility>
#include <stdexcept>

using namespace std;

class Parser{

public: 


	Token_stream ts;
	
	Parser(string b){
		ts = Token_stream(b);
	}
	Parser(){}
	int input();
	void initial();
	Engine e;

	
	bool reset;
	bool query(string rel_name);
	
	// All of the things that need to be executed in the Engine 
	Table execute_difference();
	Table execute_expression();
	Table atomic_expression();
	Table selection_helper(string table_name);
	Table execute_selection();
	Table execute_projection();
	Table execute_renaming();
	Table execute_union(string);
	Table execute_product(string);
	Table execute_join(string);
	
	
	string execute_show();
	void execute_exit();
	void execute_open();
	void execute_write();
	void execute_close();
	void execute_create();
	void execute_update();
    void execute_insert();
	void execute_destroy();
	void remove_spaces();
	void execute_drop();

	
};
#endif
