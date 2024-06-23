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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOPSMAKEPLANREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOPSMAKEPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CreateMakeDatetimeInfo.h>
#include <tencentcloud/wedata/v20210820/model/StrToStrMap.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateOpsMakePlan request structure.
                */
                class CreateOpsMakePlanRequest : public AbstractModel
                {
                public:
                    CreateOpsMakePlanRequest();
                    ~CreateOpsMakePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Supplemental Plan Name
                     * @return MakeName Supplemental Plan Name
                     * 
                     */
                    std::string GetMakeName() const;

                    /**
                     * 设置Supplemental Plan Name
                     * @param _makeName Supplemental Plan Name
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
                     * 获取Supplementary Task Collection
                     * @return TaskIdList Supplementary Task Collection
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置Supplementary Task Collection
                     * @param _taskIdList Supplementary Task Collection
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
                     * @return MakeDatetimeList Supplementary Plan Date Range
                     * 
                     */
                    std::vector<CreateMakeDatetimeInfo> GetMakeDatetimeList() const;

                    /**
                     * 设置Supplementary Plan Date Range
                     * @param _makeDatetimeList Supplementary Plan Date Range
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
                     * 获取Project Identifier
                     * @return ProjectIdent Project Identifier
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置Project Identifier
                     * @param _projectIdent Project Identifier
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取Check Parent Task Status for Supplement, default is not to check. Not recommended for use, will be deprecated, recommend using CheckParentType.
                     * @return CheckParent Check Parent Task Status for Supplement, default is not to check. Not recommended for use, will be deprecated, recommend using CheckParentType.
                     * 
                     */
                    bool GetCheckParent() const;

                    /**
                     * 设置Check Parent Task Status for Supplement, default is not to check. Not recommended for use, will be deprecated, recommend using CheckParentType.
                     * @param _checkParent Check Parent Task Status for Supplement, default is not to check. Not recommended for use, will be deprecated, recommend using CheckParentType.
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
                     * 获取Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
                     * @return CheckParentType Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
                     * @param _checkParentType Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
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
                     * 获取Project name
                     * @return ProjectName Project name
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
                     * @param _projectName Project name
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Deprecated. Task Self-Dependency Type: parallel, serial (unordered parallel), orderly (ordered serial)
                     * @return SelfDependence Deprecated. Task Self-Dependency Type: parallel, serial (unordered parallel), orderly (ordered serial)
                     * 
                     */
                    std::string GetSelfDependence() const;

                    /**
                     * 设置Deprecated. Task Self-Dependency Type: parallel, serial (unordered parallel), orderly (ordered serial)
                     * @param _selfDependence Deprecated. Task Self-Dependency Type: parallel, serial (unordered parallel), orderly (ordered serial)
                     * 
                     */
                    void SetSelfDependence(const std::string& _selfDependence);

                    /**
                     * 判断参数 SelfDependence 是否已赋值
                     * @return SelfDependence 是否已赋值
                     * 
                     */
                    bool SelfDependenceHasBeenSet() const;

                    /**
                     * 获取Parallelism
                     * @return ParallelNum Parallelism
                     * 
                     */
                    int64_t GetParallelNum() const;

                    /**
                     * 设置Parallelism
                     * @param _parallelNum Parallelism
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
                     * 获取Is the generation cycle of the supplementary instance the same as the original cycle, default is true
                     * @return SameCycle Is the generation cycle of the supplementary instance the same as the original cycle, default is true
                     * 
                     */
                    bool GetSameCycle() const;

                    /**
                     * 设置Is the generation cycle of the supplementary instance the same as the original cycle, default is true
                     * @param _sameCycle Is the generation cycle of the supplementary instance the same as the original cycle, default is true
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
                     * 获取Supplementary Instance Target Cycle Type
                     * @return TargetTaskCycle Supplementary Instance Target Cycle Type
                     * 
                     */
                    std::string GetTargetTaskCycle() const;

                    /**
                     * 设置Supplementary Instance Target Cycle Type
                     * @param _targetTaskCycle Supplementary Instance Target Cycle Type
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
                     * 获取Specified Time for Supplementary Instance Target Cycle Type
                     * @return TargetTaskAction Specified Time for Supplementary Instance Target Cycle Type
                     * 
                     */
                    int64_t GetTargetTaskAction() const;

                    /**
                     * 设置Specified Time for Supplementary Instance Target Cycle Type
                     * @param _targetTaskAction Specified Time for Supplementary Instance Target Cycle Type
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
                     * 获取Custom Parameters for Supplement Instance
                     * @return MapParamList Custom Parameters for Supplement Instance
                     * 
                     */
                    std::vector<StrToStrMap> GetMapParamList() const;

                    /**
                     * 设置Custom Parameters for Supplement Instance
                     * @param _mapParamList Custom Parameters for Supplement Instance
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
                     * @return CreatorId Creator ID
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置Creator ID
                     * @param _creatorId Creator ID
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
                     * @return Creator Creator
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
                     * @param _creator Creator
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
                     * 获取Supplementary Plan Description
                     * @return Remark Supplementary Plan Description
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Supplementary Plan Description
                     * @param _remark Supplementary Plan Description
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
                     * 获取Use Original Self-Dependency Configuration of Task, default is true
                     * @return SameSelfDependType Use Original Self-Dependency Configuration of Task, default is true
                     * 
                     */
                    bool GetSameSelfDependType() const;

                    /**
                     * 设置Use Original Self-Dependency Configuration of Task, default is true
                     * @param _sameSelfDependType Use Original Self-Dependency Configuration of Task, default is true
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
                     * 获取Supplementary Instance Original Cycle Type
                     * @return SourceTaskCycle Supplementary Instance Original Cycle Type
                     * 
                     */
                    std::string GetSourceTaskCycle() const;

                    /**
                     * 设置Supplementary Instance Original Cycle Type
                     * @param _sourceTaskCycle Supplementary Instance Original Cycle Type
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
                     * 获取If no specified scheduling resource group (ID) is provided, the original task scheduling execution resource group will be used
                     * @return SchedulerResourceGroup If no specified scheduling resource group (ID) is provided, the original task scheduling execution resource group will be used
                     * 
                     */
                    std::string GetSchedulerResourceGroup() const;

                    /**
                     * 设置If no specified scheduling resource group (ID) is provided, the original task scheduling execution resource group will be used
                     * @param _schedulerResourceGroup If no specified scheduling resource group (ID) is provided, the original task scheduling execution resource group will be used
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
                     * 获取If no specified integration resource group (ID) is provided, the original task integration execution resource group will be used
                     * @return IntegrationResourceGroup If no specified integration resource group (ID) is provided, the original task integration execution resource group will be used
                     * 
                     */
                    std::string GetIntegrationResourceGroup() const;

                    /**
                     * 设置If no specified integration resource group (ID) is provided, the original task integration execution resource group will be used
                     * @param _integrationResourceGroup If no specified integration resource group (ID) is provided, the original task integration execution resource group will be used
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
                     * 获取If no specified scheduling resource group name is provided, the original task scheduling execution resource group will be used
                     * @return SchedulerResourceGroupName If no specified scheduling resource group name is provided, the original task scheduling execution resource group will be used
                     * 
                     */
                    std::string GetSchedulerResourceGroupName() const;

                    /**
                     * 设置If no specified scheduling resource group name is provided, the original task scheduling execution resource group will be used
                     * @param _schedulerResourceGroupName If no specified scheduling resource group name is provided, the original task scheduling execution resource group will be used
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
                     * 获取If no specified integration resource group name is provided, the original task integration execution resource group will be used
                     * @return IntegrationResourceGroupName If no specified integration resource group name is provided, the original task integration execution resource group will be used
                     * 
                     */
                    std::string GetIntegrationResourceGroupName() const;

                    /**
                     * 设置If no specified integration resource group name is provided, the original task integration execution resource group will be used
                     * @param _integrationResourceGroupName If no specified integration resource group name is provided, the original task integration execution resource group will be used
                     * 
                     */
                    void SetIntegrationResourceGroupName(const std::string& _integrationResourceGroupName);

                    /**
                     * 判断参数 IntegrationResourceGroupName 是否已赋值
                     * @return IntegrationResourceGroupName 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupNameHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Supplemental Plan Name
                     */
                    std::string m_makeName;
                    bool m_makeNameHasBeenSet;

                    /**
                     * Supplementary Task Collection
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * Supplementary Plan Date Range
                     */
                    std::vector<CreateMakeDatetimeInfo> m_makeDatetimeList;
                    bool m_makeDatetimeListHasBeenSet;

                    /**
                     * Project Identifier
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Check Parent Task Status for Supplement, default is not to check. Not recommended for use, will be deprecated, recommend using CheckParentType.
                     */
                    bool m_checkParent;
                    bool m_checkParentHasBeenSet;

                    /**
                     * Check Parent Task Type for Supplementary. Value range:
<li> NONE: Do not check any </li>
<li> ALL: Check all upstream parent tasks </li>
<li> MAKE_SCOPE: Check only within the selected tasks of (the current supplementary plan) </li>
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Deprecated. Task Self-Dependency Type: parallel, serial (unordered parallel), orderly (ordered serial)
                     */
                    std::string m_selfDependence;
                    bool m_selfDependenceHasBeenSet;

                    /**
                     * Parallelism
                     */
                    int64_t m_parallelNum;
                    bool m_parallelNumHasBeenSet;

                    /**
                     * Is the generation cycle of the supplementary instance the same as the original cycle, default is true
                     */
                    bool m_sameCycle;
                    bool m_sameCycleHasBeenSet;

                    /**
                     * Supplementary Instance Target Cycle Type
                     */
                    std::string m_targetTaskCycle;
                    bool m_targetTaskCycleHasBeenSet;

                    /**
                     * Specified Time for Supplementary Instance Target Cycle Type
                     */
                    int64_t m_targetTaskAction;
                    bool m_targetTaskActionHasBeenSet;

                    /**
                     * Custom Parameters for Supplement Instance
                     */
                    std::vector<StrToStrMap> m_mapParamList;
                    bool m_mapParamListHasBeenSet;

                    /**
                     * Creator ID
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * Creator
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Supplementary Plan Description
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Use Original Self-Dependency Configuration of Task, default is true
                     */
                    bool m_sameSelfDependType;
                    bool m_sameSelfDependTypeHasBeenSet;

                    /**
                     * Supplementary Instance Original Cycle Type
                     */
                    std::string m_sourceTaskCycle;
                    bool m_sourceTaskCycleHasBeenSet;

                    /**
                     * If no specified scheduling resource group (ID) is provided, the original task scheduling execution resource group will be used
                     */
                    std::string m_schedulerResourceGroup;
                    bool m_schedulerResourceGroupHasBeenSet;

                    /**
                     * If no specified integration resource group (ID) is provided, the original task integration execution resource group will be used
                     */
                    std::string m_integrationResourceGroup;
                    bool m_integrationResourceGroupHasBeenSet;

                    /**
                     * If no specified scheduling resource group name is provided, the original task scheduling execution resource group will be used
                     */
                    std::string m_schedulerResourceGroupName;
                    bool m_schedulerResourceGroupNameHasBeenSet;

                    /**
                     * If no specified integration resource group name is provided, the original task integration execution resource group will be used
                     */
                    std::string m_integrationResourceGroupName;
                    bool m_integrationResourceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOPSMAKEPLANREQUEST_H_
