import QtQuick 2.15
import QtLocation 5.15
import QtPositioning 5.15


Rectangle{
    id : leftScreen
    anchors{
        top : parent.top
        left : parent.left
        right :  rightScreen.left
        bottom: bottomBar.top
    }
    color : "orange"
    width : parent.width * 1/3
}
