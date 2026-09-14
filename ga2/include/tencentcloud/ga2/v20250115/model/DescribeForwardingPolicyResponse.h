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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEFORWARDINGPOLICYRESPONSE_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEFORWARDINGPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/ForwardingPolicySet.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DescribeForwardingPolicy response structure.
                */
                class DescribeForwardingPolicyResponse : public AbstractModel
                {
                public:
                    DescribeForwardingPolicyResponse();
                    ~DescribeForwardingPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy information that meets the conditions.
                     * @return ForwardingPolicySet Policy information that meets the conditions.
                     * 
                     */
                    std::vector<ForwardingPolicySet> GetForwardingPolicySet() const;

                    /**
                     * 判断参数 ForwardingPolicySet 是否已赋值
                     * @return ForwardingPolicySet 是否已赋值
                     * 
                     */
                    bool ForwardingPolicySetHasBeenSet() const;

                    /**
                     * 获取Number of instances that meet the criteria.
                     * @return TotalCount Number of instances that meet the criteria.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Policy information that meets the conditions.
                     */
                    std::vector<ForwardingPolicySet> m_forwardingPolicySet;
                    bool m_forwardingPolicySetHasBeenSet;

                    /**
                     * Number of instances that meet the criteria.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEFORWARDINGPOLICYRESPONSE_H_
