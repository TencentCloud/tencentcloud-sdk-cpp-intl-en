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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_RELEASEPUBLICIPREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_RELEASEPUBLICIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * ReleasePublicIp request structure.
                */
                class ReleasePublicIpRequest : public AbstractModel
                {
                public:
                    ReleasePublicIpRequest();
                    ~ReleasePublicIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Public network instance ID (route publishing mode is STATIC)
                     * @return NetworkInstanceId Public network instance ID (route publishing mode is STATIC)
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置Public network instance ID (route publishing mode is STATIC)
                     * @param _networkInstanceId Public network instance ID (route publishing mode is STATIC)
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取Ip type to be released, enumeration value: ipv4, ipv6
                     * @return Type Ip type to be released, enumeration value: ipv4, ipv6
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Ip type to be released, enumeration value: ipv4, ipv6
                     * @param _type Ip type to be released, enumeration value: ipv4, ipv6
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取List of Ip addresses to be released
                     * @return IpList List of Ip addresses to be released
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置List of Ip addresses to be released
                     * @param _ipList List of Ip addresses to be released
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * Public network instance ID (route publishing mode is STATIC)
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * Ip type to be released, enumeration value: ipv4, ipv6
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * List of Ip addresses to be released
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_RELEASEPUBLICIPREQUEST_H_
