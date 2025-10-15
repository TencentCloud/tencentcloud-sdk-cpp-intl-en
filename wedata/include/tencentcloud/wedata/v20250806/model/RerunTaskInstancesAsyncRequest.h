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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTASKINSTANCESASYNCREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTASKINSTANCESASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/KVMap.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * RerunTaskInstancesAsync request structure.
                */
                class RerunTaskInstancesAsyncRequest : public AbstractModel
                {
                public:
                    RerunTaskInstancesAsyncRequest();
                    ~RerunTaskInstancesAsyncRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Instance id list. obtain from ListInstances.
                     * @return InstanceKeyList Instance id list. obtain from ListInstances.
                     * 
                     */
                    std::vector<std::string> GetInstanceKeyList() const;

                    /**
                     * 设置Instance id list. obtain from ListInstances.
                     * @param _instanceKeyList Instance id list. obtain from ListInstances.
                     * 
                     */
                    void SetInstanceKeyList(const std::vector<std::string>& _instanceKeyList);

                    /**
                     * 判断参数 InstanceKeyList 是否已赋值
                     * @return InstanceKeyList 是否已赋值
                     * 
                     */
                    bool InstanceKeyListHasBeenSet() const;

                    /**
                     * 获取Rerun type. valid values: 1 (self), 3 (child), 2 (self and child). default: 1.
                     * @return RerunType Rerun type. valid values: 1 (self), 3 (child), 2 (self and child). default: 1.
                     * 
                     */
                    std::string GetRerunType() const;

                    /**
                     * 设置Rerun type. valid values: 1 (self), 3 (child), 2 (self and child). default: 1.
                     * @param _rerunType Rerun type. valid values: 1 (self), 3 (child), 2 (self and child). default: 1.
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
                     * 获取Whether to check upstream tasks: ALL (ALL), MAKE_SCOPE (select), NONE (do not check). default is NONE.
                     * @return CheckParentType Whether to check upstream tasks: ALL (ALL), MAKE_SCOPE (select), NONE (do not check). default is NONE.
                     * 
                     */
                    std::string GetCheckParentType() const;

                    /**
                     * 设置Whether to check upstream tasks: ALL (ALL), MAKE_SCOPE (select), NONE (do not check). default is NONE.
                     * @param _checkParentType Whether to check upstream tasks: ALL (ALL), MAKE_SCOPE (select), NONE (do not check). default is NONE.
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
                     * 获取Downstream Instance Scope

* WORKFLOW: Within the current workflow (default)

* PROJECT: Within the current project

* ALL: Across all projects with cross-workflow dependencies
                     * @return SonRangeType Downstream Instance Scope

* WORKFLOW: Within the current workflow (default)

* PROJECT: Within the current project

* ALL: Across all projects with cross-workflow dependencies
                     * 
                     */
                    std::string GetSonRangeType() const;

                    /**
                     * 设置Downstream Instance Scope

* WORKFLOW: Within the current workflow (default)

* PROJECT: Within the current project

* ALL: Across all projects with cross-workflow dependencies
                     * @param _sonRangeType Downstream Instance Scope

* WORKFLOW: Within the current workflow (default)

* PROJECT: Within the current project

* ALL: Across all projects with cross-workflow dependencies
                     * 
                     */
                    void SetSonRangeType(const std::string& _sonRangeType);

                    /**
                     * 判断参数 SonRangeType 是否已赋值
                     * @return SonRangeType 是否已赋值
                     * 
                     */
                    bool SonRangeTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to ignore event monitoring when rerunning.
                     * @return SkipEventListening Specifies whether to ignore event monitoring when rerunning.
                     * 
                     */
                    bool GetSkipEventListening() const;

                    /**
                     * 设置Specifies whether to ignore event monitoring when rerunning.
                     * @param _skipEventListening Specifies whether to ignore event monitoring when rerunning.
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
                     * 获取Specifies the degree of concurrency for a custom instance run. if not configured, use the existing self-dependent task.
                     * @return RedefineParallelNum Specifies the degree of concurrency for a custom instance run. if not configured, use the existing self-dependent task.
                     * 
                     */
                    int64_t GetRedefineParallelNum() const;

                    /**
                     * 设置Specifies the degree of concurrency for a custom instance run. if not configured, use the existing self-dependent task.
                     * @param _redefineParallelNum Specifies the degree of concurrency for a custom instance run. if not configured, use the existing self-dependent task.
                     * 
                     */
                    void SetRedefineParallelNum(const int64_t& _redefineParallelNum);

                    /**
                     * 判断参数 RedefineParallelNum 是否已赋值
                     * @return RedefineParallelNum 是否已赋值
                     * 
                     */
                    bool RedefineParallelNumHasBeenSet() const;

                    /**
                     * 获取Custom workflow self-dependency. valid values: yes (enable), no (disable). if not configured, use the existing workflow self-dependency.
                     * @return RedefineSelfWorkflowDependency Custom workflow self-dependency. valid values: yes (enable), no (disable). if not configured, use the existing workflow self-dependency.
                     * 
                     */
                    std::string GetRedefineSelfWorkflowDependency() const;

                    /**
                     * 设置Custom workflow self-dependency. valid values: yes (enable), no (disable). if not configured, use the existing workflow self-dependency.
                     * @param _redefineSelfWorkflowDependency Custom workflow self-dependency. valid values: yes (enable), no (disable). if not configured, use the existing workflow self-dependency.
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
                     * 获取Rerun instance custom parameter.
                     * @return RedefineParamList Rerun instance custom parameter.
                     * 
                     */
                    KVMap GetRedefineParamList() const;

                    /**
                     * 设置Rerun instance custom parameter.
                     * @param _redefineParamList Rerun instance custom parameter.
                     * 
                     */
                    void SetRedefineParamList(const KVMap& _redefineParamList);

                    /**
                     * 判断参数 RedefineParamList 是否已赋值
                     * @return RedefineParamList 是否已赋值
                     * 
                     */
                    bool RedefineParamListHasBeenSet() const;

                private:

                    /**
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance id list. obtain from ListInstances.
                     */
                    std::vector<std::string> m_instanceKeyList;
                    bool m_instanceKeyListHasBeenSet;

                    /**
                     * Rerun type. valid values: 1 (self), 3 (child), 2 (self and child). default: 1.
                     */
                    std::string m_rerunType;
                    bool m_rerunTypeHasBeenSet;

                    /**
                     * Whether to check upstream tasks: ALL (ALL), MAKE_SCOPE (select), NONE (do not check). default is NONE.
                     */
                    std::string m_checkParentType;
                    bool m_checkParentTypeHasBeenSet;

                    /**
                     * Downstream Instance Scope

* WORKFLOW: Within the current workflow (default)

* PROJECT: Within the current project

* ALL: Across all projects with cross-workflow dependencies
                     */
                    std::string m_sonRangeType;
                    bool m_sonRangeTypeHasBeenSet;

                    /**
                     * Specifies whether to ignore event monitoring when rerunning.
                     */
                    bool m_skipEventListening;
                    bool m_skipEventListeningHasBeenSet;

                    /**
                     * Specifies the degree of concurrency for a custom instance run. if not configured, use the existing self-dependent task.
                     */
                    int64_t m_redefineParallelNum;
                    bool m_redefineParallelNumHasBeenSet;

                    /**
                     * Custom workflow self-dependency. valid values: yes (enable), no (disable). if not configured, use the existing workflow self-dependency.
                     */
                    std::string m_redefineSelfWorkflowDependency;
                    bool m_redefineSelfWorkflowDependencyHasBeenSet;

                    /**
                     * Rerun instance custom parameter.
                     */
                    KVMap m_redefineParamList;
                    bool m_redefineParamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTASKINSTANCESASYNCREQUEST_H_
