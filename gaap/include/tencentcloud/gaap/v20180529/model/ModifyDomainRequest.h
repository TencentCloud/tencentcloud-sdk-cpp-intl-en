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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYDOMAINREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyDomain request structure.
                */
                class ModifyDomainRequest : public AbstractModel
                {
                public:
                    ModifyDomainRequest();
                    ~ModifyDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Layer-7 listener ID
                     * @return ListenerId Layer-7 listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Layer-7 listener ID
                     * @param _listenerId Layer-7 listener ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Original domain name information
                     * @return OldDomain Original domain name information
                     * 
                     */
                    std::string GetOldDomain() const;

                    /**
                     * 设置Original domain name information
                     * @param _oldDomain Original domain name information
                     * 
                     */
                    void SetOldDomain(const std::string& _oldDomain);

                    /**
                     * 判断参数 OldDomain 是否已赋值
                     * @return OldDomain 是否已赋值
                     * 
                     */
                    bool OldDomainHasBeenSet() const;

                    /**
                     * 获取New domain name information
                     * @return NewDomain New domain name information
                     * 
                     */
                    std::string GetNewDomain() const;

                    /**
                     * 设置New domain name information
                     * @param _newDomain New domain name information
                     * 
                     */
                    void SetNewDomain(const std::string& _newDomain);

                    /**
                     * 判断参数 NewDomain 是否已赋值
                     * @return NewDomain 是否已赋值
                     * 
                     */
                    bool NewDomainHasBeenSet() const;

                    /**
                     * 获取Server SSL certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and CertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by CertificateId will be used.
                     * @return CertificateId Server SSL certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and CertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by CertificateId will be used.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Server SSL certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and CertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by CertificateId will be used.
                     * @param _certificateId Server SSL certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and CertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by CertificateId will be used.
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Client CA certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and ClientCertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by ClientCertificateId will be used.
                     * @return ClientCertificateId Client CA certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and ClientCertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by ClientCertificateId will be used.
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置Client CA certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and ClientCertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by ClientCertificateId will be used.
                     * @param _clientCertificateId Client CA certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and ClientCertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by ClientCertificateId will be used.
                     * 
                     */
                    void SetClientCertificateId(const std::string& _clientCertificateId);

                    /**
                     * 判断参数 ClientCertificateId 是否已赋值
                     * @return ClientCertificateId 是否已赋值
                     * 
                     */
                    bool ClientCertificateIdHasBeenSet() const;

                    /**
                     * 获取Client CA certificate ID. It is only applicable to connections on version 3.0, where:
If this field and `ClientCertificateId` are not included, the original certificate will be used;
If this field is included, and ClientCertificateId=default, then the listener certificate will be used;
In other cases, the certificate specified by `ClientCertificateId` or `PolyClientCertificateIds` will be used.
                     * @return PolyClientCertificateIds Client CA certificate ID. It is only applicable to connections on version 3.0, where:
If this field and `ClientCertificateId` are not included, the original certificate will be used;
If this field is included, and ClientCertificateId=default, then the listener certificate will be used;
In other cases, the certificate specified by `ClientCertificateId` or `PolyClientCertificateIds` will be used.
                     * 
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置Client CA certificate ID. It is only applicable to connections on version 3.0, where:
If this field and `ClientCertificateId` are not included, the original certificate will be used;
If this field is included, and ClientCertificateId=default, then the listener certificate will be used;
In other cases, the certificate specified by `ClientCertificateId` or `PolyClientCertificateIds` will be used.
                     * @param _polyClientCertificateIds Client CA certificate ID. It is only applicable to connections on version 3.0, where:
If this field and `ClientCertificateId` are not included, the original certificate will be used;
If this field is included, and ClientCertificateId=default, then the listener certificate will be used;
In other cases, the certificate specified by `ClientCertificateId` or `PolyClientCertificateIds` will be used.
                     * 
                     */
                    void SetPolyClientCertificateIds(const std::vector<std::string>& _polyClientCertificateIds);

                    /**
                     * 判断参数 PolyClientCertificateIds 是否已赋值
                     * @return PolyClientCertificateIds 是否已赋值
                     * 
                     */
                    bool PolyClientCertificateIdsHasBeenSet() const;

                private:

                    /**
                     * Layer-7 listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Original domain name information
                     */
                    std::string m_oldDomain;
                    bool m_oldDomainHasBeenSet;

                    /**
                     * New domain name information
                     */
                    std::string m_newDomain;
                    bool m_newDomainHasBeenSet;

                    /**
                     * Server SSL certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and CertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by CertificateId will be used.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Client CA certificate ID. It's only applicable to the connections of version 3.0:
If this field is not passed in, the original certificate will be used;
If this field is passed in, and ClientCertificateId=default, the listener certificate will be used;
For other cases, the certificate specified by ClientCertificateId will be used.
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * Client CA certificate ID. It is only applicable to connections on version 3.0, where:
If this field and `ClientCertificateId` are not included, the original certificate will be used;
If this field is included, and ClientCertificateId=default, then the listener certificate will be used;
In other cases, the certificate specified by `ClientCertificateId` or `PolyClientCertificateIds` will be used.
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYDOMAINREQUEST_H_
