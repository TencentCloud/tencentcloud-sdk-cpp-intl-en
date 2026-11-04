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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNMETADATA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CustomVariable.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Workflow running instance metadata
                */
                class WorkflowRunMetadata : public AbstractModel
                {
                public:
                    WorkflowRunMetadata();
                    ~WorkflowRunMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User input.
                     * @return Query User input.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置User input.
                     * @param _query User input.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Name of the main model
                     * @return MainModelName Name of the main model
                     * 
                     */
                    std::string GetMainModelName() const;

                    /**
                     * 设置Name of the main model
                     * @param _mainModelName Name of the main model
                     * 
                     */
                    void SetMainModelName(const std::string& _mainModelName);

                    /**
                     * 判断参数 MainModelName 是否已赋值
                     * @return MainModelName 是否已赋值
                     * 
                     */
                    bool MainModelNameHasBeenSet() const;

                    /**
                     * 获取API parameter configuration
                     * @return CustomVariableList API parameter configuration
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariableList() const;

                    /**
                     * 设置API parameter configuration
                     * @param _customVariableList API parameter configuration
                     * 
                     */
                    void SetCustomVariableList(const std::vector<CustomVariable>& _customVariableList);

                    /**
                     * 判断参数 CustomVariableList 是否已赋值
                     * @return CustomVariableList 是否已赋值
                     * 
                     */
                    bool CustomVariableListHasBeenSet() const;

                    /**
                     * 获取Flowchart of the workflow
                     * @return WorkflowGraph Flowchart of the workflow
                     * 
                     */
                    std::string GetWorkflowGraph() const;

                    /**
                     * 设置Flowchart of the workflow
                     * @param _workflowGraph Flowchart of the workflow
                     * 
                     */
                    void SetWorkflowGraph(const std::string& _workflowGraph);

                    /**
                     * 判断参数 WorkflowGraph 是否已赋值
                     * @return WorkflowGraph 是否已赋值
                     * 
                     */
                    bool WorkflowGraphHasBeenSet() const;

                private:

                    /**
                     * User input.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Name of the main model
                     */
                    std::string m_mainModelName;
                    bool m_mainModelNameHasBeenSet;

                    /**
                     * API parameter configuration
                     */
                    std::vector<CustomVariable> m_customVariableList;
                    bool m_customVariableListHasBeenSet;

                    /**
                     * Flowchart of the workflow
                     */
                    std::string m_workflowGraph;
                    bool m_workflowGraphHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNMETADATA_H_
