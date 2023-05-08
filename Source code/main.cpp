#include "Libraries.h"

#include "RandomNameGenerator.h"
#include "RandomNumberGenerator.h"
#include "RandomDateGenerator.h"
#include "RandomTelephoneGenerator.h"
#include "RandomEmailGenerator.h"
#include "RandomAddressGenerator.h"

#include "VneseName.h"
#include "Date.h"
#include "DateToString.h"
#include "AddressToString.h"
#include "StringToDateUIConverter.h"

#include "DateDataReader.h"
#include "IDDataReader.h"
#include "EmailDataReader.h"
#include "GPADataReader.h"
#include "TelDataReader.h"
#include "NameDataReader.h"
#include "AddressDataReader.h"

void HigherThanAverage(vector<float> gpa, vector<string> id, vector<VneseName> name) {
	float sum = 0;
	for (size_t i = 0; i < gpa.size(); i++)
	{
		sum = sum + gpa[i];
	}
	float average = sum / gpa.size();
	cout << "The average GPA is: " << average << endl;
	for (size_t i = 0; i < gpa.size(); i++)
	{
		if (gpa[i] > average) {
			cout << id[i] << " - " << name[i].toString() << ", GPA: " << gpa[i] << endl;
		}
	}
}

int main() {
	//Random generator for each type in the Student's info
	RandomNumberGenerator rnumg;
	RandomNameGenerator rnameg;
	RandomDateGenerator rdg;
	RandomTelephoneGenerator rtg;
	RandomEmailGenerator reg;
	RandomAddressGenerator rag;
	//Convert Date and Address to type string if needed
	DateToStringUIConverter dts;
	StringtoDateUIConverter stdui;
	AddressToString ats;
	//Cector to store types of data, I'm assuming that only Date and VneseName are special types
	vector<Date> vec_DoB;
	vector<VneseName> vec_Name;
	vector<string> vec_Tele;	
	vector<string> vec_ID;
	vector<string> vec_Address;
	vector<string> vec_Mail;
	vector<float> vec_GPA;
	//Data reader to convert Student's info from a string to its suitable vector-type variable
	IDDataReader idts("students.txt");
	DateDataReader ddt("students.txt");
	EmailDataReader edr("students.txt");
	GPADataReader gpadr("students.txt");
	TelephoneDataReader tdr("students.txt");
	NameDataReader ndr("students.txt");
	AddressDataReader adr("students.txt");
	//Read all Student's info and push_back() to a suitable vector
	vec_ID = idts.getAll();
	vec_DoB = ddt.getAll();
	vec_Mail = edr.getAll();
	vec_GPA = gpadr.getAll();
	vec_Tele = tdr.getAll();
	vec_Name = ndr.getAll();
	vec_Address = adr.getAll();
	//Open file "students.txt" in appending mode
	ofstream writer;
	writer.open("students.txt", ios_base::app);
	//Generate a random number
	int ranNumber = rnumg.next(5, 10);
	cout << "The random number of Students is: " << ranNumber << endl;
	//Check the size of the vector after reading and push_back() from "students.txt"
	cout << "Size before: " << vec_ID.size() << " " << vec_DoB.size()
		<< " " << vec_Mail.size() << " " << vec_GPA.size()
		<< " " << vec_Tele.size() << " " << vec_Name.size() << " " << vec_Address.size();
	//Generate random Students
	for (size_t i = 0; i < ranNumber; i++)
	{
		//Random generators
		VneseName vnName = rnameg.next();
		string PhoneNum = rtg.toTelephoneString();
		Date d = rdg.next();
		Address add = rag.next();
		string Email = reg.next(vnName.toString());
		//push_back() each type into a suitable vector
		vec_ID.push_back(rnumg.ID_next());
		vec_Name.push_back(vnName);
		vec_GPA.push_back(rnumg.GPA_next());
		vec_Tele.push_back(PhoneNum);
		vec_Mail.push_back(Email);
		vec_DoB.push_back(d);
		vec_Address.push_back(ats.convert(add));
		//Write all the Students's info to the "students.txt"
		writer << vec_ID[vec_ID.size() - 1] << endl;
		writer << vec_Name[vec_Name.size() - 1].toString() << endl;
		writer << vec_GPA[vec_GPA.size() - 1] << endl;
		writer << vec_Tele[vec_Tele.size() - 1] << endl;
		writer << vec_Mail[vec_Mail.size() - 1] << endl;
		writer << dts.convert(vec_DoB[vec_DoB.size() - 1]) << endl;
		writer << vec_Address[vec_Address.size() - 1] << endl;
		writer << endl;
	}
	//Check if the size of each vector after randomly generating Students matches the formula: 
	//vector.size() after randomizing = vector.size() before randomizing + ranNum
	cout << "\nSize after push_back(): " << vec_ID.size() << " " << vec_DoB.size()
		<< " " << vec_Mail.size() << " " << vec_GPA.size()
		<< " " << vec_Tele.size() << " " << vec_Name.size() 
		<< " " << vec_Address.size() << endl << endl;
	//Show the Students whose GPAs are higher than the average
	HigherThanAverage(vec_GPA, vec_ID, vec_Name);
	//Close the file
	writer.close();
	cin.get();
	return 0;
}