#include "CBook_Ext.hpp"
#include <string.h>
#include <iostream>


void showMemu()
{
	std::cout << "*****************************" << std::endl;
	std::cout << "******  1.添加联系人   ******" << std::endl;
	std::cout << "******  2.显示联系人   ******" << std::endl;
	std::cout << "******  3.删除联系人   ******" << std::endl;
	std::cout << "******  4.查找联系人   ******" << std::endl;
	std::cout << "******  5.修改联系人   ******" << std::endl;
	std::cout << "******  6.清空联系人   ******" << std::endl;
	std::cout << "******  0.退出通讯录   ******" << std::endl;
	std::cout << "*****************************" << std::endl;
}

int main()
{
	int switcher;

	while (true)
	{
		system("cls");
		showMemu();
		std::cin >> switcher;
		switch (switcher)
		{
		case ADD_ITEM:
			//add_item();
			break;
		case SHOW_ITEM:
			break;
		case DELETE_ITEM:
			break;
		case FIND_ITEM:
			break;
		case MODIFY_ITEM:
			break;
		case DELETE_ALL_ITEM:
			break;
		case EXIT_SYS:
			//std::cout << std::endl;
			return 0;
		default:
			break;
		}
	}	
}