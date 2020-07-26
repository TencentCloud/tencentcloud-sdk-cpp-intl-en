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
                     * 获取Workflow ID filter. Array length limit: 100.
                     * @return WorkflowIds Workflow ID filter. Array length limit: 100.
                     */
                    std::vector<int64_t> GetWorkflowIds() const;

                    /**
                     * 设置Workflow ID filter. Array length limit: 100.
                     * @param WorkflowIds Workflow ID filter. Array length limit: 100.
                     */
                    void SetWorkflowIds(const std::vector<int64_t>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取Workflow status. Valid values:
<li>Enabled: Enabled,</li>
<li>Disabled: Disabled.</li>
If this parameter is left empty, the workflow status will not be distinguished.
                     * @return Status Workflow status. Valid values:
<li>Enabled: Enabled,</li>
<li>Disabled: Disabled.</li>
If this parameter is left empty, the workflow status will not be distinguished.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Workflow status. Valid values:
<li>Enabled: Enabled,</li>
<li>Disabled: Disabled.</li>
If this parameter is left empty, the workflow status will not be distinguished.
                     * @param Status Workflow status. Valid values:
<li>Enabled: Enabled,</li>
<li>Disabled: Disabled.</li>
If this parameter is left empty, the workflow status will not be distinguished.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Paging offset. Default value: 0.
                     * @return Offset Paging offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paging offset. Default value: 0.
                     * @param Offset Paging offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 100.
                     * @param Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Workflow ID filter. Array length limit: 100.
                     */
                    std::vector<int64_t> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * Workflow status. Valid values:
<li>Enabled: Enabled,</li>
<li>Disabled: Disabled.</li>
If this parameter is left empty, the workflow status will not be distinguished.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORKFLOWSREQUEST_H_
