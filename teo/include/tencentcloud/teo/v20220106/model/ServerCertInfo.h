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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SERVERCERTINFO_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SERVERCERTINFO_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * HTTPS server certificate configuration
                */
                class ServerCertInfo : public AbstractModel
                {
                public:
                    ServerCertInfo();
                    ~ServerCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server certificate ID, which is the ID of the default certificate. If you choose to upload an external certificate for SSL certificate management, a certificate ID will be generated.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CertId Server certificate ID, which is the ID of the default certificate. If you choose to upload an external certificate for SSL certificate management, a certificate ID will be generated.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Server certificate ID, which is the ID of the default certificate. If you choose to upload an external certificate for SSL certificate management, a certificate ID will be generated.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CertId Server certificate ID, which is the ID of the default certificate. If you choose to upload an external certificate for SSL certificate management, a certificate ID will be generated.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Alias of the certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Alias Alias of the certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Alias of the certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Alias Alias of the certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Certificate type.
`default`: Default certificate
`upload`: External certificate
`managed`: Tencent Cloud managed certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Type Certificate type.
`default`: Default certificate
`upload`: External certificate
`managed`: Tencent Cloud managed certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Certificate type.
`default`: Default certificate
`upload`: External certificate
`managed`: Tencent Cloud managed certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Type Certificate type.
`default`: Default certificate
`upload`: External certificate
`managed`: Tencent Cloud managed certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Time when the certificate expires
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ExpireTime Time when the certificate expires
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Time when the certificate expires
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ExpireTime Time when the certificate expires
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Certificate deployment time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DeployTime Certificate deployment time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置Certificate deployment time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param DeployTime Certificate deployment time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取Certificate deployment status.
`processing`: Deploying
`deployed`: Deployed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Status Certificate deployment status.
`processing`: Deploying
`deployed`: Deployed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Certificate deployment status.
`processing`: Deploying
`deployed`: Deployed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Status Certificate deployment status.
`processing`: Deploying
`deployed`: Deployed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Server certificate ID, which is the ID of the default certificate. If you choose to upload an external certificate for SSL certificate management, a certificate ID will be generated.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Alias of the certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Certificate type.
`default`: Default certificate
`upload`: External certificate
`managed`: Tencent Cloud managed certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Time when the certificate expires
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Certificate deployment time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * Certificate deployment status.
`processing`: Deploying
`deployed`: Deployed
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SERVERCERTINFO_H_
