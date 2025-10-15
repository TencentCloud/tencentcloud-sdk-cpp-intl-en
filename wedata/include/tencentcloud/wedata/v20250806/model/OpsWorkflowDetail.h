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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSWORKFLOWDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSWORKFLOWDETAIL_H_

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
                * Workflow scheduling details.
                */
                class OpsWorkflowDetail : public AbstractModel
                {
                public:
                    OpsWorkflowDetail();
                    ~OpsWorkflowDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Workflow ID.

                     * @return WorkflowId Workflow ID.

                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.

                     * @param _workflowId Workflow ID.

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
                     * 获取Workflow description.

                     * @return WorkflowDesc Workflow description.

                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置Workflow description.

                     * @param _workflowDesc Workflow description.

                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取Specifies the workflow type.
-cycle.
-manual.
                     * @return WorkflowType Specifies the workflow type.
-cycle.
-manual.
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置Specifies the workflow type.
-cycle.
-manual.
                     * @param _workflowType Specifies the workflow type.
-cycle.
-manual.
                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

                    /**
                     * 获取Creation time.

                     * @return CreateTime Creation time.

                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.

                     * @param _createTime Creation time.

                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Creator

                     * @return CreateUserUin Creator

                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator

                     * @param _createUserUin Creator

                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Modification time.

                     * @return UpdateTime Modification time.

                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modification time.

                     * @param _updateTime Modification time.

                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Delayed execution time. unit: minute.

                     * @return StartupTime Delayed execution time. unit: minute.

                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 设置Delayed execution time. unit: minute.

                     * @param _startupTime Delayed execution time. unit: minute.

                     * 
                     */
                    void SetStartupTime(const uint64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取Effective date. specifies the start date.

                     * @return StartTime Effective date. specifies the start date.

                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Effective date. specifies the start date.

                     * @param _startTime Effective date. specifies the start date.

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
                     * 获取Configure end date end date.

                     * @return EndTime Configure end date end date.

                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Configure end date end date.

                     * @param _endTime Configure end date end date.

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
                     * 获取Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * @return CycleType Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * @param _cycleType Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
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
                     * 获取Folder ID


                     * @return FolderId Folder ID


                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID


                     * @param _folderId Folder ID


                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取Task instance initialization strategy.
-T_PLUS_1 (t+1): initializes with a one-day delay.
-T_PLUS_0 (t+0): initialize on the day.
-T_MINUS_1 (t-1): initialize one day in advance.

                     * @return InstanceInitStrategy Task instance initialization strategy.
-T_PLUS_1 (t+1): initializes with a one-day delay.
-T_PLUS_0 (t+0): initialize on the day.
-T_MINUS_1 (t-1): initialize one day in advance.

                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置Task instance initialization strategy.
-T_PLUS_1 (t+1): initializes with a one-day delay.
-T_PLUS_0 (t+0): initialize on the day.
-T_MINUS_1 (t-1): initialize one day in advance.

                     * @param _instanceInitStrategy Task instance initialization strategy.
-T_PLUS_1 (t+1): initializes with a one-day delay.
-T_PLUS_0 (t+0): initialize on the day.
-T_MINUS_1 (t-1): initialize one day in advance.

                     * 
                     */
                    void SetInstanceInitStrategy(const std::string& _instanceInitStrategy);

                    /**
                     * 判断参数 InstanceInitStrategy 是否已赋值
                     * @return InstanceInitStrategy 是否已赋值
                     * 
                     */
                    bool InstanceInitStrategyHasBeenSet() const;

                    /**
                     * 获取Specifies the scheduling plan interpretation.

                     * @return SchedulerDesc Specifies the scheduling plan interpretation.

                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置Specifies the scheduling plan interpretation.

                     * @param _schedulerDesc Specifies the scheduling plan interpretation.

                     * 
                     */
                    void SetSchedulerDesc(const std::string& _schedulerDesc);

                    /**
                     * 判断参数 SchedulerDesc 是否已赋值
                     * @return SchedulerDesc 是否已赋值
                     * 
                     */
                    bool SchedulerDescHasBeenSet() const;

                    /**
                     * 获取First submission time of workflow.

                     * @return FirstSubmitTime First submission time of workflow.

                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置First submission time of workflow.

                     * @param _firstSubmitTime First submission time of workflow.

                     * 
                     */
                    void SetFirstSubmitTime(const std::string& _firstSubmitTime);

                    /**
                     * 判断参数 FirstSubmitTime 是否已赋值
                     * @return FirstSubmitTime 是否已赋值
                     * 
                     */
                    bool FirstSubmitTimeHasBeenSet() const;

                    /**
                     * 获取Latest submission time of workflow.

                     * @return LatestSubmitTime Latest submission time of workflow.

                     * 
                     */
                    std::string GetLatestSubmitTime() const;

                    /**
                     * 设置Latest submission time of workflow.

                     * @param _latestSubmitTime Latest submission time of workflow.

                     * 
                     */
                    void SetLatestSubmitTime(const std::string& _latestSubmitTime);

                    /**
                     * 判断参数 LatestSubmitTime 是否已赋值
                     * @return LatestSubmitTime 是否已赋值
                     * 
                     */
                    bool LatestSubmitTimeHasBeenSet() const;

                    /**
                     * 获取Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
                     * @return Status Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
                     * @param _status Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
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
                     * 获取Person in charge. multiple values are separated by a ";" separator.
                     * @return OwnerUin Person in charge. multiple values are separated by a ";" separator.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Person in charge. multiple values are separated by a ";" separator.
                     * @param _ownerUin Person in charge. multiple values are separated by a ";" separator.
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

                private:

                    /**
                     * Workflow ID.

                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow description.

                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Specifies the workflow type.
-cycle.
-manual.
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * Creation time.

                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creator

                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Modification time.

                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Delayed execution time. unit: minute.

                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * Effective date. specifies the start date.

                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Configure end date end date.

                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Folder ID


                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Task instance initialization strategy.
-T_PLUS_1 (t+1): initializes with a one-day delay.
-T_PLUS_0 (t+0): initialize on the day.
-T_MINUS_1 (t-1): initialize one day in advance.

                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * Specifies the scheduling plan interpretation.

                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * First submission time of workflow.

                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * Latest submission time of workflow.

                     */
                    std::string m_latestSubmitTime;
                    bool m_latestSubmitTimeHasBeenSet;

                    /**
                     * Workflow Status

* ALL_RUNNING: All running (all workflows are in scheduling state)

* ALL_FREEZED: All paused

* ALL_STOPPTED: All stopped

* PART_RUNNING: Partially running (some workflows are running, others not)

* ALL_NO_RUNNING: All not scheduled

* ALL_INVALID: All invalid
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Person in charge. multiple values are separated by a ";" separator.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Workflow name.

                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSWORKFLOWDETAIL_H_
