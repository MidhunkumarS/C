#include <stdio.h>

int main(void) {
	// your code goes here
	typedef struct rooms
	{
		int room_no;
        char name;
        int date;
        int total;
        int concession;
        char booked;
	}r1;
	
	int i,vacant;
	for(i=0;i<30;i++)
	{
		scanf("%d",r1.room_no);
		scanf("%d",r1.name);
		scanf("%d",r1.date);
                        scanf("%d",r1.total);
                        scanf("%d",r1.concession);
                        scanf("%d",r1.booked);
	}
	printf("%d",vacant);
	return 0;
}
