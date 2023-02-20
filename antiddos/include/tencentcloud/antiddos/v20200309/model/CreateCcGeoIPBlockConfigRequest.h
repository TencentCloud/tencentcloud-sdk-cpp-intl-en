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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCGEOIPBLOCKCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCGEOIPBLOCKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CcGeoIPBlockConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateCcGeoIPBlockConfig request structure.
                */
                class CreateCcGeoIPBlockConfigRequest : public AbstractModel
                {
                public:
                    CreateCcGeoIPBlockConfigRequest();
                    ~CreateCcGeoIPBlockConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP address
                     * @return IP IP address
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP address
                     * @param IP IP address
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param Domain Domain name
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Protocol type
                     * @return Protocol Protocol type
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type
                     * @param Protocol Protocol type
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取CC regional blocking configuration
                     * @return CcGeoIPBlockConfig CC regional blocking configuration
                     */
                    CcGeoIPBlockConfig GetCcGeoIPBlockConfig() const;

                    /**
                     * 设置CC regional blocking configuration
                     * @param CcGeoIPBlockConfig CC regional blocking configuration
                     */
                    void SetCcGeoIPBlockConfig(const CcGeoIPBlockConfig& _ccGeoIPBlockConfig);

                    /**
                     * 判断参数 CcGeoIPBlockConfig 是否已赋值
                     * @return CcGeoIPBlockConfig 是否已赋值
                     */
                    bool CcGeoIPBlockConfigHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP address
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Protocol type
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * CC regional blocking configuration
                     */
                    CcGeoIPBlockConfig m_ccGeoIPBlockConfig;
                    bool m_ccGeoIPBlockConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCGEOIPBLOCKCONFIGREQUEST_H_
