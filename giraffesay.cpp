#include <iostream>
#include <string>
#define TEXTLENGTH 32
using namespace std;

void printgiraffe();

int main() {
  string input;
  char* cpstart;
  char* cp;
  char* lastspc;
  int extraspaces;
  getline (cin,input);
  cpstart = &input[0];
  cp = cpstart;
  lastspc = cp;
  cout << " ---------------------------------\n";
  while (1) {
    cout << "|";
    for ( ; (cp-cpstart)<=TEXTLENGTH && (*cp != '\0'); cp++) {
      if (*cp==' ' || *cp=='\t' || *cp=='\n') { 
	lastspc = cp; /* point to last space */
	*cp = ' '; /* new lines and tabs not supported */
      }
      if (lastspc == cpstart) /* if there are no spaces within TEXTLENGTH*/
      	lastspc = cp; 
    } 
    if (*cp == '\0') /* end of string, set extraspaces */
      extraspaces = TEXTLENGTH-(cp-cpstart);
    for ( ; cpstart!=lastspc+1; cpstart++) /* print words on line */
      cout << *cpstart;
    if (*cp == '\0') { /* procedure for end of string */
      cout << cpstart;
      for ( ; extraspaces >= 0; extraspaces--)
	cout << ' ';
      cout << "|\n";
      break;
    }
    for ( ; cp!=lastspc+1; cp--)
      std::cout << ' ';
    cout << "|\n";
  }
  cout << " ---------------------------------\n";
  printgiraffe();
  return 0;
}

void printgiraffe() {
  std::cout << "        /\n";
  std::cout << " ^__^  /\n";
  std::cout << " (oo)\n";
  std::cout << "  ()\\\\\n";
  std::cout << "     \\\\\n";
  std::cout << "      \\\\\n";
  std::cout << "       \\\\_______\n";
  std::cout << "        (88___88)%%\n";
  std::cout << "         \\/   \\/  %%\n";
  std::cout << "         ||   ||  %%\n";
  std::cout << "         ||   ||  %%\n";
  std::cout << "         ||   ||   %%\n";
  std::cout << "        (&&) (&&)\n";
}

