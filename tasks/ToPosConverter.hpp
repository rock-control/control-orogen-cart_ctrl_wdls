/* Generated from orogen/lib/orogen/templates/tasks/Task.hpp */

#ifndef CART_CTRL_WDLS_TOPOSCONVERTER_TASK_HPP
#define CART_CTRL_WDLS_TOPOSCONVERTER_TASK_HPP

#include "cart_ctrl_wdls/ToPosConverterBase.hpp"
#include <urdf/model.h>

namespace cart_ctrl_wdls {

class ToPosConverter : public ToPosConverterBase
{
    friend class ToPosConverterBase;
protected:

    base::commands::Joints command_in_, command_out_, status_;
    double override_output_speed_;
    bool write_speed_;
    base::Time timestamp_, prev_timestamp_;
    urdf::Model model_;

public:
    ToPosConverter(std::string const& name = "cart_ctrl_wdls::ToPosConverter", TaskCore::TaskState initial_state = Stopped);
    ToPosConverter(std::string const& name, RTT::ExecutionEngine* engine, TaskCore::TaskState initial_state = Stopped);
    ~ToPosConverter(){}
    bool configureHook();
    bool startHook();
    void updateHook();
    void errorHook(){ToPosConverterBase::errorHook();}
    void stopHook(){ToPosConverterBase::stopHook();}
    void cleanupHook(){ToPosConverterBase::cleanupHook();}
};
}

#endif

