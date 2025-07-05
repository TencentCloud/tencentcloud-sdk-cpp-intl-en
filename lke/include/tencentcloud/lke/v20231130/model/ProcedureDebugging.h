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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDUREDEBUGGING_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDUREDEBUGGING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/HistorySummary.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeSummary.h>
#include <tencentcloud/lke/v20231130/model/TaskFlowSummary.h>
#include <tencentcloud/lke/v20231130/model/WorkFlowSummary.h>
#include <tencentcloud/lke/v20231130/model/AgentDebugInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Debug information.
                */
                class ProcedureDebugging : public AbstractModel
                {
                public:
                    ProcedureDebugging();
                    ~ProcedureDebugging() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Retrieve query.
                     * @return Content Retrieve query.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Retrieve query.
                     * @param _content Retrieve query.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取System prompt.
                     * @return System System prompt.
                     * 
                     */
                    std::string GetSystem() const;

                    /**
                     * 设置System prompt.
                     * @param _system System prompt.
                     * 
                     */
                    void SetSystem(const std::string& _system);

                    /**
                     * 判断参数 System 是否已赋值
                     * @return System 是否已赋值
                     * 
                     */
                    bool SystemHasBeenSet() const;

                    /**
                     * 获取Multiple rounds of historical information.
                     * @return Histories Multiple rounds of historical information.
                     * 
                     */
                    std::vector<HistorySummary> GetHistories() const;

                    /**
                     * 设置Multiple rounds of historical information.
                     * @param _histories Multiple rounds of historical information.
                     * 
                     */
                    void SetHistories(const std::vector<HistorySummary>& _histories);

                    /**
                     * 判断参数 Histories 是否已赋值
                     * @return Histories 是否已赋值
                     * 
                     */
                    bool HistoriesHasBeenSet() const;

                    /**
                     * 获取Retrieve knowledge.
                     * @return Knowledge Retrieve knowledge.
                     * 
                     */
                    std::vector<KnowledgeSummary> GetKnowledge() const;

                    /**
                     * 设置Retrieve knowledge.
                     * @param _knowledge Retrieve knowledge.
                     * 
                     */
                    void SetKnowledge(const std::vector<KnowledgeSummary>& _knowledge);

                    /**
                     * 判断参数 Knowledge 是否已赋值
                     * @return Knowledge 是否已赋值
                     * 
                     */
                    bool KnowledgeHasBeenSet() const;

                    /**
                     * 获取Task process.
                     * @return TaskFlow Task process.
                     * 
                     */
                    TaskFlowSummary GetTaskFlow() const;

                    /**
                     * 设置Task process.
                     * @param _taskFlow Task process.
                     * 
                     */
                    void SetTaskFlow(const TaskFlowSummary& _taskFlow);

                    /**
                     * 判断参数 TaskFlow 是否已赋值
                     * @return TaskFlow 是否已赋值
                     * 
                     */
                    bool TaskFlowHasBeenSet() const;

                    /**
                     * 获取Workflow debugging information.
                     * @return WorkFlow Workflow debugging information.
                     * 
                     */
                    WorkFlowSummary GetWorkFlow() const;

                    /**
                     * 设置Workflow debugging information.
                     * @param _workFlow Workflow debugging information.
                     * 
                     */
                    void SetWorkFlow(const WorkFlowSummary& _workFlow);

                    /**
                     * 判断参数 WorkFlow 是否已赋值
                     * @return WorkFlow 是否已赋值
                     * 
                     */
                    bool WorkFlowHasBeenSet() const;

                    /**
                     * 获取Agent debugging information.
                     * @return Agent Agent debugging information.
                     * 
                     */
                    AgentDebugInfo GetAgent() const;

                    /**
                     * 设置Agent debugging information.
                     * @param _agent Agent debugging information.
                     * 
                     */
                    void SetAgent(const AgentDebugInfo& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取Custom parameter.
                     * @return CustomVariables Custom parameter.
                     * 
                     */
                    std::vector<std::string> GetCustomVariables() const;

                    /**
                     * 设置Custom parameter.
                     * @param _customVariables Custom parameter.
                     * 
                     */
                    void SetCustomVariables(const std::vector<std::string>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                private:

                    /**
                     * Retrieve query.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * System prompt.
                     */
                    std::string m_system;
                    bool m_systemHasBeenSet;

                    /**
                     * Multiple rounds of historical information.
                     */
                    std::vector<HistorySummary> m_histories;
                    bool m_historiesHasBeenSet;

                    /**
                     * Retrieve knowledge.
                     */
                    std::vector<KnowledgeSummary> m_knowledge;
                    bool m_knowledgeHasBeenSet;

                    /**
                     * Task process.
                     */
                    TaskFlowSummary m_taskFlow;
                    bool m_taskFlowHasBeenSet;

                    /**
                     * Workflow debugging information.
                     */
                    WorkFlowSummary m_workFlow;
                    bool m_workFlowHasBeenSet;

                    /**
                     * Agent debugging information.
                     */
                    AgentDebugInfo m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * Custom parameter.
                     */
                    std::vector<std::string> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDUREDEBUGGING_H_
