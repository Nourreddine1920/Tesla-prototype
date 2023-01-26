import QtQuick 2.15



Rectangle{
    id : leftScreen
    anchors{
        top : parent.top
        left : parent.left
        right :  rightScreen.left
        bottom: bottomBar.top
    }
    color: "white"
    Image {
        id : car2
        anchors.centerIn: parent
        width: parent.width * .95
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/assests/car2.jpeg"
    }
    width : parent.width * 1/3
}
