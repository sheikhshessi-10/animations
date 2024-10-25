#include<iostream>
#include<math.h>
#include<windows.h>
#include<conio.h>
#include<string>
#include<iomanip>
#include<time.h>
using namespace std;
#define cap 50
#define row 80
#define col 80

void _Sleepo(int t);
void SetClr(int clr);
void ballon_fill();
int d_spiral();
void arc(int h, int k, int a, char sym);
void h_line(int r, int sc, int size, char sym);
void v_line(int c, int sr, int size, char sym);
void gotoRowCol(int rpos, int cpos);
void square_smile();
void _Sleep(int t);
void spiral(int h, int k, int d, int size);
void _Swap(int& a, int& b);
void S(int h, int k, int size, char sym);
void H(int h, int k, int size, char sym);
void A(int h, int k, int size, char sym);
void F(int h, int k, int size, char sym);
void Y(int h, int k, int size, char sym);
void choi(int i, int h, int k, int size, char sym);
void name_alpha();
void prints_wave(float angle, int A, int i, int sm, char sym);
void still_name_s_wave(float angle, int A, int i, int sm);
void moving_name_wave(float angle, int A, int i, int sm);
void I_moving_w(float angle, int A, int i, int sm, char sym);
void L2R(int m, int cs, int ce, char sym, int t);
void R2L(int m, int cs, int ce, char sym, int t);
void T2B(int n, int rs, int re, char sym, int t);
void B2T(int n, int rs, int re, char sym, int t);
void r_spiral(char sym);
void sym_r(char sym);
void book(int size);
int name_bonus();
void all_d_name();
void C_Print(int m, int n);
void _FSleep(float t);
void S_Throw();
void print_s_wave(float angle, int A, int i, int sm, char sym);
void Fan();
void fan_1(int k, int h, int size, char sym);
void fan_2(int k, int h, int size, char sym);
void _Swap(int& a, int& b);
void c_rotate(int Box[][10], int dim, int BN);
void ac_rotate(int b[][10], int dim, int BN);
void rotate_n();
void  center_circle();
void simple_smiley();
void box_r(int k);
void d_r_spiral(char sym, float dtheta);
void still_name_s_wave(float angle, int A, int i, int sm);
void _FSleep(float t)
{
	for (int i = 0; i < (1000 * t); i++)
		;
}
int main()
{
	char y = 'y';
	int c;
	do
	{
		system("cls");
		cout << "Enter 1 for fan\nEnter 2 for stone throw\nEnter 3 for name printing\nEnter 4 Circle printing\nEnter 5 for Spiral printing\nEnter 6 for sin wave parts\nEnter 7 for Box_numbers\nEnter 8 for name printing of psrt 2\nEnter 9 for retcangular spiral\nEnter 10 for Book printing\nEnter your choice:";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			Fan();
		}
		break;
		case 2:
		{
			S_Throw();
		}
		break;
		case 3:
		{
			int n;
			cout << "Enter 1 for part-1\nEnter 2 for 2 3\nEnter 3 for bonus:";
			cin >> n;
			switch (n)
			{
			case 1:
			{
				name_alpha();
			}
			break;
			case 2:
			{
				all_d_name();
			}
			break;
			case 3:
			{
				name_bonus();
			}
			}
		}
		break;
		case 4:
		{
			int n;
			cout << "Enter 1 for part-1\nEnter 2 for 2 \nter 3 for 3\nEnter 4 for bonus:";
			cin >> n;
			switch (n)
			{
			case 1:
			{
				center_circle();
			}
			break;
			case 4:
			{
				ballon_fill();
			}
			break;
			case 3:
			{
				square_smile();
			}
			break;
			case 2:
			{
				simple_smiley();
			}
			}
		}
		break;
		case 5:
		{
			d_spiral();
		}
		break;
		case 6:
		{
			int n;
			cout << "Enter 1 for simple wave\nEnter 2 for name stil name_wave\nEnter 3 for moving name wave\nEnter 4 for changing amplitude wave";
			cin >> n;
			switch (n)
			{
			case 1:
			{
				print_s_wave(0, 10, 3, row / 2, char(-37));
			}
			break;
			case 2:
			{
				still_name_s_wave(0, 5, 3, row / 2);
			}
			break;
			case 3:
			{
				moving_name_wave(0, 5, 3, row / 2);
			}
			break;
			case 4:
			{
				I_moving_w(0, 5, 3, row / 2, char(-37));

			}
			}
		}
		case 7:
		{
			int r;
			cout << "Enter number of rotations:";
			cin >> r;
			box_r(r);
		}
		break;
		case 8:
		{
			int n;
			cout << "Enter 1 for part-1\nEnter 2 for 2 \nEnter 3 for bonus:";
			cin >> n;
			switch (n)
			{
			case 1:
			{
				name_alpha();
			}
			break;
			case 2:
			{
				all_d_name();
			}
			break;
			case 3:
			{
				name_bonus();
			}
			}
		}
		break;
		case 9:
		{
			int n;
			cout << "Enter 1 part 1\nEnter 2 for 2 \nEnter 3 for bonus:";
			cin >> n;
			switch (n)
			{
			case 1:
			{
				float c;
				cout << "Enter gap:";
				cin >> c;
				d_r_spiral(char(-37), c);
			}
			break;
			case 2:
			{
				r_spiral(char(-37));
			}
			break;
			case 3:
			{
				sym_r(char(-37));
			}
			}

		}
		case 10:
		{
			int size;
			cout << "Enter size  of book:";
			cin >> size;
			book(size);
		}
		}
		cout << "Enter y to test another function:";
		cin >> y;
	} while (y == 'y' || y == 'Y');
}
void box_r(int k)
{
	int Box[10][10] = {};
	int dim = 7;
	for (int r = 0; r < dim / 2; r++)
	{
		int count = 1;
		for (int c = r; c <= dim - 2 - r; c++, count++)
		{
			Box[r][c] = count;
		}
		for (int k = r; k <= dim - 2 - r; k++, count++)
		{
			Box[k][dim - r - 1] = count;
		}
		for (int c = dim - 1 - r; c > r; c--, count++)
		{
			Box[dim - r - 1][c] = count;
		}
		for (int k = dim - 1 - r; k > r; k--, count++)
		{
			Box[k][r] = count;
		}
	}
	for (int j = 0; j < k; j++)
	{
		for (int i = 0; i < dim / 2; i++)
		{
			if (i % 2 == 0)
				c_rotate(Box, dim, i);
			else
				ac_rotate(Box, dim, i);
		}

	}
	for (int r = 0; r < dim; r++)
	{
		for (int c = 0; c < dim; c++)
		{
			cout << setw(3) << Box[r][c];
		}
		cout << "\n";
	}
}
void c_rotate(int Box[][10], int dim, int BN)
{
	int t = Box[BN + 1][BN];
	int r = BN;
	for (int c = r; c <= dim - 2 - r; c++)
	{
		_Swap(Box[r][c], t);
	}
	for (int k = r; k <= dim - 2 - r; k++)
	{
		_Swap(Box[k][dim - r - 1], t);
	}
	for (int c = dim - 1 - r; c > r; c--)
	{
		_Swap(Box[dim - r - 1][c], t);
	}
	for (int k = dim - 1 - r; k > r; k--)
	{
		_Swap(Box[k][r], t);
	}

}
void _Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
void ac_rotate(int Box[][10], int dim, int BN)
{
	int t = Box[BN][BN];
	int r = BN;
	for (int k = r; k <= dim - 2 - r; k++)
	{
		_Swap(Box[k][r], t);
	}
	for (int c = r; c <= dim - 2 - r; c++)
	{
		_Swap(Box[dim - 1 - r][c], t);
	}
	for (int c = dim - 1 - r; c > r; c--)
	{
		_Swap(Box[c][dim - r - 1], t);
	}
	for (int k = dim - 1 - r; k > r; k--)
	{
		_Swap(Box[r][k], t);
	}

}
void Fan()
{
	float d = 199999;
	while (true)
	{
		fan_1(row / 2, col / 2, 16, char(-37));
		_FSleep(d);
		fan_1(row / 2, col / 2, 16, ' ');
		fan_2(row / 2, col / 2, 16, char(-37));
		_FSleep(d);
		fan_2(row / 2, col / 2, 16, ' ');
		d *= 0.9;
	}
}
void fan_1(int k, int h, int size, char sym)
{
	for (int i = 0; i <= size; i++)
	{
		gotoRowCol(k - i, h + i);
		cout << sym;
	}
	for (int i = 0; i <= size; i++)
	{
		gotoRowCol(k + i, h + i);
		cout << sym;
	}
	for (int i = 0; i <= size; i++)
	{
		gotoRowCol(k + i, h - i);
		cout << sym;
	}
	for (int i = 0; i <= size; i++)
	{
		gotoRowCol(k - i, h - i);
		cout << sym;
	}
	L2R(k - size, h - size, h + size, sym, 0);
	L2R(k + size, h - size, h + size, sym, 0);
}
void fan_2(int k, int h, int size, char sym)
{
	for (int i = 0; i <= size; i++)
	{
		gotoRowCol(k - i, h + 2 * i);
		cout << sym;
	}
	for (int i = 0; i <= size; i++)
	{
		gotoRowCol(k + i, h + 2 * i);
		cout << sym;
	}
	for (int i = 0; i <= size; i++)
	{
		gotoRowCol(k + i, h - 2 * i);
		cout << sym;
	}
	for (int i = 0; i <= size; i++)
	{
		gotoRowCol(k - i, h - 2 * i);
		cout << sym;
	}
	T2B(k - 2 * size, h - size, h + size, sym, 0);
	T2B(k + 2 * size, h - size, h + size, sym, 0);
}
void C_Print(int m, int n)
{
	gotoRowCol(m - 1, n - 1);
	cout << "\\" << "O" << "/" << endl;
	gotoRowCol(m, n);
	cout << "|";
	gotoRowCol(m + 1, n - 1);
	cout << "/" << " " << "\\" << endl;
	_Sleep(2000);
}
void S_Throw()
{
	srand(time(0));
	float t = 0;
	float Row[5] = {};
	float Col[5] = {};
	int v[5] = { 2,4,6,8,10 };
	char sym = char(-37);
	L2R(10, 1, 30, sym, 100);
	T2B(30, 11, 80, sym, 100);
	L2R(70, 30, 80, sym, 100);
	C_Print(8, 30);
	while (1)
	{
		_Sleep(20000);
		for (int i = 0; i < 5; i++)
		{
			if (Row[i] < 70)
			{
				Row[i] = v[i] + (4.9 * t * t);
				Col[i] = 31 + v[i] * t;
			}
		}

		for (int i = 0; i < 5; i++)
		{
			if (Row[i] < 70)
			{
				gotoRowCol(Row[i], Col[i]);
				cout << sym;
			}
			else
			{
				gotoRowCol(69, Col[i]);
				cout << sym;
			}

		}_Sleep(20000);
		for (int i = 0; i < 5; i++)
		{
			if (Row[i] < 69)
			{
				gotoRowCol(Row[i], Col[i]);
				cout << " ";
			}

		}
		t = t + 0.2;
	}
}
void sym_r(char sym)
{
	for (int rec = 1; rec <= row / 2; rec++)
	{
		L2R(rec - 1, rec - 1, col - 1 - rec, sym, 1000);
		T2B(col - rec, rec - 1, row - 1 - rec, sym, 1000);
		R2L(row - rec, col - rec, rec - 1, sym, 1000);
		B2T(rec - 1, row - 1 - rec, rec - 1, sym, 100);
		sym++;
	}
}
void r_spiral(char sym)
{
	for (int rec = 1; rec <= row / 2; rec++)
	{
		L2R(rec - 1, rec - 1, col - 1 - rec, sym, 1000);
		T2B(col - rec, rec - 1, row - 1 - rec, sym, 1000);
		R2L(row - rec, col - rec, rec - 1, sym, 1000);
		B2T(rec - 1, row - 1 - rec, rec - 1, sym, 100);
	}
	_Sleep(2000);
	for (int rec = 1; rec <= row / 2; rec++)
	{
		L2R(rec - 1, rec - 1, col - 1 - rec, char(32), 1000);
		T2B(col - rec, rec - 1, row - 1 - rec, char(32), 1000);
		R2L(row - rec, col - rec, rec - 1, char(32), 1000);
		B2T(rec - 1, row - 1 - rec, rec - 1, char(32), 100);
	}
}
void book(int size)
{

	float i = 0.8;
	float dtheta = (i * 360.0) / (size * 2);
	float angle = 200;
	for (int n = 0; n < (size * 2) / 2; n++)
	{
		int m = 10 * sin(angle * 3.1415 / 180.0) + (size * 2) / 4;
		gotoRowCol(m, n);
		cout << char(-37);
		angle += dtheta;
	}
	for (int i = 0; i < size; i++)
	{
		gotoRowCol((size * 2) / 4 + i - 3, 0);
		cout << char(-37);
	}
	dtheta = (i * 360.0) / (size * 2);
	angle = 200;
	for (int n = (size * 2) / 2; n < (size * 2); n++)
	{
		int m = 10 * sin(angle * 3.1415 / 180.0) + (size * 2) / 4;
		gotoRowCol(m, n);
		cout << char(-37);
		angle += dtheta;
	}
	for (int i = 0; i < size; i++)
	{
		gotoRowCol((size * 2) / 4 + i - 3, (size * 2) / 2 - 1);
		cout << char(-37);
	}
	for (int i = 0; i < size; i++)
	{
		gotoRowCol((size * 2) / 4 + i - 3, (size * 2) - 1);
		cout << char(-37);
	}
	dtheta = (i * 360.0) / (size * 2);
	angle = 200;
	for (int n = 0; n < (size * 2) / 2; n++)
	{
		int m = 10 * sin(angle * 3.1415 / 180.0) + 3 * (size * 2) / 4;
		gotoRowCol(m, n);
		cout << char(-37);
		angle += dtheta;
	}
	dtheta = (i * 360.0) / (size * 2);
	angle = 200;
	for (int n = (size * 2) / 2; n < (size * 2); n++)
	{
		int m = 10 * sin(angle * 3.1415 / 180.0) + 3 * (size * 2) / 4;
		gotoRowCol(m, n);
		cout << char(-37);
		angle += dtheta;
	}
}
void d_r_spiral(char sym, float dtheta)
{
	for (int rec = 1; rec <= row / 2; rec += dtheta)
	{
		L2R(rec - 1, rec - dtheta, col - 1 - rec, sym, 900);
		T2B(col - rec, rec - 1, row - 1 - rec, sym, 900);
		R2L(row - rec, col - rec, rec - 1, sym, 900);
		B2T(rec - 1, row - 1 - rec, rec + dtheta - 1, sym, 900);
	}
	_Sleep(2000);
	for (int rec = 1; rec <= row / 2; rec += dtheta)
	{
		L2R(rec - 1, rec - dtheta, col - 1 - rec, sym, 900);
		T2B(col - rec, rec - 1, row - 1 - rec, sym, 900);
		R2L(row - rec, col - rec, rec - 1, sym, 900);
		B2T(rec - 1, row - 1 - rec, rec + dtheta - 1, sym, 900);
	}
}
void L2R(int m, int cs, int ce, char sym, int t)
{
	for (int i = cs; i <= ce; i++)
	{
		gotoRowCol(m, i);
		_Sleep(t);
		cout << sym;
	}
}
void T2B(int n, int rs, int re, char sym, int t)
{
	for (int i = rs; i <= re; i++)
	{
		gotoRowCol(i, n);
		_Sleep(t);
		cout << sym;
	}
}
void R2L(int m, int cs, int ce, char sym, int t)
{
	for (int i = cs; i >= ce; i--)
	{
		gotoRowCol(m, i);
		_Sleep(t);
		cout << sym;
	}

}
void B2T(int n, int rs, int re, char sym, int t)
{
	for (int i = rs; i >= re; i--)
	{
		gotoRowCol(i, n);
		_Sleep(t);
		cout << sym;
	}
}
void I_moving_w(float angle, int A, int i, int sm, char sym)
{
	srand(time(0));
	while (true)
	{
		for (; A < row / 2; A++)
		{
			float dtheta = (i * 360.0) / col;
			for (int n = 0; n < col; n++)
			{
				int m = -A * sin(angle * 3.1415 / 180.0) + sm;
				gotoRowCol(m, n);
				cout << sym;
				angle += dtheta;
			}
			_Sleep(1000);
			angle = angle - (dtheta * col);
			for (int n = 0; n < col; n++)
			{
				int m = -A * sin(angle * 3.1415 / 180.0) + sm;
				gotoRowCol(m, n);
				cout << " ";
				angle += dtheta;
			}
			angle++;
		}
		for (A = row / 2; A > 0; A--)
		{
			float dtheta = (i * 360.0) / col;
			for (int n = 0; n < col; n++)
			{
				int m = -A * sin(angle * 3.1415 / 180.0) + sm;
				gotoRowCol(m, n);
				cout << sym;
				angle += dtheta;
			}
			_Sleep(1000);
			angle = angle - (dtheta * col);
			for (int n = 0; n < col; n++)
			{
				int m = -A * sin(angle * 3.1415 / 180.0) + sm;
				gotoRowCol(m, n);
				cout << " ";
				angle += dtheta;
			}
			angle++;
		}
	}
}
void moving_name_wave(float angle, int A, int i, int sm)
{
	char name[10] = { 'S','H' };
	while (true)
	{
		int j = 0;
		float dtheta = (i * 360.0) / col;
		for (int n = 0; n < col; n++)
		{
			int m = -A * sin(angle * 3.1415 / 180.0) + sm;
			gotoRowCol(m, n);
			cout << name[j++];
			j = j % 6;
			angle += dtheta;
		}
		_Sleep(1000);
		angle = angle - (dtheta * col);
		for (int n = 0; n < col; n++)
		{
			int m = -A * sin(angle * 3.1415 / 180.0) + sm;
			gotoRowCol(m, n);
			cout << " ";
			angle += dtheta;
		}
		angle++;
	}

}
void still_name_s_wave(float angle, int A, int i, int sm)
{
	char name[10] = { 'S','H' };
	float dtheta = (i * 360.0) / col;
	int j = 0;
	for (int n = 0; n < col; n++)
	{
		int m = -A * sin(angle * 3.1415 / 180.0) + sm;
		gotoRowCol(m, n);
		cout << name[j++];
		j = j % 6;
		angle += dtheta;
	}
}

void print_s_wave(float angle, int A, int i, int sm, char sym)
{
	float dtheta = (i * 360.0) / col;
	for (int n = 0; n < col; n++)
	{
		int m = -A * sin(angle * 3.1415 / 180.0) + sm;
		gotoRowCol(m, n);
		cout << sym;
		angle += dtheta;
	}
}

void all_d_name()
{
	int h = 0, k = 0, size = 0;
	char sym;
	cout << "Enter size of Alphabets:";
	cin >> size;
	k = size / 2;
	h = size / 2;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = row - size / 2; j >= k; j--)
		{
			_Sleep(2000);
			choi(i, h, j, size, char(-37));
			_Sleep(2000);
			choi(i, h, j, size, char(32));
		}
		_Sleep(200);
		for (int j = h; j < col - size / 2; j++)
		{
			_Sleep(2000);
			choi(i, j, k, size, char(-37));
			_Sleep(2000);
			choi(i, j, k, size, char(32));
		}

		_Sleep(200);
		int p = k;
		for (int j = col - size / 2; j >= h; j--, p++)
		{
			_Sleep(2000);
			choi(i, j, p, size, char(-37));
			_Sleep(2000);
			choi(i, j, p, size, char(32));
		}
		_Sleep(200);
		p = row - size / 2;
		for (int j = h; j <= col - size / 2; j++, p--)
		{
			_Sleep(2000);
			choi(i, j, p, size, char(-37));
			_Sleep(2000);
			choi(i, j, p, size, char(32));
		}
		_Sleep(200);
		for (int j = k; j < row - size / 2; j++)
		{
			_Sleep(2000);
			choi(i, col - size / 2, j, size, char(-37));
			_Sleep(2000);
			choi(i, col - size / 2, j, size, char(32));
		}
		p = col - size / 2;
		_Sleep(200);
		for (int j = row - size / 2; j >= k; j--, p--)
		{
			_Sleep(2000);
			choi(i, p, j, size, char(-37));
			_Sleep(2000);
			choi(i, p, j, size, char(32));
		}
		_Sleep(200);
		p = h;
		_Sleep(200);
		for (int j = k; j < row - size / 2; j++, p++)
		{
			_Sleep(2000);
			choi(i, p, j, size, char(-37));
			_Sleep(2000);
			choi(i, p, j, size, char(32));
		}
		_Sleep(200);
		for (int j = col - size / 2; j >= h; j--)
		{
			_Sleep(2000);
			choi(i, j, row - size / 2, size, char(-37));
			_Sleep(2000);
			choi(i, j, row - size / 2, size, char(32));
		}
	}
}

int name_bonus()
{
	srand(time(0));
	int h = row / 2, k = row / 2, size = 0;
	char sym = char(-37);
	cout << "Enter size of Alphabets:";
	cin >> size;
	while (true)
	{
		int ranr[6] = {}, ranc[6] = {};
		for (int i = 0; i < 6; i++)
		{
			ranr[i] = (rand() % (row - size / 2) + size / 2) % (row - size / 2);
			ranc[i] = (rand() % (col - size / 2) + size / 2) % (col - size / 2);
		}
		S(ranc[0], ranr[0], size, sym);
		_Sleep(200);
		H(ranc[1], ranr[1], size, sym);
		_Sleep(200);
		A(ranc[2], ranr[2], size, sym);
		_Sleep(200);
		F(ranc[3], ranr[3], size, sym);
		_Sleep(200);
		A(ranc[4], ranr[4], size, sym);
		_Sleep(200);
		Y(ranc[5], ranr[5], size, sym);
		_Sleep(2000);
		S(ranc[0], ranr[0], size, char(32));
		H(ranc[1], ranr[1], size, char(32));
		A(ranc[2], ranr[2], size, char(32));
		F(ranc[3], ranr[3], size, char(32));
		A(ranc[4], ranr[4], size, char(32));
		Y(ranc[5], ranr[5], size, char(32));

	}
	return 0;
}
void name_alpha()
{
	int size, h, k;
	cout << "Enter size of Alphabets:";
	cin >> size;
	cout << "Enter center coordinates(h,k):";
	cin >> h >> k;
	for (int j = 1; j <= 6; j++)
	{
		for (int i = 5; i < row - 10; i++)
		{
			_Sleep(2000);
			choi(j, h, k, i, char(-37));
			_Sleep(200);
			choi(j, h, k, i, char(32));
		}
	}
}
void choi(int i, int h, int k, int size, char sym)
{
	switch (i)
	{
	case 1:
	{
		S(h, k, size, sym);
		break;
	}
	case 2:
	{
		H(h, k, size, sym);
		break;
	}
	case 3:
	{
		A(h, k, size, sym);
		break;
	}
	case 4:
	{
		F(h, k, size, sym);
		break;
	}case 5:
	{
		A(h, k, size, sym);
		break;
	}case 6:
		Y(h, k, size, sym);
	}
}

void H(int h, int k, int size, char sym)
{
	v_line(h - size / 4, k - size / 2, size, sym);
	h_line(k, h - size / 4, size / 2, sym);
	v_line(h + size / 4, k - size / 2, size, sym);
}
void S(int h, int k, int size, char sym)
{
	v_line(h - size / 4, k - size / 2, size / 2, sym);
	h_line(k - size / 2, h - size / 4, size / 2, sym);
	h_line(k, h - size / 4, size / 2, sym);
	v_line(h + size / 4, k, size / 2, sym);
	h_line(k + size / 2, h - size / 4, size / 2, sym);
}
void v_line(int c, int sr, int size, char sym)
{
	for (int i = 0; i <= size && i < row; i++)
	{
		gotoRowCol(i + sr, c);
		cout << sym;
	}
}
void h_line(int r, int sc, int size, char sym)
{

	for (int i = 0; i <= size && i < col; i++)
	{
		gotoRowCol(r, i + sc);
		cout << sym;
	}
}
int d_spiral()
{
	int h, k, d, size;
	cout << "Enter density of spiral and center coordinates and size(h,k,arms,size):";
	cin >> h >> k >> d >> size;
	spiral(h, k, d, size);
	return 0;
}
void spiral(int h, int k, int d, int size)
{
	float r = 1;
	float d_d = size / d;
	float change = d_d / 360;
	for (r = 1; r <= size && r < row / 2;)
	{
		for (int O = 0; O < 360 && r < row / 2; O++)
		{
			int x = r * cos((O * 3.14159) / 180) + h;
			int y = r * sin((O * 3.14159) / 180) * (-1) + k;
			if (x < col && y < row)
			{
				gotoRowCol(y, x);
				cout << char(-37);
			}
			_Sleep(100);
			r += change;
		}
	}
}
void _Sleep(int t)
{
	for (int i = 0; i < 1000 * t; i++)
		;
}
void gotoRowCol(int rpos, int cpos)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = cpos;
	scrn.Y = rpos;
	SetConsoleCursorPosition(hOuput, scrn);
}
void arc(int h, int k, int r, int as, int a, char sym)
{
	int x, y;
	for (int O = as; O < as + a; O++)
	{
		x = r * cos((O * 3.14146) / 180) + h;
		y = r * sin((O * 3.14146) / 180) + k;
		if (x >= 0 && x < col && y >= 0 && y < row)
		{
			gotoRowCol(y, x);
			cout << sym;
		}
	}
}
void p_arc(int h, int k, int r, int as, int a, char sym)
{
	int x, y;
	for (int O = as; O < as + a; O++)
	{
		x = r * cos((O * 3.14146) / 180) + h;
		y = -r * sin((O * 3.14146) / 180) + k;
		if (x >= 0 && x < col && y >= 0 && y < row)
		{
			gotoRowCol(y, x);
			cout << sym;
		}
	}
}
void circle(int h, int k, int r, char sym)
{
	int x, y;
	for (int O = 0; O < 360; O++)
	{
		x = r * cos((O * 3.14146) / 180) + h;
		y = -r * sin((O * 3.14146) / 180) + k;
		if (x >= 0 && x < col && y >= 0 && y < row)
		{
			gotoRowCol(y, x);
			cout << sym;
		}
	}
}
void square_smile()
{
	int r;
	cout << "Enter radius of the face:";
	cin >> r;
	circle(col / 2, row / 2, r, char(-37));
	circle(col / 2, row / 2 + 2, r / 10, char(-37));
	p_arc(col / 2 + col / 10, row / 2 - row / 10, r / 5 + 2, 0, 180, char(-37));
	circle(col / 2 + col / 10, row / 2 - row / 10 + 2, r / 5, char(-37));
	p_arc(col / 2 - col / 10, row / 2 - row / 10, r / 5 + 2, 0, 180, char(-37));
	circle(col / 2 - col / 10, row / 2 - row / 10 + 2, r / 5, char(-37));
	h_line(row / 2 + row / 10, col / 2 - r / 5 - 2, 2 * r / 5 + 4, char(-37));
	h_line(row / 2 + row / 10 + 4, col / 2 - r / 5 - 2, 2 * r / 5 + 4, char(-37));
	v_line(col / 2 - r / 5 - 2, row / 2 + row / 10, 4, char(-37));
	v_line(col / 2 + r / 5 + 2, row / 2 + row / 10, 4, char(-37));
}
void simple_smiley()
{
	int r;
	cout << "Enter radius of the face:";
	cin >> r;
	circle(col / 2, row / 2, r, char(-37));
	circle(col / 2 + col / 10, row / 2 - row / 10, r / 5, char(-37));
	circle(col / 2 - col / 10, row / 2 - row / 10, r / 5, char(-37));
	arc(col / 2, row / 2 - row / 10 + 5, r - r / 5, 35, 110, char(-37));
}
void _Sleepo(int t)
{
	for (int i = 0; i < 10 * t; i++)
		;
}

void ballon_fill()
{
	int r = 1;
	char c;
	cout << "Press 'f' to fill air and i to decrease:";
	c = _getch();
	if (c == 'f')
		r++;
	else if (c == 'i')
		r--;
	while (r < row / 2)
	{
		if (c == 'f')
		{
			circle(col / 2, row / 2, r, char(-37));
			_Sleep(2000);
			circle(col / 2, row / 2, r - 1, char(32));
		}
		else if (c == 'i')
		{
			circle(col / 2, row / 2, r, char(-37));
			_Sleep(2000);
			circle(col / 2, row / 2, r + 1, char(32));
		}

		c = _getch();
		if (c == 'f')
			r++;
		else if (c == 'i')
			r--;
	}
	int x, y;
	for (int O = 0; O < 360; O++)
	{
		x = r * cos((O * 3.14146) / 180) + col / 2;
		y = -r * sin((O * 3.14146) / 180) + row / 2;
		gotoRowCol(y, x);
		for (int i = y; i < row; i++)
		{
			gotoRowCol(i, x);
			cout << char(-37);
			_Sleepo(1);
			gotoRowCol(i - 1, x);
			cout << " ";

		}
	}
}
void center_circle()
{
	for (int r = 1; r < row / 2; r++)
	{
		circle(col / 2, row / 2, r, char(-37));
		_Sleep(2000);
		circle(col / 2, row / 2, r - 1, char(32));
	}
	for (int r = row / 2 - 1; r >= 1; r--)
	{
		circle(col / 2, row / 2, r, char(-37));
		_Sleep(2000);
		circle(col / 2, row / 2, r - 1, char(32));
	}
}
void SetClr(int clr)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), clr);
}