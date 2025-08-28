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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMAINTENANCESPANREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMAINTENANCESPANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyMaintenanceSpan request structure.
                */
                class ModifyMaintenanceSpanRequest : public AbstractModel
                {
                public:
                    ModifyMaintenanceSpanRequest();
                    ~ModifyMaintenanceSpanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format of mssql-k8voqdlz.
                     * @return InstanceId Instance ID, in the format of mssql-k8voqdlz.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format of mssql-k8voqdlz.
                     * @param _instanceId Instance ID, in the format of mssql-k8voqdlz.
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
                     * 获取Specifies the days in each week allowed for maintenance. For example, [1,2,3,4,5,6,7] indicates that all days from Monday to Sunday are allowed for maintenance. If this parameter is left unspecified, this value is not modified.
                     * @return Weekly Specifies the days in each week allowed for maintenance. For example, [1,2,3,4,5,6,7] indicates that all days from Monday to Sunday are allowed for maintenance. If this parameter is left unspecified, this value is not modified.
                     * 
                     */
                    std::vector<int64_t> GetWeekly() const;

                    /**
                     * 设置Specifies the days in each week allowed for maintenance. For example, [1,2,3,4,5,6,7] indicates that all days from Monday to Sunday are allowed for maintenance. If this parameter is left unspecified, this value is not modified.
                     * @param _weekly Specifies the days in each week allowed for maintenance. For example, [1,2,3,4,5,6,7] indicates that all days from Monday to Sunday are allowed for maintenance. If this parameter is left unspecified, this value is not modified.
                     * 
                     */
                    void SetWeekly(const std::vector<int64_t>& _weekly);

                    /**
                     * 判断参数 Weekly 是否已赋值
                     * @return Weekly 是否已赋值
                     * 
                     */
                    bool WeeklyHasBeenSet() const;

                    /**
                     * 获取Maintenance start time each day. For example, 10:24 indicates that the maintenance window starts at 10:24. If this parameter is left unspecified, this value is not modified.
                     * @return StartTime Maintenance start time each day. For example, 10:24 indicates that the maintenance window starts at 10:24. If this parameter is left unspecified, this value is not modified.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Maintenance start time each day. For example, 10:24 indicates that the maintenance window starts at 10:24. If this parameter is left unspecified, this value is not modified.
                     * @param _startTime Maintenance start time each day. For example, 10:24 indicates that the maintenance window starts at 10:24. If this parameter is left unspecified, this value is not modified.
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
                     * 获取Maintenance duration each day, in hours. For example, 1 indicates that the duration is 1 hour after maintenance starts. If this parameter is left unspecified, this value is not modified.
                     * @return Span Maintenance duration each day, in hours. For example, 1 indicates that the duration is 1 hour after maintenance starts. If this parameter is left unspecified, this value is not modified.
                     * 
                     */
                    uint64_t GetSpan() const;

                    /**
                     * 设置Maintenance duration each day, in hours. For example, 1 indicates that the duration is 1 hour after maintenance starts. If this parameter is left unspecified, this value is not modified.
                     * @param _span Maintenance duration each day, in hours. For example, 1 indicates that the duration is 1 hour after maintenance starts. If this parameter is left unspecified, this value is not modified.
                     * 
                     */
                    void SetSpan(const uint64_t& _span);

                    /**
                     * 判断参数 Span 是否已赋值
                     * @return Span 是否已赋值
                     * 
                     */
                    bool SpanHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format of mssql-k8voqdlz.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the days in each week allowed for maintenance. For example, [1,2,3,4,5,6,7] indicates that all days from Monday to Sunday are allowed for maintenance. If this parameter is left unspecified, this value is not modified.
                     */
                    std::vector<int64_t> m_weekly;
                    bool m_weeklyHasBeenSet;

                    /**
                     * Maintenance start time each day. For example, 10:24 indicates that the maintenance window starts at 10:24. If this parameter is left unspecified, this value is not modified.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Maintenance duration each day, in hours. For example, 1 indicates that the duration is 1 hour after maintenance starts. If this parameter is left unspecified, this value is not modified.
                     */
                    uint64_t m_span;
                    bool m_spanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMAINTENANCESPANREQUEST_H_
