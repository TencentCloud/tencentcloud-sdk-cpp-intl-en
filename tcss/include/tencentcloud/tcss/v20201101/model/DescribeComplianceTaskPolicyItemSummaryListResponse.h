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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKPOLICYITEMSUMMARYLISTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKPOLICYITEMSUMMARYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePolicyItemSummary.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeComplianceTaskPolicyItemSummaryList response structure.
                */
                class DescribeComplianceTaskPolicyItemSummaryListResponse : public AbstractModel
                {
                public:
                    DescribeComplianceTaskPolicyItemSummaryListResponse();
                    ~DescribeComplianceTaskPolicyItemSummaryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the last compliance check task, which is the source of the displayed data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId ID of the last compliance check task, which is the source of the displayed data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Total number of check items
                     * @return TotalCount Total number of check items
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of the aggregated information of each check item
                     * @return PolicyItemSummaryList List of the aggregated information of each check item
                     * 
                     */
                    std::vector<CompliancePolicyItemSummary> GetPolicyItemSummaryList() const;

                    /**
                     * 判断参数 PolicyItemSummaryList 是否已赋值
                     * @return PolicyItemSummaryList 是否已赋值
                     * 
                     */
                    bool PolicyItemSummaryListHasBeenSet() const;

                private:

                    /**
                     * ID of the last compliance check task, which is the source of the displayed data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Total number of check items
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of the aggregated information of each check item
                     */
                    std::vector<CompliancePolicyItemSummary> m_policyItemSummaryList;
                    bool m_policyItemSummaryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKPOLICYITEMSUMMARYLISTRESPONSE_H_
