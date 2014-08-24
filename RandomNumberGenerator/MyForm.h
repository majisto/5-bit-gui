#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <msclr/marshal.h>
FILE *input;
int number_of_chars = 0;
namespace RandomNumberGenerator 
{
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(167, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(208, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(250, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(290, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(334, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(379, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(188, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(293, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(11, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(122, 177);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Title = L"Select a file to encrypt";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(170, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Encrypt File";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::openfile_click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(306, 133);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Decrypt File";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::decryptfile_click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(451, 228);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Encryptor";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int num[7] = { 0 };

		// seed
		srand((int) time(0));

		// Randomize the array values.
		for (int i = 0; i < 6; i++) 
			num[i] = (rand() % 99) + 1;

		// set the label text with random number
		this->label1->Text = Convert::ToString(num[0]);
		this->label2->Text = Convert::ToString(num[1]);
		this->label3->Text = Convert::ToString(num[2]);
		this->label4->Text = Convert::ToString(num[3]);
		this->label5->Text = Convert::ToString(num[4]);
		this->label6->Text = Convert::ToString(num[5]);

		// change the button states.
		this->button1->Enabled = false;
		this->button2->Enabled = true;
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->label1->Text = "0";
			 this->label2->Text = "0";
			 this->label3->Text = "0";
			 this->label4->Text = "0";
			 this->label5->Text = "0";
			 this->label6->Text = "0";

			 this->button1->Enabled = true;
			 this->button2->Enabled = false;
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void openfile_click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 using namespace std;
			 using namespace System::IO;
			 using namespace msclr::interop;
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				String^ t = openFileDialog1->FileName + ".5b";
				marshal_context ^ context = gcnew marshal_context();
				const char* str4 = context->marshal_as<const char*>(t);
				std::ofstream fout (str4, ios_base::binary);
				delete context;
				FileStream^ fs = gcnew FileStream(openFileDialog1->FileName, System::IO::FileMode::Open, System::IO::FileAccess::Read);
				BinaryReader^ r = gcnew BinaryReader(fs);
				int c; //Chararacter from file currently being read
				char encoded; //Char to print A-Z or 0-5
				int fivebits; //Five bits to send to encoder
				int buffer = 0;
				int count = 0; //Number of bits in buffer
				int char_in_line = 0; //Number of characters on current line.
				while (true)
				{
					try {c = r->ReadByte();}
					catch (...) {break;}
					//if (c == 0x0D)
					//	continue;
					buffer = buffer << 8;
					buffer = buffer | c;
					count += 8;
					while (count >= 5)
					{
						char_in_line++;
						fivebits = buffer & (0x1F<<(count-5));
						fivebits = fivebits >> (count - 5);
						buffer = buffer << (32 - (count - 5));
						buffer = logicalShift(buffer, (32 - (count - 5)));
						count -= 5;
						turn_bits (fivebits, &encoded); //Sending memory address and changing pointer
						fout.put(encoded);
						if (char_in_line > 71) //New line every 72 characters per line.
						{
							char_in_line = 0;
							fout.put('\n');
						}
					}
				}
				if (count > 0)
				{
					buffer = buffer << (5-count);
					fivebits = buffer & 0x1F;
					turn_bits(fivebits, &encoded);
					fout << (encoded);
					fout.put('\n');
				}
				if (char_in_line > 60)
					fout.put('\n');
				 fs->Close();
				 fout.close();
			 }
		 }

int logicalShift(int x, int n) 
{
  int mask, positive, shift, sign;
  mask = 1<<31; /*Mask largest negative number of word size.*/
  positive = (~mask) & x; /*Gives x if positive.*/
  shift = positive>>n; /*Dividing by n. x/n.*/
  sign = mask & x; /*10...0 & x -> Sign bit of x.*/
  sign = sign >> 31;
  return ((sign &(1<<(31+(~n+1))))|shift);
}

void turn_bits (int fivebits, char *s)
{
	if (fivebits < 26) //Anything less than 26 will give a letter
	{		
		*s = (fivebits + 'A');
		return;
	}
	else if (fivebits < 32) 
	{
		*s = (fivebits + '0'-26);
		return;
	}
	else //This should never run hopefully!
		*s = '9';
}

void bit_to_original (int bits, char *s)
{
	if ((bits < 0x5B) && (bits > 0x40))
	{
		*s = (bits - 'A');
	}
	else
	{
		*s = (bits - 22);
	}
}


private: System::Void decryptfile_click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 using namespace System::IO;
			 using namespace msclr::interop;
			 using namespace std;
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 { 
				String^ t = openFileDialog1->FileName;
				String ^s = t->Replace(".5b","");
				array<Char>^chars = {'/', '\\'};
				array<String^>^split = s->Split( chars );
				String^ a = split[split->Length - 1];
				String^ b = a->Insert(0,"decrypted_");
				marshal_context ^ context = gcnew marshal_context();
				const char* str4 = context->marshal_as<const char*>(b);
				std::ofstream fout (str4, ios_base::binary);
				delete context;
				//std::ofstream fout ("whee", ios_base::binary);
				System::IO::StreamReader ^ sr = gcnew
					System::IO::StreamReader(openFileDialog1->FileName);
				int buffer = 0;
				int eightbits = 0;
				int c = 0; 
				int count = 0;
				char decoded = 0;
				while ((c = sr->Read()) != EOF)
				{
					if ((c > 0x40 && c < 0x5B) || (c > 0x2F && c < 0x36))
					{
						bit_to_original(c,&decoded);
						buffer = (buffer << 5) | (decoded);
						count += 5;
						while (count >= 8)
						{
							eightbits = buffer & (0xFF << (count - 8));
							eightbits = eightbits >> (count - 8);
							count -= 8;
							buffer = buffer << (32 - (count - 8));
							buffer = logicalShift(buffer, (32 - (count - 8)));
							fout.put((eightbits & 0xFF));
						}
					}
				}
				fout.close();
				sr->Close();
			 }
		 }
};
}