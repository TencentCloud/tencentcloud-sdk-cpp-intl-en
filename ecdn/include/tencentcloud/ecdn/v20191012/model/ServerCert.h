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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_SERVERCERT_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_SERVERCERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * HTTPS server certificate configuration.
                */
                class ServerCert : public AbstractModel
                {
                public:
                    ServerCert();
                    ~ServerCert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server certificate ID, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertId Server certificate ID, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Server certificate ID, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _certId Server certificate ID, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Server certificate name, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertName Server certificate name, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Server certificate name, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _certName Server certificate name, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取Server certificate information, which is required when uploading your own certificate and must contain complete certificate chain information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Certificate Server certificate information, which is required when uploading your own certificate and must contain complete certificate chain information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置Server certificate information, which is required when uploading your own certificate and must contain complete certificate chain information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _certificate Server certificate information, which is required when uploading your own certificate and must contain complete certificate chain information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificate(const std::string& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Server key information, which is required when uploading your own certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PrivateKey Server key information, which is required when uploading your own certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置Server key information, which is required when uploading your own certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _privateKey Server key information, which is required when uploading your own certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取Certificate expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Certificate expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Certificate expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Certificate expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Certificate issuance time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeployTime Certificate issuance time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置Certificate issuance time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deployTime Certificate issuance time.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Certificate remarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Message Certificate remarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Certificate remarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _message Certificate remarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Server certificate ID, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Server certificate name, which is required if the certificate is a Tencent Cloud-hosted certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Server certificate information, which is required when uploading your own certificate and must contain complete certificate chain information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Server key information, which is required when uploading your own certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * Certificate expiration time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Certificate issuance time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * Certificate remarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_SERVERCERT_H_
