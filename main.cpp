#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main ()
{
  map<string, string> morse;
  map<string, string> alpha;
  string ciag_znakow_do_przetlumaczenia;
  string znak;
  string ciag_znakow_po_tlumaczeniu;
  int ilosc_znakow = 0;

  morse["A"]=".-";
  morse["B"]="-...";
  morse["C"]="-.-.";
  morse["D"]="-..";
  morse["E"]=".";
  morse["F"]="..-.";
  morse["G"]="--.";
  morse["H"]="....";
  morse["I"]="..";
  morse["J"]=".---";
  morse["K"]="-.-";
  morse["L"]=".-..";
  morse["M"]="--";
  morse["N"]="-.";
  morse["O"]="---";
  morse["P"]=".--.";
  morse["Q"]="--.-";
  morse["R"]=".-.";
  morse["S"]="...";
  morse["T"]="-";
  morse["U"]="..-";
  morse["V"]="...-";
  morse["W"]=".--";
  morse["X"]="-..-";
  morse["Y"]="-.--";
  morse["Z"]="--..";

  morse["a"]=".-";
  morse["b"]="-...";
  morse["c"]="-.-.";
  morse["d"]="-..";
  morse["e"]=".";
  morse["f"]="..-.";
  morse["g"]="--.";
  morse["h"]="....";
  morse["i"]="..";
  morse["j"]=".---";
  morse["k"]="-.-";
  morse["l"]=".-..";
  morse["m"]="--";
  morse["n"]="-.";
  morse["o"]="---";
  morse["p"]=".--.";
  morse["q"]="--.-";
  morse["r"]=".-.";
  morse["s"]="...";
  morse["t"]="-";
  morse["u"]="..-";
  morse["v"]="...-";
  morse["w"]=".--";
  morse["x"]="-..-";
  morse["y"]="-.--";
  morse["z"]="--..";
  
  morse[" "]="|";

  alpha[".-"]="a";
  alpha["-..."]="b";
  alpha["-.-."]="c";
  alpha["-.."]="d";
  alpha["."]="e";
  alpha["..-."]="f";
  alpha["--."]="g";
  alpha["...."]="h";
  alpha[".."]="i";
  alpha[".---"]="j";
  alpha["-.-"]="k";
  alpha[".-.."]="l";
  alpha["--"]="m";
  alpha["-."]="n";
  alpha["---"]="o";
  alpha[".--."]="p";
  alpha["--.-"]="q";
  alpha[".-."]="r";
  alpha["..."]="s";
  alpha["-"]="t";
  alpha["..-"]="u";
  alpha["...-"]="v";
  alpha[".--"]="w";
  alpha["-..-"]="x";
  alpha["-.--"]="y";
  alpha["--.."]="z";
  alpha["--.."]="z";

  alpha[" "]="";
  alpha["|"]=" ";



  ciag_znakow_do_przetlumaczenia = "ciag znakow sos";
  ilosc_znakow = ciag_znakow_do_przetlumaczenia.size();
  ciag_znakow_po_tlumaczeniu = "";

  for(int i = 0; i < ilosc_znakow; i++)
  {
    znak = ciag_znakow_do_przetlumaczenia[i];
    cout << i << ": "<< znak << "\t" << morse[znak] << endl;
    ciag_znakow_po_tlumaczeniu = ciag_znakow_po_tlumaczeniu + morse[znak] + " ";
  }

  std::cout << "morse now contains " << morse.size() << " elements.\n" << ciag_znakow_po_tlumaczeniu << endl;

// ---------------------------

  ciag_znakow_do_przetlumaczenia = "-.-. .. .- --. | --.. -. .- -.- --- .-- | ... --- ...";
  ciag_znakow_po_tlumaczeniu = "";

  string buf; // Have a buffer string
  stringstream ss(ciag_znakow_do_przetlumaczenia); // Insert the string into a stream

  vector<string> tokens; // Create vector to hold our words

  while (ss >> buf)
  {
    tokens.push_back(buf);
  }

  ilosc_znakow = tokens.size();

  for(int i = 0; i < ilosc_znakow; i++)
  {
    znak = tokens[i];
    cout << i << ":: "<< znak << "\t" << alpha[znak] << endl;
    ciag_znakow_po_tlumaczeniu = ciag_znakow_po_tlumaczeniu + alpha[znak];
  }

  std::cout << "morse now contains " << alpha.size() << " elements.\n" << ciag_znakow_po_tlumaczeniu << endl;


  return 0;
}
