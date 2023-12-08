#include <cstdlib>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

const MAst::MenuItem* MAst::go_back(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}

const MAst::MenuItem* MAst::show_menu(const MenuItem* current) {
	std::cout << "Обучайка приветсвует тебя, мой юный ученк!" << std::endl;
	for (int i = 0; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	//std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучайка > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	return current->children[user_input];
}

const MAst::MenuItem* MAst::exit(const MenuItem* current) {
	std::exit(0);
}

const MAst::MenuItem* MAst::algebra_inform(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const MAst::MenuItem* MAst::algebra_summ(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const MAst::MenuItem* MAst::algebra_substract(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const MAst::MenuItem* MAst::algebra_multiply(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const MAst::MenuItem* MAst::algebra_divide(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
