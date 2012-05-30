/*
 * Fixture.h
 *
 *  Created on: May 30, 2012
 *      Author: koen
 */

#ifndef FIXTURE_H_
#define FIXTURE_H_

#include <Box2D/Box2D.h>
#include "Body.h"

namespace capselchi {

class Body;

class Fixture {
	public:
		Fixture();
		virtual ~Fixture();
		b2Body* getParent();
		b2Fixture* getFixture();
		b2Color getColor();


	private:
		b2Body* parentBody;
		b2Fixture* fixture;
		b2Color color;
};

}

#endif /* FIXTURE_H_ */
