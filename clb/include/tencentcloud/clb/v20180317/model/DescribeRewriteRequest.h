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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEREWRITEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEREWRITEREQUEST_H_

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
                * DescribeRewrite request structure.
                */
                class DescribeRewriteRequest : public AbstractModel
                {
                public:
                    DescribeRewriteRequest();
                    ~DescribeRewriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param _loadBalancerId CLB instance ID
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Array of CLB listener IDs
                     * @return SourceListenerIds Array of CLB listener IDs
                     * 
                     */
                    std::vector<std::string> GetSourceListenerIds() const;

                    /**
                     * 设置Array of CLB listener IDs
                     * @param _sourceListenerIds Array of CLB listener IDs
                     * 
                     */
                    void SetSourceListenerIds(const std::vector<std::string>& _sourceListenerIds);

                    /**
                     * 判断参数 SourceListenerIds 是否已赋值
                     * @return SourceListenerIds 是否已赋值
                     * 
                     */
                    bool SourceListenerIdsHasBeenSet() const;

                    /**
                     * 获取Array of CLB forwarding rule IDs
                     * @return SourceLocationIds Array of CLB forwarding rule IDs
                     * 
                     */
                    std::vector<std::string> GetSourceLocationIds() const;

                    /**
                     * 设置Array of CLB forwarding rule IDs
                     * @param _sourceLocationIds Array of CLB forwarding rule IDs
                     * 
                     */
                    void SetSourceLocationIds(const std::vector<std::string>& _sourceLocationIds);

                    /**
                     * 判断参数 SourceLocationIds 是否已赋值
                     * @return SourceLocationIds 是否已赋值
                     * 
                     */
                    bool SourceLocationIdsHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Array of CLB listener IDs
                     */
                    std::vector<std::string> m_sourceListenerIds;
                    bool m_sourceListenerIdsHasBeenSet;

                    /**
                     * Array of CLB forwarding rule IDs
                     */
                    std::vector<std::string> m_sourceLocationIds;
                    bool m_sourceLocationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEREWRITEREQUEST_H_
