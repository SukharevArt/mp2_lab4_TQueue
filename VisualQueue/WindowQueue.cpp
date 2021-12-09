#include "WindowQueue.h"
#include<ctime>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args) {
	srand(time(0));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	VisualQueue::WindowQueue form;
	Application::Run(% form);
}