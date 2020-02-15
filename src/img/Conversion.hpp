//
// Created by psi on 2020/02/16.
//

#pragma once

#include <variant>
#include <dav1d/picture.h>
#include <avif/img/Image.hpp>

std::variant<avif::img::Image<8>, avif::img::Image<16>> convertToRGB(Dav1dPicture& pic);