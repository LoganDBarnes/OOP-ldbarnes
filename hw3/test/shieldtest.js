const assert = require('assert');
const chai = require('chai');
const shield = require('../hello');

const expect = chai.expect;
const assertEq = assert.deepStrictEqual

describe('Shield', function() {
  describe('#construct()', function() {
    it('shields can be made', function() {
	    const style = "round"
        const material = "steel"
        const color = "silver"
        const weight = 10
        const thrown = False

        const shield = Shield = new shield.Shield(style, material, color, weight, thrown)
        assertEq(shield.style,style)
        assertEq(shield.material,material)
        assertEq(shield.color,color)
        assertEq(shield.weight,weight)
        assertEq(shield.thrown,thrown)
    });
  });
});