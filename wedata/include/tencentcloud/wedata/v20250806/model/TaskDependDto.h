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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKDEPENDDTO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKDEPENDDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Describes the dependency task information.
                */
                class TaskDependDto : public AbstractModel
                {
                public:
                    TaskDependDto();
                    ~TaskDependDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID

                     * @return TaskId Task ID

                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID

                     * @param _taskId Task ID

                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task name.

                     * @return TaskName Task name.

                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.

                     * @param _taskName Task name.

                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Workflow id.
                     * @return WorkflowId Workflow id.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow id.
                     * @param _workflowId Workflow id.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Workflow name.

                     * @return WorkflowName Workflow name.

                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.

                     * @param _workflowName Workflow name.

                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Project ID.

                     * @return ProjectId Project ID.

                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

                     * @param _projectId Project ID.

                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Task Status:

* N: New

* Y: Scheduling

* F: Offline

* O: Paused

* T: Offlining (in the process of being taken offline)

I* NVALID: Invalid
                     * @return Status Task Status:

* N: New

* Y: Scheduling

* F: Offline

* O: Paused

* T: Offlining (in the process of being taken offline)

I* NVALID: Invalid
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task Status:

* N: New

* Y: Scheduling

* F: Offline

* O: Paused

* T: Offlining (in the process of being taken offline)

I* NVALID: Invalid
                     * @param _status Task Status:

* N: New

* Y: Scheduling

* F: Offline

* O: Paused

* T: Offlining (in the process of being taken offline)

I* NVALID: Invalid
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task type id.
                     * @return TaskTypeId Task type id.
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type id.
                     * @param _taskTypeId Task type id.
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Task type description.
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: branch.
-131: merge.
-132: Notebook 
-133: SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000 : custom business common.
                     * @return TaskTypeDesc Task type description.
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: branch.
-131: merge.
-132: Notebook 
-133: SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000 : custom business common.
                     * 
                     */
                    std::string GetTaskTypeDesc() const;

                    /**
                     * 设置Task type description.
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: branch.
-131: merge.
-132: Notebook 
-133: SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000 : custom business common.
                     * @param _taskTypeDesc Task type description.
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: branch.
-131: merge.
-132: Notebook 
-133: SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000 : custom business common.
                     * 
                     */
                    void SetTaskTypeDesc(const std::string& _taskTypeDesc);

                    /**
                     * 判断参数 TaskTypeDesc 是否已赋值
                     * @return TaskTypeDesc 是否已赋值
                     * 
                     */
                    bool TaskTypeDescHasBeenSet() const;

                    /**
                     * 获取Specifies scheduling plan display description information.

                     * @return ScheduleDesc Specifies scheduling plan display description information.

                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置Specifies scheduling plan display description information.

                     * @param _scheduleDesc Specifies scheduling plan display description information.

                     * 
                     */
                    void SetScheduleDesc(const std::string& _scheduleDesc);

                    /**
                     * 判断参数 ScheduleDesc 是否已赋值
                     * @return ScheduleDesc 是否已赋值
                     * 
                     */
                    bool ScheduleDescHasBeenSet() const;

                    /**
                     * 获取Task start time.
                     * @return StartTime Task start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time.
                     * @param _startTime Task start time.
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
                     * 获取Task end time.
                     * @return EndTime Task end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time.
                     * @param _endTime Task end time.
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
                     * 获取Delay time.
                     * @return DelayTime Delay time.
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置Delay time.
                     * @param _delayTime Delay time.
                     * 
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取Cycle Type, Default: D
Supported types:
* O: One-time

* Y: Yearly

* M: Monthly

* W: Weekly

* D: Daily

* H: Hourly

* I: Minute

* C: Crontab expression type
                     * @return CycleType Cycle Type, Default: D
Supported types:
* O: One-time

* Y: Yearly

* M: Monthly

* W: Weekly

* D: Daily

* H: Hourly

* I: Minute

* C: Crontab expression type
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Cycle Type, Default: D
Supported types:
* O: One-time

* Y: Yearly

* M: Monthly

* W: Weekly

* D: Daily

* H: Hourly

* I: Minute

* C: Crontab expression type
                     * @param _cycleType Cycle Type, Default: D
Supported types:
* O: One-time

* Y: Yearly

* M: Monthly

* W: Weekly

* D: Daily

* H: Hourly

* I: Minute

* C: Crontab expression type
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Owner ID
                     * @return OwnerUin Owner ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner ID
                     * @param _ownerUin Owner ID
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Elastic cycle configuration.
                     * @return TaskAction Elastic cycle configuration.
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Elastic cycle configuration.
                     * @param _taskAction Elastic cycle configuration.
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取Initialization strategy for scheduling.
                     * @return InitStrategy Initialization strategy for scheduling.
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置Initialization strategy for scheduling.
                     * @param _initStrategy Initialization strategy for scheduling.
                     * 
                     */
                    void SetInitStrategy(const std::string& _initStrategy);

                    /**
                     * 判断参数 InitStrategy 是否已赋值
                     * @return InitStrategy 是否已赋值
                     * 
                     */
                    bool InitStrategyHasBeenSet() const;

                    /**
                     * 获取crontab expression.
                     * @return CrontabExpression crontab expression.
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置crontab expression.
                     * @param _crontabExpression crontab expression.
                     * 
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     * 
                     */
                    bool CrontabExpressionHasBeenSet() const;

                private:

                    /**
                     * Task ID

                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name.

                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Workflow id.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.

                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Status:

* N: New

* Y: Scheduling

* F: Offline

* O: Paused

* T: Offlining (in the process of being taken offline)

I* NVALID: Invalid
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task type id.
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Task type description.
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: branch.
-131: merge.
-132: Notebook 
-133: SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000 : custom business common.
                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * Specifies scheduling plan display description information.

                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * Task start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Delay time.
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Cycle Type, Default: D
Supported types:
* O: One-time

* Y: Yearly

* M: Monthly

* W: Weekly

* D: Daily

* H: Hourly

* I: Minute

* C: Crontab expression type
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Owner ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Elastic cycle configuration.
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Initialization strategy for scheduling.
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                    /**
                     * crontab expression.
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKDEPENDDTO_H_
