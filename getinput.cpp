#include <iostream>

int main(){
	int get_num = 0;  do {
	    std::cout << "Enter a number (-1 = quit): ";
	    if (!(std::cin >> get_num)) {
	      std::cout << "You entered a non-numeric. Error proseccing..." << std::endl;
	      std::cin.clear();    // reset error
	      std::cin.ignore( 1000, '\n' );    // delete non-numeric input
	    }
	    else if (get_num != -1) {
	      std::cout << "You entered " << get_num << std::endl;
	    }
	  } while (get_num != -1);
	  std::cout << "All done." << std::endl;
	return 0;
}
