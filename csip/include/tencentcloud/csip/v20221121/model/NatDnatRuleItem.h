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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_NATDNATRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_NATDNATRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DNAT rule
                */
                class NatDnatRuleItem : public AbstractModel
                {
                public:
                    NatDnatRuleItem();
                    ~NatDnatRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>IP protocol</p>
                     * @return IpProtocol <p>IP protocol</p>
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置<p>IP protocol</p>
                     * @param _ipProtocol <p>IP protocol</p>
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Public IP address.</p>
                     * @return PublicIpAddress <p>Public IP address.</p>
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置<p>Public IP address.</p>
                     * @param _publicIpAddress <p>Public IP address.</p>
                     * 
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>Public network port</p>
                     * @return PublicPort <p>Public network port</p>
                     * 
                     */
                    uint64_t GetPublicPort() const;

                    /**
                     * 设置<p>Public network port</p>
                     * @param _publicPort <p>Public network port</p>
                     * 
                     */
                    void SetPublicPort(const uint64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     * 
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIpAddress <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIpAddress <p>Private IP address.</p>
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>Private network port</p>
                     * @return PrivatePort <p>Private network port</p>
                     * 
                     */
                    uint64_t GetPrivatePort() const;

                    /**
                     * 设置<p>Private network port</p>
                     * @param _privatePort <p>Private network port</p>
                     * 
                     */
                    void SetPrivatePort(const uint64_t& _privatePort);

                    /**
                     * 判断参数 PrivatePort 是否已赋值
                     * @return PrivatePort 是否已赋值
                     * 
                     */
                    bool PrivatePortHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>IP protocol</p>
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * <p>Public IP address.</p>
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * <p>Public network port</p>
                     */
                    uint64_t m_publicPort;
                    bool m_publicPortHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * <p>Private network port</p>
                     */
                    uint64_t m_privatePort;
                    bool m_privatePortHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_NATDNATRULEITEM_H_
