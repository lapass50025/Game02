#include <iostream>

#include "Game02.hpp"

using namespace std;




/*
 * 함 수 명 : CreateArray
 * 설    명 : 2차원 동적 메모리 할당 (nRow x nCol)
 */
void CreateArray(char ***pData, char nRow, char nCol)
{
	int i = 0;
	char **p = NULL;


	p = new char *[nRow];
	for (i = 0; i < nRow; i++)
	{
		p[i] = new char[nCol];
	}

	*pData = p;
}

/*
 * 함 수 명 : DeleteArray
 * 설    명 : 동적 메모리 해제
 */
void DeleteArray(char ***pData, int nRow)
{
	int i = 0;
	
	char **p = 0;
	
	
	
	p = *pData;
	
	for (i = 0; i < nRow; i++)
	{
		delete [] p[i];
		p[i] = NULL;
	}
	
	delete [] p;
	p = NULL;
	
	*pData = p;
}



/*
 *
 */
void DrawArray(char **p, int nRow, int nCol, char chRow, char chCol)
{
	int i = 0;
	int j = 0;
	
	
	
	//
	for (j = 0; j < nCol; j++)
	{
		p[0][j] = chRow;
	}
	cout << endl;
	
	//
	for (i = 1; i < nRow - 1; i++)
	{
		for (j = 0; j < nCol; j++)
		{
			//
			if( j == 0 )
			{
				p[i][j] = chCol;
			}
			//
			else if( j == (nCol-1) )
			{
				p[i][j] = chCol;
			}
			//
			else if( j == (nCol/2) )
			{
				p[i][j] = chCol;
			}
			//
			else
			{
				p[i][j] = ' ';
			}
		}
	}
	
	//
	for (j = 0; j < nCol; j++)
	{
		p[nRow-1][j] = chRow;
	}
}



/*
 *
 */
void ShowArray(char **p, int nRow, int nCol)
{
	int i = 0;
	int j = 0;
	
	
	
	for( i = 0; i < nRow; i++)
	{
		for(j = 0; j < nCol; j++)
		{
			cout << p[i][j];
		}
		cout << endl;
	}
}



/*
 *
 */
int main(void)
{
	char **p = NULL;
	int nRow = 0;
	int nCol = 0;
	
	char chRow = 0;
	char chCol = 0;



	//
	cout << "Enter Row and Column : ";
	cin >> nRow >> nCol;
	
	cout << "Display Row : ";
	cin >> chRow;
	
	cout << "Display Column : ";
	cin >> chCol;

	//
	CreateArray(&p, nRow, nCol);

	//	
	DrawArray(p, nRow, nCol, chRow, chCol);
	
	//
	ShowArray(p, nRow, nCol);
	
	//
	DeleteArray(&p, nRow);
	
	return 0;
}