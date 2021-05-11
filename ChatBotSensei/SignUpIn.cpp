#include "SignUpIn.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ChatBotSensei::SignUpIn form;
	Application::Run(% form);
}