import QtQuick 2.15
import QtQuick.Window 2.15
import "ui/BottomBar"
Window {
    width: 1280
    height: 720
    visible: true
    title: qsTr("Tesla infotainment")
    BottomBar{
        id: bottomBar
    }
    Rectangle{
        id : rightScreen
        anchors{
            top : parent.top
            right : parent.right
            bottom: bottomBar.top
        }
        color : "blue"
        width : parent.width * 2/3
    }


}
