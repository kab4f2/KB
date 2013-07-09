#include <string>
#include"Schedule.h"
#include"EmployeeHandler.h"
#ifndef _SCHEDULEHANDLER
#define _SCHEDULEHANDLER







class ScheduleHandler
{

public:
	Schedule m_lstSchedule[24];



private:
	ScheduleHandler();
	void AddSchedule(EmployeeHandler& employeeHandler);
	void EditSchedule(EmployeeHandler& employeeHandler);
	void CancelSchedule();
	void ExportScheduleCSV();
	void ExportScheduleHTML();
	int ScheduleSelection();



};
#endif