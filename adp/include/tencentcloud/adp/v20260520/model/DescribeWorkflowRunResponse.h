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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEWORKFLOWRUNRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEWORKFLOWRUNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRun.h>
#include <tencentcloud/adp/v20260520/model/NodeRun.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeWorkflowRun response structure.
                */
                class DescribeWorkflowRunResponse : public AbstractModel
                {
                public:
                    DescribeWorkflowRunResponse();
                    ~DescribeWorkflowRunResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workflow running instance details.</p>
                     * @return WorkflowRun <p>Workflow running instance details.</p>
                     * 
                     */
                    WorkflowRun GetWorkflowRun() const;

                    /**
                     * 判断参数 WorkflowRun 是否已赋值
                     * @return WorkflowRun 是否已赋值
                     * 
                     */
                    bool WorkflowRunHasBeenSet() const;

                    /**
                     * 获取<p>Node list</p>
                     * @return NodeRunList <p>Node list</p>
                     * 
                     */
                    std::vector<NodeRun> GetNodeRunList() const;

                    /**
                     * 判断参数 NodeRunList 是否已赋值
                     * @return NodeRunList 是否已赋值
                     * 
                     */
                    bool NodeRunListHasBeenSet() const;

                    /**
                     * 获取<p>NodePath of the sub-workflow</p>
                     * @return SubWorkflowNodePath <p>NodePath of the sub-workflow</p>
                     * 
                     */
                    std::string GetSubWorkflowNodePath() const;

                    /**
                     * 判断参数 SubWorkflowNodePath 是否已赋值
                     * @return SubWorkflowNodePath 是否已赋值
                     * 
                     */
                    bool SubWorkflowNodePathHasBeenSet() const;

                private:

                    /**
                     * <p>Workflow running instance details.</p>
                     */
                    WorkflowRun m_workflowRun;
                    bool m_workflowRunHasBeenSet;

                    /**
                     * <p>Node list</p>
                     */
                    std::vector<NodeRun> m_nodeRunList;
                    bool m_nodeRunListHasBeenSet;

                    /**
                     * <p>NodePath of the sub-workflow</p>
                     */
                    std::string m_subWorkflowNodePath;
                    bool m_subWorkflowNodePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEWORKFLOWRUNRESPONSE_H_
