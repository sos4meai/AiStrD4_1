#include <iostream>
#include <iomanip>
#include "List.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	List<char> listA;
	listA.input_list();
	listA.print_to_console();
	system("pause");
	return 0;
}