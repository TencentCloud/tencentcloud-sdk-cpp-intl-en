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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABACKFILL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABACKFILL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DataBackfillRange.h>
#include <tencentcloud/wedata/v20250806/model/KVPair.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Plan details.
                */
                class DataBackfill : public AbstractModel
                {
                public:
                    DataBackfill();
                    ~DataBackfill() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Data supplement plan id.
                     * @return DataBackfillPlanId Data supplement plan id.
                     * 
                     */
                    std::string GetDataBackfillPlanId() const;

                    /**
                     * 设置Data supplement plan id.
                     * @param _dataBackfillPlanId Data supplement plan id.
                     * 
                     */
                    void SetDataBackfillPlanId(const std::string& _dataBackfillPlanId);

                    /**
                     * 判断参数 DataBackfillPlanId 是否已赋值
                     * @return DataBackfillPlanId 是否已赋值
                     * 
                     */
                    bool DataBackfillPlanIdHasBeenSet() const;

                    /**
                     * 获取Data supplement plan name.
                     * @return DataBackfillPlanName Data supplement plan name.
                     * 
                     */
                    std::string GetDataBackfillPlanName() const;

                    /**
                     * 设置Data supplement plan name.
                     * @param _dataBackfillPlanName Data supplement plan name.
                     * 
                     */
                    void SetDataBackfillPlanName(const std::string& _dataBackfillPlanName);

                    /**
                     * 判断参数 DataBackfillPlanName 是否已赋值
                     * @return DataBackfillPlanName 是否已赋值
                     * 
                     */
                    bool DataBackfillPlanNameHasBeenSet() const;

                    /**
                     * 获取Supplementary task collection.
                     * @return TaskIds Supplementary task collection.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置Supplementary task collection.
                     * @param _taskIds Supplementary task collection.
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Backfill task data configuration list.
                     * @return DataBackfillRangeList Backfill task data configuration list.
                     * 
                     */
                    std::vector<DataBackfillRange> GetDataBackfillRangeList() const;

                    /**
                     * 设置Backfill task data configuration list.
                     * @param _dataBackfillRangeList Backfill task data configuration list.
                     * 
                     */
                    void SetDataBackfillRangeList(const std::vector<DataBackfillRange>& _dataBackfillRangeList);

                    /**
                     * 判断参数 DataBackfillRangeList 是否已赋值
                     * @return DataBackfillRangeList 是否已赋值
                     * 
                     */
                    bool DataBackfillRangeListHasBeenSet() const;

                    /**
                     * 获取Check parent task type. valid values: NONE (do not check ALL), ALL (check ALL upstream parent tasks), MAKE_SCOPE (check only in the selected tasks of the present replenishment plan).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckParentType Check parent task type. valid values: NONE (do not check ALL), ALL (check ALL upstream parent tasks), MAKE_SCOPE (check only in the selected tasks of the present replenishment plan).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置Check parent task type. valid values: NONE (do not check ALL), ALL (check ALL upstream parent tasks), MAKE_SCOPE (check only in the selected tasks of the present replenishment plan).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkParentType Check parent task type. valid values: NONE (do not check ALL), ALL (check ALL upstream parent tasks), MAKE_SCOPE (check only in the selected tasks of the present replenishment plan).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckParentType(const std::string& _checkParentType);

                    /**
                     * 判断参数 CheckParentType 是否已赋值
                     * @return CheckParentType 是否已赋值
                     * 
                     */
                    bool CheckParentTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to ignore event dependency during backfill.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SkipEventListening Specifies whether to ignore event dependency during backfill.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置Specifies whether to ignore event dependency during backfill.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _skipEventListening Specifies whether to ignore event dependency during backfill.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSkipEventListening(const bool& _skipEventListening);

                    /**
                     * 判断参数 SkipEventListening 是否已赋值
                     * @return SkipEventListening 是否已赋值
                     * 
                     */
                    bool SkipEventListeningHasBeenSet() const;

                    /**
                     * 获取Custom instance run degree of concurrency. return null or do not return indicates task original self-dependent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RedefineParallelNum Custom instance run degree of concurrency. return null or do not return indicates task original self-dependent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRedefineParallelNum() const;

                    /**
                     * 设置Custom instance run degree of concurrency. return null or do not return indicates task original self-dependent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _redefineParallelNum Custom instance run degree of concurrency. return null or do not return indicates task original self-dependent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRedefineParallelNum(const uint64_t& _redefineParallelNum);

                    /**
                     * 判断参数 RedefineParallelNum 是否已赋值
                     * @return RedefineParallelNum 是否已赋值
                     * 
                     */
                    bool RedefineParallelNumHasBeenSet() const;

                    /**
                     * 获取Custom workflow self-dependency, yes or no. if not configured, use the existing workflow self-dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RedefineSelfWorkflowDependency Custom workflow self-dependency, yes or no. if not configured, use the existing workflow self-dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRedefineSelfWorkflowDependency() const;

                    /**
                     * 设置Custom workflow self-dependency, yes or no. if not configured, use the existing workflow self-dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _redefineSelfWorkflowDependency Custom workflow self-dependency, yes or no. if not configured, use the existing workflow self-dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRedefineSelfWorkflowDependency(const std::string& _redefineSelfWorkflowDependency);

                    /**
                     * 判断参数 RedefineSelfWorkflowDependency 是否已赋值
                     * @return RedefineSelfWorkflowDependency 是否已赋值
                     * 
                     */
                    bool RedefineSelfWorkflowDependencyHasBeenSet() const;

                    /**
                     * 获取Scheduling resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SchedulerResourceGroupId Scheduling resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSchedulerResourceGroupId() const;

                    /**
                     * 设置Scheduling resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _schedulerResourceGroupId Scheduling resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSchedulerResourceGroupId(const std::string& _schedulerResourceGroupId);

                    /**
                     * 判断参数 SchedulerResourceGroupId 是否已赋值
                     * @return SchedulerResourceGroupId 是否已赋值
                     * 
                     */
                    bool SchedulerResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取Integration resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntegrationResourceGroupId Integration resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIntegrationResourceGroupId() const;

                    /**
                     * 设置Integration resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _integrationResourceGroupId Integration resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntegrationResourceGroupId(const std::string& _integrationResourceGroupId);

                    /**
                     * 判断参数 IntegrationResourceGroupId 是否已赋值
                     * @return IntegrationResourceGroupId 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取Backfill custom generation cycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RedefineCycleType Backfill custom generation cycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRedefineCycleType() const;

                    /**
                     * 设置Backfill custom generation cycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _redefineCycleType Backfill custom generation cycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRedefineCycleType(const std::string& _redefineCycleType);

                    /**
                     * 判断参数 RedefineCycleType 是否已赋值
                     * @return RedefineCycleType 是否已赋值
                     * 
                     */
                    bool RedefineCycleTypeHasBeenSet() const;

                    /**
                     * 获取Custom parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RedefineParamList Custom parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KVPair> GetRedefineParamList() const;

                    /**
                     * 设置Custom parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _redefineParamList Custom parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRedefineParamList(const std::vector<KVPair>& _redefineParamList);

                    /**
                     * 判断参数 RedefineParamList 是否已赋值
                     * @return RedefineParamList 是否已赋值
                     * 
                     */
                    bool RedefineParamListHasBeenSet() const;

                    /**
                     * 获取Execution start time of the backfill task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Execution start time of the backfill task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Execution start time of the backfill task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Execution start time of the backfill task.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Backfill task execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Backfill task execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Backfill task execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Backfill task execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Create a user id.
                     * @return CreateUserUin Create a user id.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Create a user id.
                     * @param _createUserUin Create a user id.
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
                     * 获取Percentage of supplementary plan instances completed.
                     * @return CompletePercent Percentage of supplementary plan instances completed.
                     * 
                     */
                    uint64_t GetCompletePercent() const;

                    /**
                     * 设置Percentage of supplementary plan instances completed.
                     * @param _completePercent Percentage of supplementary plan instances completed.
                     * 
                     */
                    void SetCompletePercent(const uint64_t& _completePercent);

                    /**
                     * 判断参数 CompletePercent 是否已赋值
                     * @return CompletePercent 是否已赋值
                     * 
                     */
                    bool CompletePercentHasBeenSet() const;

                    /**
                     * 获取Percentage of supplementary plan instances successful.
                     * @return SuccessPercent Percentage of supplementary plan instances successful.
                     * 
                     */
                    uint64_t GetSuccessPercent() const;

                    /**
                     * 设置Percentage of supplementary plan instances successful.
                     * @param _successPercent Percentage of supplementary plan instances successful.
                     * 
                     */
                    void SetSuccessPercent(const uint64_t& _successPercent);

                    /**
                     * 判断参数 SuccessPercent 是否已赋值
                     * @return SuccessPercent 是否已赋值
                     * 
                     */
                    bool SuccessPercentHasBeenSet() const;

                    /**
                     * 获取Backfill follows the instance data time sequence and must meet two conditions to take effect: 1. must be tasks in the same cycle 2. execute based on dependencies, or execute based on configured execution ORDER without dependency impact  available values: - NORMAL: leave unset - ORDER: sequence - REVERSE: descending ORDER  if not set, the default is NORMAL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataTimeOrder Backfill follows the instance data time sequence and must meet two conditions to take effect: 1. must be tasks in the same cycle 2. execute based on dependencies, or execute based on configured execution ORDER without dependency impact  available values: - NORMAL: leave unset - ORDER: sequence - REVERSE: descending ORDER  if not set, the default is NORMAL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataTimeOrder() const;

                    /**
                     * 设置Backfill follows the instance data time sequence and must meet two conditions to take effect: 1. must be tasks in the same cycle 2. execute based on dependencies, or execute based on configured execution ORDER without dependency impact  available values: - NORMAL: leave unset - ORDER: sequence - REVERSE: descending ORDER  if not set, the default is NORMAL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataTimeOrder Backfill follows the instance data time sequence and must meet two conditions to take effect: 1. must be tasks in the same cycle 2. execute based on dependencies, or execute based on configured execution ORDER without dependency impact  available values: - NORMAL: leave unset - ORDER: sequence - REVERSE: descending ORDER  if not set, the default is NORMAL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataTimeOrder(const std::string& _dataTimeOrder);

                    /**
                     * 判断参数 DataTimeOrder 是否已赋值
                     * @return DataTimeOrder 是否已赋值
                     * 
                     */
                    bool DataTimeOrderHasBeenSet() const;

                private:

                    /**
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Data supplement plan id.
                     */
                    std::string m_dataBackfillPlanId;
                    bool m_dataBackfillPlanIdHasBeenSet;

                    /**
                     * Data supplement plan name.
                     */
                    std::string m_dataBackfillPlanName;
                    bool m_dataBackfillPlanNameHasBeenSet;

                    /**
                     * Supplementary task collection.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Backfill task data configuration list.
                     */
                    std::vector<DataBackfillRange> m_dataBackfillRangeList;
                    bool m_dataBackfillRangeListHasBeenSet;

                    /**
                     * Check parent task type. valid values: NONE (do not check ALL), ALL (check ALL upstream parent tasks), MAKE_SCOPE (check only in the selected tasks of the present replenishment plan).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * Specifies whether to ignore event dependency during backfill.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * Custom instance run degree of concurrency. return null or do not return indicates task original self-dependent.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_redefineParallelNum;
                    bool m_redefineParallelNumHasBeenSet;

                    /**
                     * Custom workflow self-dependency, yes or no. if not configured, use the existing workflow self-dependency.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_redefineSelfWorkflowDependency;
                    bool m_redefineSelfWorkflowDependencyHasBeenSet;

                    /**
                     * Scheduling resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_schedulerResourceGroupId;
                    bool m_schedulerResourceGroupIdHasBeenSet;

                    /**
                     * Integration resource group id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_integrationResourceGroupId;
                    bool m_integrationResourceGroupIdHasBeenSet;

                    /**
                     * Backfill custom generation cycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_redefineCycleType;
                    bool m_redefineCycleTypeHasBeenSet;

                    /**
                     * Custom parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KVPair> m_redefineParamList;
                    bool m_redefineParamListHasBeenSet;

                    /**
                     * Execution start time of the backfill task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backfill task execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Create a user id.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Percentage of supplementary plan instances completed.
                     */
                    uint64_t m_completePercent;
                    bool m_completePercentHasBeenSet;

                    /**
                     * Percentage of supplementary plan instances successful.
                     */
                    uint64_t m_successPercent;
                    bool m_successPercentHasBeenSet;

                    /**
                     * Backfill follows the instance data time sequence and must meet two conditions to take effect: 1. must be tasks in the same cycle 2. execute based on dependencies, or execute based on configured execution ORDER without dependency impact  available values: - NORMAL: leave unset - ORDER: sequence - REVERSE: descending ORDER  if not set, the default is NORMAL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataTimeOrder;
                    bool m_dataTimeOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABACKFILL_H_
