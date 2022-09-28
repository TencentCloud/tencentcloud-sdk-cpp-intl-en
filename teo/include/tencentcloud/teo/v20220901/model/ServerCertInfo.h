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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SERVERCERTINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SERVERCERTINFO_H_

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
                class ServerCertInfo : public AbstractModel
                {
                public:
                    ServerCertInfo();
                    ~ServerCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the server certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertId ID of the server certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ID of the server certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CertId ID of the server certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Alias of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Alias Alias of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Alias of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Alias Alias of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Type of the certificate. Values:
<li>`default`: Default certificate;</lil>
<li>`upload`: Custom certificate;</li>
<li>`managed`: Tencent Cloud-managed certificate.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type of the certificate. Values:
<li>`default`: Default certificate;</lil>
<li>`upload`: Custom certificate;</li>
<li>`managed`: Tencent Cloud-managed certificate.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the certificate. Values:
<li>`default`: Default certificate;</lil>
<li>`upload`: Custom certificate;</li>
<li>`managed`: Tencent Cloud-managed certificate.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Type Type of the certificate. Values:
<li>`default`: Default certificate;</lil>
<li>`upload`: Custom certificate;</li>
<li>`managed`: Tencent Cloud-managed certificate.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Time when the certificate expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Time when the certificate expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Time when the certificate expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ExpireTime Time when the certificate expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Time when the certificate is deployed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeployTime Time when the certificate is deployed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置Time when the certificate is deployed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DeployTime Time when the certificate is deployed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取Signature algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SignAlgo Signature algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSignAlgo() const;

                    /**
                     * 设置Signature algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SignAlgo Signature algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSignAlgo(const std::string& _signAlgo);

                    /**
                     * 判断参数 SignAlgo 是否已赋值
                     * @return SignAlgo 是否已赋值
                     */
                    bool SignAlgoHasBeenSet() const;

                private:

                    /**
                     * ID of the server certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Alias of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Type of the certificate. Values:
<li>`default`: Default certificate;</lil>
<li>`upload`: Custom certificate;</li>
<li>`managed`: Tencent Cloud-managed certificate.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Time when the certificate expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Time when the certificate is deployed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * Signature algorithm.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_signAlgo;
                    bool m_signAlgoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SERVERCERTINFO_H_
