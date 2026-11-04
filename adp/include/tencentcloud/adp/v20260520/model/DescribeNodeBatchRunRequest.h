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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODEBATCHRUNREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODEBATCHRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeNodeBatchRun request structure.
                */
                class DescribeNodeBatchRunRequest : public AbstractModel
                {
                public:
                    DescribeNodeBatchRunRequest();
                    ~DescribeNodeBatchRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application ID.</p>
                     * @return AppId <p>Application ID.</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID.</p>
                     * @param _appId <p>Application ID.</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Index Number</p>
                     * @return Index <p>Index Number</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>Index Number</p>
                     * @param _index <p>Index Number</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>Workflow Node ID</p>
                     * @return NodeId <p>Workflow Node ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>Workflow Node ID</p>
                     * @param _nodeId <p>Workflow Node ID</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>Associated node of the sub-workflow</p><p>node_id_a.node_id_b[1]</p>
                     * @return SubWorkflowNodePath <p>Associated node of the sub-workflow</p><p>node_id_a.node_id_b[1]</p>
                     * 
                     */
                    std::string GetSubWorkflowNodePath() const;

                    /**
                     * 设置<p>Associated node of the sub-workflow</p><p>node_id_a.node_id_b[1]</p>
                     * @param _subWorkflowNodePath <p>Associated node of the sub-workflow</p><p>node_id_a.node_id_b[1]</p>
                     * 
                     */
                    void SetSubWorkflowNodePath(const std::string& _subWorkflowNodePath);

                    /**
                     * 判断参数 SubWorkflowNodePath 是否已赋值
                     * @return SubWorkflowNodePath 是否已赋值
                     * 
                     */
                    bool SubWorkflowNodePathHasBeenSet() const;

                    /**
                     * 获取<p>Workflow running ID</p>
                     * @return WorkflowRunId <p>Workflow running ID</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>Workflow running ID</p>
                     * @param _workflowRunId <p>Workflow running ID</p>
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Index Number</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>Workflow Node ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>Associated node of the sub-workflow</p><p>node_id_a.node_id_b[1]</p>
                     */
                    std::string m_subWorkflowNodePath;
                    bool m_subWorkflowNodePathHasBeenSet;

                    /**
                     * <p>Workflow running ID</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODEBATCHRUNREQUEST_H_
