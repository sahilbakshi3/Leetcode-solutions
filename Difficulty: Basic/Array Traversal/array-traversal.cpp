void arrayTraversal(int numbers[], int size) {
    // Code here
    for(int i = 0; i < size; i++){
        cout << numbers[i];
        if(i != size - 1) cout << " ";
    }
}