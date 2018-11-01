#include "qgeopolyline.h"

QGeoPolyline::QGeoPolyline(int index, int FNode, int TNode, int size)
{
    this->index = index;
    this->FNode = FNode;
    this->TNode = TNode;
    this->size = size;
    pts = new QGeoPoint[size];
}

QGeoPolyline::~QGeoPolyline()
{
    // 释放点要素所占的内存
    delete[] pts;
    pts = nullptr;
}

/*************************************************
 *  @brief 添加点要素
 *  @param x  横坐标
 *  @param y  纵坐标
 *************************************************/
void QGeoPolyline::addPoint(float x, float y)
{
    // 若数组已满则返回
    if (count >= size)
    {
        return;
    }

    pts[count].setCoordinate(x, y);
    count++;
}