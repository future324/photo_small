//转换图片分辨率
//#include<opencv2/opencv.hpp>  
//#include<iostream>  
//#include<time.h>  
//#include<fstream>  
//using namespace std;
//using namespace cv;
//int main()
//{
//	ifstream file("F://BioID_png2//face.txt");
//	int img_index = 0;
//	while (!file.eof())
//	{
//		char txt_cont[200];
//		file.getline(txt_cont, 200);
//		char img_file[200], save_file[200];
//		sprintf(img_file, "F://BioID_png2//%s", txt_cont);
//		sprintf(save_file, "F://save//%d.jpg", img_index);
//		Mat src = imread(img_file);
//		resize(src, src ,Size(20,20));
//		img_index++;
//		imwrite(save_file, src);
//	}
//	return 0;
//}
//选出目标文件
#include<opencv2/opencv.hpp>  
#include<iostream>  
#include<time.h>  
#include<fstream>  
using namespace std;
using namespace cv;
int main()
{
	ifstream file("F://Weizmann_Seg_DB_1obj//1obj//list.TXT");
	int img_index = 0;
	while (!file.eof())
	{
		char txt_cont[200];
		file.getline(txt_cont, 200);
		char img_file[200], save_file[200];
		sprintf(img_file, "F://BioID_png2//%s", txt_cont+2);
		sprintf(save_file, "F://save//%d.jpg", img_index);
		Mat src = imread(img_file);
		resize(src, src ,Size(20,20));
		img_index++;
		imwrite(save_file, src);
	}
	return 0;
}