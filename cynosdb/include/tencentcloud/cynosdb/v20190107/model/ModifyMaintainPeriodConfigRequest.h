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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYMAINTAINPERIODCONFIGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYMAINTAINPERIODCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyMaintainPeriodConfig request structure.
                */
                class ModifyMaintainPeriodConfigRequest : public AbstractModel
                {
                public:
                    ModifyMaintainPeriodConfigRequest();
                    ~ModifyMaintainPeriodConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Maintenance start time in seconds. For example, 03:00 AM is represented by 10800
                     * @return MaintainStartTime Maintenance start time in seconds. For example, 03:00 AM is represented by 10800
                     */
                    int64_t GetMaintainStartTime() const;

                    /**
                     * 设置Maintenance start time in seconds. For example, 03:00 AM is represented by 10800
                     * @param MaintainStartTime Maintenance start time in seconds. For example, 03:00 AM is represented by 10800
                     */
                    void SetMaintainStartTime(const int64_t& _maintainStartTime);

                    /**
                     * 判断参数 MaintainStartTime 是否已赋值
                     * @return MaintainStartTime 是否已赋值
                     */
                    bool MaintainStartTimeHasBeenSet() const;

                    /**
                     * 获取Maintenance duration in seconds. For example, one hour is represented by 3600
                     * @return MaintainDuration Maintenance duration in seconds. For example, one hour is represented by 3600
                     */
                    int64_t GetMaintainDuration() const;

                    /**
                     * 设置Maintenance duration in seconds. For example, one hour is represented by 3600
                     * @param MaintainDuration Maintenance duration in seconds. For example, one hour is represented by 3600
                     */
                    void SetMaintainDuration(const int64_t& _maintainDuration);

                    /**
                     * 判断参数 MaintainDuration 是否已赋值
                     * @return MaintainDuration 是否已赋值
                     */
                    bool MaintainDurationHasBeenSet() const;

                    /**
                     * 获取Maintenance days of the week. Valid values: [Mon, Tue, Wed, Thu, Fri, Sat, Sun].
                     * @return MaintainWeekDays Maintenance days of the week. Valid values: [Mon, Tue, Wed, Thu, Fri, Sat, Sun].
                     */
                    std::vector<std::string> GetMaintainWeekDays() const;

                    /**
                     * 设置Maintenance days of the week. Valid values: [Mon, Tue, Wed, Thu, Fri, Sat, Sun].
                     * @param MaintainWeekDays Maintenance days of the week. Valid values: [Mon, Tue, Wed, Thu, Fri, Sat, Sun].
                     */
                    void SetMaintainWeekDays(const std::vector<std::string>& _maintainWeekDays);

                    /**
                     * 判断参数 MaintainWeekDays 是否已赋值
                     * @return MaintainWeekDays 是否已赋值
                     */
                    bool MaintainWeekDaysHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Maintenance start time in seconds. For example, 03:00 AM is represented by 10800
                     */
                    int64_t m_maintainStartTime;
                    bool m_maintainStartTimeHasBeenSet;

                    /**
                     * Maintenance duration in seconds. For example, one hour is represented by 3600
                     */
                    int64_t m_maintainDuration;
                    bool m_maintainDurationHasBeenSet;

                    /**
                     * Maintenance days of the week. Valid values: [Mon, Tue, Wed, Thu, Fri, Sat, Sun].
                     */
                    std::vector<std::string> m_maintainWeekDays;
                    bool m_maintainWeekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYMAINTAINPERIODCONFIGREQUEST_H_
