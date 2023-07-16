// function to swap elements

// quick sort
void swap(int* a, int* b);
int partition(int* arr, int low, int high);

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int* arr, int low, int high) {
	int pivot = arr[high];
	int j = low;
	for (int i = low; i < high + 1; i++) {
		if (arr[i] < pivot) {
			swap(arr[i], arr[j]);
			j++;
		}
	}
	swap(pivot, arr[j]);
	return j;
}