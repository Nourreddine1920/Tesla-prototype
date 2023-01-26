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
}
