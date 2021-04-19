const assert = require('assert');
const chai = require('chai');
const Memento  = require('../memento.mjs');
const Originator  = require('../memento.mjs');

const expect = chai.expect;
const assertEq = assert.deepStrictEqual

describe('Originator', function() {
  describe('#construct()', function() {
    it('originators can be made', function() {
	    const string1 = "string1"
      const object1 = new Originator.Originator(string1);

      assertEq(object1.value(),string1)
    });
  });
});

describe('#saveToMomento()', function() {
  it('can be saved to momento', function() {
    string1 = "string1";
    const object1 = new Originator.Originator(string1);
    const memento1 = new Memento.Memento(string1);

    memento1(object1.savetoMemento());
    assertEq(memento1.savedState(), string1);
  });
});

describe('#restore()', function() {
  it('can restore from momento', function() {
    string1 = "string1";
    string2 = "string2";
    const object1 = new Originator.Originator(string1);
    const memento1 = new Memento.Memento(string1);

    memento1(object1.savetoMemento());
    object1.setString(string2);
    assertEq(object1.value(), string2);

    object1.restore(memento1);
    assertEq(object1.value(), string1);
  });
});