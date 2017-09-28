#include "Slider.h"

Slider::Slider(unsigned x, unsigned y, unsigned startTime, unsigned endTime, unsigned type, 
	wchar_t sliderType, std::vector<vec2<unsigned>> controlPoints)
	: HitObject(x, y, startTime, endTime, type),
	sliderType(sliderType), controlPoints(controlPoints) {}


Slider::~Slider() {

}


void Slider::hit() {

}

void Slider::printInfo() const {
	std::cout << "(" << getX() << ", " << getY() << ", " << getStartTime()
		<< ", " << getEndTime() << ", " << getType() << ")";
	for (auto & i : controlPoints) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}
