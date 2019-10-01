#include "main.ih"

void quickSort(string toSort[i])
{
  int idx, idxx;
  for(idx = 1; idx < 5; ++idx)
        {
                for(idxx = 1; idxx < 5; idxx++)
                {
                        if(strcmp(toSort[idxx - 1], toSort[idxx])>0)
                        {
                                strcpy(t, str[idxx - 1]);
                                strcpy(str[idxx - 1], str[idxx]);
                                strcpy(str[idxx], t);
                        }
                }
        }
        cout<< "\n" << "Strings in alphabetical order:" << " \n";
        for(idx = 0; i < 5; i++)
        {
               cout<<" ";
               cout<<toSort[idx]<<"\n";
        }
       return 0;
}
