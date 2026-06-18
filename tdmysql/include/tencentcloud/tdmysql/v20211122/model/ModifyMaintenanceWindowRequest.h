/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYMAINTENANCEWINDOWREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYMAINTENANCEWINDOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyMaintenanceWindow request structure.
                */
                class ModifyMaintenanceWindowRequest : public AbstractModel
                {
                public:
                    ModifyMaintenanceWindowRequest();
                    ~ModifyMaintenanceWindowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Ops window start time</p><p>Parameter format: hh:mm:ss</p>
                     * @return StartTime <p>Ops window start time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Ops window start time</p><p>Parameter format: hh:mm:ss</p>
                     * @param _startTime <p>Ops window start time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Ops window duration</p><p>Value ranges from 1 to 3</p><p>Unit: hour</p>
                     * @return Duration <p>Ops window duration</p><p>Value ranges from 1 to 3</p><p>Unit: hour</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>Ops window duration</p><p>Value ranges from 1 to 3</p><p>Unit: hour</p>
                     * @param _duration <p>Ops window duration</p><p>Value ranges from 1 to 3</p><p>Unit: hour</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>Ops window date</p><p>Enumeration value:</p><ul><li>Monday: Monday</li><li>Tuesday: Tuesday</li><li>Wednesday: Wednesday</li><li>Thursday: Thursday</li><li>Friday: Friday</li><li>Saturday: Saturday</li><li>Sunday: Sunday</li></ul>
                     * @return WeekDays <p>Ops window date</p><p>Enumeration value:</p><ul><li>Monday: Monday</li><li>Tuesday: Tuesday</li><li>Wednesday: Wednesday</li><li>Thursday: Thursday</li><li>Friday: Friday</li><li>Saturday: Saturday</li><li>Sunday: Sunday</li></ul>
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 设置<p>Ops window date</p><p>Enumeration value:</p><ul><li>Monday: Monday</li><li>Tuesday: Tuesday</li><li>Wednesday: Wednesday</li><li>Thursday: Thursday</li><li>Friday: Friday</li><li>Saturday: Saturday</li><li>Sunday: Sunday</li></ul>
                     * @param _weekDays <p>Ops window date</p><p>Enumeration value:</p><ul><li>Monday: Monday</li><li>Tuesday: Tuesday</li><li>Wednesday: Wednesday</li><li>Thursday: Thursday</li><li>Friday: Friday</li><li>Saturday: Saturday</li><li>Sunday: Sunday</li></ul>
                     * 
                     */
                    void SetWeekDays(const std::vector<std::string>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Ops window start time</p><p>Parameter format: hh:mm:ss</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Ops window duration</p><p>Value ranges from 1 to 3</p><p>Unit: hour</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>Ops window date</p><p>Enumeration value:</p><ul><li>Monday: Monday</li><li>Tuesday: Tuesday</li><li>Wednesday: Wednesday</li><li>Thursday: Thursday</li><li>Friday: Friday</li><li>Saturday: Saturday</li><li>Sunday: Sunday</li></ul>
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYMAINTENANCEWINDOWREQUEST_H_
