#pragma once
#include<iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <fstream>
#include <cstring>
#include <math.h>
#include <msclr/marshal_cppstd.h>
#include <cstdlib>
#include <vector>
#include <msclr/marshal.h>

#define Nombre_Archivo "POKEDEX.csv"

namespace Lab05JorgeLeiva1249821 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(90, 13);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(197, 532);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(369, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::TIMER_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 587);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion

		int conteo = 0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		ifstream archivo(Nombre_Archivo);
		string NatNum, Name, Gen;
		string linea;
		char limite = ',';

		double VecNationalNumber[80];
		string VecName[80];
		double VecGen[80];

		while (getline(archivo, linea)) {
			stringstream stream(linea);
			getline(stream, NatNum, limite);
			getline(stream, Name, limite);
			getline(stream, Gen, limite);

			listBox1->Items->Add(ToSystemString(NatNum) + ", " + ToSystemString(Name) + ", " + ToSystemString(Gen));
		}

	}

	private: static string ToNormalString(System::String^ string) {
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string NormalString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return NormalString;
	}

	private: static String^ ToSystemString(string str) {
		return gcnew String(str.c_str());
	}

	private: System::Void TIMER_Tick(System::Object^ sender, System::EventArgs^ e) {
		conteo++;

	}
	};
}
