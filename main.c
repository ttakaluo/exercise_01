/**
  * Version:0.0.1
  * Author: Teemu Takaluoma
  */

#include "operations.h"
#include <stdio.h>

/**
  * This is a main execution point of his application
  * @param argc nuynber of command line arguments
  * @param argv pointer to array containing the cmd arguments
  * @return integer containing the exit status
  */

int main(int argc, char **argv){

	int ret_val = printEnvironment();
	if (ret_val == 0){
		printOneEnvironment("HOME");
	}
	
	int i = 0;
	for (; i < 5; i++){
	printf("%i\n", i);
	}

	return 0;
}

