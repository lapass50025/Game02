#ifndef _GAME_HPP
#define _GAME_HPP

void CreateArray(char ***pData, char nRow, char nCol);
void DeleteArray(char ***pData, int nRow);
void DrawArray(char **p, int nRow, int nCol, char chRow, char chCol);
void ShowArray(char **p, int nRow, int nCol);

#endif
