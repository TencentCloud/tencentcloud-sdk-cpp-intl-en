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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGREPORTTASKSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGREPORTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBDiagReportTasks request structure.
                */
                class DescribeDBDiagReportTasksRequest : public AbstractModel
                {
                public:
                    DescribeDBDiagReportTasksRequest();
                    ~DescribeDBDiagReportTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
                     * @return StartTime Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
                     * @param _startTime Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
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
                     * 获取End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
                     * @return EndTime End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
                     * @param _endTime End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
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
                     * 获取Array of instance IDs, which is used to filter the task list of the specified instance.
                     * @return InstanceIds Array of instance IDs, which is used to filter the task list of the specified instance.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Array of instance IDs, which is used to filter the task list of the specified instance.
                     * @param _instanceIds Array of instance IDs, which is used to filter the task list of the specified instance.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (scheduled task), and `MANUAL` (manual trigger).
                     * @return Sources Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (scheduled task), and `MANUAL` (manual trigger).
                     * 
                     */
                    std::vector<std::string> GetSources() const;

                    /**
                     * 设置Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (scheduled task), and `MANUAL` (manual trigger).
                     * @param _sources Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (scheduled task), and `MANUAL` (manual trigger).
                     * 
                     */
                    void SetSources(const std::vector<std::string>& _sources);

                    /**
                     * 判断参数 Sources 是否已赋值
                     * @return Sources 是否已赋值
                     * 
                     */
                    bool SourcesHasBeenSet() const;

                    /**
                     * 获取Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (suboptimal), `RISK` (risky), and `HIGH_RISK` (critical).
                     * @return HealthLevels Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (suboptimal), `RISK` (risky), and `HIGH_RISK` (critical).
                     * 
                     */
                    std::string GetHealthLevels() const;

                    /**
                     * 设置Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (suboptimal), `RISK` (risky), and `HIGH_RISK` (critical).
                     * @param _healthLevels Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (suboptimal), `RISK` (risky), and `HIGH_RISK` (critical).
                     * 
                     */
                    void SetHealthLevels(const std::string& _healthLevels);

                    /**
                     * 判断参数 HealthLevels 是否已赋值
                     * @return HealthLevels 是否已赋值
                     * 
                     */
                    bool HealthLevelsHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `created` (created), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     * @return TaskStatuses Task status. Valid values: `created` (created), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     * 
                     */
                    std::string GetTaskStatuses() const;

                    /**
                     * 设置Task status. Valid values: `created` (created), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     * @param _taskStatuses Task status. Valid values: `created` (created), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     * 
                     */
                    void SetTaskStatuses(const std::string& _taskStatuses);

                    /**
                     * 判断参数 TaskStatuses 是否已赋值
                     * @return TaskStatuses 是否已赋值
                     * 
                     */
                    bool TaskStatusesHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: `20`. Maximum value: `100`.
                     * @return Limit Number of returned results. Default value: `20`. Maximum value: `100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: `20`. Maximum value: `100`.
                     * @param _limit Number of returned results. Default value: `20`. Maximum value: `100`.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param _product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2019-09-10 12:13:14. It is used for queries by time range.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Array of instance IDs, which is used to filter the task list of the specified instance.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (scheduled task), and `MANUAL` (manual trigger).
                     */
                    std::vector<std::string> m_sources;
                    bool m_sourcesHasBeenSet;

                    /**
                     * Health level. Valid values: `HEALTH` (healthy), `SUB_HEALTH` (suboptimal), `RISK` (risky), and `HIGH_RISK` (critical).
                     */
                    std::string m_healthLevels;
                    bool m_healthLevelsHasBeenSet;

                    /**
                     * Task status. Valid values: `created` (created), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     */
                    std::string m_taskStatuses;
                    bool m_taskStatusesHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: `20`. Maximum value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGREPORTTASKSREQUEST_H_
