import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 1280
    height: 720
    visible: true
    title: qsTr("Tesla infotainment")


    Rectangle{
        id : bottomBar
        anchors{
            left : parent.left
            right : parent.right
            bottom : parent.bottom
        }
        color : "black"
        height : parent.height / 12
    }
}
