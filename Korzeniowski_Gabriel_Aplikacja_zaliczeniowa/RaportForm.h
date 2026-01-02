#pragma once

namespace KorzeniowskiGabrielAplikacjazaliczeniowa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormRaport : public System::Windows::Forms::Form
	{
	public:
		FormRaport(void)
		{
			InitializeComponent();
		}

	protected:
		~FormRaport()
		{
			if (components)
			{
				delete components;
			}
		}

	public:
		void AddRow(double course, double xWind, double yWind)
		{
			array<String^>^ row = gcnew array<String^>(3);
			row[0] = course.ToString("F1");
			row[1] = xWind.ToString("F2");
			row[2] = yWind.ToString("F2");
			dataGridView1->Rows->Add(row);
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->buttonBack = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnCount = 3;
			   this->dataGridView1->Columns[0]->Name = L"Kierunek lotu [°]";
			   this->dataGridView1->Columns[1]->Name = L"Sk³adowa X wiatru [kt]";
			   this->dataGridView1->Columns[2]->Name = L"Sk³adowa Y wiatru [kt]";
			   this->dataGridView1->Dock = DockStyle::Top;
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			   // 
			   // buttonBack
			   // 
			   this->buttonBack->Dock = DockStyle::Bottom;
			   this->buttonBack->Text = L"Powrót";
			   this->buttonBack->Click += gcnew System::EventHandler(this, &FormRaport::buttonBack_Click);
			   // 
			   // FormRaport
			   // 
			   this->ClientSize = System::Drawing::Size(500, 300);
			   this->Controls->Add(this->buttonBack);
			   this->Controls->Add(this->dataGridView1);
			   this->Text = L"Raport wyników";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
		   }
#pragma endregion

	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	};
}
