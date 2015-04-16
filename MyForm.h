#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnSub;
	private: System::Windows::Forms::Button^  btnMult;
	private: System::Windows::Forms::TextBox^  tbOpt2;
	protected:



	private: System::Windows::Forms::TextBox^  tbOpt1;
	private: System::Windows::Forms::Label^  lblOp1;
	private: System::Windows::Forms::Label^  lblOperator;



	private: System::Windows::Forms::Label^  lblOp2;

	private: System::Windows::Forms::Button^  btnDiv;
	private: System::Windows::Forms::Button^  btnEquals;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblResult;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->tbOpt2 = (gcnew System::Windows::Forms::TextBox());
			this->tbOpt1 = (gcnew System::Windows::Forms::TextBox());
			this->lblOp1 = (gcnew System::Windows::Forms::Label());
			this->lblOperator = (gcnew System::Windows::Forms::Label());
			this->lblOp2 = (gcnew System::Windows::Forms::Label());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(125, 30);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnSub
			// 
			this->btnSub->Location = System::Drawing::Point(125, 59);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(75, 23);
			this->btnSub->TabIndex = 1;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::btnSub_Click);
			// 
			// btnMult
			// 
			this->btnMult->Location = System::Drawing::Point(125, 88);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(75, 23);
			this->btnMult->TabIndex = 2;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::btnMult_Click);
			// 
			// tbOpt2
			// 
			this->tbOpt2->Location = System::Drawing::Point(206, 30);
			this->tbOpt2->Name = L"tbOpt2";
			this->tbOpt2->Size = System::Drawing::Size(100, 20);
			this->tbOpt2->TabIndex = 3;
			// 
			// tbOpt1
			// 
			this->tbOpt1->Location = System::Drawing::Point(19, 30);
			this->tbOpt1->Name = L"tbOpt1";
			this->tbOpt1->Size = System::Drawing::Size(100, 20);
			this->tbOpt1->TabIndex = 4;
			// 
			// lblOp1
			// 
			this->lblOp1->AutoSize = true;
			this->lblOp1->Location = System::Drawing::Point(13, 187);
			this->lblOp1->Name = L"lblOp1";
			this->lblOp1->Size = System::Drawing::Size(35, 13);
			this->lblOp1->TabIndex = 5;
			this->lblOp1->Text = L"label1";
			// 
			// lblOperator
			// 
			this->lblOperator->AutoSize = true;
			this->lblOperator->Location = System::Drawing::Point(142, 187);
			this->lblOperator->Name = L"lblOperator";
			this->lblOperator->Size = System::Drawing::Size(35, 13);
			this->lblOperator->TabIndex = 6;
			this->lblOperator->Text = L"label2";
			// 
			// lblOp2
			// 
			this->lblOp2->AutoSize = true;
			this->lblOp2->Location = System::Drawing::Point(268, 187);
			this->lblOp2->Name = L"lblOp2";
			this->lblOp2->Size = System::Drawing::Size(35, 13);
			this->lblOp2->TabIndex = 7;
			this->lblOp2->Text = L"label3";
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(125, 117);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(75, 23);
			this->btnDiv->TabIndex = 8;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::btnDiv_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->Location = System::Drawing::Point(125, 147);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(75, 23);
			this->btnEquals->TabIndex = 9;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"=";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(206, 219);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(35, 13);
			this->lblResult->TabIndex = 11;
			this->lblResult->Text = L"label5";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 287);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->lblOp2);
			this->Controls->Add(this->lblOperator);
			this->Controls->Add(this->lblOp1);
			this->Controls->Add(this->tbOpt1);
			this->Controls->Add(this->tbOpt2);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnAdd);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		lblOperator->Text = "+";
		lblOp1->Text = tbOpt1->Text;
		lblOp2->Text = tbOpt2->Text;
	}

private: System::Void btnSub_Click(System::Object^  sender, System::EventArgs^  e) {
	lblOperator->Text = "-";
	lblOp1->Text = tbOpt1->Text;
	lblOp2->Text = tbOpt2->Text;
}
private: System::Void btnMult_Click(System::Object^  sender, System::EventArgs^  e) {
	lblOperator->Text = "*";
	lblOp1->Text = tbOpt1->Text;
	lblOp2->Text = tbOpt2->Text;
}
private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
	lblOperator->Text = "/";
	lblOp1->Text = tbOpt1->Text;
	lblOp2->Text = tbOpt2->Text;
}
private: System::Void btnEquals_Click(System::Object^  sender, System::EventArgs^  e) {
	char op;
	double x, y, r;
	op = System::Convert::ToChar(lblOperator->Text);
	x = System::Convert::ToChar(tbOpt1->Text);
	y = System::Convert::ToChar(tbOpt2->Text);

	switch (op)
	{
	case '+':
		r = x + y;
		break;
	case '-':
		r = x - y;
		break;
	case '*':
		r = x * y;
		break;
	case '/':
		r = x / y;
		break;
	}

	lblResult->Text = System::Convert::ToString(r);

}
};
}
