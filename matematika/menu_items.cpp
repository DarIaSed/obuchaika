#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const MAst::MenuItem MAst::ALGEBRA_SUMM = {
	 "1 - Хочу научиться складывать!", MAst::algebra_summ, &MAst::STUDY_ALGEBRA
};
const MAst::MenuItem MAst::ALGEBRA_SUBSTRACT = {
	 "2 - Хочу научиться вычитать!", MAst::algebra_substract, &MAst::STUDY_ALGEBRA
};
const MAst::MenuItem MAst::ALGEBRA_MULTIPLY = {
	 "3 - Хочу научиться умножать!", MAst::algebra_multiply, &MAst::STUDY_ALGEBRA
};
const MAst::MenuItem MAst::ALGEBRA_DIVIDE = {
	 "4 - Хочу научиться делить!", MAst::algebra_divide, &MAst::STUDY_ALGEBRA
};
const MAst::MenuItem MAst::ALGEBRA_INFORM = {
	"5 - Пойду делать информатику!", MAst::algebra_inform, &MAst::STUDY_ALGEBRA
};
const MAst::MenuItem MAst::ALGEBRA_GO_BACK = {
	 "0 - Выйти в главное меню", MAst::go_back, &MAst::STUDY_ALGEBRA
};

namespace {
	const MAst::MenuItem* const algebra_children[] = {
		&MAst::ALGEBRA_GO_BACK,
		&MAst::ALGEBRA_SUMM,
		&MAst::ALGEBRA_SUBSTRACT,
		&MAst::ALGEBRA_MULTIPLY,
		&MAst::ALGEBRA_DIVIDE,
		&MAst::ALGEBRA_INFORM
	};
	const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}

const MAst::MenuItem MAst::STUDY_ALGEBRA = {
	"1 - Хочу учиться алгебре!", MAst::show_menu, &MAst::STUDY, algebra_children, algebra_size
};

const MAst::MenuItem MAst::STUDY_MATAN = {
	"2 - Хочу учиться матан!", MAst::show_menu, &MAst::STUDY
};

const MAst::MenuItem MAst::STUDY_GO_BACK = {
	"0 - Хочу выйти в окно!", MAst::go_back, &MAst::STUDY
};

namespace {
	const MAst::MenuItem* const study_children[] = {
		&MAst::STUDY_GO_BACK,
		&MAst::STUDY_ALGEBRA,
		&MAst::STUDY_MATAN,
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
