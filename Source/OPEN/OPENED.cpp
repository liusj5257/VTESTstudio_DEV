#include "lib.h"

char fname[] = __FILE__;
char PATH_IN[__CHAR_BUFFER] = "../../Resource/";
char PATH_OUT[__CHAR_BUFFER] = "../../Release/";


int main(int argc, char* argv[])
{
  // fpath(a, b, a2);
  path(fname, PATH_IN, PATH_OUT);    //?·��
  init_N(fin2);                      //?��ʼ��N
  init_str_M(c, __CHAR_BUFFER, fin); //?��ȡǰ�ö����Լ���ʼ��M
  int** tt = init_data(N, M + 1);    //*�������ݿ�
  input_data(fin, tt);               //?��ȡ����
  adjust_data(tt);                   //?��������
  output_data(fout, tt);             //!����ļ�
  return 0;
}

void adjust_data(int** A)
{
  for (i = 0; i < N; i++)
  {
    // if ((A[i][0] == 1 || A[i][0] == 4) && //! open stop
    //     (A[i][1] == 0 || A[i][1] == 1 || A[i][1] == 7 ||
    //      A[i][1] == 2 || //! speed power_mode
    //      A[i][1] == 4 || (A[i][1] == 3 && A[i][3] < 5 && A[i][2] == 1)) &&
    //     A[i][4] == 2) //! success
    // {
    //   A[i][M] = 0;
    // }
    // else
    A[i][M] = 0;
  }
}
