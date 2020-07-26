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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOMAINSETLIST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOMAINSETLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Custom service domain name list
                */
                class DomainSetList : public AbstractModel
                {
                public:
                    DomainSetList();
                    ~DomainSetList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name.
                     * @return DomainName Domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name.
                     * @param DomainName Domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Domain name resolution status. True: success; False: failure.
                     * @return Status Domain name resolution status. True: success; False: failure.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Domain name resolution status. True: success; False: failure.
                     * @param Status Domain name resolution status. True: success; False: failure.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Certificate ID.
                     * @return CertificateId Certificate ID.
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID.
                     * @param CertificateId Certificate ID.
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Whether the default path mapping is used.
                     * @return IsDefaultMapping Whether the default path mapping is used.
                     */
                    bool GetIsDefaultMapping() const;

                    /**
                     * 设置Whether the default path mapping is used.
                     * @param IsDefaultMapping Whether the default path mapping is used.
                     */
                    void SetIsDefaultMapping(const bool& _isDefaultMapping);

                    /**
                     * 判断参数 IsDefaultMapping 是否已赋值
                     * @return IsDefaultMapping 是否已赋值
                     */
                    bool IsDefaultMappingHasBeenSet() const;

                    /**
                     * 获取Custom domain name protocol type.
                     * @return Protocol Custom domain name protocol type.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Custom domain name protocol type.
                     * @param Protocol Custom domain name protocol type.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: INNER, OUTER.
                     * @return NetType Network type. Valid values: INNER, OUTER.
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type. Valid values: INNER, OUTER.
                     * @param NetType Network type. Valid values: INNER, OUTER.
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Domain name resolution status. True: success; False: failure.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Certificate ID.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Whether the default path mapping is used.
                     */
                    bool m_isDefaultMapping;
                    bool m_isDefaultMappingHasBeenSet;

                    /**
                     * Custom domain name protocol type.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Network type. Valid values: INNER, OUTER.
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOMAINSETLIST_H_
