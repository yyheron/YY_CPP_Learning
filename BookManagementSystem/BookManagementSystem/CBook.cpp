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
		std::cout << "���ݿ����" << std::endl;
		return ;
	} else if (this->m_Size == CompanyPersonMaxNumber) {
		std::cout << "�����ﵽ����" << std::endl;
	} else {
		//do nothing
	}
	//
	int IdNumber;
	std::cout << "������Ա��ID" << std::endl;
	std::cin >> IdNumber;
	std::cout << "������Ա������" << std::endl;
	std::cin >> IdNumber;
	std::cout << "������Ա������" << std::endl;
	std::cin >> IdNumber;
	std::cout << "������Ա���绰����" << std::endl;
	std::cin >> IdNumber;
	std::cout << "������Ա��ְλ" << std::endl;
	std::cin >> IdNumber;
	std::cout << "������Ա����ְʱ��" << std::endl;
	std::cin >> IdNumber;
	company.m_person[company.m_Size].setPerson >> std::endl;
}