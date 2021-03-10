import unittest

from shield import Shield

class ShieldTest(unittest.TestCase):
    def testDefaultShield(self):
        style : str = "round"
        color : str = "silver"
        weight : int = 10
        thrown : bool = False

        shield : Shield = Shield(style, color, weight, thrown)
        self.assertEqual(shield.style,style)
        self.assertEqual(shield.color,color)
        self.assertEqual(shield.weight,weight)
        self.assertEqual(shield.thrown,thrown)

    def testThrow(self):
        style : str = "round"
        color : str = "red, white, and blue"
        weight : int = 12
        thrown : bool = False

        shield : Shield = Shield(style, color, weight, thrown)
        self.assertEqual(shield.style,style)
        self.assertEqual(shield.color,color)
        self.assertEqual(shield.weight,weight)
        self.assertEqual(shield.thrown,thrown)

        if shield.thrown == False:
            print("Captain America throws his mighty shield!")
        shield.throw()
        self.assertEqual(shield.thrown, True)
        
if __name__ == '__main__':
    unittest.main()