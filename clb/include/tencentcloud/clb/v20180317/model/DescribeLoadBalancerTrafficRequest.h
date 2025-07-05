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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERTRAFFICREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERTRAFFICREQUEST_H_

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
                * DescribeLoadBalancerTraffic request structure.
                */
                class DescribeLoadBalancerTrafficRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancerTrafficRequest();
                    ~DescribeLoadBalancerTrafficRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance region. If this parameter is not passed in, CLB instances in all regions will be returned.
                     * @return LoadBalancerRegion CLB instance region. If this parameter is not passed in, CLB instances in all regions will be returned.
                     * 
                     */
                    std::string GetLoadBalancerRegion() const;

                    /**
                     * 设置CLB instance region. If this parameter is not passed in, CLB instances in all regions will be returned.
                     * @param _loadBalancerRegion CLB instance region. If this parameter is not passed in, CLB instances in all regions will be returned.
                     * 
                     */
                    void SetLoadBalancerRegion(const std::string& _loadBalancerRegion);

                    /**
                     * 判断参数 LoadBalancerRegion 是否已赋值
                     * @return LoadBalancerRegion 是否已赋值
                     * 
                     */
                    bool LoadBalancerRegionHasBeenSet() const;

                private:

                    /**
                     * CLB instance region. If this parameter is not passed in, CLB instances in all regions will be returned.
                     */
                    std::string m_loadBalancerRegion;
                    bool m_loadBalancerRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERTRAFFICREQUEST_H_
