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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSTLS_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSTLS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Ingress TLS configuration
                */
                class IngressTls : public AbstractModel
                {
                public:
                    IngressTls();
                    ~IngressTls() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host array. An empty array indicates the default certificate for all domain names.
                     * @return Hosts Host array. An empty array indicates the default certificate for all domain names.
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置Host array. An empty array indicates the default certificate for all domain names.
                     * @param _hosts Host array. An empty array indicates the default certificate for all domain names.
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取Secret name. If a certificate is used, this field is left empty.
                     * @return SecretName Secret name. If a certificate is used, this field is left empty.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Secret name. If a certificate is used, this field is left empty.
                     * @param _secretName Secret name. If a certificate is used, this field is left empty.
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取SSL Certificate Id
                     * @return CertificateId SSL Certificate Id
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置SSL Certificate Id
                     * @param _certificateId SSL Certificate Id
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                private:

                    /**
                     * Host array. An empty array indicates the default certificate for all domain names.
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Secret name. If a certificate is used, this field is left empty.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * SSL Certificate Id
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSTLS_H_
