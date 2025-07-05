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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXIESSTATUSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXIESSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxiesStatus request structure.
                */
                class DescribeProxiesStatusRequest : public AbstractModel
                {
                public:
                    DescribeProxiesStatusRequest();
                    ~DescribeProxiesStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection ID list; It’s an old parameter, please switch to ProxyIds.
                     * @return InstanceIds Connection ID list; It’s an old parameter, please switch to ProxyIds.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Connection ID list; It’s an old parameter, please switch to ProxyIds.
                     * @param _instanceIds Connection ID list; It’s an old parameter, please switch to ProxyIds.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Connection ID list; It’s a new parameter.
                     * @return ProxyIds Connection ID list; It’s a new parameter.
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置Connection ID list; It’s a new parameter.
                     * @param _proxyIds Connection ID list; It’s a new parameter.
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                private:

                    /**
                     * Connection ID list; It’s an old parameter, please switch to ProxyIds.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Connection ID list; It’s a new parameter.
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXIESSTATUSREQUEST_H_
