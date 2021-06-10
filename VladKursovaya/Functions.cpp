#include "Functions.h"

float CalculateSum(int minutes, int day)
{
	float sum = 0;

	if (day > 0 && day <= 5)
		sum = minutes * costPerDay;
	else if (day >= 6 && day <= 7)
	{
		sum = (minutes * costPerDay);
		sum = sum - ((sum * 20) / 100);
	}

	return sum;
}
//êîíâåğòèğóåì System::string^ â std::string
std::string& Convert_String_to_string(String^ s, std::string& os) 
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

//êîíâåğòèğóåì std::string â System::string^
String^ Convert_string_to_String(std::string& os, String^ s) {
	s = gcnew System::String(os.c_str());

	return s;
}
