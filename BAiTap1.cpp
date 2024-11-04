#include <stdio.h>

 void nhapmang(int a[50],int n){
 	for (int i=1;i<=n;i++){
 		printf("Nhap phan tu a[%d]; ", i);
 		scanf("%d",&a[i]);
 		}
 }
 void xuatmang(int a[50],int n){
 	for (int i=1;i<=n;i++){
 		printf("%d",a[i]);
 		}
 		}
 void timMax(int a[50], int n) {
    int max_value = a[0];
    int max_index = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > max_value) {
            max_value = a[i];
            max_index = i;
        }
    }
    printf("Vi tri max: %d, gia tri max: %d\n", max_index, max_value);
    }
 void timMin(int a[50], int n) {
    int min_value = a[0];
    int min_index = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < min_value) {
            min_value = a[i];
            min_index = i;
            
        }
    }
    printf("Vi tri min: %d, gia tri min: %d\n", min_index, min_value);
}
void inSoLe(int a[50], int n) {
    printf("Cac so le trong mang: ");
    int found = 0; 
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 != 0) { 
            printf("%d ", a[i]);
            found = 1; 
        }
    }
    if (!found) {
        printf("Khong co so le trong mang.\n");
    } else {
        printf("\n");
    }
    }
void tinhTong(int a[50], int n) {
    int sum = 0; 
    for (int i = 1; i <= n; i++) {
        sum += a[i]; 
    }
    printf("Tong gia tri cua cac phan tu trong mang: %d\n", sum);
}
int main(){
 int a [50],n,x;
 printf("nhap so phan tu: ");
 scanf("%d",&n);
 nhapmang(a, n);
 printf(" Mang vua nhap la: ");
 xuatmang(a,n);
 printf("\n Nhap chu so phan tu ban muon xem (0 den %d): ", n );
    scanf("%d", &x);
    
    if (x >= 0 && x < n) {
        printf("Gia tri phan tu thu %d là: %d\n", x, a[x]);
    } else {
        printf("Chu so khong hop le.\n");
    }
    timMax(a, n);
    timMin(a, n);
    inSoLe(a, n);
    tinhTong(a, n);
    return 0;
}
 
