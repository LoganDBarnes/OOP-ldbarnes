export class Originator {
    constructor(string1) {
        this._string1 = string1;
    }

    get string1() {
        return this._string1;
    }

    
}

module.exports = {'Originator': Originator}