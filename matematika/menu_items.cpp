#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const MAst::MenuItem MAst::STUDY_SUMM = {
	 "1 - Хочу научиться складывать!", MAst::study_summ, &MAst::STUDY
};
const MAst::MenuItem MAst::STUDY_SUBSTRACT = {
	 "2 - Хочу научиться вычитать!", MAst::study_substract, &MAst::STUDY
};
const MAst::MenuItem MAst::STUDY_MULTIPLY = {
	 "3 - Хочу научиться умножать!", MAst::study_multiply, &MAst::STUDY
};
const MAst::MenuItem MAst::STUDY_DIVIDE = {
	 "4 - Хочу научиться делить!", MAst::study_divide, &MAst::STUDY
};
const MAst::MenuItem MAst::STUDY_GO_BACK = {
	 "0 - Выйти в главное меню", MAst::study_go_back, &MAst::STUDY
};

namespace {
	const MAst::MenuItem* const study_children[] = {
		&MAst::STUDY_GO_BACK, 
		&MAst::STUDY_SUMM,
		&MAst::STUDY_SUBSTRACT,
		&MAst::STUDY_MULTIPLY,
		&MAst::STUDY_DIVIDE,
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const MAst::MenuItem MAst::STUDY = {
	"1 - Хочу учиться математике!", MAst::show_menu, &MAst::MAIN, study_children, study_size
};
const MAst::MenuItem MAst::EXIT = {
	"0 - Я лучше полежу...", MAst::exit, &MAst::MAIN
};

namespace {
	const MAst::MenuItem* const main_children[] = {
		&MAst::EXIT,
		&MAst::STUDY
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const MAst::MenuItem MAst::MAIN = {
	nullptr, MAst::show_menu, nullptr, main_children, main_size
};
