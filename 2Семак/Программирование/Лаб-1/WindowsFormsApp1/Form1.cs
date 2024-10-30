using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            int speed = 5;
            Trassa.Top += speed;
            if(Trassa.Top >= 650)
            {
                Trassa.Top = 0;
            }
        }

        private void Trassa_Click(object sender, EventArgs e)
        {

        }

        private void Form1_KeyPress(object sender, KeyPressEventArgs e)
        {
            int speed = 8;
            if((e.KeyChar == (char)Keys.A || e.KeyChar == (char)Keys.Left) && Car.Left > 100)
            {
                Car.Left -= speed;
            }else if((e.KeyChar == (char)Keys.D || e.KeyChar == (char)Keys.Right) && Car.Left < 650)
            {
                Car.Left += speed;
            }
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
