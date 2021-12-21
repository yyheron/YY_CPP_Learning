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
	if (this->m_Size < 0 || this->m_Size > CompanyPersonMaxNumber)
	{
		std::cout << "数据库错误！" << std::endl;
		return ;
	} else if (this->m_Size == CompanyPersonMaxNumber) {
		std::cout << "人数达到上限" << std::endl;
		return ;
	} else {
		//do nothing
	}
	//
	int  PersonId;
	char PersonName[PersonNameMaxLength];
	int  PersonAge;
	char PersonTelNumber[PersonNumberTelMaxLength];
	char PersonJob[PersonJobMaxLength];
	char JoinTime[JoinTimeLength];
	int i = 0;

	
	while (i!= PersonIdLength)
	{
		std::cout << "请输入"<< PersonIdLength <<"位数员工ID" << std::endl;
		std::cin >> PersonId;
		int g_PersonId = PersonId;
		while (g_PersonId / 10 != 0)
		{
			g_PersonId = g_PersonId / 10;
			i++;
		}
	}

	


	std::cout << "请输入员工姓名" << std::endl;
	std::cin >> PersonName;
	std::cout << "请输入员工年龄" << std::endl;
	std::cin >> PersonAge;
	std::cout << "请输入员工电话号码" << std::endl;
	std::cin >> PersonTelNumber;
	std::cout << "请输入员工职位" << std::endl;
	std::cin >> PersonJob;
	std::cout << "请输入员工入职时间" << std::endl;
	std::cin >> JoinTime;
	company.m_person[company.m_Size].setPerson >> std::endl;
}

CPerson::CPerson setPerson()
{

}