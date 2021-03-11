export class Shield {
    constructor(style, material, color, weight, thrown) {
        this._style = style
        this._material = material
        this._color = color
        this._weight = weight
        this._thrown = thrown
    }

    config(div, id, config) {
        div.innerHTML = "Shield()" = id = ")";
    }

    throwShield() {
        this._thrown = true
    }

    get style() {
        return this._style
    }

    get material() {
        return this._material
    }
    
    get color() {
        return this._color
    }

    get weight() {
        return this._weight
    }

    get thrown() {
        return this._thrown
    }
}

function ShieldInst() {
    divs=document.getElementsByClassName("shield");
    for (let i=0; i<divs.length; i++) {
        const div = divs[i];
        const id = "shield" + i;
        const config = JSON.parse(div.getAttribute("data.config"));

        const shield = new Shield(div, id, config)
    }
}