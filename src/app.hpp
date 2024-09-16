#pragma once

#include "task.hpp"
#include "this_task.hpp"

namespace freertos {
    namespace abstract {
        class app {
            private:
                freertos::abstract::task& task;
            protected:
                app(freertos::abstract::task& task);
            public:
                bool start(bool is_from_isr = false);
                bool stop(bool is_from_isr = false);
                bool is_running(void);
        };
    }
}