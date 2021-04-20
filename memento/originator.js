//import { Memento } from "./memento.js";
const Memento  = require('./memento.js');

class Originator {
    constructor(string1) {
        this._string1 = string1;
    }

    setString(string1) {
        this._string1 = string1;
    }

    savetoMemento() {
        const memento1 = new Memento.Memento(this._string1);
        return memento1;
    }

    restore(memento1) { //from memento
        this._string1 = memento1.savedState();
    }

    value() {
        return this._string1;
    }
}

module.exports = {'Originator': Originator}