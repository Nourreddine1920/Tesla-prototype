import QtQuick 2.15

Rectangle{
    id : leftScreen
    anchors{
        top : parent.top
        left : parent.left
        bottom: bottomBar.top
    }
    color : "orange"
    width : parent.width * 1/3
}
