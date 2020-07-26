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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSUBDOMAINREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSUBDOMAINREQUEST_H_

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
                * ModifySubDomain request structure.
                */
                class ModifySubDomainRequest : public AbstractModel
                {
                public:
                    ModifySubDomainRequest();
                    ~ModifySubDomainRequest() = default;
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
                     * 获取Custom domain name whose path mapping is to be modified.
                     * @return SubDomain Custom domain name whose path mapping is to be modified.
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Custom domain name whose path mapping is to be modified.
                     * @param SubDomain Custom domain name whose path mapping is to be modified.
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取Whether to change to the default path mapping. true: use the default path mapping; false: use the custom path mapping.
                     * @return IsDefaultMapping Whether to change to the default path mapping. true: use the default path mapping; false: use the custom path mapping.
                     */
                    bool GetIsDefaultMapping() const;

                    /**
                     * 设置Whether to change to the default path mapping. true: use the default path mapping; false: use the custom path mapping.
                     * @param IsDefaultMapping Whether to change to the default path mapping. true: use the default path mapping; false: use the custom path mapping.
                     */
                    void SetIsDefaultMapping(const bool& _isDefaultMapping);

                    /**
                     * 判断参数 IsDefaultMapping 是否已赋值
                     * @return IsDefaultMapping 是否已赋值
                     */
                    bool IsDefaultMappingHasBeenSet() const;

                    /**
                     * 获取Certificate ID, which is required if the HTTPS protocol is included.
                     * @return CertificateId Certificate ID, which is required if the HTTPS protocol is included.
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID, which is required if the HTTPS protocol is included.
                     * @param CertificateId Certificate ID, which is required if the HTTPS protocol is included.
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Custom domain name protocol type after modification. Valid values: http, https, http&https.
                     * @return Protocol Custom domain name protocol type after modification. Valid values: http, https, http&https.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Custom domain name protocol type after modification. Valid values: http, https, http&https.
                     * @param Protocol Custom domain name protocol type after modification. Valid values: http, https, http&https.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Path mapping list after modification.
                     * @return PathMappingSet Path mapping list after modification.
                     */
                    std::vector<PathMapping> GetPathMappingSet() const;

                    /**
                     * 设置Path mapping list after modification.
                     * @param PathMappingSet Path mapping list after modification.
                     */
                    void SetPathMappingSet(const std::vector<PathMapping>& _pathMappingSet);

                    /**
                     * 判断参数 PathMappingSet 是否已赋值
                     * @return PathMappingSet 是否已赋值
                     */
                    bool PathMappingSetHasBeenSet() const;

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
                     * Unique service ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Custom domain name whose path mapping is to be modified.
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Whether to change to the default path mapping. true: use the default path mapping; false: use the custom path mapping.
                     */
                    bool m_isDefaultMapping;
                    bool m_isDefaultMappingHasBeenSet;

                    /**
                     * Certificate ID, which is required if the HTTPS protocol is included.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Custom domain name protocol type after modification. Valid values: http, https, http&https.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Path mapping list after modification.
                     */
                    std::vector<PathMapping> m_pathMappingSet;
                    bool m_pathMappingSetHasBeenSet;

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

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSUBDOMAINREQUEST_H_
