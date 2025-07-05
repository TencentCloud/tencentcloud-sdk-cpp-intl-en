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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CERTIFICATEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CERTIFICATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * HTTPS server certificate configuration
                */
                class CertificateInfo : public AbstractModel
                {
                public:
                    CertificateInfo();
                    ~CertificateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate ID, which originates from the SSL side. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * @return CertId Certificate ID, which originates from the SSL side. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Certificate ID, which originates from the SSL side. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * @param _certId Certificate ID, which originates from the SSL side. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Alias of the certificate.
                     * @return Alias Alias of the certificate.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Alias of the certificate.
                     * @param _alias Alias of the certificate.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Type of the certificate. Values:
<li>`default`: Default certificate</li>
<li>`upload`: Specified certificate</li>
<li>`managed`: Tencent Cloud-managed certificate</li>
                     * @return Type Type of the certificate. Values:
<li>`default`: Default certificate</li>
<li>`upload`: Specified certificate</li>
<li>`managed`: Tencent Cloud-managed certificate</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the certificate. Values:
<li>`default`: Default certificate</li>
<li>`upload`: Specified certificate</li>
<li>`managed`: Tencent Cloud-managed certificate</li>
                     * @param _type Type of the certificate. Values:
<li>`default`: Default certificate</li>
<li>`upload`: Specified certificate</li>
<li>`managed`: Tencent Cloud-managed certificate</li>
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
                     * 获取The certificate expiration time.
                     * @return ExpireTime The certificate expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The certificate expiration time.
                     * @param _expireTime The certificate expiration time.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Time when the certificate is deployed.
                     * @return DeployTime Time when the certificate is deployed.
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置Time when the certificate is deployed.
                     * @param _deployTime Time when the certificate is deployed.
                     * 
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     * 
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取Signature algorithm.
                     * @return SignAlgo Signature algorithm.
                     * 
                     */
                    std::string GetSignAlgo() const;

                    /**
                     * 设置Signature algorithm.
                     * @param _signAlgo Signature algorithm.
                     * 
                     */
                    void SetSignAlgo(const std::string& _signAlgo);

                    /**
                     * 判断参数 SignAlgo 是否已赋值
                     * @return SignAlgo 是否已赋值
                     * 
                     */
                    bool SignAlgoHasBeenSet() const;

                    /**
                     * 获取Status of the certificate. Values:
u200c<li>`deployed`: The deployment has completed</li>
u200c<li>`processing`: Deployment in progress</li>
u200c<li>`applying`: Application in progress</li>
u200c<li>`failed`: Application rejected</li>
<li>`issued`: Binding failed.</li>
                     * @return Status Status of the certificate. Values:
u200c<li>`deployed`: The deployment has completed</li>
u200c<li>`processing`: Deployment in progress</li>
u200c<li>`applying`: Application in progress</li>
u200c<li>`failed`: Application rejected</li>
<li>`issued`: Binding failed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the certificate. Values:
u200c<li>`deployed`: The deployment has completed</li>
u200c<li>`processing`: Deployment in progress</li>
u200c<li>`applying`: Application in progress</li>
u200c<li>`failed`: Application rejected</li>
<li>`issued`: Binding failed.</li>
                     * @param _status Status of the certificate. Values:
u200c<li>`deployed`: The deployment has completed</li>
u200c<li>`processing`: Deployment in progress</li>
u200c<li>`applying`: Application in progress</li>
u200c<li>`failed`: Application rejected</li>
<li>`issued`: Binding failed.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Certificate ID, which originates from the SSL side. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Alias of the certificate.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Type of the certificate. Values:
<li>`default`: Default certificate</li>
<li>`upload`: Specified certificate</li>
<li>`managed`: Tencent Cloud-managed certificate</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The certificate expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Time when the certificate is deployed.
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * Signature algorithm.
                     */
                    std::string m_signAlgo;
                    bool m_signAlgoHasBeenSet;

                    /**
                     * Status of the certificate. Values:
u200c<li>`deployed`: The deployment has completed</li>
u200c<li>`processing`: Deployment in progress</li>
u200c<li>`applying`: Application in progress</li>
u200c<li>`failed`: Application rejected</li>
<li>`issued`: Binding failed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CERTIFICATEINFO_H_
