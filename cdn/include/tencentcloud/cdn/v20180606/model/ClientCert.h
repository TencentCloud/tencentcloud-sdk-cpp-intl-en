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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CLIENTCERT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CLIENTCERT_H_

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
                * HTTPS client certificate configuration
                */
                class ClientCert : public AbstractModel
                {
                public:
                    ClientCert();
                    ~ClientCert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client certificate
PEM format, requires Base64 encoding.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Certificate Client certificate
PEM format, requires Base64 encoding.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置Client certificate
PEM format, requires Base64 encoding.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _certificate Client certificate
PEM format, requires Base64 encoding.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Client certificate name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CertName Client certificate name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Client certificate name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _certName Client certificate name
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Certificate expiration time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ExpireTime Certificate expiration time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Certificate expiration time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _expireTime Certificate expiration time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Certificate issuance time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DeployTime Certificate issuance time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置Certificate issuance time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _deployTime Certificate issuance time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     * 
                     */
                    bool DeployTimeHasBeenSet() const;

                private:

                    /**
                     * Client certificate
PEM format, requires Base64 encoding.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Client certificate name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Certificate expiration time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Certificate issuance time
When this is used as an input parameter, it can be left blank.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CLIENTCERT_H_
