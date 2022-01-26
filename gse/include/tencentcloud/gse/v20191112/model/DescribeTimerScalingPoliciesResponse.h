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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBETIMERSCALINGPOLICIESRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBETIMERSCALINGPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/TimerScalingPolicy.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeTimerScalingPolicies response structure.
                */
                class DescribeTimerScalingPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeTimerScalingPoliciesResponse();
                    ~DescribeTimerScalingPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Configuration of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return TimerScalingPolicies Configuration of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<TimerScalingPolicy> GetTimerScalingPolicies() const;

                    /**
                     * 判断参数 TimerScalingPolicies 是否已赋值
                     * @return TimerScalingPolicies 是否已赋值
                     */
                    bool TimerScalingPoliciesHasBeenSet() const;

                    /**
                     * 获取Total number of scheduled scaling policies
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of scheduled scaling policies
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Configuration of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<TimerScalingPolicy> m_timerScalingPolicies;
                    bool m_timerScalingPoliciesHasBeenSet;

                    /**
                     * Total number of scheduled scaling policies
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBETIMERSCALINGPOLICIESRESPONSE_H_
