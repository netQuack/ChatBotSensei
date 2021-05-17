#include "SignUpIn.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ChatBotSensei::SignUpIn form;
	Application::Run(% form);
}