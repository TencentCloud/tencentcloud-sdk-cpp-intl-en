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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleConfig.h>
#include <tencentcloud/wedata/v20210820/model/RuleExecConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CommitRuleGroupTask request structure.
                */
                class CommitRuleGroupTaskRequest : public AbstractModel
                {
                public:
                    CommitRuleGroupTaskRequest();
                    ~CommitRuleGroupTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule Group ID
                     * @return RuleGroupId Rule Group ID
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置Rule Group ID
                     * @param _ruleGroupId Rule Group ID
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取Trigger Type 1. Manual Trigger 2. In-process Scheduling Trigger 3. Periodic Scheduling Trigger
                     * @return TriggerType Trigger Type 1. Manual Trigger 2. In-process Scheduling Trigger 3. Periodic Scheduling Trigger
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置Trigger Type 1. Manual Trigger 2. In-process Scheduling Trigger 3. Periodic Scheduling Trigger
                     * @param _triggerType Trigger Type 1. Manual Trigger 2. In-process Scheduling Trigger 3. Periodic Scheduling Trigger
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Rule Configuration List
                     * @return ExecRuleConfig Rule Configuration List
                     * 
                     */
                    std::vector<RuleConfig> GetExecRuleConfig() const;

                    /**
                     * 设置Rule Configuration List
                     * @param _execRuleConfig Rule Configuration List
                     * 
                     */
                    void SetExecRuleConfig(const std::vector<RuleConfig>& _execRuleConfig);

                    /**
                     * 判断参数 ExecRuleConfig 是否已赋值
                     * @return ExecRuleConfig 是否已赋值
                     * 
                     */
                    bool ExecRuleConfigHasBeenSet() const;

                    /**
                     * 获取Execution configuration
                     * @return ExecConfig Execution configuration
                     * 
                     */
                    RuleExecConfig GetExecConfig() const;

                    /**
                     * 设置Execution configuration
                     * @param _execConfig Execution configuration
                     * 
                     */
                    void SetExecConfig(const RuleExecConfig& _execConfig);

                    /**
                     * 判断参数 ExecConfig 是否已赋值
                     * @return ExecConfig 是否已赋值
                     * 
                     */
                    bool ExecConfigHasBeenSet() const;

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
                     * 获取The execution engine that this rule runs. If this parameter is not passed, the default execution engine under this data source will be requested.
                     * @return EngineType The execution engine that this rule runs. If this parameter is not passed, the default execution engine under this data source will be requested.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置The execution engine that this rule runs. If this parameter is not passed, the default execution engine under this data source will be requested.
                     * @param _engineType The execution engine that this rule runs. If this parameter is not passed, the default execution engine under this data source will be requested.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * Rule Group ID
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Trigger Type 1. Manual Trigger 2. In-process Scheduling Trigger 3. Periodic Scheduling Trigger
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Rule Configuration List
                     */
                    std::vector<RuleConfig> m_execRuleConfig;
                    bool m_execRuleConfigHasBeenSet;

                    /**
                     * Execution configuration
                     */
                    RuleExecConfig m_execConfig;
                    bool m_execConfigHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * The execution engine that this rule runs. If this parameter is not passed, the default execution engine under this data source will be requested.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPTASKREQUEST_H_
