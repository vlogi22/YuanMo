#ifndef __YUANMO_UI_MENUS_COMMAND_H__
#define __YUANMO_UI_MENUS_COMMAND_H__

#include <string>
#include <memory>

namespace ui {
    
    template<typename receiver_ptr>
    class command {
        
    private:
        std::string _title;
        receiver_ptr _receiver;

    protected: 
        command(const receiver_ptr rec) : 
            _title(""), _receiver(rec) {
        }

        command(std::string title, const receiver_ptr rec) : 
            _title(title), _receiver(rec) {
        }

    public:
        std::string get_title() {
            return _title;
        }

        void perform_command() {
            
            execute();
        }

        virtual int execute() = 0;

    };
}

#endif