int binary_search(int A[],int n,int x){
    //Khai bao cac bien vi tri
    int left, right, mid; 
    //Gan left ban dau bang 0, right ban dau bang n - 1 (vi tri cuoi cung)
    left=0; right=n-1;
    //Thuc hien vong lap do
    do{
        //Lay ra vi tri phan tu giua trong day hien hanh
        mid=(left+right)/2;
        //Neu phan tu giua day bang x thi viec tim kiem thanh cong
        if(A[mid] == x){
            return mid; //Tra ve vi tri cua phan tu tim thay
        }
        else if(A[mid] < x){//Nguoc lai, neu phan tu giua nho hon x
            //Thay doi lai bien left = mid + 1 de tiep tuc tim kiem nua ben phai cua day moi
            left = mid + 1;
        }else{//Nguoc lai, neu phan tu giua khong nho hon x
            //Thay doi lai bien right = mid - 1 de tiep tuc tim kiem nua ben trai cua day moi
            right = mid - 1;
        }
    }while(left<=right);//Dieu kien lap khi left < right
    //Truong hop khong tim thay phan tu co gia tri bang x sau khi duyet het mang se tra ve -1
    return -1;
}