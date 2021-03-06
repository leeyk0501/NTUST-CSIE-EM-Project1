#pragma once
#include"DataManager.h"
#include"DotNetUitilities.h"
#include"HintForm.h"

namespace NTUSTCSIEEMProject1 {
	using namespace cli;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			dataManager = new DataManager();
			lastInputLength = -1;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}





















	protected:















	protected:

	private:
		/// <summary>
		DataManager* dataManager;
		String^ userInput;
		int lastInputLength;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  Input;
	private: System::Windows::Forms::Label^  InputLabel;
	private: System::Windows::Forms::ListBox^  VectorList;
	private: System::Windows::Forms::Label^  DataLabel;

	private: System::Windows::Forms::TextBox^  Output;
	private: System::Windows::Forms::Label^  OutputLabel;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  btnLoad;


	private: System::Windows::Forms::ToolStripButton^  btnHint;
	private: System::Windows::Forms::ToolStripButton^  btnClear;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::ToolStripButton^  btnReset;



















			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
			 /// 這個方法的內容。
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->Input = (gcnew System::Windows::Forms::TextBox());
				 this->InputLabel = (gcnew System::Windows::Forms::Label());
				 this->VectorList = (gcnew System::Windows::Forms::ListBox());
				 this->DataLabel = (gcnew System::Windows::Forms::Label());
				 this->Output = (gcnew System::Windows::Forms::TextBox());
				 this->OutputLabel = (gcnew System::Windows::Forms::Label());
				 this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
				 this->btnLoad = (gcnew System::Windows::Forms::ToolStripButton());
				 this->btnReset = (gcnew System::Windows::Forms::ToolStripButton());
				 this->btnClear = (gcnew System::Windows::Forms::ToolStripButton());
				 this->btnHint = (gcnew System::Windows::Forms::ToolStripButton());
				 this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->toolStrip1->SuspendLayout();
				 this->tableLayoutPanel1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->FileName = L"openFileDialog1";
				 this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
				 // 
				 // Input
				 // 
				 this->Input->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->Input->Location = System::Drawing::Point(3, 464);
				 this->Input->Multiline = true;
				 this->Input->Name = L"Input";
				 this->Input->ScrollBars = System::Windows::Forms::ScrollBars::Both;
				 this->Input->Size = System::Drawing::Size(779, 90);
				 this->Input->TabIndex = 10;
				 this->Input->TextChanged += gcnew System::EventHandler(this, &MyForm::Input_TextChanged);
				 // 
				 // InputLabel
				 // 
				 this->InputLabel->AutoSize = true;
				 this->InputLabel->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
				 this->InputLabel->Location = System::Drawing::Point(3, 444);
				 this->InputLabel->Name = L"InputLabel";
				 this->InputLabel->Size = System::Drawing::Size(41, 16);
				 this->InputLabel->TabIndex = 9;
				 this->InputLabel->Text = L"Input";
				 // 
				 // VectorList
				 // 
				 this->VectorList->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->VectorList->FormattingEnabled = true;
				 this->VectorList->ItemHeight = 12;
				 this->VectorList->Location = System::Drawing::Point(3, 352);
				 this->VectorList->Name = L"VectorList";
				 this->VectorList->Size = System::Drawing::Size(779, 89);
				 this->VectorList->TabIndex = 4;
				 // 
				 // DataLabel
				 // 
				 this->DataLabel->AutoSize = true;
				 this->DataLabel->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
				 this->DataLabel->Location = System::Drawing::Point(3, 332);
				 this->DataLabel->Name = L"DataLabel";
				 this->DataLabel->Size = System::Drawing::Size(36, 16);
				 this->DataLabel->TabIndex = 6;
				 this->DataLabel->Text = L"Data";
				 // 
				 // Output
				 // 
				 this->Output->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->Output->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->Output->Location = System::Drawing::Point(3, 50);
				 this->Output->Multiline = true;
				 this->Output->Name = L"Output";
				 this->Output->ReadOnly = true;
				 this->Output->ScrollBars = System::Windows::Forms::ScrollBars::Both;
				 this->Output->Size = System::Drawing::Size(779, 279);
				 this->Output->TabIndex = 2;
				 // 
				 // OutputLabel
				 // 
				 this->OutputLabel->AutoSize = true;
				 this->OutputLabel->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
				 this->OutputLabel->Location = System::Drawing::Point(3, 30);
				 this->OutputLabel->Name = L"OutputLabel";
				 this->OutputLabel->Size = System::Drawing::Size(52, 16);
				 this->OutputLabel->TabIndex = 5;
				 this->OutputLabel->Text = L"Output";
				 // 
				 // toolStrip1
				 // 
				 this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
				 this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					 this->btnLoad, this->btnReset,
						 this->btnClear, this->btnHint
				 });
				 this->toolStrip1->Location = System::Drawing::Point(0, 0);
				 this->toolStrip1->Name = L"toolStrip1";
				 this->toolStrip1->Size = System::Drawing::Size(785, 30);
				 this->toolStrip1->TabIndex = 5;
				 this->toolStrip1->Text = L"toolStrip1";
				 // 
				 // btnLoad
				 // 
				 this->btnLoad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLoad.Image")));
				 this->btnLoad->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->btnLoad->Name = L"btnLoad";
				 this->btnLoad->Size = System::Drawing::Size(64, 27);
				 this->btnLoad->Text = L"Load";
				 this->btnLoad->Click += gcnew System::EventHandler(this, &MyForm::btnLoad_Click);
				 // 
				 // btnReset
				 // 
				 this->btnReset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReset.Image")));
				 this->btnReset->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->btnReset->Name = L"btnReset";
				 this->btnReset->Size = System::Drawing::Size(66, 27);
				 this->btnReset->Text = L"Reset";
				 this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
				 // 
				 // btnClear
				 // 
				 this->btnClear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClear.Image")));
				 this->btnClear->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->btnClear->Name = L"btnClear";
				 this->btnClear->Size = System::Drawing::Size(64, 27);
				 this->btnClear->Text = L"Clear";
				 this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
				 // 
				 // btnHint
				 // 
				 this->btnHint->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHint.Image")));
				 this->btnHint->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->btnHint->Name = L"btnHint";
				 this->btnHint->Size = System::Drawing::Size(58, 27);
				 this->btnHint->Text = L"Hint";
				 this->btnHint->Click += gcnew System::EventHandler(this, &MyForm::btnHint_Click);
				 // 
				 // tableLayoutPanel1
				 // 
				 this->tableLayoutPanel1->ColumnCount = 1;
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 100)));
				 this->tableLayoutPanel1->Controls->Add(this->toolStrip1, 0, 0);
				 this->tableLayoutPanel1->Controls->Add(this->OutputLabel, 0, 1);
				 this->tableLayoutPanel1->Controls->Add(this->Output, 0, 2);
				 this->tableLayoutPanel1->Controls->Add(this->DataLabel, 0, 3);
				 this->tableLayoutPanel1->Controls->Add(this->VectorList, 0, 4);
				 this->tableLayoutPanel1->Controls->Add(this->InputLabel, 0, 5);
				 this->tableLayoutPanel1->Controls->Add(this->Input, 0, 6);
				 this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
				 this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
				 this->tableLayoutPanel1->RowCount = 7;
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 17)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 17)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 17)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
				 this->tableLayoutPanel1->Size = System::Drawing::Size(785, 557);
				 this->tableLayoutPanel1->TabIndex = 2;
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(785, 557);
				 this->Controls->Add(this->tableLayoutPanel1);
				 this->Name = L"MyForm";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"P1_G5_V1";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->toolStrip1->ResumeLayout(false);
				 this->toolStrip1->PerformLayout();
				 this->tableLayoutPanel1->ResumeLayout(false);
				 this->tableLayoutPanel1->PerformLayout();
				 this->ResumeLayout(false);

			 }
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	private: System::Void btnLoad_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//如果程式有資料，必先清空
		if (dataManager->GetStatus() != 0)
		{
			Output->Text += "-Clear previous data-" + Environment::NewLine;
			dataManager->Clear();
		}
		
		//開啟Dialog
		openFileDialog1->ShowDialog();
	}
	private: System::Void Input_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		
		//當Input textbox中的輸入改變時，便會進入此函式
		//取得向量資料
		std::vector<MyVector> vectors = dataManager->GetVectors();
		//判斷輸入自元為'\n'，並防止取到字串-1位置
		if (Input->Text->Length - 1 >= 0 && Input->Text[Input->Text->Length - 1] == '\n')
		{
			Output->Text += dataManager->CommandEvent(userInput);
		}
		else
		{
			//將使用者輸入字串(在Text box中)，依'\n'作切割
			cli::array<String^> ^userCommand = Input->Text->Split('\n');
			//並將最後一行，作為目前使用者輸入指令
			userInput = userCommand[userCommand->Length - 1];
		}

	}
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e)
	{
		//在Dialog按下OK便會進入此函式
		//字串轉制string^ to string
		std::string tempFileName;
		MarshalString(openFileDialog1->FileName, tempFileName);
		//將檔案路徑名稱傳入dataManager
		dataManager->SetFileName(tempFileName);
		//從讀取讀取向量資料
		if (dataManager->LoadVectorData())
		{
			//將VectorList中項目先做清除
			VectorList->Items->Clear();
			if (dataManager->GetStatus() == 1) //VECTOR
			{
				//取得所有向量資料
				std::vector<MyVector> vectors = dataManager->GetVectors();

				for (unsigned int i = 0; i < vectors.size(); i++)
				{
					//將檔案名稱存入暫存
					std::string tempString = vectors[i].GetName();
					//將輸出格式存入暫存
					tempString += " [";
					//將輸出資料存入暫存
					for (unsigned int j = 0; j < vectors[i].GetData().size(); j++)
					{
						std::string scalarString = std::to_string(vectors[i].GetData().at(j));
						tempString += scalarString.substr(0, scalarString.size() - 5);
						if (j != vectors[i].GetData().size() - 1)
							tempString += ",";
					}
					//將輸出格式存入暫存
					tempString += "]";
					//將項目加入VectorList中
					VectorList->Items->Add(gcnew String(tempString.c_str()));
				}
				Output->Text += "-Vector datas have been loaded-" + Environment::NewLine;
			}
			else if (dataManager->GetStatus() == 2) //MATRIX
			{
				//取得所有向量資料
				std::vector<MyMatrix> matrixs = dataManager->GetMatrixs();

				for (unsigned int i = 0; i < matrixs.size(); i++)
				{
					//將檔案名稱存入暫存
					std::string tempString = matrixs[i].GetName();
					//將輸出格式存入暫存
					tempString += " [";
					//將輸出資料存入暫存
					for (unsigned int j = 0; j < matrixs.at(i).rows() ; j++)
					{
						tempString += " [";
						for (unsigned int k = 0; k < matrixs.at(i).cols() ; k++)
						{
							std::string scalarString = std::to_string(matrixs.at(i).GetData().at(j).at(k));
							tempString += scalarString.substr(0, scalarString.size() - 5);
							if (k != matrixs[i].GetData().at(j).size() - 1)
								tempString += ",";
						}
						tempString += "] ";
						if (j != matrixs.at(i).GetData().size() - 1)
							tempString += ",";
					}
					//將輸出格式存入暫存
					tempString += "] ";
					//將項目加入VectorList中
					VectorList->Items->Add(gcnew String(tempString.c_str()));
				}
				Output->Text += "-Matrix datas have been loaded-" + Environment::NewLine;
			}
			else //NO FILE
			{

			}
			
		}
		else //NO FILE
		{
			Output->Text += "-The data is wrong-" + Environment::NewLine;
		}
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^  e) 
	{
		Input->Clear();
		Output->Clear();
	}
	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//資料清除
		dataManager->Clear();

		//介面清除
		VectorList->Items->Clear();
		Input->Clear();
		Output->Clear();
	}


	private: System::Void btnHint_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		(gcnew NTUSTCSIEEMProject1::HintForm)->Show();
	}
};
}
