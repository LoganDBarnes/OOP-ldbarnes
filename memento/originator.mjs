import { Memento } from "./memento.mjs";

export class Originator {
    constructor(string1) {
        this._string1 = string1;
    }

    set setString() {
        this._string1 = string1;
    }

    saveToMemento() {
        const memento1 = new Memento.Memento(string1);
        return memento1;
    }

    restore(memento1){ //from memento
        m_string1 = memento1.string1();
    }

    get value(){
        return m_string;
    }
}

module.exports = {'Originator': Originator}