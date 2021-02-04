#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(cli::array<String^>^ arg) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MatrixCalculate::MyForm form; 
	Application::Run(%form);
}
