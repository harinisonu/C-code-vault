#include<stdio.h>
int main()
{
    int distance_a1,fuelcost_b1,distance_a2,fuelcost_b2;
    long long int showroomprize_c1,average_d1,main_cost_e1,showroomprize_c2,average_d2,main_cost_e2;
    scanf("%d\n%d\n%lld\n%lld\n%lld\n%d\n%d\n%lld\n%lld\n%lld",&distance_a1,&fuelcost_b1,&showroomprize_c1,&average_d1,&main_cost_e1,&distance_a2,&fuelcost_b2,&showroomprize_c2,&average_d2,&main_cost_e2);
    //scanf("%lld\n%lld\n%lld",)
    unsigned long long int tot_petrol_cost,tot_di_cost,petrol,diesel;
    tot_petrol_cost=((((average_d1/distance_a1)*fuelcost_b1)*main_cost_e1)*60);
    tot_di_cost=((((average_d2/distance_a2)*fuelcost_b2)*main_cost_e2)*60);
    petrol = tot_petrol_cost+showroomprize_c1;
    diesel = tot_di_cost+showroomprize_c2;
    if(petrol<diesel)
        printf("petrol");
    else
        printf("diesel");
}
