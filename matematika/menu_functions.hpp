#pragma once

namespace MAst {
	const MenuItem* go_back(const MenuItem* curreent);
	const MenuItem* show_menu(const MenuItem* current);

	const MenuItem* exit(const MenuItem* current);

	const MenuItem* algebra_inform(const MenuItem* curreent);
	const MenuItem* algebra_summ(const MenuItem* current);
	const MenuItem* algebra_substract(const MenuItem* current);
	const MenuItem* algebra_multiply(const MenuItem* current);
	const MenuItem* algebra_divide(const MenuItem* current);
}