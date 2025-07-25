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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ANALYZEAUDITLOGSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ANALYZEAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AggregationCondition.h>
#include <tencentcloud/cdb/v20170320/model/AuditLogFilter.h>
#include <tencentcloud/cdb/v20170320/model/InstanceAuditLogFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * AnalyzeAuditLogs request structure.
                */
                class AnalyzeAuditLogsRequest : public AbstractModel
                {
                public:
                    AnalyzeAuditLogsRequest();
                    ~AnalyzeAuditLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Start time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
                     * @return StartTime Start time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
                     * @param _startTime Start time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
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
                     * 获取End time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
                     * @return EndTime End time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
                     * @param _endTime End time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Sorting conditions for aggregation dimension
                     * @return AggregationConditions Sorting conditions for aggregation dimension
                     * 
                     */
                    std::vector<AggregationCondition> GetAggregationConditions() const;

                    /**
                     * 设置Sorting conditions for aggregation dimension
                     * @param _aggregationConditions Sorting conditions for aggregation dimension
                     * 
                     */
                    void SetAggregationConditions(const std::vector<AggregationCondition>& _aggregationConditions);

                    /**
                     * 判断参数 AggregationConditions 是否已赋值
                     * @return AggregationConditions 是否已赋值
                     * 
                     */
                    bool AggregationConditionsHasBeenSet() const;

                    /**
                     * 获取This parameter is disused. The result set of the audit log filtered by this condition is set as the analysis log.
                     * @return AuditLogFilter This parameter is disused. The result set of the audit log filtered by this condition is set as the analysis log.
                     * 
                     */
                    AuditLogFilter GetAuditLogFilter() const;

                    /**
                     * 设置This parameter is disused. The result set of the audit log filtered by this condition is set as the analysis log.
                     * @param _auditLogFilter This parameter is disused. The result set of the audit log filtered by this condition is set as the analysis log.
                     * 
                     */
                    void SetAuditLogFilter(const AuditLogFilter& _auditLogFilter);

                    /**
                     * 判断参数 AuditLogFilter 是否已赋值
                     * @return AuditLogFilter 是否已赋值
                     * 
                     */
                    bool AuditLogFilterHasBeenSet() const;

                    /**
                     * 获取The result set of the audit log filtered by this condition is set as the analysis Log.
                     * @return LogFilter The result set of the audit log filtered by this condition is set as the analysis Log.
                     * 
                     */
                    std::vector<InstanceAuditLogFilters> GetLogFilter() const;

                    /**
                     * 设置The result set of the audit log filtered by this condition is set as the analysis Log.
                     * @param _logFilter The result set of the audit log filtered by this condition is set as the analysis Log.
                     * 
                     */
                    void SetLogFilter(const std::vector<InstanceAuditLogFilters>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the log to be analyzed in the format of `2023-02-16 00:00:20`.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Sorting conditions for aggregation dimension
                     */
                    std::vector<AggregationCondition> m_aggregationConditions;
                    bool m_aggregationConditionsHasBeenSet;

                    /**
                     * This parameter is disused. The result set of the audit log filtered by this condition is set as the analysis log.
                     */
                    AuditLogFilter m_auditLogFilter;
                    bool m_auditLogFilterHasBeenSet;

                    /**
                     * The result set of the audit log filtered by this condition is set as the analysis Log.
                     */
                    std::vector<InstanceAuditLogFilters> m_logFilter;
                    bool m_logFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ANALYZEAUDITLOGSREQUEST_H_
