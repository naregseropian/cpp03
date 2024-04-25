#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("noName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default ctor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const std::string& name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Param ctor called" << std::endl;
    _name = name;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy ctor called" << std::endl;
    *this = other;
    return;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) // handles self assignment
    {
        _name = rhs._name;
        _attackDamage = rhs._attackDamage;
        _energyPoints = rhs._energyPoints;
        _hitPoints = rhs._hitPoints;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default Destructor called" << std::endl;
    return;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target;
        std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << "has not enough hp or no ep to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " has been delt " << amount;
        std::cout << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << "is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << this->_name << " heals" << ", causing ";
        std::cout << amount << " points of heal!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << "has not enough ep to heal!" << std::endl;
}
