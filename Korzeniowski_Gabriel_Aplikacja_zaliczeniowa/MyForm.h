#pragma once

namespace KorzeniowskiGabrielAplikacjazaliczeniowa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Windows::Forms;
	using namespace System::Windows::Forms::DataVisualization::Charting;





	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			reportLines = gcnew List<String^>();
			headerAdded = false;
			results = gcnew Dictionary<int, Tuple<double, double>^>();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::TextBox^ textBox4;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::CheckedListBox^ checkedListBox1;
		System::Windows::Forms::Button^ button4;

		List<String^>^ reportLines;
		bool headerAdded;
		Dictionary<int, Tuple<double, double>^>^ results; 
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszRaportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ opcjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zmieñCzcionkêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zmieñMotywToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zakoñczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ poka¿WykresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oAutorzeToolStripMenuItem;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszRaportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zmieñCzcionkêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zmieñMotywToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->poka¿WykresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Kierunek wiatru [°] (sk¹d wieje)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Prêdkoœæ wiatru [kt]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Prêdkoœæ podró¿na TAS [kt]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Kierunek kursu [°]";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(30, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(30, 190);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 22);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(30, 250);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 22);
			this->textBox4->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(120, 300);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(2);
			this->button1->Size = System::Drawing::Size(90, 40);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Oblicz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(360, 300);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(2);
			this->button2->Size = System::Drawing::Size(90, 40);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Wyczyœæ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(480, 300);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(2);
			this->button3->Size = System::Drawing::Size(90, 40);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Raport";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(325, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"WYNIK:";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(325, 85);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(300, 174);
			this->checkedListBox1->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(240, 300);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(2);
			this->button4->Size = System::Drawing::Size(90, 40);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Nastêpny";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->plikToolStripMenuItem,
					this->opcjeToolStripMenuItem, this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(702, 28);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zapiszRaportToolStripMenuItem,
					this->zakoñczToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// zapiszRaportToolStripMenuItem
			// 
			this->zapiszRaportToolStripMenuItem->Name = L"zapiszRaportToolStripMenuItem";
			this->zapiszRaportToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->zapiszRaportToolStripMenuItem->Text = L"Zapisz raport";
			this->zapiszRaportToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zapiszRaportToolStripMenuItem_Click);
			// 
			// zakoñczToolStripMenuItem
			// 
			this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
			this->zakoñczToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->zakoñczToolStripMenuItem->Text = L"Zakoñcz";
			this->zakoñczToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zakoñczToolStripMenuItem_Click);
			// 
			// opcjeToolStripMenuItem
			// 
			this->opcjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zmieñCzcionkêToolStripMenuItem,
					this->zmieñMotywToolStripMenuItem
			});
			this->opcjeToolStripMenuItem->Name = L"opcjeToolStripMenuItem";
			this->opcjeToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->opcjeToolStripMenuItem->Text = L"Opcje";
			// 
			// zmieñCzcionkêToolStripMenuItem
			// 
			this->zmieñCzcionkêToolStripMenuItem->Name = L"zmieñCzcionkêToolStripMenuItem";
			this->zmieñCzcionkêToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->zmieñCzcionkêToolStripMenuItem->Text = L"Zmieñ czcionkê";
			this->zmieñCzcionkêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zmieñCzcionkêToolStripMenuItem_Click);
			// 
			// zmieñMotywToolStripMenuItem
			// 
			this->zmieñMotywToolStripMenuItem->Name = L"zmieñMotywToolStripMenuItem";
			this->zmieñMotywToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->zmieñMotywToolStripMenuItem->Text = L"Zmieñ motyw";
			this->zmieñMotywToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zmieñMotywToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->poka¿WykresToolStripMenuItem });
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// poka¿WykresToolStripMenuItem
			// 
			this->poka¿WykresToolStripMenuItem->Name = L"poka¿WykresToolStripMenuItem";
			this->poka¿WykresToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->poka¿WykresToolStripMenuItem->Text = L"Poka¿ wykres";
			this->poka¿WykresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::poka¿WykresToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oAutorzeToolStripMenuItem });
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(68, 24);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->oAutorzeToolStripMenuItem->Text = L"O autorze";
			this->oAutorzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oAutorzeToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 373);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Kalkulator sk³adowych wiatru";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		double DegToRad(double deg) { return deg * Math::PI / 180.0; }
		double RadToDeg(double rad) { return rad * 180.0 / Math::PI; }

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double windDir, windSpeed, tas, course;
		try {
			windDir = Double::Parse(textBox1->Text);
			windSpeed = Double::Parse(textBox2->Text);
			tas = Double::Parse(textBox3->Text);
			course = Double::Parse(textBox4->Text);
		}
		catch (...) {
			MessageBox::Show("WprowadŸ poprawne wartoœci liczbowe!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		double alphaRad = Math::Asin((windSpeed * Math::Sin(DegToRad(windDir - course))) / tas);
		double alphaDeg = RadToDeg(alphaRad);
		double trueCourse = course + alphaDeg;
		double GS = Math::Sqrt(tas * tas + windSpeed * windSpeed +
			2 * tas * windSpeed * Math::Cos(DegToRad(windDir - course)));

		int index = results->Count + 1;
		results->Add(index, gcnew Tuple<double, double>(alphaDeg, GS));

		checkedListBox1->Items->Clear();
		checkedListBox1->Items->Add("Kierunek wiatru: " + windDir.ToString("F1") + "°");
		checkedListBox1->Items->Add("Prêdkoœæ wiatru: " + windSpeed.ToString("F2") + " kt");
		checkedListBox1->Items->Add("Prêdkoœæ podró¿na TAS: " + tas.ToString("F2") + " kt");
		checkedListBox1->Items->Add("=========================");
		checkedListBox1->Items->Add("Kurs geograficzny: " + course.ToString("F1") + "°");
		checkedListBox1->Items->Add("K¹t znoszenia: " + alphaDeg.ToString("F2") + "°");
		checkedListBox1->Items->Add("Kurs rzeczywisty: " + trueCourse.ToString("F2") + "°");
		checkedListBox1->Items->Add("Prêdkoœæ wzglêdem ziemi (GS): " + GS.ToString("F2") + " kt");
	
		if (!headerAdded && checkedListBox1->Items->Count >= 4) {
			for (int i = 0; i < 4; i++) {
				reportLines->Add(checkedListBox1->Items[i]->ToString());
			}
			reportLines->Add("=========================");
			headerAdded = true;
		}
		for (int i = 4; i < checkedListBox1->Items->Count; i++) {
			reportLines->Add(checkedListBox1->Items[i]->ToString());
		}
		reportLines->Add("------------------------------");
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		checkedListBox1->Items->Clear();
		reportLines->Clear();
		headerAdded = false;
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox4->Clear();
		textBox4->Focus();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ reportForm = gcnew Form();
		reportForm->Text = "Raport zbiorczy";
		reportForm->Size = Drawing::Size(500, 400);
		RichTextBox^ reportBox = gcnew RichTextBox();
		reportBox->Dock = DockStyle::Fill;
		reportBox->ReadOnly = true;
		for each (String ^ line in reportLines) {
			reportBox->AppendText(line + "\n");
		}
		reportForm->Controls->Add(reportBox);
		reportForm->ShowDialog();
	}
	private: System::Void zakoñczToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void zapiszRaportToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ dlg = gcnew SaveFileDialog();
	dlg->Filter = "Pliki tekstowe|*.txt";
	dlg->Title = "Zapisz raport";

	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		TextWriter^ plik = File::CreateText(dlg->FileName);
		for each(String ^ line in reportLines) {
			plik->WriteLine(line);
		}
		plik->Close();

		MessageBox::Show("Raport zosta³ zapisany!", "Zapisano", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void zmieñCzcionkêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FontDialog^ fontDlg = gcnew FontDialog();
	if (fontDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		this->checkedListBox1->Font = fontDlg->Font;
	}
}
private: System::Void zmieñMotywToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDlg = gcnew ColorDialog();
	if (colorDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		this->BackColor = colorDlg->Color;
	}
}
private:
	Chart^ chart;
	Series^ series;
	RadioButton^ rbAlpha;
	RadioButton^ rbGS;

private:
	void AktualizujWykres(Chart^ chart, Series^ series, RadioButton^ rbAlpha, RadioButton^ rbGS)
	{
		series->Points->Clear();
		for each (KeyValuePair<int, Tuple<double, double>^> kvp in results)
		{
			double value = rbAlpha->Checked ? kvp.Value->Item1 : kvp.Value->Item2;
			series->Points->AddXY(kvp.Key, value);
		}
		series->Name = rbAlpha->Checked ? "K¹t znoszenia" : "Prêdkoœæ wzglêdem ziemi";
	}

private:
	System::Void OnRadioButtonChanged(System::Object^ sender, System::EventArgs^ e)
	{
		AktualizujWykres(chart, series, rbAlpha, rbGS);
	}

private:
	System::Void poka¿WykresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Form^ chartForm = gcnew Form();
		chartForm->Text = "Wykresy";
		chartForm->Size = Drawing::Size(500, 400);

		Panel^ topPanel = gcnew Panel();
		topPanel->Dock = DockStyle::Top;
		topPanel->Height = 80; 

		rbAlpha = gcnew RadioButton();
		rbAlpha->Text = "K¹t znoszenia";
		rbAlpha->AutoSize = true; 
		rbAlpha->Location = Drawing::Point(20, 10);
		rbAlpha->Checked = true;

		rbGS = gcnew RadioButton();
		rbGS->Text = "Prêdkoœæ wzglêdem ziemi";
		rbGS->AutoSize = true; 
		rbGS->Location = Drawing::Point(20, 40);

		topPanel->Controls->Add(rbAlpha);
		topPanel->Controls->Add(rbGS);

		chart = gcnew Chart();
		chart->Dock = DockStyle::Fill;

		ChartArea^ chartArea = gcnew ChartArea("ChartArea1");
		chart->ChartAreas->Add(chartArea);

		series = gcnew Series("Wartoœci");
		series->ChartType = SeriesChartType::Line;
		series->XValueType = ChartValueType::Int32;
		series->YValueType = ChartValueType::Double;
		chart->Series->Add(series);

		rbAlpha->CheckedChanged += gcnew EventHandler(this, &MyForm::OnRadioButtonChanged);
		rbGS->CheckedChanged += gcnew EventHandler(this, &MyForm::OnRadioButtonChanged);

		AktualizujWykres(chart, series, rbAlpha, rbGS);

		chartForm->Controls->Add(chart);
		chartForm->Controls->Add(topPanel);

		chartForm->ShowDialog();
	}

private: System::Void oAutorzeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ authorForm = gcnew Form();
	authorForm->Text = "O autorze";
	authorForm->Size = System::Drawing::Size(400, 300);

	PictureBox^ pic = gcnew PictureBox();
	pic->Image = Image::FromFile("autor.png");
	pic->SizeMode = PictureBoxSizeMode::StretchImage;
	pic->Dock = System::Windows::Forms::DockStyle::Top;
	pic->Height = 220;

	Label^ info = gcnew Label();
	info->Text = "Autor: Gabriel Korzeniowski\nKierunek: Transport\nSemestr: I";
	info->Dock = System::Windows::Forms::DockStyle::Fill;
	info->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

	authorForm->Controls->Add(info);
	authorForm->Controls->Add(pic);

	authorForm->ShowDialog();

}
};
}
