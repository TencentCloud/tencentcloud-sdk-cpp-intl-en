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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORKFLOWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeWorkflows request structure.
                */
                class DescribeWorkflowsRequest : public AbstractModel
                {
                public:
                    DescribeWorkflowsRequest();
                    ~DescribeWorkflowsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workflow ID filter condition, with an array length limit of 100.</p>
                     * @return WorkflowIds <p>Workflow ID filter condition, with an array length limit of 100.</p>
                     * 
                     */
                    std::vector<int64_t> GetWorkflowIds() const;

                    /**
                     * 设置<p>Workflow ID filter condition, with an array length limit of 100.</p>
                     * @param _workflowIds <p>Workflow ID filter condition, with an array length limit of 100.</p>
                     * 
                     */
                    void SetWorkflowIds(const std::vector<int64_t>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取<p>Workflow status. Value range:</p><li>Enabled: on,</li><li>Disabled: off.</li>If this parameter is not specified, workflow status is not distinguished.
                     * @return Status <p>Workflow status. Value range:</p><li>Enabled: on,</li><li>Disabled: off.</li>If this parameter is not specified, workflow status is not distinguished.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Workflow status. Value range:</p><li>Enabled: on,</li><li>Disabled: off.</li>If this parameter is not specified, workflow status is not distinguished.
                     * @param _status <p>Workflow status. Value range:</p><li>Enabled: on,</li><li>Disabled: off.</li>If this parameter is not specified, workflow status is not distinguished.
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
                     * 获取<p>Paging offset. Default value: 0.</p>
                     * @return Offset <p>Paging offset. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset. Default value: 0.</p>
                     * @param _offset <p>Paging offset. Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @return Limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @param _limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>Workflow ID filter condition, with an array length limit of 100.</p>
                     */
                    std::vector<int64_t> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * <p>Workflow status. Value range:</p><li>Enabled: on,</li><li>Disabled: off.</li>If this parameter is not specified, workflow status is not distinguished.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Paging offset. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORKFLOWSREQUEST_H_
