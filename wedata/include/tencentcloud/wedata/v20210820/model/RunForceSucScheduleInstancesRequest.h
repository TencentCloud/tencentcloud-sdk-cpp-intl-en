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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNFORCESUCSCHEDULEINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNFORCESUCSCHEDULEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/InstanceApiOpsRequest.h>
#include <tencentcloud/wedata/v20210820/model/ProjectBaseInfoOpsRequest.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * RunForceSucScheduleInstances request structure.
                */
                class RunForceSucScheduleInstancesRequest : public AbstractModel
                {
                public:
                    RunForceSucScheduleInstancesRequest();
                    ~RunForceSucScheduleInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance List
                     * @return Instances Instance List
                     * 
                     */
                    std::vector<InstanceOpsDto> GetInstances() const;

                    /**
                     * 设置Instance List
                     * @param _instances Instance List
                     * 
                     */
                    void SetInstances(const std::vector<InstanceOpsDto>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取Check Parent Task Type, true: Check parent task; false: Do not check parent task
                     * @return CheckFather Check Parent Task Type, true: Check parent task; false: Do not check parent task
                     * 
                     */
                    bool GetCheckFather() const;

                    /**
                     * 设置Check Parent Task Type, true: Check parent task; false: Do not check parent task
                     * @param _checkFather Check Parent Task Type, true: Check parent task; false: Do not check parent task
                     * 
                     */
                    void SetCheckFather(const bool& _checkFather);

                    /**
                     * 判断参数 CheckFather 是否已赋值
                     * @return CheckFather 是否已赋值
                     * 
                     */
                    bool CheckFatherHasBeenSet() const;

                    /**
                     * 获取Rerun Type, 1: Self; 3: Child; 2: Self and Child
                     * @return RerunType Rerun Type, 1: Self; 3: Child; 2: Self and Child
                     * 
                     */
                    std::string GetRerunType() const;

                    /**
                     * 设置Rerun Type, 1: Self; 3: Child; 2: Self and Child
                     * @param _rerunType Rerun Type, 1: Self; 3: Child; 2: Self and Child
                     * 
                     */
                    void SetRerunType(const std::string& _rerunType);

                    /**
                     * 判断参数 RerunType 是否已赋值
                     * @return RerunType 是否已赋值
                     * 
                     */
                    bool RerunTypeHasBeenSet() const;

                    /**
                     * 获取Instance Dependency Mode, 1: Self-dependent; 2: Task-dependent; 3: Self and Parent-Child dependent
                     * @return DependentWay Instance Dependency Mode, 1: Self-dependent; 2: Task-dependent; 3: Self and Parent-Child dependent
                     * 
                     */
                    std::string GetDependentWay() const;

                    /**
                     * 设置Instance Dependency Mode, 1: Self-dependent; 2: Task-dependent; 3: Self and Parent-Child dependent
                     * @param _dependentWay Instance Dependency Mode, 1: Self-dependent; 2: Task-dependent; 3: Self and Parent-Child dependent
                     * 
                     */
                    void SetDependentWay(const std::string& _dependentWay);

                    /**
                     * 判断参数 DependentWay 是否已赋值
                     * @return DependentWay 是否已赋值
                     * 
                     */
                    bool DependentWayHasBeenSet() const;

                    /**
                     * 获取Rerun Ignore Event Listening or Not
                     * @return SkipEventListening Rerun Ignore Event Listening or Not
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置Rerun Ignore Event Listening or Not
                     * @param _skipEventListening Rerun Ignore Event Listening or Not
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
                     * 获取Downstream Instance Range 1: Within the workflow 2: Within the project 3: Across all workflows dependent on the project
                     * @return SonInstanceType Downstream Instance Range 1: Within the workflow 2: Within the project 3: Across all workflows dependent on the project
                     * 
                     */
                    std::string GetSonInstanceType() const;

                    /**
                     * 设置Downstream Instance Range 1: Within the workflow 2: Within the project 3: Across all workflows dependent on the project
                     * @param _sonInstanceType Downstream Instance Range 1: Within the workflow 2: Within the project 3: Across all workflows dependent on the project
                     * 
                     */
                    void SetSonInstanceType(const std::string& _sonInstanceType);

                    /**
                     * 判断参数 SonInstanceType 是否已赋值
                     * @return SonInstanceType 是否已赋值
                     * 
                     */
                    bool SonInstanceTypeHasBeenSet() const;

                    /**
                     * 获取Query conditions
                     * @return SearchCondition Query conditions
                     * 
                     */
                    InstanceApiOpsRequest GetSearchCondition() const;

                    /**
                     * 设置Query conditions
                     * @param _searchCondition Query conditions
                     * 
                     */
                    void SetSearchCondition(const InstanceApiOpsRequest& _searchCondition);

                    /**
                     * 判断参数 SearchCondition 是否已赋值
                     * @return SearchCondition 是否已赋值
                     * 
                     */
                    bool SearchConditionHasBeenSet() const;

                    /**
                     * 获取Access type
                     * @return OptType Access type
                     * 
                     */
                    std::string GetOptType() const;

                    /**
                     * 设置Access type
                     * @param _optType Access type
                     * 
                     */
                    void SetOptType(const std::string& _optType);

                    /**
                     * 判断参数 OptType 是否已赋值
                     * @return OptType 是否已赋值
                     * 
                     */
                    bool OptTypeHasBeenSet() const;

                    /**
                     * 获取Operator Name
                     * @return OperatorName Operator Name
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置Operator Name
                     * @param _operatorName Operator Name
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取Operator ID
                     * @return OperatorId Operator ID
                     * 
                     */
                    std::string GetOperatorId() const;

                    /**
                     * 设置Operator ID
                     * @param _operatorId Operator ID
                     * 
                     */
                    void SetOperatorId(const std::string& _operatorId);

                    /**
                     * 判断参数 OperatorId 是否已赋值
                     * @return OperatorId 是否已赋值
                     * 
                     */
                    bool OperatorIdHasBeenSet() const;

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
                     * 获取Index Page Number
                     * @return PageIndex Index Page Number
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置Index Page Number
                     * @param _pageIndex Index Page Number
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取Page size
                     * @return PageSize Page size
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size
                     * @param _pageSize Page size
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Total Data
                     * @return Count Total Data
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Total Data
                     * @param _count Total Data
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Basic Request Information
                     * @return RequestBaseInfo Basic Request Information
                     * 
                     */
                    ProjectBaseInfoOpsRequest GetRequestBaseInfo() const;

                    /**
                     * 设置Basic Request Information
                     * @param _requestBaseInfo Basic Request Information
                     * 
                     */
                    void SetRequestBaseInfo(const ProjectBaseInfoOpsRequest& _requestBaseInfo);

                    /**
                     * 判断参数 RequestBaseInfo 是否已赋值
                     * @return RequestBaseInfo 是否已赋值
                     * 
                     */
                    bool RequestBaseInfoHasBeenSet() const;

                    /**
                     * 获取Whether to Calculate Total
                     * @return IsCount Whether to Calculate Total
                     * 
                     */
                    bool GetIsCount() const;

                    /**
                     * 设置Whether to Calculate Total
                     * @param _isCount Whether to Calculate Total
                     * 
                     */
                    void SetIsCount(const bool& _isCount);

                    /**
                     * 判断参数 IsCount 是否已赋值
                     * @return IsCount 是否已赋值
                     * 
                     */
                    bool IsCountHasBeenSet() const;

                private:

                    /**
                     * Instance List
                     */
                    std::vector<InstanceOpsDto> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * Check Parent Task Type, true: Check parent task; false: Do not check parent task
                     */
                    bool m_checkFather;
                    bool m_checkFatherHasBeenSet;

                    /**
                     * Rerun Type, 1: Self; 3: Child; 2: Self and Child
                     */
                    std::string m_rerunType;
                    bool m_rerunTypeHasBeenSet;

                    /**
                     * Instance Dependency Mode, 1: Self-dependent; 2: Task-dependent; 3: Self and Parent-Child dependent
                     */
                    std::string m_dependentWay;
                    bool m_dependentWayHasBeenSet;

                    /**
                     * Rerun Ignore Event Listening or Not
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * Downstream Instance Range 1: Within the workflow 2: Within the project 3: Across all workflows dependent on the project
                     */
                    std::string m_sonInstanceType;
                    bool m_sonInstanceTypeHasBeenSet;

                    /**
                     * Query conditions
                     */
                    InstanceApiOpsRequest m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                    /**
                     * Access type
                     */
                    std::string m_optType;
                    bool m_optTypeHasBeenSet;

                    /**
                     * Operator Name
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * Operator ID
                     */
                    std::string m_operatorId;
                    bool m_operatorIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project Identifier
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Index Page Number
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * Page size
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total Data
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Basic Request Information
                     */
                    ProjectBaseInfoOpsRequest m_requestBaseInfo;
                    bool m_requestBaseInfoHasBeenSet;

                    /**
                     * Whether to Calculate Total
                     */
                    bool m_isCount;
                    bool m_isCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNFORCESUCSCHEDULEINSTANCESREQUEST_H_
