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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDURE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentProcedureDebugging.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Process information of the thought event.
                */
                class AgentProcedure : public AbstractModel
                {
                public:
                    AgentProcedure();
                    ~AgentProcedure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Index.
                     * @return Index Index.
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置Index.
                     * @param _index Index.
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取English name of the execution process.
                     * @return Name English name of the execution process.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置English name of the execution process.
                     * @param _name English name of the execution process.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Chinese name for display.
                     * @return Title Chinese name for display.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Chinese name for display.
                     * @param _title Chinese name for display.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Status constant: processing; success; failed.
                     * @return Status Status constant: processing; success; failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status constant: processing; success; failed.
                     * @param _status Status constant: processing; success; failed.
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
                     * 获取Icon.
                     * @return Icon Icon.
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置Icon.
                     * @param _icon Icon.
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取Agent debugging information.
                     * @return Debugging Agent debugging information.
                     * 
                     */
                    AgentProcedureDebugging GetDebugging() const;

                    /**
                     * 设置Agent debugging information.
                     * @param _debugging Agent debugging information.
                     * 
                     */
                    void SetDebugging(const AgentProcedureDebugging& _debugging);

                    /**
                     * 判断参数 Debugging 是否已赋值
                     * @return Debugging 是否已赋值
                     * 
                     */
                    bool DebuggingHasBeenSet() const;

                    /**
                     * 获取Whether to switch to Agent. The value can be "main" or "workflow". Leave it blank for no switch.
                     * @return Switch Whether to switch to Agent. The value can be "main" or "workflow". Leave it blank for no switch.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to switch to Agent. The value can be "main" or "workflow". Leave it blank for no switch.
                     * @param _switch Whether to switch to Agent. The value can be "main" or "workflow". Leave it blank for no switch.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

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
                     * 获取Current request execution time, in milliseconds.
                     * @return Elapsed Current request execution time, in milliseconds.
                     * 
                     */
                    uint64_t GetElapsed() const;

                    /**
                     * 设置Current request execution time, in milliseconds.
                     * @param _elapsed Current request execution time, in milliseconds.
                     * 
                     */
                    void SetElapsed(const uint64_t& _elapsed);

                    /**
                     * 判断参数 Elapsed 是否已赋值
                     * @return Elapsed 是否已赋值
                     * 
                     */
                    bool ElapsedHasBeenSet() const;

                    /**
                     * 获取Workflow node name.
                     * @return NodeName Workflow node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Workflow node name.
                     * @param _nodeName Workflow node name.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Used to display in which reply bubble the thoughts are placed.
                     * @return ReplyIndex Used to display in which reply bubble the thoughts are placed.
                     * 
                     */
                    uint64_t GetReplyIndex() const;

                    /**
                     * 设置Used to display in which reply bubble the thoughts are placed.
                     * @param _replyIndex Used to display in which reply bubble the thoughts are placed.
                     * 
                     */
                    void SetReplyIndex(const uint64_t& _replyIndex);

                    /**
                     * 判断参数 ReplyIndex 是否已赋值
                     * @return ReplyIndex 是否已赋值
                     * 
                     */
                    bool ReplyIndexHasBeenSet() const;

                    /**
                     * 获取Main agent.
                     * @return SourceAgentName Main agent.
                     * 
                     */
                    std::string GetSourceAgentName() const;

                    /**
                     * 设置Main agent.
                     * @param _sourceAgentName Main agent.
                     * 
                     */
                    void SetSourceAgentName(const std::string& _sourceAgentName);

                    /**
                     * 判断参数 SourceAgentName 是否已赋值
                     * @return SourceAgentName 是否已赋值
                     * 
                     */
                    bool SourceAgentNameHasBeenSet() const;

                    /**
                     * 获取Registration agent.
                     * @return TargetAgentName Registration agent.
                     * 
                     */
                    std::string GetTargetAgentName() const;

                    /**
                     * 设置Registration agent.
                     * @param _targetAgentName Registration agent.
                     * 
                     */
                    void SetTargetAgentName(const std::string& _targetAgentName);

                    /**
                     * 判断参数 TargetAgentName 是否已赋值
                     * @return TargetAgentName 是否已赋值
                     * 
                     */
                    bool TargetAgentNameHasBeenSet() const;

                    /**
                     * 获取Icon of Agent.
                     * @return AgentIcon Icon of Agent.
                     * 
                     */
                    std::string GetAgentIcon() const;

                    /**
                     * 设置Icon of Agent.
                     * @param _agentIcon Icon of Agent.
                     * 
                     */
                    void SetAgentIcon(const std::string& _agentIcon);

                    /**
                     * 判断参数 AgentIcon 是否已赋值
                     * @return AgentIcon 是否已赋值
                     * 
                     */
                    bool AgentIconHasBeenSet() const;

                private:

                    /**
                     * Index.
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * English name of the execution process.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Chinese name for display.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Status constant: processing; success; failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Icon.
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * Agent debugging information.
                     */
                    AgentProcedureDebugging m_debugging;
                    bool m_debuggingHasBeenSet;

                    /**
                     * Whether to switch to Agent. The value can be "main" or "workflow". Leave it blank for no switch.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Workflow name.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Current request execution time, in milliseconds.
                     */
                    uint64_t m_elapsed;
                    bool m_elapsedHasBeenSet;

                    /**
                     * Workflow node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Used to display in which reply bubble the thoughts are placed.
                     */
                    uint64_t m_replyIndex;
                    bool m_replyIndexHasBeenSet;

                    /**
                     * Main agent.
                     */
                    std::string m_sourceAgentName;
                    bool m_sourceAgentNameHasBeenSet;

                    /**
                     * Registration agent.
                     */
                    std::string m_targetAgentName;
                    bool m_targetAgentNameHasBeenSet;

                    /**
                     * Icon of Agent.
                     */
                    std::string m_agentIcon;
                    bool m_agentIconHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDURE_H_
