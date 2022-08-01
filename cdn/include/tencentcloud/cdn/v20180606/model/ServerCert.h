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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SERVERCERT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SERVERCERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * HTTPS acceleration server certificate configuration:
+ Supports deployment with certificates that are being hosted by the SSL Certificate Services
+ Supports uploading certificates of PEM format for deployment
Note: when uploading certificates of PEM format, the Base64 encoding is required.
                */
                class ServerCert : public AbstractModel
                {
                public:
                    ServerCert();
                    ~ServerCert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server certificate ID, which is auto-generated when the certificate is being managed by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CertId Server certificate ID, which is auto-generated when the certificate is being managed by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Server certificate ID, which is auto-generated when the certificate is being managed by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CertId Server certificate ID, which is auto-generated when the certificate is being managed by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Server certificate name
This is auto-generated when the certificate is being hosted by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CertName Server certificate name
This is auto-generated when the certificate is being hosted by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Server certificate name
This is auto-generated when the certificate is being hosted by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CertName Server certificate name
This is auto-generated when the certificate is being hosted by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取Server certificate information
This is required when uploading an external certificate, which should contain the complete certificate chain.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Certificate Server certificate information
This is required when uploading an external certificate, which should contain the complete certificate chain.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置Server certificate information
This is required when uploading an external certificate, which should contain the complete certificate chain.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Certificate Server certificate information
This is required when uploading an external certificate, which should contain the complete certificate chain.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCertificate(const std::string& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Server key information
This is required when uploading an external certificate.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PrivateKey Server key information
This is required when uploading an external certificate.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置Server key information
This is required when uploading an external certificate.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param PrivateKey Server key information
This is required when uploading an external certificate.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取Time when the certificate expires
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ExpireTime Time when the certificate expires
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Time when the certificate expires
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ExpireTime Time when the certificate expires
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Certificate issuance time
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DeployTime Certificate issuance time
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置Certificate issuance time
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DeployTime Certificate issuance time
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取Certificate remarks
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Message Certificate remarks
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Certificate remarks
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Message Certificate remarks
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Certificate source
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return From Certificate source
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Certificate source
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param From Certificate source
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                private:

                    /**
                     * Server certificate ID, which is auto-generated when the certificate is being managed by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Server certificate name
This is auto-generated when the certificate is being hosted by the SSL Certificate Service
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Server certificate information
This is required when uploading an external certificate, which should contain the complete certificate chain.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Server key information
This is required when uploading an external certificate.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * Time when the certificate expires
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Certificate issuance time
Can be left blank when used as an input parameter
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * Certificate remarks
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Certificate source
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SERVERCERT_H_
