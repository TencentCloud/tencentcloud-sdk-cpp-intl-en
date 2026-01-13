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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEIDLELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEIDLELOADBALANCERSREQUEST_H_

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
                * DescribeIdleLoadBalancers request structure.
                */
                class DescribeIdleLoadBalancersRequest : public AbstractModel
                {
                public:
                    DescribeIdleLoadBalancersRequest();
                    ~DescribeIdleLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data offset. Default value: 0.
                     * @return Offset Data offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset. Default value: 0.
                     * @param _offset Data offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned CLB instances. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned CLB instances. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned CLB instances. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned CLB instances. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The Region of the cloud load balancer can be obtained through the `RegionSet.Region` field in the API return value of [DescribeRegions](https://www.tencentcloud.com/document/product/1596/77930?from_cn_redirect=1).
                     * @return LoadBalancerRegion The Region of the cloud load balancer can be obtained through the `RegionSet.Region` field in the API return value of [DescribeRegions](https://www.tencentcloud.com/document/product/1596/77930?from_cn_redirect=1).
                     * 
                     */
                    std::string GetLoadBalancerRegion() const;

                    /**
                     * 设置The Region of the cloud load balancer can be obtained through the `RegionSet.Region` field in the API return value of [DescribeRegions](https://www.tencentcloud.com/document/product/1596/77930?from_cn_redirect=1).
                     * @param _loadBalancerRegion The Region of the cloud load balancer can be obtained through the `RegionSet.Region` field in the API return value of [DescribeRegions](https://www.tencentcloud.com/document/product/1596/77930?from_cn_redirect=1).
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
                     * Data offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned CLB instances. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The Region of the cloud load balancer can be obtained through the `RegionSet.Region` field in the API return value of [DescribeRegions](https://www.tencentcloud.com/document/product/1596/77930?from_cn_redirect=1).
                     */
                    std::string m_loadBalancerRegion;
                    bool m_loadBalancerRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEIDLELOADBALANCERSREQUEST_H_
