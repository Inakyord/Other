#include <stdio.h>
#include <queue>
using namespace std;

int main () {
	
	// months, down payment, loan, num records deprecation

	int months, current_month, record_month, result, dep_num;
	double dpay, loan, record, value, pagoMensual;
	queue<int> qmonths;
	queue<double> qrecords;
	


	while (scanf("%d", &months), months>0) {

		scanf("%lf %lf %d", &dpay, &loan, &dep_num);
		value = dpay+loan;
		pagoMensual = loan/(double)months;
		//printf("\nvalue = %lf", value);

		while(!qmonths.empty()){
			qmonths.pop();
			qrecords.pop();
		}

		
		for(int i=0; i<dep_num; i++){
			scanf("%d %lf", &record_month, &record);
			qmonths.push(record_month);
			qrecords.push(record);
		}
		
		record_month = qmonths.front();
		qmonths.pop();
		record = qrecords.front();
		qrecords.pop();

		result=0;
		current_month=0;
		value-=value*record;
		//printf("\nvalue = %lf , loan = %lf", value, loan);
		if(value<=loan){

			while (months-- && !result) {
				
				current_month++;
				loan-=pagoMensual;
				if (qmonths.front()==current_month) {
					record_month = qmonths.front();
					qmonths.pop();
					record = qrecords.front();
					qrecords.pop();
				}
				value-=value*record;
				//printf("\nvalue = %lf , loan = %lf", value, loan);
				if (value>loan) {
					result=current_month;
				}

			}

			if(!result){
				result=current_month;
			}
			
		}



		if(result==1)
			printf("1 month\n");
		else
			printf("%d months\n", result);

	}

	return 0;
}