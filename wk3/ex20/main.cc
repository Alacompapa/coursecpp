#include "main.ih"

int main(int argc, char **argv)
{
    char *s = *environ;

    for (int i = 0; s; i++) {
      printf("%s\n", s);
      s = *(environ+i);
    }
}
