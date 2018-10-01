/* 
    Created on : Sep 18, 2018, 6:28:09 PM
    Author     : Head First Javascript Example Project
 */

/* global view */

var model = {
    boardSize: 3,
    numShips: 3,
    shipLength: 3,
    shipsSunk: 0,

    ships: [
        { locations: [0, 0, 0], hits: ["", "", ""] },
        { locations: [0, 0, 0], hits: ["", "", ""] },
        { locations: [0, 0, 0], hits: ["", "", ""] }
    ],

    fire: function(guess,player)
    {
        if(player=='X'){
            view.displayX(guess);
            view.displayMessage("Player 1 placed an X.");
            return false;
        } else{
            view.displayO(guess);
            view.displayMessage("Player 1 placed an O.");
            return false;
        }
        
    },
    /*
    fireO: function(guess)
    {
        view.displayO(guess);
        view.displayMessage("Player 1 placed an O.");
        return false;
    },
    */
    isSunk: function(ship) {
        for (var i = 0; i < this.shipLength; i++)  {
            if (ship.hits[i] !== "hit") {
                return false;
            }
        }
        return true;
    },

    collision: function(locations) {
        for (var i = 0; i < this.numShips; i++) {
            var ship = this.ships[i];
            for (var j = 0; j < locations.length; j++) {
                if (ship.locations.indexOf(locations[j]) >= 0) {
                    return true;
                }
            }
        }
        return false;
    }
	
}; 