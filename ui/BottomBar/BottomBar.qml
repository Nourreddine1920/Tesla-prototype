import QtQuick 2.15

Rectangle{
    id : bottomBar
    anchors{
        left : parent.left
        right : parent.right
        bottom : parent.bottom
    }
    color : "black"
    height : parent.height / 12
    Image {
        id : car
        anchors{
            left:parent.left
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }
        height : parent.height * .85
        fillMode: Image.PreserveAspectFit

        source: "qrc:/ui/assests/electric-car.png"
    }
}


