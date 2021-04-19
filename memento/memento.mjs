export class Memento {
    constructor(string1) {
        this._string1 = string1;
    }

    get string1() { //get saved state
        return this._string1;
    }
}

module.exports = {'Memento': Memento}