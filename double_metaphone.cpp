#include <bits/stdc++.h>
using namespace std;
string ka;
string hoshonto;
string nya;
string ca;
string cha;
string ja;
string jha;
string ba;
string ma;
string ga;
string U;
string D;
string nga;
string tta;
string nna;
string na;
string la;
string sha;
string ssa;
string sa;
string ha;
string R;
string ra;
string ya;
string visharga;
string convertToDoubleMetaphone (vector <string> word) {
    string ret;

    return ret;
}
string doubleMetaphone (string word) {
    vector <string> chars;
    vector <string> done;
    string tmp;
    for (int i=0; i<word.length(); i+=3) {
        for (int j=i; j<i+3; j++) {
            tmp.push_back(word[j]);
        }
        chars.push_back(tmp);
        tmp.clear();
    }
    for (int i=0; i<chars.size(); i++) {
        // kkhiyo
	//24 25
        if (chars[i] == ka && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == ssa) {
             done.push_back(ka+hoshonto+ssa);
             i++;
             i++;
        }
        // nio
        //41
	else if(chars[i]==nya && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ca){
		done.push_back(nya+hoshonto+ca);
		i+=2;
	}

	//42
	else if(chars[i]==nya && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==cha){
		done.push_back(nya+hoshonto+cha);
		i+=2;
	}


	//43
	else if(chars[i]==nya && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ja){
		done.push_back(nya+hoshonto+ja);
		i+=2;
	}

	//44
	else if(chars[i]==nya && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==jha){
		done.push_back(nya+hoshonto+jha);
		i+=2;
	}
	//45
	else if(chars[i]==ca && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==nya){
		done.push_back(ca+hoshonto+nya);
		i+=2;
	}

	//47
	else if(i==0 && chars[i]==ja && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==nya){
		done.push_back(ja+hoshonto+nya);
		i+=2;
	}

	//48
	else if(i!=0 && chars[i]==ja && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==nya){
		done.push_back(ja+hoshonto+nya);
		i+=2;
	}

	//49
	else if(chars[i]==nya && i < chars.size() - 1 && chars[i+1]==hoshonto){
		done.push_back(nya+hoshonto);
		i++;
	}
        // bo fola
	//71
        else if (chars[i] == ba && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == ba) {
            done.push_back(ba+hoshonto+ba);
             i++;
             i++;
        }
	//72
        else if (chars[i] == ma && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == ba) {
            done.push_back(ma+hoshonto+ba);
             i++;
             i++;
        }
	//73
        else if (chars[i] == ga && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == ba) {
            done.push_back(ga+hoshonto+ba);
             i++;
             i++;
        }
	//74
        else if (chars[i] == U && i < chars.size() - 3 && chars[i+1] == D && chars[i+2] == hoshonto && chars[i+3] == ba) {
            done.push_back(U+D+hoshonto+ba);
             i++;
             i++;
             i++;
        }
	//75
        else if (chars[i] == hoshonto && i < chars.size() - 1 && chars[i+1] == ba && i > 1 && chars[i-2] != hoshonto) {
            done.push_back(ba+ba);
            i++;
        }
        // mo fola
        //80
	else if(chars[i]==ka && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(ka+hoshonto+ma);
		i+=2;
	}
	//81
	else if(chars[i]==ga && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(ga+hoshonto+ma);
		i+=2;
	}

	//82
	else if(chars[i]==nga && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(nga+hoshonto+ma);
		i+=2;
	}
	//83
	else if(chars[i]==tta && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(tta+hoshonto+ma);
		i+=2;
	}

	//84
	else if(chars[i]==nna && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(nna+hoshonto+ma);
		i+=2;
	}

	//85
	else if(chars[i]==na && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(na+hoshonto+ma);
		i+=2;
	}

	//86
	else if(chars[i]==ma && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(ma+hoshonto+ma);
		i+=2;
	}

	//87
	else if(chars[i]==la && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(la+hoshonto+ma);
		i+=2;
	}

	//88
	else if(i!=0 && chars[i]==sha && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(sha+hoshonto+ma);
		i+=2;
	}

	//89
	else if(i!=0 && chars[i]==ssa && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(ssa+hoshonto+ma);
		i+=2;
	}

	//90
	else if(i!=0 && chars[i]==sa && i < chars.size() - 2 && chars[i+1]==hoshonto && chars[i+2]==ma){
		done.push_back(sa+hoshonto+ma);
		i+=2;
	}
        // 91
        else if (chars[i] == hoshonto && i < chars.size() - 1 && chars[i+1] == ma && i > 1 && chars[i-2] != hoshonto) {
            done.push_back(ba+ba);
            i++;
        }
        // ho
	    //95
        else if (chars[i] == ha && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == R) {
            done.push_back(ha+hoshonto+R);
             i++;
             i++;
        }
	    //96
        else if (chars[i] == ha && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == ra) {
            done.push_back(ha+hoshonto+ra);
             i++;
             i++;
        }
	    //97
        else if (chars[i] == ha && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == na) {
            done.push_back(ha+hoshonto+na);
             i++;
             i++;
        }
	    //98
        else if (chars[i] == ha && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == nna) {
            done.push_back(ha+hoshonto+nna);
             i++;
             i++;
        }
	    //99
        else if (chars[i] == ha && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == ma) {
            done.push_back(ha+hoshonto+ma);
             i++;
             i++;
        }
	    //100
        else if (chars[i] == ha && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == ya) {
            done.push_back(ha+hoshonto+ya);
             i++;
             i++;
        }
	    //101 102
        else if (chars[i] == ha && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == la) {
             done.push_back(ha+hoshonto+la);
             i++;
             i++;
        }
	    //103
        else if (chars[i] == ha && i < chars.size() - 2 && chars[i+1] == hoshonto && chars[i+2] == ba) {
            done.push_back(ha+hoshonto+ba);
             i++;
             i++;
        }
        // bishorgo
	    //105 106 107 108
        else if (chars[i] == visharga) {
            if (i == chars.size() - 1) {
                if (chars.size() <= 2) done.push_back(visharga);
            }
            else done.push_back(ba+ba);
        }


        // else
        else {
            done.push_back(chars[i]);
        }
    }
    return convertToDoubleMetaphone(done);
}
char str[101];
int main () {
    FILE * id;
    id = fopen("hoshonto.txt", "r");
    //string ka;
    fscanf(id, "%s", str);
    for (int i=0; i<3; i++) ka.push_back(str[i]);

    //string hoshonto;
    fscanf(id, "%s", str);
    for (int i=0; i<3; i++) hoshonto.push_back(str[i]);

//    string nya;

//    string ca;

//    string cha;

//    string ja;

//    string jha;

//    string ba;

//    string ma;

//    string ga;

//    string U;

//    string D;


//    string nga;

//    string tta;

//    string nna;

//    string na;

//    string la;

//    string sha;

//    string ssa;
    fscanf(id, "%s", str);
    for (int i=0; i<3; i++) ssa.push_back(str[i]);

//    string sa;

//    string ha;

//    string R;

//    string ra;

//    string ya;

//    string visharga;
    fclose(id);
    string word;
    cin >> word;
    cout << "Double Metaphone of " << word << " is " << doubleMetaphone(word) <<endl;
    return 0;
}
