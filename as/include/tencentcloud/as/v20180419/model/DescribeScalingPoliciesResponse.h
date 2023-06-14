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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCALINGPOLICIESRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCALINGPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ScalingPolicy.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeScalingPolicies response structure.
                */
                class DescribeScalingPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeScalingPoliciesResponse();
                    ~DescribeScalingPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of AS alarm trigger policy details.
                     * @return ScalingPolicySet List of AS alarm trigger policy details.
                     * 
                     */
                    std::vector<ScalingPolicy> GetScalingPolicySet() const;

                    /**
                     * 判断参数 ScalingPolicySet 是否已赋值
                     * @return ScalingPolicySet 是否已赋值
                     * 
                     */
                    bool ScalingPolicySetHasBeenSet() const;

                    /**
                     * 获取Number of eligible notifications.
                     * @return TotalCount Number of eligible notifications.
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
                     * List of AS alarm trigger policy details.
                     */
                    std::vector<ScalingPolicy> m_scalingPolicySet;
                    bool m_scalingPolicySetHasBeenSet;

                    /**
                     * Number of eligible notifications.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCALINGPOLICIESRESPONSE_H_
