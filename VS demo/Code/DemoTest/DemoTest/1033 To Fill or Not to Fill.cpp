//#include <cstdio>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cctype>
//
//using namespace std;
//double max_capacity_tank, the_distance_to_hangzhou, distance_per_unit_gas;
//int total_gas_station;
//double maxDistance;
//struct Gas_station
//{
//	double price,distance;
//};
//Gas_station gasStation[501];
//
//bool cmp(Gas_station a,Gas_station b) {
//	return a.distance < b.distance;
//}
//
//int findBest(int poi, double distance,double money) {
//	int minPrice_poi;
//	if (poi == total_gas_station - 1) { //到了最后一个加油站了
//		if (the_distance_to_hangzhou - gasStation[poi].distance <= maxDistance) {
//			printf("%.02f", (money+(the_distance_to_hangzhou-gasStation[poi].distance)*gasStation[poi].price)/distance_per_unit_gas);
//			return 1;
//		}
//		else {
//			printf("The maximum travel distance = %.02f", gasStation[poi].distance - gasStation[0].distance+maxDistance);
//			return 1;
//		}
//	}
//	else {
//		if (gasStation[poi + 1].distance - gasStation[poi].distance <= maxDistance) {
//			minPrice_poi = poi + 1;
//			if (gasStation[minPrice_poi].price < gasStation[poi].price) {
//				money += (gasStation[minPrice_poi].distance - gasStation[poi].distance) * gasStation[poi].price;
//				if(findBest(minPrice_poi, distance, money)) return 1;
//				
//			}
//			bool flag = true;
//			for (int i = minPrice_poi; (gasStation[i].distance - gasStation[poi].distance <= maxDistance)&&(i<total_gas_station); i++) {
//				if (gasStation[i].price <= gasStation[minPrice_poi].price) {
//					minPrice_poi = i;
//				}
//			}
//			if (gasStation[minPrice_poi].price > gasStation[poi].price) {//如果后面的都比这个大
//				flag = false;
//				if (the_distance_to_hangzhou - gasStation[poi].distance <= maxDistance) {
//					printf("%.02f", (money - (maxDistance - (gasStation[minPrice_poi].distance - gasStation[poi].distance)) * (gasStation[minPrice_poi].price - gasStation[poi].price) + (the_distance_to_hangzhou - gasStation[poi].distance) * gasStation[poi].price)/distance_per_unit_gas);
//					return 1;
//				}
//			}
//			if (!flag) {
//				money += (gasStation[minPrice_poi].distance - gasStation[poi].distance) * gasStation[poi].price - (maxDistance-(gasStation[minPrice_poi].distance - gasStation[poi].distance))*(gasStation[minPrice_poi].price-gasStation[poi].price);
//			}
//			else {
//				money += (gasStation[minPrice_poi].distance - gasStation[poi].distance) * gasStation[poi].price;
//			}
//			if(findBest(minPrice_poi, distance, money))return 1;
//		}
//		else {
//			printf("The maximum travel distance = %.02f",(gasStation[poi].distance-gasStation[0].distance+maxDistance)/distance_per_unit_gas);
//			return 1;
//		}
//	}
////找到最后也没找到
//		
//}
//
//int main()
//{
//	cin >> max_capacity_tank >> the_distance_to_hangzhou >> distance_per_unit_gas >> total_gas_station;
//	maxDistance = distance_per_unit_gas * max_capacity_tank;
//	for (int i = 0; i < total_gas_station; i++) {
//		cin >> gasStation[i].price >> gasStation[i].distance;
//	}
//	if (total_gas_station == 0 || distance_per_unit_gas * max_capacity_tank == 0) {
//		printf("The maximum travel distance = 0.00");
//	}
//	else {
//		sort(gasStation, gasStation + total_gas_station, cmp);
//		findBest(0, maxDistance, 0);
//	}
//}