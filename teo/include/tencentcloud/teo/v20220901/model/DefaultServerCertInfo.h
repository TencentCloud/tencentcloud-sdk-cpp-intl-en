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
                * https server certificate configuration
                */
                class DefaultServerCertInfo : public AbstractModel
                {
                public:
                    DefaultServerCertInfo();
                    ~DefaultServerCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server certificate ID.
                     * @return CertId Server certificate ID.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Server certificate ID.
                     * @param _certId Server certificate ID.
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
                     * 获取Certificate type. Valid values:
<li>`default`: Default certificate;</li>
<li>`upload`: External certificate;</li>
<li>`managed`: Tencent Cloud managed certificate.</li>
                     * @return Type Certificate type. Valid values:
<li>`default`: Default certificate;</li>
<li>`upload`: External certificate;</li>
<li>`managed`: Tencent Cloud managed certificate.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Certificate type. Valid values:
<li>`default`: Default certificate;</li>
<li>`upload`: External certificate;</li>
<li>`managed`: Tencent Cloud managed certificate.</li>
                     * @param _type Certificate type. Valid values:
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
                     * 获取Certificate common name.
                     * @return CommonName Certificate common name.
                     * 
                     */
                    std::string GetCommonName() const;

                    /**
                     * 设置Certificate common name.
                     * @param _commonName Certificate common name.
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
                     * 获取SAN domain of the certificate.
                     * @return SubjectAltName SAN domain of the certificate.
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置SAN domain of the certificate.
                     * @param _subjectAltName SAN domain of the certificate.
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
                     * 获取Deployment status. Valid values:
<li>processing: under deployment;</li>
<li>deployed: deployed;</li>
<li>failed: Deployment failed.</li>
                     * @return Status Deployment status. Valid values:
<li>processing: under deployment;</li>
<li>deployed: deployed;</li>
<li>failed: Deployment failed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Deployment status. Valid values:
<li>processing: under deployment;</li>
<li>deployed: deployed;</li>
<li>failed: Deployment failed.</li>
                     * @param _status Deployment status. Valid values:
<li>processing: under deployment;</li>
<li>deployed: deployed;</li>
<li>failed: Deployment failed.</li>
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
                     * 获取If the Status is failed, this field returns the failure reason.
                     * @return Message If the Status is failed, this field returns the failure reason.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置If the Status is failed, this field returns the failure reason.
                     * @param _message If the Status is failed, this field returns the failure reason.
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
                     * Server certificate ID.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Certificate remark name.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Certificate type. Valid values:
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
                     * Certificate common name.
                     */
                    std::string m_commonName;
                    bool m_commonNameHasBeenSet;

                    /**
                     * SAN domain of the certificate.
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * Deployment status. Valid values:
<li>processing: under deployment;</li>
<li>deployed: deployed;</li>
<li>failed: Deployment failed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * If the Status is failed, this field returns the failure reason.
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
