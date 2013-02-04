/**
 * @file   sr_self_test.cpp
 * @author Ugo Cupcic <ugo@shadowrobot.com>
 * @date   Feb 4, 2013
 *
 * Copyright 2011 Shadow Robot Company Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * @brief Class containing the self tests for the Shadow Robot EtherCAT hardware.
 *
 *
 */

#include "sr_robot_lib/self_test/sr_self_test.hpp"

namespace shadow_robot {

SrSelfTest::SrSelfTest(SrRobotLib* robot_lib)
{
  robot_lib_ = robot_lib;

  test_runner_.add("My first test", this, &SrSelfTest::first_test);
  test_runner_.setID("12345");
}

SrSelfTest::~SrSelfTest()
{
}

void SrSelfTest::first_test(diagnostic_updater::DiagnosticStatusWrapper& status)
{
  status.summary(diagnostic_msgs::DiagnosticStatus::OK, "PASSED");
}

}  // namespace shadow_robot

