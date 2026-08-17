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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEEXPORTTASKREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEEXPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/LogFilter.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * CreateExportTask request structure.
                */
                class CreateExportTaskRequest : public AbstractModel
                {
                public:
                    CreateExportTaskRequest();
                    ~CreateExportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
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
                     * 获取<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @return LogType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @param _logType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
                     * @return StartTime <p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
                     * @param _startTime <p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
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
                     * 获取<p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
                     * @return EndTime <p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
                     * @param _endTime <p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
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
                     * 获取<p>Set the log filter field to filter and download qualified logs.</p>
                     * @return LogFilter <p>Set the log filter field to filter and download qualified logs.</p>
                     * 
                     */
                    std::vector<LogFilter> GetLogFilter() const;

                    /**
                     * 设置<p>Set the log filter field to filter and download qualified logs.</p>
                     * @param _logFilter <p>Set the log filter field to filter and download qualified logs.</p>
                     * 
                     */
                    void SetLogFilter(const std::vector<LogFilter>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                    /**
                     * 获取<p>Custom log fields for download, multiple fields separated by commas, such as "timestamp,operation,user". Only the data of selected fields will be downloaded when specified. The parameter defaults to downloading all fields when not passed.</p>
                     * @return ColumnFilter <p>Custom log fields for download, multiple fields separated by commas, such as "timestamp,operation,user". Only the data of selected fields will be downloaded when specified. The parameter defaults to downloading all fields when not passed.</p>
                     * 
                     */
                    std::vector<std::string> GetColumnFilter() const;

                    /**
                     * 设置<p>Custom log fields for download, multiple fields separated by commas, such as "timestamp,operation,user". Only the data of selected fields will be downloaded when specified. The parameter defaults to downloading all fields when not passed.</p>
                     * @param _columnFilter <p>Custom log fields for download, multiple fields separated by commas, such as "timestamp,operation,user". Only the data of selected fields will be downloaded when specified. The parameter defaults to downloading all fields when not passed.</p>
                     * 
                     */
                    void SetColumnFilter(const std::vector<std::string>& _columnFilter);

                    /**
                     * 判断参数 ColumnFilter 是否已赋值
                     * @return ColumnFilter 是否已赋值
                     * 
                     */
                    bool ColumnFilterHasBeenSet() const;

                private:

                    /**
                     * <p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Start time of retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 00:00:00. The returned result contains only the logs at this time point and afterward.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time of log retrieval.</p><p>Parameter format: YYYY-MM-DD HH:mm:ss, for example 2026-03-06 23:59:59. The returned result contains only the logs at this time point and earlier.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Set the log filter field to filter and download qualified logs.</p>
                     */
                    std::vector<LogFilter> m_logFilter;
                    bool m_logFilterHasBeenSet;

                    /**
                     * <p>Custom log fields for download, multiple fields separated by commas, such as "timestamp,operation,user". Only the data of selected fields will be downloaded when specified. The parameter defaults to downloading all fields when not passed.</p>
                     */
                    std::vector<std::string> m_columnFilter;
                    bool m_columnFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEEXPORTTASKREQUEST_H_
