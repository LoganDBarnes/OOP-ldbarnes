import { Memento } from "./memento.mjs";

export class Originator {
    constructor(string1) {
        this._string1 = string1;
    }

    set string1() {
        this._string1 = string1;
    }

    saveToMemento() {
        Memento;
        return Memento;
    }

    restore(memento1){ //from memento
        m_string1 = memento1.string1();
    }

    get value(){
        return m_string;
    }
}

module.exports = {'Originator': Originator}