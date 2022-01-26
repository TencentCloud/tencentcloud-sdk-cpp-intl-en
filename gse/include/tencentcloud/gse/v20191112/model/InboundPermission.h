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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_INBOUNDPERMISSION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_INBOUNDPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Allowed network range.
                */
                class InboundPermission : public AbstractModel
                {
                public:
                    InboundPermission();
                    ~InboundPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start port number. Minimum value: 1025.
                     * @return FromPort Start port number. Minimum value: 1025.
                     */
                    uint64_t GetFromPort() const;

                    /**
                     * 设置Start port number. Minimum value: 1025.
                     * @param FromPort Start port number. Minimum value: 1025.
                     */
                    void SetFromPort(const uint64_t& _fromPort);

                    /**
                     * 判断参数 FromPort 是否已赋值
                     * @return FromPort 是否已赋值
                     */
                    bool FromPortHasBeenSet() const;

                    /**
                     * 获取IP range. Valid range of the input IPv4 addresses in CIDR format; for example, 0.0.0.0.0/0.
                     * @return IpRange IP range. Valid range of the input IPv4 addresses in CIDR format; for example, 0.0.0.0.0/0.
                     */
                    std::string GetIpRange() const;

                    /**
                     * 设置IP range. Valid range of the input IPv4 addresses in CIDR format; for example, 0.0.0.0.0/0.
                     * @param IpRange IP range. Valid range of the input IPv4 addresses in CIDR format; for example, 0.0.0.0.0/0.
                     */
                    void SetIpRange(const std::string& _ipRange);

                    /**
                     * 判断参数 IpRange 是否已赋值
                     * @return IpRange 是否已赋值
                     */
                    bool IpRangeHasBeenSet() const;

                    /**
                     * 获取Protocol type: TCP or UDP.
                     * @return Protocol Protocol type: TCP or UDP.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type: TCP or UDP.
                     * @param Protocol Protocol type: TCP or UDP.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取End port number. Maximum value: 60000.
                     * @return ToPort End port number. Maximum value: 60000.
                     */
                    uint64_t GetToPort() const;

                    /**
                     * 设置End port number. Maximum value: 60000.
                     * @param ToPort End port number. Maximum value: 60000.
                     */
                    void SetToPort(const uint64_t& _toPort);

                    /**
                     * 判断参数 ToPort 是否已赋值
                     * @return ToPort 是否已赋值
                     */
                    bool ToPortHasBeenSet() const;

                private:

                    /**
                     * Start port number. Minimum value: 1025.
                     */
                    uint64_t m_fromPort;
                    bool m_fromPortHasBeenSet;

                    /**
                     * IP range. Valid range of the input IPv4 addresses in CIDR format; for example, 0.0.0.0.0/0.
                     */
                    std::string m_ipRange;
                    bool m_ipRangeHasBeenSet;

                    /**
                     * Protocol type: TCP or UDP.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * End port number. Maximum value: 60000.
                     */
                    uint64_t m_toPort;
                    bool m_toPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_INBOUNDPERMISSION_H_
