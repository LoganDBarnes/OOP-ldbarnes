import unittest

from shield import Armor

class ArmorTest(unittest.TestCase):
    def testArmor(self):
        material : str = "steel"
        defense : float = 25.0
        armor : Armor = Armor(material, defense)

        self.assertEqual(armor.material,material)
        self.assertEqual(armor.defense,defense)
        
if __name__ == '__main__':
    unittest.main()