//============================================================================
//
// This file is part of the Sketch Modeling project.
//
// Copyright (c) 2017
// -Zhaoliang Lun (author of the code) / UMass-Amherst
//
// This is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this software.  If not, see <http://www.gnu.org/licenses/>.
//
//============================================================================


#pragma once

#include <vector>
#include <string>

using namespace std;

namespace Monster {

	class ImageIO {

	private:

		// make it non-instantiable
		ImageIO() {}
		~ImageIO() {}

	public:

		static bool writeImage(
			string fileName, vector<unsigned char> &image,
			int width, int height, int channel);

		static bool writeImage(
			string fileName, vector<unsigned short> &image,
			int width, int height, int channel);

		static bool writeImage(
			string fileName, vector<float> &image,
			int width, int height, int channel);

		static bool readImage(
			string fileName, vector<unsigned char> &image,
			int &width, int &height, int &channel);

		static bool readImage(
			string fileName, vector<unsigned short> &image,
			int &width, int &height, int &channel);
	};
}