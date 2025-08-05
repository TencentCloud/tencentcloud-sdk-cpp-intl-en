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
                     * 获取Specifies the server certificate ID.
                     * @return CertId Specifies the server certificate ID.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Specifies the server certificate ID.
                     * @param _certId Specifies the server certificate ID.
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
                     * 获取Certificate remark name.
                     * @return Alias Certificate remark name.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Certificate remark name.
                     * @param _alias Certificate remark name.
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
                     * 获取Certificate type. valid values:.
<li>`default`: Default certificate;</li>

<li>`upload`: External certificate;</li>

<li>`managed`: Tencent Cloud managed certificate.</li>
                     * @return Type Certificate type. valid values:.
<li>`default`: Default certificate;</li>

<li>`upload`: External certificate;</li>

<li>`managed`: Tencent Cloud managed certificate.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Certificate type. valid values:.
<li>`default`: Default certificate;</li>

<li>`upload`: External certificate;</li>

<li>`managed`: Tencent Cloud managed certificate.</li>
                     * @param _type Certificate type. valid values:.
<li>`default`: Default certificate;</li>

<li>`upload`: External certificate;</li>

<li>`managed`: Tencent Cloud managed certificate.</li>
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
                     * 获取Certificate expiration time.
                     * @return ExpireTime Certificate expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Certificate expiration time.
                     * @param _expireTime Certificate expiration time.
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
                     * 获取Certificate Validation Time.
                     * @return EffectiveTime Certificate Validation Time.
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置Certificate Validation Time.
                     * @param _effectiveTime Certificate Validation Time.
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
                     * 获取Common name of the cert.
                     * @return CommonName Common name of the cert.
                     * 
                     */
                    std::string GetCommonName() const;

                    /**
                     * 设置Common name of the cert.
                     * @param _commonName Common name of the cert.
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
                     * 获取Specifies the SAN domain of the certificate.
                     * @return SubjectAltName Specifies the SAN domain of the certificate.
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置Specifies the SAN domain of the certificate.
                     * @param _subjectAltName Specifies the SAN domain of the certificate.
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
                     * 获取Deployment state. valid values:.
<li>processing: deployment in progress;</li>.
<Li>Deployed: deployed</li>.
<Li>`Failed`: deployment failed</li>.
                     * @return Status Deployment state. valid values:.
<li>processing: deployment in progress;</li>.
<Li>Deployed: deployed</li>.
<Li>`Failed`: deployment failed</li>.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Deployment state. valid values:.
<li>processing: deployment in progress;</li>.
<Li>Deployed: deployed</li>.
<Li>`Failed`: deployment failed</li>.
                     * @param _status Deployment state. valid values:.
<li>processing: deployment in progress;</li>.
<Li>Deployed: deployed</li>.
<Li>`Failed`: deployment failed</li>.
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
                     * 获取Indicates the failure reason when the Status is failed.
                     * @return Message Indicates the failure reason when the Status is failed.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Indicates the failure reason when the Status is failed.
                     * @param _message Indicates the failure reason when the Status is failed.
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
                     * @return SignAlgo Certificate algorithm.
                     * 
                     */
                    std::string GetSignAlgo() const;

                    /**
                     * 设置Certificate algorithm.
                     * @param _signAlgo Certificate algorithm.
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
                     * Specifies the server certificate ID.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Certificate remark name.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Certificate type. valid values:.
<li>`default`: Default certificate;</li>

<li>`upload`: External certificate;</li>

<li>`managed`: Tencent Cloud managed certificate.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Certificate expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Certificate Validation Time.
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * Common name of the cert.
                     */
                    std::string m_commonName;
                    bool m_commonNameHasBeenSet;

                    /**
                     * Specifies the SAN domain of the certificate.
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * Deployment state. valid values:.
<li>processing: deployment in progress;</li>.
<Li>Deployed: deployed</li>.
<Li>`Failed`: deployment failed</li>.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Indicates the failure reason when the Status is failed.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Certificate algorithm.
                     */
                    std::string m_signAlgo;
                    bool m_signAlgoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTSERVERCERTINFO_H_
