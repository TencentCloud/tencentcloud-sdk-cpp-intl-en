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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUN_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunSummary.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunOutput.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunMetadata.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Workflow running instance information
                */
                class WorkflowRun : public AbstractModel
                {
                public:
                    WorkflowRun();
                    ~WorkflowRun() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Basic information of the workflow running instance
                     * @return WorkflowRunSummary Basic information of the workflow running instance
                     * 
                     */
                    WorkflowRunSummary GetWorkflowRunSummary() const;

                    /**
                     * 设置Basic information of the workflow running instance
                     * @param _workflowRunSummary Basic information of the workflow running instance
                     * 
                     */
                    void SetWorkflowRunSummary(const WorkflowRunSummary& _workflowRunSummary);

                    /**
                     * 判断参数 WorkflowRunSummary 是否已赋值
                     * @return WorkflowRunSummary 是否已赋值
                     * 
                     */
                    bool WorkflowRunSummaryHasBeenSet() const;

                    /**
                     * 获取Workflow run instance output information
                     * @return WorkflowRunOutput Workflow run instance output information
                     * 
                     */
                    WorkflowRunOutput GetWorkflowRunOutput() const;

                    /**
                     * 设置Workflow run instance output information
                     * @param _workflowRunOutput Workflow run instance output information
                     * 
                     */
                    void SetWorkflowRunOutput(const WorkflowRunOutput& _workflowRunOutput);

                    /**
                     * 判断参数 WorkflowRunOutput 是否已赋值
                     * @return WorkflowRunOutput 是否已赋值
                     * 
                     */
                    bool WorkflowRunOutputHasBeenSet() const;

                    /**
                     * 获取Workflow run instance metadata
                     * @return WorkflowRunMetadata Workflow run instance metadata
                     * 
                     */
                    WorkflowRunMetadata GetWorkflowRunMetadata() const;

                    /**
                     * 设置Workflow run instance metadata
                     * @param _workflowRunMetadata Workflow run instance metadata
                     * 
                     */
                    void SetWorkflowRunMetadata(const WorkflowRunMetadata& _workflowRunMetadata);

                    /**
                     * 判断参数 WorkflowRunMetadata 是否已赋值
                     * @return WorkflowRunMetadata 是否已赋值
                     * 
                     */
                    bool WorkflowRunMetadataHasBeenSet() const;

                private:

                    /**
                     * Basic information of the workflow running instance
                     */
                    WorkflowRunSummary m_workflowRunSummary;
                    bool m_workflowRunSummaryHasBeenSet;

                    /**
                     * Workflow run instance output information
                     */
                    WorkflowRunOutput m_workflowRunOutput;
                    bool m_workflowRunOutputHasBeenSet;

                    /**
                     * Workflow run instance metadata
                     */
                    WorkflowRunMetadata m_workflowRunMetadata;
                    bool m_workflowRunMetadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUN_H_
