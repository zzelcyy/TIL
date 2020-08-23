using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SimpleCalculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {
            fnum.Text = "";
            snum.Text = "";
            label4.Text = "";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double num1 = double.Parse(fnum.Text);
            double num2 = double.Parse(snum.Text);
            double result = num1 + num2;
            label4.Text += result;
        }
    }
}