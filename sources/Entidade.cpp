#include "Entidade.h"
#include <string.h>

Entidade::Entidade(ID id) :
	graphicManager(GerenciadorGrafico::getInstance()),
	id(id)
{
}

Entidade::~Entidade()
{
}

void Entidade::setPosition(const float x, const float y)
{
	this->sprite.setPosition(x, y);
}

const sf::Vector2f Entidade::getPosition() const
{
	return (this->sprite.getPosition());
}

const sf::Vector2f Entidade::getSize() const
{
	return sf::Vector2f(this->sprite.getGlobalBounds().width, this->sprite.getGlobalBounds().height);
}

ID Entidade::getID() const
{
	return this->id;
}



