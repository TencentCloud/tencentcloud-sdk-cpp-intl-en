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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEMAINTENANCEWINDOWRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEMAINTENANCEWINDOWRESPONSE_H_

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
                * DescribeMaintenanceWindow response structure.
                */
                class DescribeMaintenanceWindowResponse : public AbstractModel
                {
                public:
                    DescribeMaintenanceWindowResponse();
                    ~DescribeMaintenanceWindowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Ops window time range</p>
                     * @return MaintenanceWindow <p>Ops window time range</p>
                     * 
                     */
                    std::string GetMaintenanceWindow() const;

                    /**
                     * 判断参数 MaintenanceWindow 是否已赋值
                     * @return MaintenanceWindow 是否已赋值
                     * 
                     */
                    bool MaintenanceWindowHasBeenSet() const;

                    /**
                     * 获取<p>Ops window number of days range</p>
                     * @return WeekDays <p>Ops window number of days range</p>
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

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
                     * <p>Ops window time range</p>
                     */
                    std::string m_maintenanceWindow;
                    bool m_maintenanceWindowHasBeenSet;

                    /**
                     * <p>Ops window number of days range</p>
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEMAINTENANCEWINDOWRESPONSE_H_
