#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;


	private: System::Windows::Forms::TextBox^  textBox5;





	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;





	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ delta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Mat;



































	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->F_3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->delta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(6, 27);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(201, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->F_1, this->F2,
					this->F3, this->F4, this->delta, this->x_, this->Mat
			});
			this->dataGridView1->Location = System::Drawing::Point(5, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(680, 327);
			this->dataGridView1->TabIndex = 2;
			// 
			// F_3
			// 
			this->F_3->HeaderText = L"Xi/N";
			this->F_3->Name = L"F_3";
			this->F_3->ReadOnly = true;
			this->F_3->Width = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 341);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"p1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 339);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0,3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(177, 341);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"p2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(201, 339);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(113, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0,5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(112, 366);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"100000";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(318, 339);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(442, 64);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = resources->GetString(L"textBox5.Text");
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 1);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(861, 485);
			this->tabControl1->TabIndex = 12;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(853, 459);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Данные";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(691, 314);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Max(Delta) = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(759, 312);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(89, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"0";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->zedGraphControl1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(853, 459);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"График ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"Yi";
			this->F_1->Name = L"F_1";
			this->F_1->Width = 20;
			// 
			// F2
			// 
			this->F2->HeaderText = L"Xi";
			this->F2->Name = L"F2";
			this->F2->ReadOnly = true;
			this->F2->Width = 50;
			// 
			// F3
			// 
			this->F3->HeaderText = L"Xi/n";
			this->F3->Name = L"F3";
			this->F3->ReadOnly = true;
			this->F3->Width = 55;
			// 
			// F4
			// 
			this->F4->HeaderText = L"P(i)";
			this->F4->Name = L"F4";
			this->F4->ReadOnly = true;
			this->F4->Width = 132;
			// 
			// delta
			// 
			this->delta->HeaderText = L"Delta";
			this->delta->Name = L"delta";
			this->delta->ReadOnly = true;
			this->delta->Width = 132;
			// 
			// x_
			// 
			this->x_->HeaderText = L"x_";
			this->x_->Name = L"x_";
			// 
			// Mat
			// 
			this->Mat->HeaderText = L"M";
			this->Mat->Name = L"Mat";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 482);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Лабароторная работа №1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		double f1(long double x, long double y, long double &p){
			int res = 0;
			int f = 0;
			long double sum = 1; // начальный коэф, нужен для вычисления разности 1-"сумма"
			p = x; // вероятность закончить за 0 бросков равна вероятности попадания первого игрока
			while (f == 0)
			{
				if (res > 8)
				{
					int i = 0;
				}
				double ff1 = (double)rand() / RAND_MAX;
				if (x >= ff1)
				{
					f = 1;
				}
				else
				{
					double ff2 = (double)rand() / RAND_MAX;
					if (y >= ff2)
					{
						f = 1;
						res++;
						sum = sum - p;
						p = sum * (x + (1 - x) * y);
					}
					else
					{
						res++;
						sum = sum - p;
						p = sum * (x + (1 - x) * y);
					}
				}
			}
			return res;
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		srand(time(NULL));

		// Интервал, где есть данные
		double xmin = 0;
		double xmax = 1;

		long double p1 = Convert::ToDouble(textBox1->Text); // Вероятность попадания 1 игрока
		long double p2 = Convert::ToDouble(textBox2->Text); // Вероятность попадания 2 игрока

		double h = 1.0 / Convert::ToDouble(textBox3->Text); // Шаг для сетки
		double hh = 1.0 / h;

		double xmin_limit = (xmin - 0.1) * 10;
		double xmax_limit = (xmax + 0.1) * 10;
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		// Список точек 
		int i = 0;
		int kk = 0;
		int a[1100];
		int b[100];
		for (int l = 0; l < 1100; l++)a[l] = 0;
		for (int l = 0; l < 100; l++)b[l] = 0;
		dataGridView1->Rows->Clear();
		for (int l = 0; l < 20; l++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[l]->Cells[0]->Value = l;
			dataGridView1->Rows[l]->Cells[1]->Value = 0.0;
			dataGridView1->Rows[l]->Cells[2]->Value = 0.0;
			dataGridView1->Rows[l]->Cells[3]->Value = 0.0;
			dataGridView1->Rows[l]->Cells[4]->Value = 0.0;
		}
		double m = 0;
		int mk = 0;
		for (double x = xmin + h; x <= xmax; x += h)
		{
			long double p = 0;
			//Добавление на график
			//f1_list->Add(x, f1(p1, p2, p));
			//Печать в таблицу
			int k = f1(p1, p2, p);// № эксперимента	
			a[k]++;
			dataGridView1->Rows[k]->Cells[3]->Value = p;
			dataGridView1->Rows[k]->Cells[2]->Value = a[k] / hh;
			dataGridView1->Rows[k]->Cells[1]->Value = a[k];
			dataGridView1->Rows[k]->Cells[4]->Value = fabs(p - (a[k] / hh));
			i++;
			if (k > mk) mk = k;
		}
		double ma = 0;
		double ma1 = 0;
		double dis = 0;
		double dis1 = 0;
		double f1count = 0;
		double f2count = 0;
		int lll = 0;
		int xxmin = 100;
		int xxmax = 0;
		for (int j = 0; j < mk+1; j++)
		{
			double mm = fabs((double)dataGridView1->Rows[j]->Cells[3]->Value - (double)dataGridView1->Rows[j]->Cells[2]->Value);
			if (mm > m)m = mm;
			if ((double)dataGridView1->Rows[j]->Cells[2]->Value != 0.0)
			{
				if ((int)dataGridView1->Rows[j]->Cells[0]->Value < xxmin)xxmin = (int)dataGridView1->Rows[j]->Cells[0]->Value;
				if ((int)dataGridView1->Rows[j]->Cells[0]->Value > xxmax)xxmax = (int)dataGridView1->Rows[j]->Cells[0]->Value;
				f1count = f1count + (double)dataGridView1->Rows[j]->Cells[2]->Value;
				f2count = f2count + (double)dataGridView1->Rows[j]->Cells[3]->Value;
				f1_list->Add(j - 1, f1count);
				f1_list->Add(j, f1count);
				f2_list->Add(j - 1, f2count);
				f2_list->Add(j, f2count);
				lll++;
				ma = ma + j * (double)dataGridView1->Rows[j]->Cells[2]->Value;
				ma1 = ma1 + j * (double)dataGridView1->Rows[j]->Cells[3]->Value;
			}
		}
		for (int j = 0; j < mk + 1; j++)
		{
			if ((double)dataGridView1->Rows[j]->Cells[2]->Value != 0.0)
			{
				double jk = (j - ma) * (j - ma);
				dis = dis + jk * (double)dataGridView1->Rows[j]->Cells[3]->Value;
				dis1 = dis1 + jk * (double)dataGridView1->Rows[j]->Cells[2]->Value;
			}
		}
		dataGridView1->Rows[5]->Cells[6]->Value = dis;
		dataGridView1->Rows[5]->Cells[5]->Value = dis1;
		dataGridView1->Rows[0]->Cells[5]->Value = ma;
		dataGridView1->Rows[0]->Cells[6]->Value = ma1;
		dataGridView1->Rows[2]->Cells[5]->Value = "|M-x_|";
		dataGridView1->Rows[7]->Cells[5]->Value = "|D-S^2|";
		dataGridView1->Rows[2]->Cells[6]->Value = fabs(ma - ma1);
		dataGridView1->Rows[7]->Cells[6]->Value = fabs(dis - dis1);
		dataGridView1->Rows[4]->Cells[5]->Value = "S^2";
		dataGridView1->Rows[4]->Cells[6]->Value = "D";
		dataGridView1->Rows[9]->Cells[5]->Value = "R";
		dataGridView1->Rows[9]->Cells[6]->Value = Convert::ToString(xxmax-xxmin);
		dataGridView1->Rows[10]->Cells[5]->Value = "Me";
		dataGridView1->Rows[10]->Cells[6]->Value = Convert::ToString((xxmax - xxmin)/2);
		textBox4->Text = Convert::ToString(m);
		i = 0;
		/*for (; i < hh-1; i++)
		{
			for (int k = 0; k < 50; k++)
			{
				int kk = (int)dataGridView1->Rows[i]->Cells[1]->Value;
				if (kk == k)
				{
					dataGridView1->Rows[i]->Cells[2]->Value = a[k];
					dataGridView1->Rows[i]->Cells[3]->Value = a[k] / (hh-1);
				}
			}
		}*/
		/*for (int l = 0; l < (1.0 / h); l++)
		{
			dataGridView1->Rows[l]->Cells[2] -> Value = a[l];
		}*/
		LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::None);
		LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
		/*
				// Устанавливаем интересующий нас интервал по оси Y
				panel->YAxis->Scale->Min = ymin_limit;
				panel->YAxis->Scale->Max = ymax_limit;
		*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

//private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
//	
//	GraphPane^ panel = zedGraphControl1->GraphPane;
//	double xmin = Convert::ToDouble(textBox5->Text);
//	double xmax = Convert::ToDouble(textBox4->Text);
//	// Устанавливаем интересующий нас интервал по оси X
//	panel->XAxis->Scale->Min = xmin;
//	panel->XAxis->Scale->Max = xmax;
//
//	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
//	// В противном случае на рисунке будет показана только часть графика, 
//	// которая умещается в интервалы по осям, установленные по умолчанию
//	zedGraphControl1->AxisChange();
//	// Обновляем график
//	zedGraphControl1->Invalidate();
//
//}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
