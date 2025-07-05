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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/StrToStrMap.h>
#include <tencentcloud/wedata/v20210820/model/CreateMakeDatetimeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Supplemental Plan
                */
                class MakePlanOpsDto : public AbstractModel
                {
                public:
                    MakePlanOpsDto();
                    ~MakePlanOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Supplement Plan ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PlanId Supplement Plan ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Supplement Plan ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _planId Supplement Plan ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Supplement Plan Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MakeName Supplement Plan Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMakeName() const;

                    /**
                     * 设置Supplement Plan Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _makeName Supplement Plan Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMakeName(const std::string& _makeName);

                    /**
                     * 判断参数 MakeName 是否已赋值
                     * @return MakeName 是否已赋值
                     * 
                     */
                    bool MakeNameHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Check Parent Task Status for Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CheckParent Check Parent Task Status for Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetCheckParent() const;

                    /**
                     * 设置Check Parent Task Status for Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _checkParent Check Parent Task Status for Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCheckParent(const bool& _checkParent);

                    /**
                     * 判断参数 CheckParent 是否已赋值
                     * @return CheckParent 是否已赋值
                     * 
                     */
                    bool CheckParentHasBeenSet() const;

                    /**
                     * 获取Use Original Task Self-Dependency Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SameSelfDependType Use Original Task Self-Dependency Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetSameSelfDependType() const;

                    /**
                     * 设置Use Original Task Self-Dependency Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sameSelfDependType Use Original Task Self-Dependency Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSameSelfDependType(const bool& _sameSelfDependType);

                    /**
                     * 判断参数 SameSelfDependType 是否已赋值
                     * @return SameSelfDependType 是否已赋值
                     * 
                     */
                    bool SameSelfDependTypeHasBeenSet() const;

                    /**
                     * 获取Concurrency, effective when SameSelfDependType is false
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParallelNum Concurrency, effective when SameSelfDependType is false
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetParallelNum() const;

                    /**
                     * 设置Concurrency, effective when SameSelfDependType is false
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _parallelNum Concurrency, effective when SameSelfDependType is false
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParallelNum(const int64_t& _parallelNum);

                    /**
                     * 判断参数 ParallelNum 是否已赋值
                     * @return ParallelNum 是否已赋值
                     * 
                     */
                    bool ParallelNumHasBeenSet() const;

                    /**
                     * 获取Modify Supplement Instance Generation Period
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SameCycle Modify Supplement Instance Generation Period
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetSameCycle() const;

                    /**
                     * 设置Modify Supplement Instance Generation Period
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sameCycle Modify Supplement Instance Generation Period
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSameCycle(const bool& _sameCycle);

                    /**
                     * 判断参数 SameCycle 是否已赋值
                     * @return SameCycle 是否已赋值
                     * 
                     */
                    bool SameCycleHasBeenSet() const;

                    /**
                     * 获取Scheduling Cycle Conversion Method - Original Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceTaskCycle Scheduling Cycle Conversion Method - Original Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceTaskCycle() const;

                    /**
                     * 设置Scheduling Cycle Conversion Method - Original Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceTaskCycle Scheduling Cycle Conversion Method - Original Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceTaskCycle(const std::string& _sourceTaskCycle);

                    /**
                     * 判断参数 SourceTaskCycle 是否已赋值
                     * @return SourceTaskCycle 是否已赋值
                     * 
                     */
                    bool SourceTaskCycleHasBeenSet() const;

                    /**
                     * 获取Scheduling Cycle Conversion Method - Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetTaskCycle Scheduling Cycle Conversion Method - Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetTaskCycle() const;

                    /**
                     * 设置Scheduling Cycle Conversion Method - Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetTaskCycle Scheduling Cycle Conversion Method - Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetTaskCycle(const std::string& _targetTaskCycle);

                    /**
                     * 判断参数 TargetTaskCycle 是否已赋值
                     * @return TargetTaskCycle 是否已赋值
                     * 
                     */
                    bool TargetTaskCycleHasBeenSet() const;

                    /**
                     * 获取Scheduling Cycle Conversion Method - Specific Time for Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetTaskAction Scheduling Cycle Conversion Method - Specific Time for Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTargetTaskAction() const;

                    /**
                     * 设置Scheduling Cycle Conversion Method - Specific Time for Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetTaskAction Scheduling Cycle Conversion Method - Specific Time for Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetTaskAction(const int64_t& _targetTaskAction);

                    /**
                     * 判断参数 TargetTaskAction 是否已赋值
                     * @return TargetTaskAction 是否已赋值
                     * 
                     */
                    bool TargetTaskActionHasBeenSet() const;

                    /**
                     * 获取Supplement Instance From Definition Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MapParamList Supplement Instance From Definition Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<StrToStrMap> GetMapParamList() const;

                    /**
                     * 设置Supplement Instance From Definition Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _mapParamList Supplement Instance From Definition Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMapParamList(const std::vector<StrToStrMap>& _mapParamList);

                    /**
                     * 判断参数 MapParamList 是否已赋值
                     * @return MapParamList 是否已赋值
                     * 
                     */
                    bool MapParamListHasBeenSet() const;

                    /**
                     * 获取Creator ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreatorId Creator ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置Creator ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _creatorId Creator ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Creator Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _creator Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Supplementary Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskIdList Supplementary Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置Supplementary Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskIdList Supplementary Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取Supplementary Plan Date Range
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MakeDatetimeList Supplementary Plan Date Range
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<CreateMakeDatetimeInfo> GetMakeDatetimeList() const;

                    /**
                     * 设置Supplementary Plan Date Range
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _makeDatetimeList Supplementary Plan Date Range
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMakeDatetimeList(const std::vector<CreateMakeDatetimeInfo>& _makeDatetimeList);

                    /**
                     * 判断参数 MakeDatetimeList 是否已赋值
                     * @return MakeDatetimeList 是否已赋值
                     * 
                     */
                    bool MakeDatetimeListHasBeenSet() const;

                    /**
                     * 获取Supplementary Plan Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Remark Supplementary Plan Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Supplementary Plan Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _remark Supplementary Plan Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Supplementary Designated Scheduling Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SchedulerResourceGroup Supplementary Designated Scheduling Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSchedulerResourceGroup() const;

                    /**
                     * 设置Supplementary Designated Scheduling Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schedulerResourceGroup Supplementary Designated Scheduling Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchedulerResourceGroup(const std::string& _schedulerResourceGroup);

                    /**
                     * 判断参数 SchedulerResourceGroup 是否已赋值
                     * @return SchedulerResourceGroup 是否已赋值
                     * 
                     */
                    bool SchedulerResourceGroupHasBeenSet() const;

                    /**
                     * 获取Supplementary Scheduled Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SchedulerResourceGroupName Supplementary Scheduled Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSchedulerResourceGroupName() const;

                    /**
                     * 设置Supplementary Scheduled Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schedulerResourceGroupName Supplementary Scheduled Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchedulerResourceGroupName(const std::string& _schedulerResourceGroupName);

                    /**
                     * 判断参数 SchedulerResourceGroupName 是否已赋值
                     * @return SchedulerResourceGroupName 是否已赋值
                     * 
                     */
                    bool SchedulerResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取Supplementary Designated Integration Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IntegrationResourceGroup Supplementary Designated Integration Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIntegrationResourceGroup() const;

                    /**
                     * 设置Supplementary Designated Integration Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _integrationResourceGroup Supplementary Designated Integration Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIntegrationResourceGroup(const std::string& _integrationResourceGroup);

                    /**
                     * 判断参数 IntegrationResourceGroup 是否已赋值
                     * @return IntegrationResourceGroup 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupHasBeenSet() const;

                    /**
                     * 获取Supplementary Integrated Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IntegrationResourceGroupName Supplementary Integrated Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIntegrationResourceGroupName() const;

                    /**
                     * 设置Supplementary Integrated Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _integrationResourceGroupName Supplementary Integrated Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIntegrationResourceGroupName(const std::string& _integrationResourceGroupName);

                    /**
                     * 判断参数 IntegrationResourceGroupName 是否已赋值
                     * @return IntegrationResourceGroupName 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取Number of Supplementary Plan Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskCount Number of Supplementary Plan Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置Number of Supplementary Plan Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskCount Number of Supplementary Plan Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskCount(const int64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取Percentage of Supplementary Plan Instances Completed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompletePercent Percentage of Supplementary Plan Instances Completed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetCompletePercent() const;

                    /**
                     * 设置Percentage of Supplementary Plan Instances Completed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _completePercent Percentage of Supplementary Plan Instances Completed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCompletePercent(const int64_t& _completePercent);

                    /**
                     * 判断参数 CompletePercent 是否已赋值
                     * @return CompletePercent 是否已赋值
                     * 
                     */
                    bool CompletePercentHasBeenSet() const;

                    /**
                     * 获取Percentage of Supplementary Plan Instances Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SuccessPercent Percentage of Supplementary Plan Instances Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetSuccessPercent() const;

                    /**
                     * 设置Percentage of Supplementary Plan Instances Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _successPercent Percentage of Supplementary Plan Instances Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSuccessPercent(const int64_t& _successPercent);

                    /**
                     * 判断参数 SuccessPercent 是否已赋值
                     * @return SuccessPercent 是否已赋值
                     * 
                     */
                    bool SuccessPercentHasBeenSet() const;

                    /**
                     * 获取Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CheckParentType Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _checkParentType Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCheckParentType(const std::string& _checkParentType);

                    /**
                     * 判断参数 CheckParentType 是否已赋值
                     * @return CheckParentType 是否已赋值
                     * 
                     */
                    bool CheckParentTypeHasBeenSet() const;

                private:

                    /**
                     * Supplement Plan ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Supplement Plan Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_makeName;
                    bool m_makeNameHasBeenSet;

                    /**
                     * Project ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Check Parent Task Status for Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_checkParent;
                    bool m_checkParentHasBeenSet;

                    /**
                     * Use Original Task Self-Dependency Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_sameSelfDependType;
                    bool m_sameSelfDependTypeHasBeenSet;

                    /**
                     * Concurrency, effective when SameSelfDependType is false
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_parallelNum;
                    bool m_parallelNumHasBeenSet;

                    /**
                     * Modify Supplement Instance Generation Period
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_sameCycle;
                    bool m_sameCycleHasBeenSet;

                    /**
                     * Scheduling Cycle Conversion Method - Original Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceTaskCycle;
                    bool m_sourceTaskCycleHasBeenSet;

                    /**
                     * Scheduling Cycle Conversion Method - Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetTaskCycle;
                    bool m_targetTaskCycleHasBeenSet;

                    /**
                     * Scheduling Cycle Conversion Method - Specific Time for Target Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_targetTaskAction;
                    bool m_targetTaskActionHasBeenSet;

                    /**
                     * Supplement Instance From Definition Parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<StrToStrMap> m_mapParamList;
                    bool m_mapParamListHasBeenSet;

                    /**
                     * Creator ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * Creator
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Supplementary Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * Supplementary Plan Date Range
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<CreateMakeDatetimeInfo> m_makeDatetimeList;
                    bool m_makeDatetimeListHasBeenSet;

                    /**
                     * Supplementary Plan Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Supplementary Designated Scheduling Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_schedulerResourceGroup;
                    bool m_schedulerResourceGroupHasBeenSet;

                    /**
                     * Supplementary Scheduled Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_schedulerResourceGroupName;
                    bool m_schedulerResourceGroupNameHasBeenSet;

                    /**
                     * Supplementary Designated Integration Resource Group (ID)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_integrationResourceGroup;
                    bool m_integrationResourceGroupHasBeenSet;

                    /**
                     * Supplementary Integrated Resource Group Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_integrationResourceGroupName;
                    bool m_integrationResourceGroupNameHasBeenSet;

                    /**
                     * Number of Supplementary Plan Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * Percentage of Supplementary Plan Instances Completed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_completePercent;
                    bool m_completePercentHasBeenSet;

                    /**
                     * Percentage of Supplementary Plan Instances Successful
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_successPercent;
                    bool m_successPercentHasBeenSet;

                    /**
                     * Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTO_H_
