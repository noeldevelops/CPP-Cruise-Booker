//A. Noel Cothren
//acothren1@cnm.edu
//Program 5 - Alaskan Cruise

//MyForm.h

#pragma once
#include "Date.h"
#include "AlaskanCruise.h"
#include "UtilityFunctions.h"

namespace CothrenP5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ nudNumPassengers;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rb9Days;
	private: System::Windows::Forms::RadioButton^ rb7Days;
	private: System::Windows::Forms::NumericUpDown^ nudExcursions;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dtDeparture;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnMakeReservation;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtResults;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nudNumPassengers = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nudExcursions = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtDeparture = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rb9Days = (gcnew System::Windows::Forms::RadioButton());
			this->rb7Days = (gcnew System::Windows::Forms::RadioButton());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnMakeReservation = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtResults = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNumPassengers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudExcursions))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35.17442F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				64.82558F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				33)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				351)));
			this->tableLayoutPanel1->Controls->Add(this->txtName, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->nudNumPassengers, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->nudExcursions, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->dtDeparture, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->groupBox1, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->btnClear, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnMakeReservation, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->txtResults, 3, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(23, 171);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.8F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.2F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 81)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 159)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(840, 423);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// txtName
			// 
			this->txtName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtName->Location = System::Drawing::Point(164, 5);
			this->txtName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(287, 29);
			this->txtName->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Reservation Name";
			// 
			// nudNumPassengers
			// 
			this->nudNumPassengers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nudNumPassengers->Location = System::Drawing::Point(163, 64);
			this->nudNumPassengers->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->nudNumPassengers->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudNumPassengers->Name = L"nudNumPassengers";
			this->nudNumPassengers->Size = System::Drawing::Size(289, 29);
			this->nudNumPassengers->TabIndex = 2;
			this->nudNumPassengers->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->nudNumPassengers->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 42);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Number of Passengers";
			// 
			// nudExcursions
			// 
			this->nudExcursions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nudExcursions->Location = System::Drawing::Point(163, 128);
			this->nudExcursions->Name = L"nudExcursions";
			this->nudExcursions->Size = System::Drawing::Size(289, 29);
			this->nudExcursions->TabIndex = 5;
			this->nudExcursions->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 63);
			this->label3->TabIndex = 6;
			this->label3->Text = L"How many excursions\?\r\n$325 each";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 206);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 21);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Departure Date";
			// 
			// dtDeparture
			// 
			this->dtDeparture->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dtDeparture->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtDeparture->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtDeparture->Location = System::Drawing::Point(163, 209);
			this->dtDeparture->Name = L"dtDeparture";
			this->dtDeparture->Size = System::Drawing::Size(289, 25);
			this->dtDeparture->TabIndex = 8;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->rb9Days);
			this->groupBox1->Controls->Add(this->rb7Days);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Location = System::Drawing::Point(163, 266);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(289, 154);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select Cruise Length";
			// 
			// rb9Days
			// 
			this->rb9Days->AutoSize = true;
			this->rb9Days->Location = System::Drawing::Point(18, 59);
			this->rb9Days->Name = L"rb9Days";
			this->rb9Days->Size = System::Drawing::Size(228, 25);
			this->rb9Days->TabIndex = 1;
			this->rb9Days->TabStop = true;
			this->rb9Days->Text = L"9 Day Cruise $2,539/person";
			this->rb9Days->UseVisualStyleBackColor = true;
			// 
			// rb7Days
			// 
			this->rb7Days->AutoSize = true;
			this->rb7Days->Checked = true;
			this->rb7Days->Location = System::Drawing::Point(18, 28);
			this->rb7Days->Name = L"rb7Days";
			this->rb7Days->Size = System::Drawing::Size(225, 25);
			this->rb7Days->TabIndex = 0;
			this->rb7Days->TabStop = true;
			this->rb7Days->Text = L"7 Day Cruise $1,999/person";
			this->rb7Days->UseVisualStyleBackColor = true;
			// 
			// btnClear
			// 
			this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnClear->BackColor = System::Drawing::Color::Transparent;
			this->btnClear->FlatAppearance->BorderSize = 2;
			this->btnClear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->btnClear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Location = System::Drawing::Point(582, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(163, 55);
			this->btnClear->TabIndex = 9;
			this->btnClear->Text = L"Clear Form";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnMakeReservation
			// 
			this->btnMakeReservation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnMakeReservation->BackColor = System::Drawing::Color::PaleGreen;
			this->btnMakeReservation->FlatAppearance->BorderColor = System::Drawing::Color::MidnightBlue;
			this->btnMakeReservation->FlatAppearance->BorderSize = 2;
			this->btnMakeReservation->FlatAppearance->MouseDownBackColor = System::Drawing::Color::ForestGreen;
			this->btnMakeReservation->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LimeGreen;
			this->btnMakeReservation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMakeReservation->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMakeReservation->ForeColor = System::Drawing::Color::MidnightBlue;
			this->btnMakeReservation->Location = System::Drawing::Point(583, 64);
			this->btnMakeReservation->Name = L"btnMakeReservation";
			this->btnMakeReservation->Size = System::Drawing::Size(162, 58);
			this->btnMakeReservation->TabIndex = 10;
			this->btnMakeReservation->Text = L"Make Reservation";
			this->btnMakeReservation->UseVisualStyleBackColor = false;
			this->btnMakeReservation->Click += gcnew System::EventHandler(this, &MyForm::btnMakeReservation_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 160);
			this->label6->TabIndex = 12;
			this->label6->Text = L"The 7-day cruise  stops at the Twin Sawyer Glaciers, in Skagway, Juneau and Ketch"
				L"ikan, Alaska.  The 9-day cruise adds the ports of Sitka, and Prince Rupert.";
			// 
			// txtResults
			// 
			this->txtResults->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtResults->Location = System::Drawing::Point(491, 128);
			this->txtResults->Multiline = true;
			this->txtResults->Name = L"txtResults";
			this->tableLayoutPanel1->SetRowSpan(this->txtResults, 3);
			this->txtResults->Size = System::Drawing::Size(346, 292);
			this->txtResults->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(25, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(752, 84);
			this->label5->TabIndex = 2;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(27, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(766, 32);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Book exceptionally low fares, only on C++ Alaskan Cruise Lines!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(890, 617);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"A Cothren P5 Alaskan Cruise";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNumPassengers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudExcursions))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		txtName->Clear();
		txtResults->Clear();
		nudExcursions->Value = 0;
		nudNumPassengers->Value = 1;
		rb7Days->Checked = true;
		dtDeparture->Value = DateTime::Now;
	}
	private: System::Void btnMakeReservation_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//reservation name
		string resName;
		To_string(txtName->Text, resName);

		//number passengers
		int numPass = (int)nudNumPassengers->Value;

		//length of cruise
		int numDays{ 7 };
		if (!rb7Days->Checked) numDays = 9;

		//excursions
		int numExcursions = (int)nudExcursions->Value;

		//date of booking
		Date booking;
		booking.SetDesc("booking date");

		//date of departure
		int month = dtDeparture->Value.Month;
		int day = dtDeparture->Value.Day;
		int year = dtDeparture->Value.Year;
		Date departure{ month, day, year, "departure date" };

		//create object with overloaded constructor
		AlaskanCruise cruise{ resName, numPass, numDays, numExcursions, booking, departure };

		//print to results box
		txtResults->Text = gcnew String (cruise.ReservationDescription().c_str());

	}

};
}
