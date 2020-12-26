#include <random>
#include <iostream>

int get_rand_num(){
	int rand_num;
	std::random_device rnd;     // ńčIČśŹíđśŹ
	std::mt19937 mt(rnd());     //  ZkEcCX^Ě32rbgĹAřÍúV[hl
	std::uniform_int_distribution<> rand100(0, 100);        // [0, 100] ÍÍĚęl
	return rand_num = rand100(mt);
}

int get_input(){
	int get_num = 0;
	int flag = 0;
	do {
		std::cout << "Enter a number (-1 = quit): ";
		if (!(std::cin >> get_num)) {
			std::cout << "You entered a non-numeric. Error proseccing..." << std::endl;
			std::cin.clear();    // reset error
			std::cin.ignore( 1000, '\n' );    // delete non-numeric input
		}
		else flag = 1;
	} while (!flag);
	return get_num;
}

int main(){
	int rand_num, user_num;
	rand_num = get_rand_num();
	while(1){
		user_num = get_input();
		if(user_num == -1){
			std::cout << "Quit the game" << std::endl;
			return 0;
		}
		else if(user_num == rand_num){
			std::cout << "Correct number!" << std::endl;
			return 0;
		}
		else if(user_num > rand_num){
			std::cout << "Too high" << std::endl;
		}
		else if(user_num < rand_num){
			std::cout << "Too low" << std::endl;
		}
	}
	return 0;
}
