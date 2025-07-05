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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWSUMMARY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/WorkflowRunNodeInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Workflow debugging information.
                */
                class WorkFlowSummary : public AbstractModel
                {
                public:
                    WorkFlowSummary();
                    ~WorkFlowSummary() = default;
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
                     * 获取Workflow running ID.
                     * @return WorkflowRunId Workflow running ID.
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置Workflow running ID.
                     * @param _workflowRunId Workflow running ID.
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                    /**
                     * 获取Node information.
                     * @return RunNodes Node information.
                     * 
                     */
                    std::vector<WorkflowRunNodeInfo> GetRunNodes() const;

                    /**
                     * 设置Node information.
                     * @param _runNodes Node information.
                     * 
                     */
                    void SetRunNodes(const std::vector<WorkflowRunNodeInfo>& _runNodes);

                    /**
                     * 判断参数 RunNodes 是否已赋值
                     * @return RunNodes 是否已赋值
                     * 
                     */
                    bool RunNodesHasBeenSet() const;

                    /**
                     * 获取Tab.
                     * @return OptionCards Tab.
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置Tab.
                     * @param _optionCards Tab.
                     * 
                     */
                    void SetOptionCards(const std::vector<std::string>& _optionCards);

                    /**
                     * 判断参数 OptionCards 是否已赋值
                     * @return OptionCards 是否已赋值
                     * 
                     */
                    bool OptionCardsHasBeenSet() const;

                    /**
                     * 获取Output results of multiple bubbles.
                     * @return Outputs Output results of multiple bubbles.
                     * 
                     */
                    std::vector<std::string> GetOutputs() const;

                    /**
                     * 设置Output results of multiple bubbles.
                     * @param _outputs Output results of multiple bubbles.
                     * 
                     */
                    void SetOutputs(const std::vector<std::string>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取Workflow release time, Unix timestamp.
                     * @return WorkflowReleaseTime Workflow release time, Unix timestamp.
                     * 
                     */
                    std::string GetWorkflowReleaseTime() const;

                    /**
                     * 设置Workflow release time, Unix timestamp.
                     * @param _workflowReleaseTime Workflow release time, Unix timestamp.
                     * 
                     */
                    void SetWorkflowReleaseTime(const std::string& _workflowReleaseTime);

                    /**
                     * 判断参数 WorkflowReleaseTime 是否已赋值
                     * @return WorkflowReleaseTime 是否已赋值
                     * 
                     */
                    bool WorkflowReleaseTimeHasBeenSet() const;

                private:

                    /**
                     * Workflow ID.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Workflow running ID.
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * Node information.
                     */
                    std::vector<WorkflowRunNodeInfo> m_runNodes;
                    bool m_runNodesHasBeenSet;

                    /**
                     * Tab.
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * Output results of multiple bubbles.
                     */
                    std::vector<std::string> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * Workflow release time, Unix timestamp.
                     */
                    std::string m_workflowReleaseTime;
                    bool m_workflowReleaseTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWSUMMARY_H_
