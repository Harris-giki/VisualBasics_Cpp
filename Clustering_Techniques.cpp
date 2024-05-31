#pragma once
#include<cmath>
#include<fstream>
#include<stdlib.h>
#include<ctime>
#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			pictureBox2->SizeMode = PictureBoxSizeMode::Zoom;
			pictureBox2->Image = Image::FromFile("giki.png");
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::DirectoryServices::DirectoryEntry^ directoryEntry1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private:
	
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(860, 345);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(339, 89);
			this->button1->TabIndex = 0;
			this->button1->Text = L"LOAD DATA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1277, 345);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(339, 89);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CO-RELATION MATRIX";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(484, 470);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(339, 89);
			this->button3->TabIndex = 2;
			this->button3->Text = L"DISCRETIZE DATA";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(860, 470);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(339, 89);
			this->button4->TabIndex = 3;
			this->button4->Text = L"DISPLAY DISCRETE BITMAP";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(806, 728);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(966, 484);
			this->listBox1->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox1->Location = System::Drawing::Point(1153, 841);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(291, 322);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->pictureBox1->Resize += gcnew System::EventHandler(this, &Form1::Form1_Load);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1277, 470);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(339, 89);
			this->button5->TabIndex = 6;
			this->button5->Text = L"DISPLAY GREEN BITMAP";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click_1);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1668, 470);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(339, 89);
			this->button6->TabIndex = 7;
			this->button6->Text = L"PERMUTIZE DATA";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MidnightBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(423, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1598, 41);
			this->label1->TabIndex = 8;
			this->label1->Text = L"GHULAM ISHAQ KHAN INSTITUTE OF ENGINEERING SCIENCE AND TECHNOLOGY - GIKI";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(1110, 566);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(340, 88);
			this->button8->TabIndex = 0;
			this->button8->Text = L"SIGNATURE MATRIX";
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(727, 566);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(339, 88);
			this->button7->TabIndex = 9;
			this->button7->Text = L"PERMUTIZED BITMAP";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(1501, 566);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(310, 88);
			this->button9->TabIndex = 10;
			this->button9->Text = L"SIGNATURE MATRIX BITMAP";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(828, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(874, 46);
			this->label2->TabIndex = 11;
			this->label2->Text = L"CS-112 THEORY - SEMESTER\'S FINAL PROJECT";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1898, 1071);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(246, 81);
			this->button10->TabIndex = 12;
			this->button10->Text = L"CLOSE PROGRAM";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox1->Location = System::Drawing::Point(1857, 1040);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(318, 21);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"ARE YOU HAPPY WITH OUR PROJECT";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Stencil", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1898, 1160);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 26);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(737, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1048, 34);
			this->label3->TabIndex = 15;
			this->label3->Text = L"A PROJECT BY: MUHAMMAD HARIS (2023428) AND MUMTAZ ALI (2023559)";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(45, 108);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(302, 310);
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label4->Location = System::Drawing::Point(380, 736);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 69);
			this->label4->TabIndex = 17;
			this->label4->Text = L"+";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->label5->Location = System::Drawing::Point(281, 718);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 91);
			this->label5->TabIndex = 18;
			this->label5->Text = L"-";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1924, 1050);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		array<array<double>^>^ finalSignMatrix;
		array<array<double>^>^ loadData() {
			StreamReader^ sr = File::OpenText("abc.txt");
			int eq = int::Parse(sr->ReadLine());
			int var = int::Parse(sr->ReadLine());
			array<array<double>^>^ arr = gcnew array<array<double>^>(eq);
			for (int i = 0; i < eq; ++i)
				arr[i] = gcnew array<double>(var);
			array<array<double>^>^ arra = gcnew array<array<double>^>(var);
			for (int i = 0; i < var; ++i)
				arra[i] = gcnew array<double>(eq);

			String^ lineo = sr->ReadLine();
			while (lineo != nullptr)
			{
				lineo = sr->ReadLine();
			}
			sr->Close();

			StreamReader^ sa = File::OpenText("abc.txt");

			String^ dummy1 = sa->ReadLine();
			String^ dummy2 = sa->ReadLine();
			sa->ReadLine();
			String^ line;
			for (int row = 0; row < eq; ++row)
			{
				line = sa->ReadLine();
				if (line != nullptr) // Checking if line is not null before splitting
				{
					array<String^>^ numbers = line->Split('\t');
					for (int col = 0; col < var; ++col)
					{
						arr[row][col] = double::Parse(numbers[col]);
						arra[col][row] = arr[row][col];
					}
				}
			}
			return arr;
		}

		array<array<double>^>^ CalculateCorrelationMatrix(array<array<double>^>^ arr) {
			int rows = arr->Length;
			int cols = arr[0]->Length;

			array<array<double>^>^ correlationMatrix = gcnew array<array<double>^>(rows);
			for (int i = 0; i < rows; i++)
				correlationMatrix[i] = gcnew array<double>(rows);


			for (int i = 0; i < rows; i++) {
				for (int j = i; j < rows; j++) {
					double sumX = 0.0;
					double sumY = 0.0;
					for (int k = 0; k < cols; k++) {
						sumX += arr[i][k];
						sumY += arr[j][k];
					}
					double meanX = sumX / cols;
					double meanY = sumY / cols;
					double meanXsum = 0;
					double meanYsum = 0;
					for (int k = 0; k < cols; k++) {
						meanXsum += pow((arr[i][k] - meanX), 2);
						meanYsum += pow((arr[j][k] - meanY), 2);
					}
					double numerator = 0;
					for (int k = 0; k < cols; k++) {
						numerator += (arr[i][k] - meanX) * (arr[j][k] - meanY);
					}
					double denominator = sqrt((meanXsum) * (meanYsum));
					correlationMatrix[i][j] = numerator / denominator;
					correlationMatrix[j][i] = correlationMatrix[i][j]; // symmetric matrix
					
					
				}
			}
			for (int i = 0; i < rows; i++) {
				String^ rowString = "";
				for (int j = 0; j < rows; j++) {

	//(Wrong comment)				// Access elements of finalSignMatrix using single indexing
					rowString += correlationMatrix[i][j].ToString() + "\t";
				}
				listBox1->Items->Add(rowString);
			}
			return correlationMatrix;
		}
		// Function to discretize the correlation matrix and display the result
		void DiscretizeAndDisplay(array<array<double>^>^ correlationMatrix, bool displayBitmap) {
			int rows = correlationMatrix->Length;
			array<array<int>^>^ discretizedMatrix = gcnew array<array<int>^>(rows);

			for (int i = 0; i < rows; i++) {
				discretizedMatrix[i] = gcnew array<int>(rows); // Initialize each row before assigning values
			}

			for (int i = 0; i < rows; i++) {
				double sum = 0;
				for (int j = 0; j < rows; j++) {
					sum += correlationMatrix[i][j];
				}
				double mean = sum / rows;
				for (int j = i; j < rows; j++) {
					if (correlationMatrix[i][j] >= mean)
						discretizedMatrix[i][j] = 1;
					else
						discretizedMatrix[i][j] = 0;
					// Since it's a symmetric matrix, set the corresponding element too
					discretizedMatrix[j][i] = discretizedMatrix[i][j];
				}
			}

			if (displayBitmap) {
				// Display the bitmap
				System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(rows, rows);
				System::Drawing::Color c;
				for (int i = 0; i < rows; i++) {
					for (int j = i; j < rows; j++) {
						c = (discretizedMatrix[i][j] == 1) ? System::Drawing::Color::Black : System::Drawing::Color::White;
						b->SetPixel(i, j, c);
						b->SetPixel(j, i, c);
					}
				}
				pictureBox1->Image = b;
			}
			else {
				// Display the discretized data in the list box
				listBox1->Items->Clear();
				for (int i = 0; i < rows; i++) {
					String^ row = "";
					for (int j = 0; j < rows; j++) {
						row += discretizedMatrix[i][j] + "\t";
					}
					listBox1->Items->Add(row);
				}
			}
		}
		void Discretize(array<array<double>^>^ correlationMatrix, bool displayBitmap) {
			int rows = correlationMatrix->Length;
			array<array<int>^>^ discretizedMatrix = gcnew array<array<int>^>(rows);

			for (int i = 0; i < rows; i++) {
				discretizedMatrix[i] = gcnew array<int>(rows); // Initialize each row before assigning values
			}

			for (int i = 0; i < rows; i++) {
				double sum = 0;
				for (int j = 0; j < rows; j++) {
					sum += correlationMatrix[i][j];
				}
				double mean = sum / rows;
				for (int j = i; j < rows; j++) {
					if (correlationMatrix[i][j] >= mean)
						discretizedMatrix[i][j] = 1;
					else
						discretizedMatrix[i][j] = 0;
					// Since it's a symmetric matrix, set the corresponding element too
					discretizedMatrix[j][i] = discretizedMatrix[i][j];
				}
			}

			// Display the discretized data in listBox1
			listBox1->Items->Clear();
			for (int i = 0; i < rows; i++) {
				String^ row = "";
				for (int j = 0; j < rows; j++) {
					row += discretizedMatrix[i][j] + "\t";
				}
				listBox1->Items->Add(row);
			}
		}

		void DisplayGreenBitmap(array<array<double>^>^ correlationMatrix) {
			int rows = correlationMatrix->Length;
			int cols = correlationMatrix[0]->Length;

			// Find the maximum correlation value for scaling
			double max = correlationMatrix[0][0];
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < rows; j++) {
					if (correlationMatrix[i][j] > max)
						max = correlationMatrix[i][j];
				}
			}

			// Create the bitmap
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(rows, rows);
			System::Drawing::Color c;

			// Set pixel colors based on correlation values
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < rows; j++) {
					int green = (int)((correlationMatrix[i][j] / max) * 255); // Scale the correlation value to the range [0, 255]
					green = Math::Min(Math::Max(green, 0), 255); // Ensure that green stays within the valid range
					c = System::Drawing::Color::FromArgb(0, green, 0);
					b->SetPixel(i, j, c);
				}
			}

			// Display the bitmap
			pictureBox1->Image = b;
		}
		void DisplayBlackWhiteBitmap(array<array<double>^>^ correlationMatrix) {
			int rows = correlationMatrix->Length;

			// Create the bitmap
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(rows, rows);
			System::Drawing::Color c;
			// Find the mean of each row
			double mean=0;
			double sum=0.0;
			for (int i = 0; i < rows; i++) {
				sum = 0.0;
				for (int j = 0; j < rows; j++) {
					sum += correlationMatrix[i][j];
				}
				mean = sum / rows;
			// Set pixel colors based on correlation values
				for (int j = 0; j < rows; j++) {
					if(correlationMatrix[i][j]>=mean)
						c = System::Drawing::Color::Black;
					else
						c = System::Drawing::Color::White;
					b->SetPixel(i, j, c);
				}
			}

			// Display the bitmap
			pictureBox1->Image = b;
		}


		void DisplayDataset(array<array<double>^>^ dataset) {
			int rows = dataset->Length;
			int cols = dataset[0]->Length;

			// Clear the listBox1 before adding new data
			listBox1->Items->Clear();

			for (int i = 0; i < rows; i++) {
				String^ row = "";
				for (int j = 0; j < cols; j++) {
					row += dataset[i][j] + "\t";
				}
				// Add each row to listBox1
				listBox1->Items->Add(row);
			}
		}

		array<array<double>^>^ ShuffleDataset(array<array<double>^>^ arr) {
			int rows = arr->Length;
			int cols = arr[0]->Length;

			// Create a copy of the dataset
			array<array<double>^>^ copy = gcnew array<array<double>^>(rows);
			for (int i = 0; i < rows; i++) {
				copy[i] = gcnew array<double>(cols);
				for (int j = 0; j < cols; j++) {
					copy[i][j] = arr[i][j];
				}
			}

			// Shuffle the dataset using Fisher-Yates shuffle to ensure no repition of rows already shuffled
			srand(time(NULL));

			for (int i = rows - 1; i > 0; i--) {
				int j = rand() % (i + 1);  // Generate a random index between 0 and i
				array<double>^ tempRow = copy[i];
				copy[i] = copy[j];
				copy[j] = tempRow;
			}

			return copy;
		}



			void DisplaySignGBP(array<array<double>^> ^ SigncorrelationMatrix) {
				int rows = SigncorrelationMatrix->Length;

				// Find the maximum correlation value for scaling
				double max = SigncorrelationMatrix[0][0];
				for (int i = 0; i < rows; i++) {
					for (int j = i; j < rows; j++) { // Only consider the upper triangle of the correlation matrix
						if (SigncorrelationMatrix[i][j] > max)
							max = SigncorrelationMatrix[i][j];
					}
				}

				// Create the bitmap
				System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(rows, rows);
				System::Drawing::Color c;

				// Set pixel colors based on correlation values
				for (int i = 0; i < rows; i++) {
					for (int j = i; j < rows; j++) {
						int green = (int)((abs(SigncorrelationMatrix[i][j]) / max) * 255); // Scale the correlation value to the range [0, 255]
						c = System::Drawing::Color::FromArgb(0, green, 0);
						b->SetPixel(i, j, c);
						b->SetPixel(j, i, c); // Set the corresponding element in the lower triangle of the bitmap
					}
				}

				// Display the bitmap
				pictureBox1->Image = b;
			}


		// Function to sort the original 2D array based on the sorted 1D signature matrix
		array<array<double>^>^ SortArray(array<array<double>^>^ originalArray, array<double>^ sortedSignatures) {
			int rows = originalArray->Length;
			int cols = (rows > 0) ? originalArray[0]->Length : 0;
			for (int i = 0; i < rows - 1; i++) {
				bool swapped = false;
				for (int j = 0; j < rows - i - 1; j++) {
					if (sortedSignatures[j] > sortedSignatures[j + 1]) {
						// Swap signatures
						double tempSignature = sortedSignatures[j];
						sortedSignatures[j] = sortedSignatures[j + 1];
						sortedSignatures[j + 1] = tempSignature;

						// Swap corresponding rows in the original array
						array<double>^ tempRow = gcnew array<double>(cols);
				
						for (int k = 0; k < cols; k++)
						{
							 tempRow[k]= originalArray[j][k];
							 originalArray[j][k] = originalArray[j + 1][k];
							originalArray[j+1][k] = tempRow[k];
						}

						swapped = true;
					}
				}
				// If no two elements were swapped in the inner loop, then the array is sorted
				if (!swapped) {
					break;
				}
			}

			return originalArray;
		}




#pragma endregion
		
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Controls->Remove(pictureBox1);


		listBox1->Items->Clear(); 
	
			StreamReader^ sr = File::OpenText("abc.txt");
			int eq = int::Parse(sr->ReadLine());
			int var = int::Parse(sr->ReadLine());

			listBox1->Items->Clear(); // Clear the list box before displaying new content

			String^ line;
			while ((line = sr->ReadLine()) != nullptr)
			{
				listBox1->Items->Add(line);
			}
			sr->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Controls->Remove(pictureBox1);
		listBox1->Items->Clear();
		array<array<double>^>^ arr = loadData();
		CalculateCorrelationMatrix(arr);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		array<array<double>^>^ arr = loadData();
		array<array<double>^>^ correlationMatrix = CalculateCorrelationMatrix(arr);

		// Discretize and display the correlation matrix in the list box
		Discretize(correlationMatrix, false);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Controls->Add(pictureBox1);

		this->Controls->Remove(listBox1);
		array<array<double>^>^ arr = loadData();
		array<array<double>^>^ correlationMatrix = CalculateCorrelationMatrix(arr);

		// Discretize and display the bitmap
		DiscretizeAndDisplay(correlationMatrix, true);
	}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		array<array<double>^>^ arr = loadData();
		array<array<double>^>^ correlationMatrix = CalculateCorrelationMatrix(arr);

		// Display the green bitmap
		DisplayGreenBitmap(correlationMatrix);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Controls->Add(listBox1);
		this->Controls->Remove(pictureBox1);

		// Load data
		array<array<double>^>^ arr = loadData();
		int rows = arr->Length;
		int cols = arr[0]->Length;

		// Create a copy of the dataset
		array<array<double>^>^ copy = ShuffleDataset(arr);
		DisplayDataset(copy);
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->Controls->Add(pictureBox1);

	this->Controls->Remove(listBox1);
	// Load data
	array<array<double>^>^ arr = loadData();
	int rows = arr->Length;
	int cols = arr[0]->Length;

	// Create a copy of the dataset
	array<array<double>^>^ copy = ShuffleDataset(arr);
	DisplayDataset(copy);
	// Calculate the correlation matrix of the shuffled dataset
	array<array<double>^>^ correlationMatrix = CalculateCorrelationMatrix(copy);
	// Display the green bitmap
	DisplayBlackWhiteBitmap(correlationMatrix);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Controls->Add(listBox1);
	this->Controls->Remove(pictureBox1);

	// Load data
	array<array<double>^>^ arr = loadData();
	int rows = arr->Length;
	int cols = (rows > 0) ? arr[0]->Length : 0;

	// Check if the number of rows and columns is valid
	if (rows <= 0 || cols <= 0) {
		MessageBox::Show("Error: Invalid dataset.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Create a copy of the dataset
	array<array<double>^>^ copy = ShuffleDataset(arr);
	
	// Recover the image clusters using the Signature technique
	// Declare sum and mean arrays with sizes
	double* sum = new double[rows];
	double* mean = new double[rows];
	for (int i = 0; i < rows; i++) {
		sum[i] = 0.0;
		mean[i] = 0.0;
	}

	array<double>^ signatures = gcnew array<double>(rows);

	// Calculate sum of values in each row and store it in the sum array
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum[i] += copy[i][j];
		}
	}

	// Calculate mean of each row
	for (int i = 0; i < rows; i++) {
		mean[i] = sum[i] / cols;
	}

	// Multiply the sum of each row with its mean to produce a signature for each row
	for (int i = 0; i < rows; i++) {
		signatures[i] = sum[i] * mean[i];
	}

	
	array<array<double>^>^ sortedCopy = SortArray(copy, signatures);
	// Sort the signature matrix and update the original array accordingly
	finalSignMatrix = CalculateCorrelationMatrix(sortedCopy);
	listBox1->Items->Clear();
	for (int i = 0; i < rows; i++) {
		String^ rowString = "";
		for (int j = 0; j < rows; j++) {
			// Access elements of finalSignMatrix using single indexing
			rowString += finalSignMatrix[i][j].ToString() + "\t";
		}
		listBox1->Items->Add(rowString);
	}

	// Display the final result
	DisplaySignGBP(finalSignMatrix);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Controls->Add(pictureBox1);
	this->Controls->Remove(listBox1);
	// Display the final result
	DisplaySignGBP(finalSignMatrix);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if the checkbox is checked
	if (!checkBox1->Checked) {
		// Show a message in the textbox
		textBox1->Text = "ARE YOU NOT HAPPY :(";

		// Loop until the checkbox is checked
		while (!checkBox1->Checked) {
			Application::DoEvents(); // Allow the application to handle other events
		}
	}
	else {
		// Show a message in the textbox
		textBox1->Text = "THANK YOU :)";

		// Close the form and exit the program
		this->Close();
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBox1->Checked) {
		// Show a message in the textbox
		textBox1->Text = "ARE YOU NOT HAPPY :( ";

		// Loop until the checkbox is checked
		while (!checkBox1->Checked) {
			Application::DoEvents(); // Allow the application to handle other events
		}
	}
	else {
		// Show a message in the textbox
		textBox1->Text = "THANK YOU :) ";
	}
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Height *= 1.2;
	pictureBox1->Width *= 1.2;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Height *= 0.833333;
	pictureBox1->Width *= 0.833333;
}
};
}
