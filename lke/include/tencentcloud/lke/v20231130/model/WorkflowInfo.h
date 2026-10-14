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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Content.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Workflow information.
                */
                class WorkflowInfo : public AbstractModel
                {
                public:
                    WorkflowInfo();
                    ~WorkflowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Workflow ID</p>
                     * @return WorkflowId <p>Workflow ID</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>Workflow ID</p>
                     * @param _workflowId <p>Workflow ID</p>
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
                     * 获取<p>Workflow name.</p>
                     * @return WorkflowName <p>Workflow name.</p>
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>Workflow name.</p>
                     * @param _workflowName <p>Workflow name.</p>
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
                     * 获取<p>Workflow run ID</p>
                     * @return WorkflowRunId <p>Workflow run ID</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>Workflow run ID</p>
                     * @param _workflowRunId <p>Workflow run ID</p>
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
                     * 获取<p>Tab</p>
                     * @return OptionCards <p>Tab</p>
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置<p>Tab</p>
                     * @param _optionCards <p>Tab</p>
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
                     * 获取<p>Output result of multiple bubbles</p>
                     * @return Outputs <p>Output result of multiple bubbles</p>
                     * 
                     */
                    std::vector<std::string> GetOutputs() const;

                    /**
                     * 设置<p>Output result of multiple bubbles</p>
                     * @param _outputs <p>Output result of multiple bubbles</p>
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
                     * 获取<p>Workflow release time, unix timestamp.</p>
                     * @return WorkflowReleaseTime <p>Workflow release time, unix timestamp.</p>
                     * 
                     */
                    std::string GetWorkflowReleaseTime() const;

                    /**
                     * 设置<p>Workflow release time, unix timestamp.</p>
                     * @param _workflowReleaseTime <p>Workflow release time, unix timestamp.</p>
                     * 
                     */
                    void SetWorkflowReleaseTime(const std::string& _workflowReleaseTime);

                    /**
                     * 判断参数 WorkflowReleaseTime 是否已赋值
                     * @return WorkflowReleaseTime 是否已赋值
                     * 
                     */
                    bool WorkflowReleaseTimeHasBeenSet() const;

                    /**
                     * 获取<p>Workflow multi-bubble output</p>
                     * @return Contents <p>Workflow multi-bubble output</p>
                     * 
                     */
                    std::vector<Content> GetContents() const;

                    /**
                     * 设置<p>Workflow multi-bubble output</p>
                     * @param _contents <p>Workflow multi-bubble output</p>
                     * 
                     */
                    void SetContents(const std::vector<Content>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取<p>Flag indicating whether the tab is single-selection or dual-selection</p><p>Enumeration values:</p><ul><li>0: single selection</li><li>1: multiple selection</li></ul>
                     * @return OptionMode <p>Flag indicating whether the tab is single-selection or dual-selection</p><p>Enumeration values:</p><ul><li>0: single selection</li><li>1: multiple selection</li></ul>
                     * 
                     */
                    int64_t GetOptionMode() const;

                    /**
                     * 设置<p>Flag indicating whether the tab is single-selection or dual-selection</p><p>Enumeration values:</p><ul><li>0: single selection</li><li>1: multiple selection</li></ul>
                     * @param _optionMode <p>Flag indicating whether the tab is single-selection or dual-selection</p><p>Enumeration values:</p><ul><li>0: single selection</li><li>1: multiple selection</li></ul>
                     * 
                     */
                    void SetOptionMode(const int64_t& _optionMode);

                    /**
                     * 判断参数 OptionMode 是否已赋值
                     * @return OptionMode 是否已赋值
                     * 
                     */
                    bool OptionModeHasBeenSet() const;

                private:

                    /**
                     * <p>Workflow ID</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>Workflow name.</p>
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>Workflow run ID</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>Tab</p>
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * <p>Output result of multiple bubbles</p>
                     */
                    std::vector<std::string> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * <p>Workflow release time, unix timestamp.</p>
                     */
                    std::string m_workflowReleaseTime;
                    bool m_workflowReleaseTimeHasBeenSet;

                    /**
                     * <p>Workflow multi-bubble output</p>
                     */
                    std::vector<Content> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * <p>Flag indicating whether the tab is single-selection or dual-selection</p><p>Enumeration values:</p><ul><li>0: single selection</li><li>1: multiple selection</li></ul>
                     */
                    int64_t m_optionMode;
                    bool m_optionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWINFO_H_
