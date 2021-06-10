#pragma once
#include <string>
#include "Calculator.h"

using namespace System;

const float costPerDay = 0.45;
const int discount = 20;

float CalculateSum(int minutes, int day);

std::string& Convert_String_to_string(String^ s, std::string& os);
String^ Convert_string_to_String(std::string& os, String^ s);

