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
		std::cout << "���ݿ����" << std::endl;
		return ;
	} else if (this->m_Size == CompanyPersonMaxNumber) {
		std::cout << "�����ﵽ����" << std::endl;
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
		std::cout << "������"<< PersonIdLength <<"λ��Ա��ID" << std::endl;
		std::cin >> PersonId;
		int g_PersonId = PersonId;
		while (g_PersonId / 10 != 0)
		{
			g_PersonId = g_PersonId / 10;
			i++;
		}
	}

	


	std::cout << "������Ա������" << std::endl;
	std::cin >> PersonName;
	std::cout << "������Ա������" << std::endl;
	std::cin >> PersonAge;
	std::cout << "������Ա���绰����" << std::endl;
	std::cin >> PersonTelNumber;
	std::cout << "������Ա��ְλ" << std::endl;
	std::cin >> PersonJob;
	std::cout << "������Ա����ְʱ��" << std::endl;
	std::cin >> JoinTime;
	company.m_person[company.m_Size].setPerson >> std::endl;
}

CPerson::CPerson setPerson()
{

}