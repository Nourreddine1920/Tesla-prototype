import QtQuick 2.15
import QtLocation 5.15
import QtPositioning 5.15


Rectangle{
    id : rightScreen
    anchors{
        top : parent.top
        right : parent.right
        bottom: bottomBar.top
    }
    Plugin {
        id: mapPlugin
        name: "osm"
       }

    Map {
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(48.86, 2.33) // Paris
        zoomLevel: 14
       }
    width : parent.width * 2/3
    Image {
        id : lockIcon
        anchors{
            left:parent.left
            top: parent.top
            margins:20
            verticalCenter: parent.verticalCenter
        }
        width : parent.width / 15
        fillMode: Image.PreserveAspectFit

        source: "qrc:/ui/assests/lock.png"
    }
}
