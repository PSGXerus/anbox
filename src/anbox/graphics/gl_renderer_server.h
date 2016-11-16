/*
 * Copyright (C) 2016 Simon Fels <morphis@gravedo.de>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef ANBOX_GRAPHICS_GL_RENDERER_SERVER_H_
#define ANBOX_GRAPHICS_GL_RENDERER_SERVER_H_

#include <string>
#include <memory>

namespace anbox {
namespace input {
class Manager;
} // namespace input
namespace graphics {
class WindowCreator;
class GLRendererServer {
public:
    GLRendererServer(const std::shared_ptr<WindowCreator> &window_creator);
    ~GLRendererServer();

    void start();

private:
    std::shared_ptr<WindowCreator> window_creator_;
};

} // namespace graphics
} // namespace anbox

#endif
