
#pragma once

#include "Matrix.h"
#include "minus.h"
#include "transponation.h"
#include "trianglematrix.h"
//#include "trianglematrix.h"

namespace MatrixCalculate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: cli::array<TextBox^, 2>^textBoxes1 = gcnew cli::array<TextBox^, 2>(10, 10);
	private: cli::array<TextBox^, 2>^textBoxes2 = gcnew cli::array<TextBox^, 2>(10, 10);
	private: cli::array<TextBox^, 2>^textBoxes3 = gcnew cli::array<TextBox^, 2>(10, 10);
	private: System::Windows::Forms::Button^  buttonT;
	private: System::Windows::Forms::Button^  buttonT2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(30, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->LostFocus += gcnew System::EventHandler(this, &MyForm::textBox1_LostFocus);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(48, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(30, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->LostFocus += gcnew System::EventHandler(this, &MyForm::textBox2_LostFocus);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Детерминант", L"Минор", L"Дополнение", L"Ступенчатая матрица",
					L"Транспонирование", L"Обратная матрица", L"Умножение на число", L"Деление на число", L"Умножение матриц", L"Сложение матриц",
					L"Вычитание матриц"
			});
			this->comboBox1->Location = System::Drawing::Point(372, 41);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(372, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 22);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(455, 108);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(37, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->LostFocus += gcnew System::EventHandler(this, &MyForm::textBox3_LostFocus);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(498, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(30, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->LostFocus += gcnew System::EventHandler(this, &MyForm::textBox4_LostFocus);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(534, 12);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(30, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->LostFocus += gcnew System::EventHandler(this, &MyForm::textBox5_LostFocus);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(372, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(37, 22);
			this->button2->TabIndex = 7;
			this->button2->Text = L"CE1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Размер матрицы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(570, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L" ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(369, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L" ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(455, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(37, 22);
			this->button3->TabIndex = 11;
			this->button3->Text = L"CE2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(415, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"<-->";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(863, 307);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Матричный калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	Create_TextBoxes1();
	Create_TextBoxes2();

	textBox3->Enabled = false;
	textBox4->Enabled = false;
	textBox5->Enabled = false;
	textBox1->Text = "1";
	textBox2->Text = "1";
	button1->Enabled = false;
	button1->Text = " ";
}
	
private: 
	int n = 1;
	int m = 1;
	int n1, m1, n2, m2;
	bool b;
	cli::array<float, 2>^mas;

private: System::Void textBox1_LostFocus(System::Object^  sender, System::EventArgs^  e){
	b = true;
	for (int i = 1; i < 11; i++) {
		if (textBox1->Text == i.ToString()) {
			b = false;
		}
	}
	if (b) { textBox1->Text = "1"; }
	n = System::Int32::Parse(textBox1->Text);
	TextBoxes1_Enabled_t();
	for (int i = 9; i >= n; i--) {
		for (int j = 0; j < m; j++) {
			textBoxes1[i, j]->Enabled = false;
			textBoxes1[i, j]->Text = "";
		}
	}
}

private: System::Void textBox2_LostFocus(System::Object^  sender, System::EventArgs^  e) {
	b = true;
	for (int i = 1; i < 11; i++) {
		if (textBox2->Text == i.ToString()) {
			b = false;
		}
	}
	if (b) { textBox2->Text = "1"; }
	m = System::Int32::Parse(textBox2->Text);
	TextBoxes1_Enabled_t();
	for (int i = 0; i < n; i++) {
		for (int j = 9; j >= m; j--) {
			textBoxes1[i, j]->Enabled = false;
			textBoxes1[i, j]->Text = "";
		}
	}
}

private: System::Void textBox3_LostFocus(System::Object^  sender, System::EventArgs^  e) {
	if ((comboBox1->SelectedIndex == 6) || (comboBox1->SelectedIndex == 7)) {
		b = true;
		for (int t = 0; t < textBox3->Text->Length; t++) {
			if (((47 < (int)textBox3->Text[t]) && ((int)textBox3->Text[t] < 58)) ||
				(((int)textBox3->Text[t] == 45) && (textBox3->Text->Length != 1) && (t == 0)) ||
				(((int)textBox3->Text[t] == 44) && (textBox3->Text->Length != 1) && (t != 0) && (t != textBox3->Text->Length - 1))) {
			}
			else b = false;
		}
		if (textBox3->Text->Length == 0) b = false;
		if (b == false) textBox3->Text = "1"; 
	}
}

private: System::Void textBox4_LostFocus(System::Object^  sender, System::EventArgs^  e) {
	if ((comboBox1->SelectedIndex == 1) || (comboBox1->SelectedIndex == 2)) {
		b = true;
		for (int i = 1; i <= n; i++) {
			if (textBox4->Text == i.ToString()) {
				b = false;
			}
		}
		if (b) { textBox4->Text = "1"; }
		n1 = System::Int32::Parse(textBox4->Text);
	}

	if (comboBox1->SelectedIndex == 8) {
		textBox4->Text = textBox2->Text;
		n1 = m;
	}

	if ((comboBox1->SelectedIndex == 9) || (comboBox1->SelectedIndex == 10)||(comboBox1->SelectedIndex==3)) {
		textBox4->Text = textBox1->Text;
		textBox5->Text = textBox2->Text;
		n1 = n;
		m1 = m;
	}

	if ((comboBox1->SelectedIndex == 8) || (comboBox1->SelectedIndex == 9) || (comboBox1->SelectedIndex == 10)){
		TextBoxes2_Enabled_t();
		for (int i = 9; i >= n1; i--) {
			for (int j = 0; j < m1; j++) {
				textBoxes2[i, j]->Enabled = false;
				textBoxes2[i, j]->Text = "";
			}
		}
	}
}

private: System::Void textBox5_LostFocus(System::Object^  sender, System::EventArgs^  e) {
	if ((comboBox1->SelectedIndex == 1)||(comboBox1->SelectedIndex == 2)) {
		b = true;
		for (int i = 1; i <= m; i++) {
			if (textBox5->Text == i.ToString()) {
				b = false;
			}
		}
		if (b) { textBox5->Text = "1"; }
		m1 = System::Int32::Parse(textBox5->Text);
	}

	if (comboBox1->SelectedIndex == 8) {
		b = true;
		for (int i = 1; i <11; i++) {
			if (textBox5->Text == i.ToString()) {
				b = false;
			}
		}
		if (b) { textBox5->Text = "1"; }
		m1 = System::Int32::Parse(textBox5->Text);
	}

	if ((comboBox1->SelectedIndex == 9) || (comboBox1->SelectedIndex == 10)) {
		textBox4->Text = textBox1->Text;
		textBox5->Text = textBox2->Text;
		n1 = n;
		m1 = m;
	}

	if ((comboBox1->SelectedIndex == 8)||(comboBox1->SelectedIndex == 9)||(comboBox1->SelectedIndex == 10)) {
		TextBoxes2_Enabled_t();
		for (int i = 0; i < n1; i++) {
			for (int j = 9; j >= m1; j--) {
				textBoxes2[i, j]->Enabled = false;
				textBoxes2[i, j]->Text = "";
			}
		}
	}
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	button1->Enabled = true;
	switch (comboBox1->SelectedIndex)
	{
	case(0): {
		button1->Text = "Det";
		label3->Text = "Det:";
		label2->Text = " ";
		textBox3->Enabled = true;
		textBox4->Enabled = false;
		textBox5->Enabled = false;
		break;
	}
	case(1): {
		button1->Text = "Минор";
		label3->Text = "Минор:";
		label2->Text = "Координаты минора";
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	}
	case(2): {
		button1->Text = "Дополнение";
		label3->Text = "Дополнение:";
		label2->Text = "Координаты дополнения";
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	}
	case(3): {
		button1->Text = "Ступ.матрица";
		label3->Text = "";
		label2->Text = "Размер матрицы";
		textBox3->Enabled = false;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	}
	case(4): {
		button1->Text = "Транспонировать";
		label3->Text = "";
		label2->Text = "Размер матрицы";
		textBox3->Enabled = false;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	}
	case(5): {
		button1->Text = "Обрат.матрица";
		label3->Text = "";
		label2->Text = "Размер матрицы";
		textBox3->Enabled = false;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	}
	case(6): {
		button1->Text = "X";
		label3->Text = "";
		label2->Text = "Размер матрицы";
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	}
	case(7): {
		button1->Text = "/";
		label3->Text = "";
		label2->Text = "Размер матрицы";
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	}
	case(8): {
		button1->Text = "X";
		label3->Text = "";
		label2->Text = "Размер матрицы 2";
		textBox3->Enabled = false;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		n1 = 1;
		m1 = 1;
		break;
	}
	case(9): {
		button1->Text = "+";
		label3->Text = "";
		label2->Text = "Размер матрицы 2";
		textBox3->Enabled = false;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	}
	case(10): {
		button1->Text = "-";
		label3->Text = "";
		label2->Text = "Размер матрицы 2";
		textBox3->Enabled = false;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		break;
	}
	}
	
	if (comboBox1->SelectedIndex < 3) {
		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < m1; j++) {
				textBoxes2[i, j]->Enabled = false;
			}
		}
	}
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Matrix matr(n, m);
	Matrix matr1(n1, m1);
	matr.setmatrix(Set_TextBoxes1());

	if (comboBox1->SelectedIndex == 0) {
		if (n == m) {
			textBox3->Text = Convert::ToString(matr.det());
		}
		else MessageBox::Show("Матрица должна быть квадратной","Ошибка");
	}
	if (comboBox1->SelectedIndex == 1) {
		if (n == m) {
			textBox3->Text = Convert::ToString(matr.minor(n1 - 1, m1 - 1));
		}
		else MessageBox::Show("Матрица должна быть квадратной", "Ошибка");
	}
	if (comboBox1->SelectedIndex == 2) {
		if (n == m) {
			textBox3->Text = Convert::ToString(matr.dop(n1 - 1, m1 - 1));
		}
		else MessageBox::Show("Матрица должна быть квадратной", "Ошибка");
	}
	if (comboBox1->SelectedIndex == 3) {
		textBox4->Text = textBox1->Text;
		textBox5->Text = textBox2->Text;
		Get_TextBoxes2(matr.step());
		TextBoxes2_Enabled_f();
	}
	if (comboBox1->SelectedIndex == 4) {
		textBox4->Text = textBox2->Text;
		textBox5->Text = textBox1->Text;
		n1 = m;
		m1 = n;
		Get_TextBoxes2(matr.transp());
		TextBoxes2_Enabled_f();
	}
	if (comboBox1->SelectedIndex == 5) {
		if (n == m) {
			if (matr.det() != 0) {
				textBox4->Text = textBox1->Text;
				textBox5->Text = textBox2->Text;
				n1 = n;
				m1 = m;
				Get_TextBoxes2(matr.inverse());
				TextBoxes2_Enabled_f();
			}
			else MessageBox::Show("Определитель матрицы не должен быть равен 0", "Ошибка");
		}
		else MessageBox::Show("Матрица должна быть квадратной", "Ошибка");
	}
	if (comboBox1->SelectedIndex == 6) {
		textBox4->Text = textBox1->Text;
		textBox5->Text = textBox2->Text;
		n1 = n;
		m1 = m;
		matr = matr*float::Parse(textBox3->Text);
		Get_TextBoxes2(matr.getmatrix());
		TextBoxes2_Enabled_f();
	}
	if (comboBox1->SelectedIndex == 7) {
		if (textBox3->Text=="0")  MessageBox::Show("Нельзя делить на ноль", "Ошибка");
		else {
			textBox4->Text = textBox1->Text;
			textBox5->Text = textBox2->Text;
			n1 = n;
			m1 = m;
			matr = matr / float::Parse(textBox3->Text);
			Get_TextBoxes2(matr.getmatrix());
			TextBoxes2_Enabled_f();
		}
	}
	if (comboBox1->SelectedIndex == 8) {
		if (m == n1) {
			n2 = n;
			m2 = m1;
			Matrix matr2(n2, m2);
			matr1.setmatrix(Set_TextBoxes2());
			matr2 = matr*matr1;
			Get_TextBoxes3(matr2.getmatrix());
		}else  MessageBox::Show("Матрицы нельзя перемножить", "Ошибка");
	}
	if (comboBox1->SelectedIndex == 9) {
		if ((n == n1) && (m == m1)) {
			n2 = n;
			m2 = m;
			Matrix matr2(n2, m2);
			matr1.setmatrix(Set_TextBoxes2());
			matr2 = matr + matr1;
			Get_TextBoxes3(matr2.getmatrix());
		}
		else MessageBox::Show("Матрицы нельзя сложить", "Ошибка");
	}
	if (comboBox1->SelectedIndex == 10) {
		if ((n == n1) && (m == m1)) {
			n2 = n;
			m2 = m;
			Matrix matr2(n2, m2);
			matr1.setmatrix(Set_TextBoxes2());
			matr2 = matr - matr1;
			Get_TextBoxes3(matr2.getmatrix());
		}
		else MessageBox::Show("Матрицы нельзя сложить", "Ошибка");
	}
}

private: Void TextBoxes2_Enabled_f() {
	for (int i = 9; i >= n1; i--) {
		for (int j = 0; j < m1; j++) {
			textBoxes2[i, j]->Enabled = false;
			textBoxes2[i, j]->Text = "";
		}
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 9; j >= m1; j--) {
			textBoxes2[i, j]->Enabled = false;
			textBoxes2[i, j]->Text = "";
		}
	}
}

private: Void TextBoxes2_Enabled_t() {
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			textBoxes2[i, j]->Enabled = true;
		}
	}
}

private: Void TextBoxes1_Enabled_t() {
	 for (int i = 0; i < n; i++) {
		 for (int j = 0; j < m; j++) {
			 textBoxes1[i, j]->Enabled = true;
		 }
	 }
}

private: Void TextBoxes1_Enabled_f() {
	for (int i = 9; i >= n; i--) {
		for (int j = 0; j < m; j++) {
			textBoxes1[i, j]->Enabled = false;
			textBoxes1[i, j]->Text = "";
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 9; j >= m; j--) {
			textBoxes1[i, j]->Enabled = false;
			textBoxes1[i, j]->Text = "";
		}
	}
}

private: Void Get_TextBoxes2(vector<vector<float>> mass) {
	for (int i = 0; i < mass.size(); i++) {
		for (int j = 0; j < mass[0].size(); j++) {
			textBoxes2[i, j]->Enabled = true;
			if (abs(mass[i][j]) < 0.00001) mass[i][j] = std::roundf(mass[i][j]);
			textBoxes2[i, j]->Text = Convert::ToString(mass[i][j]);
		}
	}
}

private: Void Get_TextBoxes3(vector<vector<float>> mass) {
	Form ^ form2 = gcnew Form();
	form2->Text = L"Ответ";
	form2->HelpButton = true;
	form2->MaximizeBox = false;
	form2->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	form2->StartPosition = FormStartPosition::CenterScreen;
	form2->ClientSize=System::Drawing::Size(m2 * 30 + (m2 - 1) * 6 + 24, n2 * 20 + (n2 - 1) * 6 + 24 + 26);
	buttonT = gcnew Button();
	buttonT->Size= System::Drawing::Size(30, 20);
	buttonT->Name = L"BT";
	buttonT->Text = "1";
	buttonT->Location = System::Drawing::Point(12, 12);
	form2->Controls->Add(buttonT);
	buttonT->Click += gcnew System::EventHandler(this, &MyForm::buttonT_Click);

	buttonT2 = gcnew Button();
	buttonT2->Size = System::Drawing::Size(30, 20);
	buttonT2->Name = L"BT";
	buttonT2->Text = "2";
	buttonT2->Location = System::Drawing::Point(48, 12);
	form2->Controls->Add(buttonT2);
	buttonT2->Click += gcnew System::EventHandler(this, &MyForm::buttonT2_Click);

	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < m2; j++) {
			textBoxes3[i, j] = gcnew TextBox();
			textBoxes3[i, j]->Name = L"TextBox" + System::Convert::ToString(i) + System::Convert::ToString(j);
			textBoxes3[i, j]->Location = System::Drawing::Point(12 + 36 * j, 12 + 26 * i + 26);
			textBoxes3[i, j]->Size = System::Drawing::Size(30, 20);
			form2->Controls->Add(textBoxes3[i, j]);
			if (mass[i][j] < 0.00001) mass[i][j] = std::roundf(mass[i][j]);
			textBoxes3[i, j]->Text = Convert::ToString(mass[i][j]);
		}
	}
	form2->ShowDialog();
}

private: vector<vector<float>> Set_TextBoxes2() {
	mas = gcnew cli::array<float, 2>(n1, m1);
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			b = true;
			for (int t = 0; t<textBoxes2[i, j]->Text->Length; t++) {
				if (((47 < (int)textBoxes2[i, j]->Text[t]) && ((int)textBoxes2[i, j]->Text[t] < 58)) || 
					(((int)textBoxes2[i, j]->Text[t] == 45) && (textBoxes2[i, j]->Text->Length != 1) && (t == 0))||
					(((int)textBoxes2[i, j]->Text[t] == 44)&&(textBoxes2[i, j]->Text->Length != 1)&&(t!=0)&&(t!=textBoxes2[i, j]->Text->Length-1))) {}
				else b = false;
			}
			if (textBoxes2[i, j]->Text->Length == 0) { b = false; }
			if (b == false) { textBoxes2[i, j]->Text = "0"; }
		}
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			mas[i, j] = float::Parse(textBoxes2[i, j]->Text);
		}
	}

	std::vector<float> t;
	std::vector<vector<float>> mass;
	float a;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			a = mas[i, j];
			t.push_back(a);
		}
		mass.push_back(t);
		t.clear();
	}
	return mass;
}

private: vector<vector<float>> Set_TextBoxes1() {
	mas = gcnew cli::array<float, 2>(n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b = true;
			for (int t = 0; t<textBoxes1[i, j]->Text->Length; t++) {
				if (((47 < (int)textBoxes1[i, j]->Text[t]) && ((int)textBoxes1[i, j]->Text[t] < 58)) ||
					(((int)textBoxes1[i, j]->Text[t] == 45) && (textBoxes1[i, j]->Text->Length != 1) && (t == 0)) ||
					(((int)textBoxes1[i, j]->Text[t] == 44) && (textBoxes1[i, j]->Text->Length != 1) && (t != 0) && (t != textBoxes1[i, j]->Text->Length - 1))) {
				}
				else b = false;
			}
			if (textBoxes1[i, j]->Text->Length == 0) { b = false; }
			if (b == false) { textBoxes1[i, j]->Text = "0"; }
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i, j] = float::Parse(textBoxes1[i, j]->Text);
		}
	}

	std::vector<float> t;
	std::vector<vector<float>> mass;
	float a;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a = mas[i, j];
			t.push_back(a);
		}
		mass.push_back(t);
		t.clear();
	}
	return mass;
}

private: Void Create_TextBoxes1() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			textBoxes1[i, j] = gcnew TextBox();
			textBoxes1[i, j]->Name = L"TextBox" + System::Convert::ToString(i) + System::Convert::ToString(j);
			textBoxes1[i, j]->Location = System::Drawing::Point(12 + 36 * j, 42 + 26 * i);
			textBoxes1[i, j]->Size = System::Drawing::Size(30, 20);
			this->Controls->Add(textBoxes1[i, j]);
			textBoxes1[i, j]->Enabled = false;
		}
	}
}

private: Void Create_TextBoxes2() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			textBoxes2[i, j] = gcnew TextBox();
			textBoxes2[i, j]->Name = L"TextBox" + System::Convert::ToString(i) + System::Convert::ToString(j);
			textBoxes2[i, j]->Location = System::Drawing::Point(498 + 36 * j, 42 + 26 * i);
			textBoxes2[i, j]->Size = System::Drawing::Size(30, 20);
			this->Controls->Add(textBoxes2[i, j]);
			textBoxes2[i, j]->Enabled = false;
		}
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			textBoxes1[i, j]->Text = "";
		}
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			textBoxes2[i, j]->Text = "";
		}
	}
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ t;
	if (((comboBox1->SelectedIndex > 2)&&(comboBox1->SelectedIndex<8))||(comboBox1->SelectedIndex>8)) {
		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < m1; j++) {
				t = textBoxes1[i, j]->Text;
				textBoxes1[i, j]->Text = textBoxes2[i, j]->Text;
				textBoxes2[i, j]->Text = t;
			}
		}
	}
}

private: System::Void buttonT_Click(System::Object^  sender, System::EventArgs^  e) {
	n = n2;
	m = m2;
	TextBoxes1_Enabled_f();
	TextBoxes1_Enabled_t();
	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < m2; j++) {
			textBoxes1[i, j]->Text = textBoxes3[i, j]->Text;
		}
	}
}

private: System::Void buttonT2_Click(System::Object^  sender, System::EventArgs^  e) {
	n1 = n2;
	m1 = m2;
	TextBoxes2_Enabled_f();
	TextBoxes2_Enabled_t();
	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < m2; j++) {
			textBoxes2[i, j]->Text = textBoxes3[i, j]->Text;
		}
	}
}
};
}
