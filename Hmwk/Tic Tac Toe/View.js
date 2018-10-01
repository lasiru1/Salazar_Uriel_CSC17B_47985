/* 
    Created on : Sep 18, 2018, 6:28:09 PM
    Author     : Head First Javascript Example Project
 */


var view = {
    displayMessage: function(msg) {
        var messageArea = document.getElementById("messageArea");
        messageArea.innerHTML = msg;
    },

    displayX: function(location) {
        var cell = document.getElementById(location);
        cell.setAttribute("class", "placeX");
    },

    displayO: function(location) {
        var cell = document.getElementById(location);
        cell.setAttribute("class", "placeO");
    }

}; 