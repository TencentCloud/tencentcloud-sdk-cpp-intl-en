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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDSUBDOMAINREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDSUBDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/PathMapping.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * BindSubDomain request structure.
                */
                class BindSubDomainRequest : public AbstractModel
                {
                public:
                    BindSubDomainRequest();
                    ~BindSubDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID.
                     * @return ServiceId Unique service ID.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID.
                     * @param ServiceId Unique service ID.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Custom domain name to be bound.
                     * @return SubDomain Custom domain name to be bound.
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Custom domain name to be bound.
                     * @param SubDomain Custom domain name to be bound.
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取Protocol supported by service. Valid values: http, https, http&https.
                     * @return Protocol Protocol supported by service. Valid values: http, https, http&https.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol supported by service. Valid values: http, https, http&https.
                     * @param Protocol Protocol supported by service. Valid values: http, https, http&https.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: OUTER, INNER.
                     * @return NetType Network type. Valid values: OUTER, INNER.
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type. Valid values: OUTER, INNER.
                     * @param NetType Network type. Valid values: OUTER, INNER.
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Whether the default path mapping is used. The default value is `true`. If the value is `false`, the custom path mapping will be used and `PathMappingSet` will be required in this case.
                     * @return IsDefaultMapping Whether the default path mapping is used. The default value is `true`. If the value is `false`, the custom path mapping will be used and `PathMappingSet` will be required in this case.
                     */
                    bool GetIsDefaultMapping() const;

                    /**
                     * 设置Whether the default path mapping is used. The default value is `true`. If the value is `false`, the custom path mapping will be used and `PathMappingSet` will be required in this case.
                     * @param IsDefaultMapping Whether the default path mapping is used. The default value is `true`. If the value is `false`, the custom path mapping will be used and `PathMappingSet` will be required in this case.
                     */
                    void SetIsDefaultMapping(const bool& _isDefaultMapping);

                    /**
                     * 判断参数 IsDefaultMapping 是否已赋值
                     * @return IsDefaultMapping 是否已赋值
                     */
                    bool IsDefaultMappingHasBeenSet() const;

                    /**
                     * 获取Default domain name.
                     * @return NetSubDomain Default domain name.
                     */
                    std::string GetNetSubDomain() const;

                    /**
                     * 设置Default domain name.
                     * @param NetSubDomain Default domain name.
                     */
                    void SetNetSubDomain(const std::string& _netSubDomain);

                    /**
                     * 判断参数 NetSubDomain 是否已赋值
                     * @return NetSubDomain 是否已赋值
                     */
                    bool NetSubDomainHasBeenSet() const;

                    /**
                     * 获取Unique certificate ID of the custom domain name to be bound. The certificate can be uploaded if `Protocol` is `https` or `http&https`.
                     * @return CertificateId Unique certificate ID of the custom domain name to be bound. The certificate can be uploaded if `Protocol` is `https` or `http&https`.
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Unique certificate ID of the custom domain name to be bound. The certificate can be uploaded if `Protocol` is `https` or `http&https`.
                     * @param CertificateId Unique certificate ID of the custom domain name to be bound. The certificate can be uploaded if `Protocol` is `https` or `http&https`.
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Custom domain name path mapping. It can contain up to 3 `Environment` values which can be set to only `test`, `prepub`, and `release`, respectively.
                     * @return PathMappingSet Custom domain name path mapping. It can contain up to 3 `Environment` values which can be set to only `test`, `prepub`, and `release`, respectively.
                     */
                    std::vector<PathMapping> GetPathMappingSet() const;

                    /**
                     * 设置Custom domain name path mapping. It can contain up to 3 `Environment` values which can be set to only `test`, `prepub`, and `release`, respectively.
                     * @param PathMappingSet Custom domain name path mapping. It can contain up to 3 `Environment` values which can be set to only `test`, `prepub`, and `release`, respectively.
                     */
                    void SetPathMappingSet(const std::vector<PathMapping>& _pathMappingSet);

                    /**
                     * 判断参数 PathMappingSet 是否已赋值
                     * @return PathMappingSet 是否已赋值
                     */
                    bool PathMappingSetHasBeenSet() const;

                private:

                    /**
                     * Unique service ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Custom domain name to be bound.
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Protocol supported by service. Valid values: http, https, http&https.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Network type. Valid values: OUTER, INNER.
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Whether the default path mapping is used. The default value is `true`. If the value is `false`, the custom path mapping will be used and `PathMappingSet` will be required in this case.
                     */
                    bool m_isDefaultMapping;
                    bool m_isDefaultMappingHasBeenSet;

                    /**
                     * Default domain name.
                     */
                    std::string m_netSubDomain;
                    bool m_netSubDomainHasBeenSet;

                    /**
                     * Unique certificate ID of the custom domain name to be bound. The certificate can be uploaded if `Protocol` is `https` or `http&https`.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Custom domain name path mapping. It can contain up to 3 `Environment` values which can be set to only `test`, `prepub`, and `release`, respectively.
                     */
                    std::vector<PathMapping> m_pathMappingSet;
                    bool m_pathMappingSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDSUBDOMAINREQUEST_H_
