#include "CBook_Ext.hpp"
#include <string.h>
#include <iostream>


void showMemu()
{
	std::cout << "*****************************" << std::endl;
	std::cout << "******  1.�����ϵ��   ******" << std::endl;
	std::cout << "******  2.��ʾ��ϵ��   ******" << std::endl;
	std::cout << "******  3.ɾ����ϵ��   ******" << std::endl;
	std::cout << "******  4.������ϵ��   ******" << std::endl;
	std::cout << "******  5.�޸���ϵ��   ******" << std::endl;
	std::cout << "******  6.�����ϵ��   ******" << std::endl;
	std::cout << "******  0.�˳�ͨѶ¼   ******" << std::endl;
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