#include "CBook.hpp"
#include <iostream>

CPerson::CPerson()
{
}

CPerson::~CPerson()
{
}

void CCompany::addPerson(CCompany company)
{
	if (this->m_Size < 0)
	{
		std::cout << "数据库错误！" << std::endl;
		return ;
	} else if (this->m_Size == CompanyPersonMaxNumber) {
		std::cout << "人数达到上限" << std::endl;
	} else {
		//do nothing
	}
	//
	int IdNumber;
	std::cout << "请输入员工ID" << std::endl;
	std::cin >> IdNumber;
	std::cout << "请输入员工姓名" << std::endl;
	std::cin >> IdNumber;
	std::cout << "请输入员工年龄" << std::endl;
	std::cin >> IdNumber;
	std::cout << "请输入员工电话号码" << std::endl;
	std::cin >> IdNumber;
	std::cout << "请输入员工职位" << std::endl;
	std::cin >> IdNumber;
	std::cout << "请输入员工入职时间" << std::endl;
	std::cin >> IdNumber;
	company.m_person[company.m_Size].setPerson >> std::endl;
}