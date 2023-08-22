#include <iostream>

using namespace std;

struct Node { //node dalam binary tree
    int data; //menyimpan nilai data pada node
    Node* left; //pointer ke anak kiri node
    Node* right; // pointer ke anak kanan node
};

Node* createNode(int data) { //node* merupakan return type dari fungsi tsb. fungsi 'createnode' untuk membuat node baru
    Node* newNode = new Node(); //deklarasi 'newNode' sebagai pointer ke objek 'NOde' / alokasi untuk node baru
    if (newNode) { //jika alokasi berhasil,
        newNode->data = data; //nilai data pada simpul baru diatur sesuai dengan nilai yang diberikan
        newNode->left = newNode->right = nullptr; //pointer kiri dan kanan diatur sebagai null
    }
    return newNode;
}

Node* insertNode(Node* root, int data) { //untuk menyisipkan simpul baru ke dalam binary tree, fugsi ini mengambil pointer ke tree root dan nilai data yang akan diinputkan
    if (root == nullptr) { //jika root kosong
        root = createNode(data); //maka fungsi createnode dipanggil untuk membuat simpul baru dengan nilai data dan mengatur root ke simpul baru tersebut
        return root;
    }

    if (data < root->data) { //jika root tidak kosong, data < root 
        root->left = insertNode(root->left, data); //maka fungsi insertnode dipanggil dan dimasukan ke kiri 'root'
    } else if (data > root->data) { //jika data lebih dari root, maka fungsi insertnode diletakan di kanan
        root->right = insertNode(root->right, data);
    }
    return root;
}

void inorderTraversal(Node* root) {//fungsi untuk mengunjungi simpul simpul dalam urutan kiri-akar-kanan.  Fungsi ini menerima pointer ke akar pohon (root).
    if (root == nullptr) {//jika root kosong, maka tidak ada yang perlu dilakukan
        return;
    }
    inorderTraversal(root->left); //jika root tidak kosong, maka dilakukan rekursi pada anak kiri root
    cout << root->data << " "; //mencetak nilai data pada 
    inorderTraversal(root->right); //melakukan rekursi pada anak kanan root
};

void preorder (Node* root){
    if (root == nullptr){
        return;
    }
    cout << root->data <<" ";
    preorder (root->left);
    preorder (root->right);
};

void postorder (Node* root){
        if (root == nullptr){
        return;
    }
    postorder (root->left);
    postorder (root->right);
    cout << root->data << " ";

}
Node* searchNode(Node* root, int key) { //key -> untuk mencari node yang akan diperiksa di tree
    if (root == nullptr || root->data == key) { //jika root kosong atau nilai root = key(yang dicari)
        return root; //mengembalikan nilai root
    }

    if (key < root->data) { //jika key kurang dari root
        return searchNode(root->left, key); //pencarian dilakukan pada cabang sebelah kiri
    } else {
        return searchNode(root->right, key); //jika root lebih dari root, maka pencarian dilakukan pada cabang sebelah kanan
    }
}
int countNodes(Node* root) {
    if (root == nullptr) {
        return 0; //jika root = null, maka tidak ada yang perlu dihitung
    }
    return 1 + countNodes(root->left) + countNodes(root->right);//jumlah node dalam root dapat dihitung dengan 1+ caban kiri + cabang kanan
}

int height (Node *root){
    if (root == nullptr) return -1;
    int u = height (root->left), v= height (root->right);
    if (u>v) return u+1;
    else return v+1;
}

int findMin(Node* root) {
    if (root == nullptr) {
        cerr << "Tree kosong" << endl;
        return -1;
    }
    while (root->left != nullptr) {
        root = root->left;
    }
    return root->data;
}

int findMax(Node* root) {
    if (root == nullptr) {
        cout << "Tree kosong" << endl;
        return -1;
    }
    while (root->right != nullptr) {
        root = root->right;
    }
    return root->data;
}
void leaf (Node *root){
    if (root == NULL) 
    cout<< "KOSONG!"<<endl;
    if (root->left!=NULL) leaf (root -> left);
    if (root -> right != NULL) leaf (root-> right);
    if (root->right == NULL && root-> left == NULL)
    cout<< " "<<root ->data;
}

int main() {
    
    Node* root = nullptr; //diinisialisasi dengan mengatur pointer 'root' menjadi 'nullptr'
    int akr;
    cout << "Masukan Nilai Root : ";
    cin >> akr;
    root = insertNode(root, akr);
    cout<<endl;

    char choice = 'y';
    while (tolower (choice) =='y'){// Dengan menggunakan fungsi std::tolower, input yang diberikan oleh pengguna akan diubah menjadi huruf kecil. 
        int data;
        cout << "Masukan Data   : ";
        cin>> data;
        insertNode (root, data);
        cout <<endl;
        cout<< "Ingin memasukan data lagi (y/n) : ";
        cin >> choice;
    }
    cout<<endl;
    cout << "Data Transversal"<<endl;
    cout<< "======================"<<endl;
    cout << "In Order Traversal : ";
    inorderTraversal(root);
    cout <<endl;
    cout << "Pre Order Transversal  : ";
    preorder(root);
    cout<< endl;
    cout << "Post Order Transversal : ";
    postorder(root);
    cout<<endl;
    cout<<endl;
    cout<< "Data Pencarian"<<endl;
    cout<< "======================"<<endl;
    int key;
    cout<<"Masukan data yang akan dicari : ";
    cin >> key;
    Node* foundnode = searchNode(root, key);
    cout<<endl;
    if (foundnode){
        cout << "Node dangan nilai "<<key<<" Ditemukan";
    }
    else
        cout<<"Node dangan nilai "<<key<<" TIDAK DITEMUKAN";
    cout<< endl;
    cout<< endl;
    cout<< "kedalaman Tree"<<endl;
    cout<< "======================"<<endl;
    int kedalaman = height(root);
    cout << "Kedalaman Tree : "<<kedalaman<<endl;
    cout<< endl;
    cout<< "Mencari Nilai terbesar dan terkecil"<<endl;
    cout<< "===================================="<<endl;
    cout << "Nilai Terkecil dalam Tree: " << findMin(root) << endl;
    cout << "Nilai Terbesar dalam Tree: " << findMax(root) << endl;
    cout<<endl;
    cout<< "Mencari Daun"<<endl;
    cout<< "======================"<<endl;
    cout<< "Daun dalam Tree : ";
    leaf(root);
    cout<< endl;


    return 0;
}


//catatan :
//Fungsi createNode tidak memiliki tipe data khusus untuk fungsinya sendiri. 
//Fungsi tersebut merupakan sebuah fungsi yang mengembalikan pointer ke objek Node. 
//Oleh karena itu, tipe data pengembalian (return type) dari fungsi createNode adalah Node*, 
//yang menunjukkan bahwa fungsi ini mengembalikan sebuah pointer yang menunjuk ke objek Node

//Transversal inorder mengunjungi simpul-simpul dalam urutan kiri-akar-kanan.

//Traversal inorder adalah teknik penelusuran pohon biner yang mengunjungi simpul-simpul dalam urutan kiri-akar-kanan.
// Untuk melakukan penelusuran ini, kita perlu memiliki akses ke simpul akar atau akar dari pohon biner yang akan ditelusuri.
//Dengan menerima pointer ke root sebagai argumen, 
//fungsi inorderTraversal dapat memulai penelusuran dari simpul akar dan melanjutkannya secara rekursif pada anak kiri dan anak kanan simpul tersebut. 