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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNIPREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeCdnIp request structure.
                */
                class DescribeCdnIpRequest : public AbstractModel
                {
                public:
                    DescribeCdnIpRequest();
                    ~DescribeCdnIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IPs to be queried
                     * @return Ips List of IPs to be queried
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置List of IPs to be queried
                     * @param _ips List of IPs to be queried
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                private:

                    /**
                     * List of IPs to be queried
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNIPREQUEST_H_
