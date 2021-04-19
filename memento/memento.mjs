export class Memento {
    constructor(string1) {
        this._string1 = string1;
    }

    get savedState() {
        return this._string1;
    }
}

module.exports = {'Memento': Memento}