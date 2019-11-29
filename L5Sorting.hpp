void Sorting(Array arr[], int n) // реалізація метода сортування злиттям за спаданням
{
 for (int i = 0; i < n; i++)
 {
 for (int Size_of_val = 1; Size_of_val < n; Size_of_val *= 2)
 {
 for (int bl_val = 0; bl_val < n - Size_of_val; bl_val += 2 * Size_of_val)
 {
 int Left_block = 0;
 int Right_block = 0;
 int Br_left = bl_val;
 int Br_mid = bl_val + Size_of_val;
 int Rigt_block = bl_val + 2 * Size_of_val;
 Rigt_block = (Rigt_block < n) ? Rigt_block : n;
 int* DinamicNewSortingMatrix = new int[Rigt_block - Br_left];
 while (Br_left + Left_block < Br_mid && Br_mid + Right_block < Rigt_block)
 {
 if (arr[i].ArrBlock[Br_left + Left_block] > arr[i].ArrBlock[Br_mid + Right_block])
 {
 DinamicNewSortingMatrix[Left_block + Right_block] = arr[i].ArrBlock[Br_left +
Left_block];
 Left_block++;
 }
else
{
 DinamicNewSortingMatrix[Left_block + Right_block] = arr[i].ArrBlock[Br_mid +
Right_block];
 Right_block++;
 }
 }
 while (Br_left + Left_block < Br_mid)
 {
 DinamicNewSortingMatrix[Left_block + Right_block] = arr[i].ArrBlock[Br_left +
Left_block];
 Left_block++;
 }
 while (Br_mid + Right_block < Rigt_block)
 {
 DinamicNewSortingMatrix[Left_block + Right_block] = arr[i].ArrBlock[Br_mid +
Right_block];
 Right_block++;
 }
 for (int FinallMerge = 0; FinallMerge < Left_block + Right_block; FinallMerge++)
 {
 arr[i].ArrBlock[Br_left + FinallMerge] = DinamicNewSortingMatrix[FinallMerge];
 }
 delete DinamicNewSortingMatrix;
 }
 }
 }
}
