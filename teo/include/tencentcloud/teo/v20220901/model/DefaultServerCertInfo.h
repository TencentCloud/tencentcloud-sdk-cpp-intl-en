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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTSERVERCERTINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTSERVERCERTINFO_H_

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
                class DefaultServerCertInfo : public AbstractModel
                {
                public:
                    DefaultServerCertInfo();
                    ~DefaultServerCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the server certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertId ID of the server certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ID of the server certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certId ID of the server certificate.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Alias Alias of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Alias of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alias Alias of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
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
<li>`default`: Default certificate;</li>
<li>`upload`: Custom certificate;</li>
<li>`managed`: Tencent Cloud-managed certificate.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type of the certificate. Values:
<li>`default`: Default certificate;</li>
<li>`upload`: Custom certificate;</li>
<li>`managed`: Tencent Cloud-managed certificate.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the certificate. Values:
<li>`default`: Default certificate;</li>
<li>`upload`: Custom certificate;</li>
<li>`managed`: Tencent Cloud-managed certificate.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Type of the certificate. Values:
<li>`default`: Default certificate;</li>
<li>`upload`: Custom certificate;</li>
<li>`managed`: Tencent Cloud-managed certificate.</li>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time when the certificate expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Time when the certificate expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Time when the certificate expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Time when the certificate expires.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time when the certificate takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectiveTime Time when the certificate takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置Time when the certificate takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectiveTime Time when the certificate takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取Common name of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CommonName Common name of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCommonName() const;

                    /**
                     * 设置Common name of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _commonName Common name of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCommonName(const std::string& _commonName);

                    /**
                     * 判断参数 CommonName 是否已赋值
                     * @return CommonName 是否已赋值
                     * 
                     */
                    bool CommonNameHasBeenSet() const;

                    /**
                     * 获取Domain names added to the SAN certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubjectAltName Domain names added to the SAN certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置Domain names added to the SAN certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subjectAltName Domain names added to the SAN certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取Deployment status. Values:
<li>`processing`: Deployment in progress</li>
<li>`deployed`: Deployed</li>
<li>`failed`: Deployment failed</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Status Deployment status. Values:
<li>`processing`: Deployment in progress</li>
<li>`deployed`: Deployed</li>
<li>`failed`: Deployment failed</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Deployment status. Values:
<li>`processing`: Deployment in progress</li>
<li>`deployed`: Deployed</li>
<li>`failed`: Deployment failed</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _status Deployment status. Values:
<li>`processing`: Deployment in progress</li>
<li>`deployed`: Deployed</li>
<li>`failed`: Deployment failed</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Failure description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Failure description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Failure description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Failure description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Certificate algorithm.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SignAlgo Certificate algorithm.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSignAlgo() const;

                    /**
                     * 设置Certificate algorithm.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _signAlgo Certificate algorithm.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSignAlgo(const std::string& _signAlgo);

                    /**
                     * 判断参数 SignAlgo 是否已赋值
                     * @return SignAlgo 是否已赋值
                     * 
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
<li>`default`: Default certificate;</li>
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
                     * Time when the certificate takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * Common name of the certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_commonName;
                    bool m_commonNameHasBeenSet;

                    /**
                     * Domain names added to the SAN certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * Deployment status. Values:
<li>`processing`: Deployment in progress</li>
<li>`deployed`: Deployed</li>
<li>`failed`: Deployment failed</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Failure description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Certificate algorithm.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_signAlgo;
                    bool m_signAlgoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTSERVERCERTINFO_H_
