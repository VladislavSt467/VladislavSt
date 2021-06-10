#include "Calculator.h"
#include "Functions.h"

#include <string>
#include <iostream>

System::Void VladKursovaya::Calculator::calculate_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text != "" && textBox2->Text != "")
	{
		std::string str;
		Convert_String_to_string(textBox1->Text, str);
		int minutes = std::stoi(str);
		Convert_String_to_string(textBox2->Text, str);
		int days = std::stoi(str);

		float fSum = CalculateSum(minutes, days);

		sum->Text = fSum + " грн.";
	}
	else
		sum->Text = "Есть пустое поле(я).";
}

System::Void VladKursovaya::Calculator::clear_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = "";
	textBox2->Text = "";
	sum->Text = "";
}
