/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ADDTIMEWINDOWREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ADDTIMEWINDOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * AddTimeWindow request structure.
                */
                class AddTimeWindowRequest : public AbstractModel
                {
                public:
                    AddTimeWindowRequest();
                    ~AddTimeWindowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param InstanceId Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Time period available for maintenance on Monday in the format of 10:00-12:00. Each period lasts from half an hour to three hours, with the start time and end time aligned by half-hour. Up to two time periods can be set. The same rule applies below.
                     * @return Monday Time period available for maintenance on Monday in the format of 10:00-12:00. Each period lasts from half an hour to three hours, with the start time and end time aligned by half-hour. Up to two time periods can be set. The same rule applies below.
                     */
                    std::vector<std::string> GetMonday() const;

                    /**
                     * 设置Time period available for maintenance on Monday in the format of 10:00-12:00. Each period lasts from half an hour to three hours, with the start time and end time aligned by half-hour. Up to two time periods can be set. The same rule applies below.
                     * @param Monday Time period available for maintenance on Monday in the format of 10:00-12:00. Each period lasts from half an hour to three hours, with the start time and end time aligned by half-hour. Up to two time periods can be set. The same rule applies below.
                     */
                    void SetMonday(const std::vector<std::string>& _monday);

                    /**
                     * 判断参数 Monday 是否已赋值
                     * @return Monday 是否已赋值
                     */
                    bool MondayHasBeenSet() const;

                    /**
                     * 获取Maintenance time window on Tuesday
                     * @return Tuesday Maintenance time window on Tuesday
                     */
                    std::vector<std::string> GetTuesday() const;

                    /**
                     * 设置Maintenance time window on Tuesday
                     * @param Tuesday Maintenance time window on Tuesday
                     */
                    void SetTuesday(const std::vector<std::string>& _tuesday);

                    /**
                     * 判断参数 Tuesday 是否已赋值
                     * @return Tuesday 是否已赋值
                     */
                    bool TuesdayHasBeenSet() const;

                    /**
                     * 获取Maintenance time window on Wednesday
                     * @return Wednesday Maintenance time window on Wednesday
                     */
                    std::vector<std::string> GetWednesday() const;

                    /**
                     * 设置Maintenance time window on Wednesday
                     * @param Wednesday Maintenance time window on Wednesday
                     */
                    void SetWednesday(const std::vector<std::string>& _wednesday);

                    /**
                     * 判断参数 Wednesday 是否已赋值
                     * @return Wednesday 是否已赋值
                     */
                    bool WednesdayHasBeenSet() const;

                    /**
                     * 获取Maintenance time window on Thursday
                     * @return Thursday Maintenance time window on Thursday
                     */
                    std::vector<std::string> GetThursday() const;

                    /**
                     * 设置Maintenance time window on Thursday
                     * @param Thursday Maintenance time window on Thursday
                     */
                    void SetThursday(const std::vector<std::string>& _thursday);

                    /**
                     * 判断参数 Thursday 是否已赋值
                     * @return Thursday 是否已赋值
                     */
                    bool ThursdayHasBeenSet() const;

                    /**
                     * 获取Maintenance time window on Friday
                     * @return Friday Maintenance time window on Friday
                     */
                    std::vector<std::string> GetFriday() const;

                    /**
                     * 设置Maintenance time window on Friday
                     * @param Friday Maintenance time window on Friday
                     */
                    void SetFriday(const std::vector<std::string>& _friday);

                    /**
                     * 判断参数 Friday 是否已赋值
                     * @return Friday 是否已赋值
                     */
                    bool FridayHasBeenSet() const;

                    /**
                     * 获取Maintenance time window on Saturday
                     * @return Saturday Maintenance time window on Saturday
                     */
                    std::vector<std::string> GetSaturday() const;

                    /**
                     * 设置Maintenance time window on Saturday
                     * @param Saturday Maintenance time window on Saturday
                     */
                    void SetSaturday(const std::vector<std::string>& _saturday);

                    /**
                     * 判断参数 Saturday 是否已赋值
                     * @return Saturday 是否已赋值
                     */
                    bool SaturdayHasBeenSet() const;

                    /**
                     * 获取Maintenance time window on Sunday
                     * @return Sunday Maintenance time window on Sunday
                     */
                    std::vector<std::string> GetSunday() const;

                    /**
                     * 设置Maintenance time window on Sunday
                     * @param Sunday Maintenance time window on Sunday
                     */
                    void SetSunday(const std::vector<std::string>& _sunday);

                    /**
                     * 判断参数 Sunday 是否已赋值
                     * @return Sunday 是否已赋值
                     */
                    bool SundayHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Time period available for maintenance on Monday in the format of 10:00-12:00. Each period lasts from half an hour to three hours, with the start time and end time aligned by half-hour. Up to two time periods can be set. The same rule applies below.
                     */
                    std::vector<std::string> m_monday;
                    bool m_mondayHasBeenSet;

                    /**
                     * Maintenance time window on Tuesday
                     */
                    std::vector<std::string> m_tuesday;
                    bool m_tuesdayHasBeenSet;

                    /**
                     * Maintenance time window on Wednesday
                     */
                    std::vector<std::string> m_wednesday;
                    bool m_wednesdayHasBeenSet;

                    /**
                     * Maintenance time window on Thursday
                     */
                    std::vector<std::string> m_thursday;
                    bool m_thursdayHasBeenSet;

                    /**
                     * Maintenance time window on Friday
                     */
                    std::vector<std::string> m_friday;
                    bool m_fridayHasBeenSet;

                    /**
                     * Maintenance time window on Saturday
                     */
                    std::vector<std::string> m_saturday;
                    bool m_saturdayHasBeenSet;

                    /**
                     * Maintenance time window on Sunday
                     */
                    std::vector<std::string> m_sunday;
                    bool m_sundayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADDTIMEWINDOWREQUEST_H_
