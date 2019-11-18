#include "pch.h"
#include "key_pressed_event.h"

namespace Zong
{
	namespace Event
	{
		inline unsigned int Key_Pressed_Event::get_repeat_count() const
		{
			return this->m_Repeate_Count;
		}

		std::string Key_Pressed_Event::to_string() const
		{
			std::stringstream ss;
			ss << "Key pressed event: " << this->m_Key_Code << " Repeated " << this->m_Repeate_Count << "\n";
			return ss.str();
		}
	}
}
