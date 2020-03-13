// BinaryThreshold.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<opencv.hpp>
using namespace cv;
using namespace std;
int main()
{


	cv::Mat srcMat = imread("E:\\桌面壁纸\\1.jpg",0);
	cv::Mat destMat1;
	cv::Mat destMat2;

	threshold(srcMat, destMat1, 100, 255, THRESH_BINARY);
	adaptiveThreshold(srcMat, destMat2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);

	/*imshow("srcMat", srcMat);*/
	imshow("bMat1",destMat1);
	imshow("bMat2", destMat2);
	waitKey(0);
	return 0;


	//Mat srcImage = imread("D:\\opencv_picture_test\\阈值处理\\硬币.png", 0);	//读入的时候转化为灰度图
	//namedWindow("原始图", WINDOW_NORMAL);//WINDOW_NORMAL允许用户自由伸缩窗口
	//imshow("原始图", srcImage);

	//Mat dstImage1, dstImage2;
	//dstImage1.create(srcImage.rows, srcImage.cols, CV_8UC1);
	//dstImage2.create(srcImage.rows, srcImage.cols, CV_8UC1);
	//double time0 = static_cast<double>(getTickCount());	//记录起始时间
	////阈值处理+二值化
	////1
	//threshold(srcImage, dstImage1, 83, 255, THRESH_BINARY);
	//adaptiveThreshold(srcImage, dstImage2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);
	////		原图  结果图   预设满足条件的最大值		自适应阈值算法   二进制阈值或反二进制阈值   局部区域的尺寸 3 5 7      该参数和算法有关
	////一系列处理之后
	//time0 = ((double)getTickCount() - time0) / getTickFrequency();
	//cout << "此方法运行时间为：" << time0 << "秒" << endl;	//输出运行时间
	//namedWindow("效果图1", WINDOW_NORMAL);//WINDOW_NORMAL允许用户自由伸缩窗口
	//imshow("效果图1", dstImage1);
	//namedWindow("效果图2", WINDOW_NORMAL);//WINDOW_NORMAL允许用户自由伸缩窗口
	//imshow("效果图2", dstImage2);
	////dstImage = My_Rraw_histogram(&srcImage);
	////namedWindow("一维直方图", WINDOW_NORMAL);//WINDOW_NORMAL允许用户自由伸缩窗口
	////imshow("一维直方图", dstImage);
	//waitKey(0);
	//return 0;


    //std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
