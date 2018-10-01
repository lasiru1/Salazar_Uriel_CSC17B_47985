/* 
    Created on : Sep 18, 2018, 6:28:09 PM
    Author     : Head First Javascript Example Project
 */


/* global model, view */

var controller = {
    guesses: 1,
    
    //Player 1
    processGuess: function(guess)
    {
        
        var location = this.parseGuess(guess);
        if (location)
        {
            var player;
            if(this.guesses%2==1){
                player='X';
            }else{
                player='O';
            }
            //var playerCount;
            this.guesses++;
            var hit = model.fire(location,player);
        }
    },

    parseGuess:  function(guess) {
        var alphabet = ["A", "B", "C"];

        if (guess === null || guess.length !== 2) {
            alert("Oops, please enter a letter and a number on the board.");
        } else {
            var firstChar = guess.charAt(0);
            var row = alphabet.indexOf(firstChar);
            var column = guess.charAt(1);

            if (isNaN(row) || isNaN(column)) {
                alert("Oops, that isn't on the board.");
            } else if (row < 0 || row >= model.boardSize ||
                   column < 0 || column >= model.boardSize) {
                alert("Oops, that's off the board!");
            } else {
                return row + column;
            }
        }
        return null;
    }
};