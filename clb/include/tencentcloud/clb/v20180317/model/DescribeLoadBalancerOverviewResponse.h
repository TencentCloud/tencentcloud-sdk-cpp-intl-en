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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCEROVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCEROVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancerOverview response structure.
                */
                class DescribeLoadBalancerOverviewResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalancerOverviewResponse();
                    ~DescribeLoadBalancerOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of CLB instances
                     * @return TotalCount Total number of CLB instances
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Number of CLB instances that are running
                     * @return RunningCount Number of CLB instances that are running
                     * 
                     */
                    int64_t GetRunningCount() const;

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     * 
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取Number of CLB instances that are isolated
                     * @return IsolationCount Number of CLB instances that are isolated
                     * 
                     */
                    int64_t GetIsolationCount() const;

                    /**
                     * 判断参数 IsolationCount 是否已赋值
                     * @return IsolationCount 是否已赋值
                     * 
                     */
                    bool IsolationCountHasBeenSet() const;

                    /**
                     * 获取Number of CLB instances that are about to expire
                     * @return WillExpireCount Number of CLB instances that are about to expire
                     * 
                     */
                    int64_t GetWillExpireCount() const;

                    /**
                     * 判断参数 WillExpireCount 是否已赋值
                     * @return WillExpireCount 是否已赋值
                     * 
                     */
                    bool WillExpireCountHasBeenSet() const;

                private:

                    /**
                     * Total number of CLB instances
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Number of CLB instances that are running
                     */
                    int64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * Number of CLB instances that are isolated
                     */
                    int64_t m_isolationCount;
                    bool m_isolationCountHasBeenSet;

                    /**
                     * Number of CLB instances that are about to expire
                     */
                    int64_t m_willExpireCount;
                    bool m_willExpireCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCEROVERVIEWRESPONSE_H_
