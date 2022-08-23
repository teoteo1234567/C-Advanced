#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Vector
{
    int data;
    struct Vector *next; // tao con tro de luu dia chi cac node tiep theo
};

typedef struct Vector *node; //dinh nghia lai theo kieu typedef

node CreateNode(int value)//function tra ve kieu con tro (*ptr)
{
    node temp; //khoi tao node kieu con tro
    temp = (node)malloc(sizeof(struct Vector));// dung cap phat dong de tao ra vung nho cho no (sau khi kthuc ham vung nho nay ko bi thu hoi)
    temp->data = value; //tro den gia tri
    temp->next = NULL; // cho next tro toi NULL
    return temp;
}

// Them vao dau Node
node Push_back(node head, int value)// them Node
{
    node temp = CreateNode(value);
    if(head == NULL){// ktra xem co node nao hay chua ?
        head = temp;
    }else{
        temp->next = head; // Trỏ next của temp = head hiện tại
        head = temp;  //// Đổi head hiện tại = temp(Vì temp bây giờ là head mới mà)
    }
    return head;
}

//Them Node vao mot vi tri bat ki
node Insert(int value, int position)
{
    node head;
    if(position == 0 || head == NULL)
    {
        head = Push_back(head, value);
    }else{
        int k = 1; // bat dau vi tri can chen
        node p = head;
        while(p != NULL && k != position)
        {
            p = p->next;
            k++;
        }
        if(k == position){
            node temp = CreateNode(value);
            temp->next = p->next; // temp->next lay dia chi tiep theo cua p->next
            p->next = temp;     //roi p->next tro den dia chi cua node moi
        }
    }
    return head;
}

//Xoa phan tu cuoi
node Pop_back()
{
    node head;
    if(head == NULL || head->next == NULL)
    {
        return Pop_back(head);
    }
    node p = head;
    while(p->next->next != NULL)//p->next->next: tro den gia tri NULL cuoi mang
    {
        p = p->next;
    }
    p->next = p->next->next; //p->next = NULL;
    return head;
}

//gan vao mot gia tri moi thay gia tri cu
node Assign_Node(int value, int position)
{
    node head; 
    if(position == 0 || head == NULL)
    {
        head = Push_back(head, value);
    }else{
        int k = 1; // bat dau vi tri can chen
        node p = head;
        while(p != NULL && k != position)
        {
            p = p->next;
            k++;
        }
        if(k == position){
            p->data = value;//thay doi gia tri tai Node do
        }
    }
    return head;
}

int main(int argc, char const *argv[])
{
   

    return 0;
}
