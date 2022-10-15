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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::ListBox^ lbx_Generacion_Ordenados;

	private: System::Windows::Forms::ListBox^ lbx_Generacion_Desordenados;
	private: System::Windows::Forms::Button^ btn_Generacion_OrdenarPokemones;



	private: System::Windows::Forms::ComboBox^ cmbx_Generacion_Ordenamientos;



	private: System::Windows::Forms::ListBox^ lbx_NatNum_Desordenados;
	private: System::Windows::Forms::Button^ btn_NatNum_OrdenarPokemones;



	private: System::Windows::Forms::ListBox^ lbx_NatNum_Ordenados;
	private: System::Windows::Forms::ComboBox^ cmbx_NatNum_Ordenamientos;

	private: System::Windows::Forms::Label^ label2;





	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->cmbx_NatNum_Ordenamientos = (gcnew System::Windows::Forms::ComboBox());
			this->btn_NatNum_OrdenarPokemones = (gcnew System::Windows::Forms::Button());
			this->lbx_NatNum_Ordenados = (gcnew System::Windows::Forms::ListBox());
			this->lbx_NatNum_Desordenados = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->cmbx_Generacion_Ordenamientos = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Generacion_OrdenarPokemones = (gcnew System::Windows::Forms::Button());
			this->lbx_Generacion_Ordenados = (gcnew System::Windows::Forms::ListBox());
			this->lbx_Generacion_Desordenados = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 73);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(458, 296);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage1->Controls->Add(this->cmbx_NatNum_Ordenamientos);
			this->tabPage1->Controls->Add(this->btn_NatNum_OrdenarPokemones);
			this->tabPage1->Controls->Add(this->lbx_NatNum_Ordenados);
			this->tabPage1->Controls->Add(this->lbx_NatNum_Desordenados);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(450, 270);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"National Number";
			// 
			// cmbx_NatNum_Ordenamientos
			// 
			this->cmbx_NatNum_Ordenamientos->FormattingEnabled = true;
			this->cmbx_NatNum_Ordenamientos->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Selection Sort", L"Quick Sort",
					L"Shell Sort"
			});
			this->cmbx_NatNum_Ordenamientos->Location = System::Drawing::Point(319, 6);
			this->cmbx_NatNum_Ordenamientos->Name = L"cmbx_NatNum_Ordenamientos";
			this->cmbx_NatNum_Ordenamientos->Size = System::Drawing::Size(125, 21);
			this->cmbx_NatNum_Ordenamientos->TabIndex = 4;
			// 
			// btn_NatNum_OrdenarPokemones
			// 
			this->btn_NatNum_OrdenarPokemones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_NatNum_OrdenarPokemones->Location = System::Drawing::Point(318, 94);
			this->btn_NatNum_OrdenarPokemones->Name = L"btn_NatNum_OrdenarPokemones";
			this->btn_NatNum_OrdenarPokemones->Size = System::Drawing::Size(126, 163);
			this->btn_NatNum_OrdenarPokemones->TabIndex = 3;
			this->btn_NatNum_OrdenarPokemones->Text = L"Cargar Pokemones";
			this->btn_NatNum_OrdenarPokemones->UseVisualStyleBackColor = true;
			this->btn_NatNum_OrdenarPokemones->Click += gcnew System::EventHandler(this, &MyForm::btn_NatNum_CargarPokemones_Click);
			// 
			// lbx_NatNum_Ordenados
			// 
			this->lbx_NatNum_Ordenados->FormattingEnabled = true;
			this->lbx_NatNum_Ordenados->Location = System::Drawing::Point(159, 6);
			this->lbx_NatNum_Ordenados->Name = L"lbx_NatNum_Ordenados";
			this->lbx_NatNum_Ordenados->Size = System::Drawing::Size(138, 251);
			this->lbx_NatNum_Ordenados->TabIndex = 2;
			// 
			// lbx_NatNum_Desordenados
			// 
			this->lbx_NatNum_Desordenados->FormattingEnabled = true;
			this->lbx_NatNum_Desordenados->Location = System::Drawing::Point(6, 6);
			this->lbx_NatNum_Desordenados->Name = L"lbx_NatNum_Desordenados";
			this->lbx_NatNum_Desordenados->Size = System::Drawing::Size(138, 251);
			this->lbx_NatNum_Desordenados->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage2->Controls->Add(this->cmbx_Generacion_Ordenamientos);
			this->tabPage2->Controls->Add(this->btn_Generacion_OrdenarPokemones);
			this->tabPage2->Controls->Add(this->lbx_Generacion_Ordenados);
			this->tabPage2->Controls->Add(this->lbx_Generacion_Desordenados);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(450, 270);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Generación";
			// 
			// cmbx_Generacion_Ordenamientos
			// 
			this->cmbx_Generacion_Ordenamientos->FormattingEnabled = true;
			this->cmbx_Generacion_Ordenamientos->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Selection Sort", L"Quick Sort",
					L"Shell Sort"
			});
			this->cmbx_Generacion_Ordenamientos->Location = System::Drawing::Point(319, 7);
			this->cmbx_Generacion_Ordenamientos->Name = L"cmbx_Generacion_Ordenamientos";
			this->cmbx_Generacion_Ordenamientos->Size = System::Drawing::Size(125, 21);
			this->cmbx_Generacion_Ordenamientos->TabIndex = 3;
			// 
			// btn_Generacion_OrdenarPokemones
			// 
			this->btn_Generacion_OrdenarPokemones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_Generacion_OrdenarPokemones->Location = System::Drawing::Point(318, 81);
			this->btn_Generacion_OrdenarPokemones->Name = L"btn_Generacion_OrdenarPokemones";
			this->btn_Generacion_OrdenarPokemones->Size = System::Drawing::Size(126, 177);
			this->btn_Generacion_OrdenarPokemones->TabIndex = 2;
			this->btn_Generacion_OrdenarPokemones->Text = L"Ordenar Pokemones";
			this->btn_Generacion_OrdenarPokemones->UseVisualStyleBackColor = true;
			// 
			// lbx_Generacion_Ordenados
			// 
			this->lbx_Generacion_Ordenados->FormattingEnabled = true;
			this->lbx_Generacion_Ordenados->Location = System::Drawing::Point(162, 7);
			this->lbx_Generacion_Ordenados->Name = L"lbx_Generacion_Ordenados";
			this->lbx_Generacion_Ordenados->Size = System::Drawing::Size(138, 251);
			this->lbx_Generacion_Ordenados->TabIndex = 1;
			// 
			// lbx_Generacion_Desordenados
			// 
			this->lbx_Generacion_Desordenados->FormattingEnabled = true;
			this->lbx_Generacion_Desordenados->Location = System::Drawing::Point(7, 7);
			this->lbx_Generacion_Desordenados->Name = L"lbx_Generacion_Desordenados";
			this->lbx_Generacion_Desordenados->Size = System::Drawing::Size(138, 251);
			this->lbx_Generacion_Desordenados->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Goldenrod;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Aqua;
			this->label2->Location = System::Drawing::Point(152, 11);
			this->label2->Margin = System::Windows::Forms::Padding(2, 2, 2, 5);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(161, 41);
			this->label2->TabIndex = 2;
			this->label2->Text = L"POKÉDEX";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(485, 381);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"POKEDEX";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



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

	private: System::Void btn_NatNum_CargarPokemones_Click(System::Object^ sender, System::EventArgs^ e) {

		ifstream archivo(Nombre_Archivo);
		string NatNum, Name, Gen;
		string linea;
		char limite = ',';
		int contador = 0;

		int opcion = cmbx_NatNum_Ordenamientos->SelectedIndex;

		switch (opcion)
		{
		case 0:
		{

			double VecNationalNumber[80];
			string VecName[80];
			double VecGen[80];

			while (getline(archivo, linea)) {
				stringstream stream(linea);
				getline(stream, NatNum, limite);
				getline(stream, Name, limite);
				getline(stream, Gen, limite);

				lbx_NatNum_Desordenados->Items->Add(ToSystemString(NatNum) + ", " + ToSystemString(Name) + ", " + ToSystemString(Gen));


			}
			archivo.close();

		}break;

		case 1:
		{

		}break;

		case 2:
		{

		}break;

		default:
		{
			MessageBox::Show("Seleccione una opción correcta");
		}
			break;
		}

	}
};
}
