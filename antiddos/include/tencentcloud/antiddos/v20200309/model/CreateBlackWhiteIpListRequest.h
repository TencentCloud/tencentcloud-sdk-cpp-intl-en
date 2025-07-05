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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEBLACKWHITEIPLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEBLACKWHITEIPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateBlackWhiteIpList request structure.
                */
                class CreateBlackWhiteIpListRequest : public AbstractModel
                {
                public:
                    CreateBlackWhiteIpListRequest();
                    ~CreateBlackWhiteIpListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS instance ID
                     * @return InstanceId Anti-DDoS instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _instanceId Anti-DDoS instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取List of IPs
                     * @return IpList List of IPs
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置List of IPs
                     * @param _ipList List of IPs
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取IP type. Valid values: `black` (blocklisted IP), `white`(allowlisted IP).
                     * @return Type IP type. Valid values: `black` (blocklisted IP), `white`(allowlisted IP).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置IP type. Valid values: `black` (blocklisted IP), `white`(allowlisted IP).
                     * @param _type IP type. Valid values: `black` (blocklisted IP), `white`(allowlisted IP).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * List of IPs
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * IP type. Valid values: `black` (blocklisted IP), `white`(allowlisted IP).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEBLACKWHITEIPLISTREQUEST_H_
