﻿#include "MainForm.h"
#include <string>


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Projektcppksiazkazprzepisami::MainForm form;
	Application::Run(% form);
}
