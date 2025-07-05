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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEIPV6ADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ReleaseIPv6Addresses request structure.
                */
                class ReleaseIPv6AddressesRequest : public AbstractModel
                {
                public:
                    ReleaseIPv6AddressesRequest();
                    ~ReleaseIPv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the IPv6 address.
                     * @return IPv6AddressIds Unique ID of the IPv6 address.
                     * 
                     */
                    std::vector<std::string> GetIPv6AddressIds() const;

                    /**
                     * 设置Unique ID of the IPv6 address.
                     * @param _iPv6AddressIds Unique ID of the IPv6 address.
                     * 
                     */
                    void SetIPv6AddressIds(const std::vector<std::string>& _iPv6AddressIds);

                    /**
                     * 判断参数 IPv6AddressIds 是否已赋值
                     * @return IPv6AddressIds 是否已赋值
                     * 
                     */
                    bool IPv6AddressIdsHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the IPv6 address.
                     */
                    std::vector<std::string> m_iPv6AddressIds;
                    bool m_iPv6AddressIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEIPV6ADDRESSESREQUEST_H_
