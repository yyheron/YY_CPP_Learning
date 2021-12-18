#pragma once

#define PersonNameMaxLength 30
#define PersonNumberTelMaxLength 15
#define PersonJobMaxLength 10
#define JoinTimeLength 11
#define CompanyPersonMaxNumber 500

class CPerson
{
public:
	CPerson();
	~CPerson();
	CPerson setPerson();
private:
	int  m_PersonId;
	char m_PersonName[PersonNameMaxLength];
	int  m_PersonAge;
	char m_PersonTelNumber[PersonNumberTelMaxLength];
	char m_PersonJob[PersonJobMaxLength];
	char m_JoinTime[JoinTimeLength];
};

class CCompany
{
public:
	void addPerson(CCompany company);
private:
	CPerson m_person[CompanyPersonMaxNumber];
	int m_Size;
};