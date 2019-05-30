#include <bits/stdc++.h>

using namespace std;

void slyvosMokiniui(int *eaten, int *left);

int main()
{
	ifstream in("U1.txt");
	ofstream out("U1rez.txt");
    int eaten[20];
    int left[10];
    //irasau i eaten kiek suvalge is pradziu visi
    for(int i=0; i<20; i++){
		if(i<10){
			in>>eaten[i];
			left[i] = 10 - eaten[i];
		}else{
			eaten[i] = 0;
		}
    }

	slyvosMokiniui(eaten, left);

	for(int i=0; i<20; i++){
		out<<eaten[i]<<" ";
    }
    return 0;
}
void slyvosMokiniui(int *eaten, int *left){
	//bus 10 ciklu, kai sius slyvas i desine nuo savo pozicijos
	//ir jeigu bus slyvu aisku
    for(int i = 0; i<10; i++){
		for(int j = i+1; j<20; j++){
			if(left[i]>0){
				eaten[j]++;
				left[i]--;
			}
		}
    }
}
