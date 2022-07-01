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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DEFAULTSERVERCERTINFO_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DEFAULTSERVERCERTINFO_H_

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
                class DefaultServerCertInfo : public AbstractModel
                {
                public:
                    DefaultServerCertInfo();
                    ~DefaultServerCertInfo() = default;
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
                     * 获取Certificate alias
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Alias Certificate alias
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Certificate alias
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Alias Certificate alias
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Certificate type. Valid values:
`default`: Default certificate
`upload`: External certificate
`managed`: Tencent Cloud managed certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Type Certificate type. Valid values:
`default`: Default certificate
`upload`: External certificate
`managed`: Tencent Cloud managed certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Certificate type. Valid values:
`default`: Default certificate
`upload`: External certificate
`managed`: Tencent Cloud managed certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Type Certificate type. Valid values:
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
                     * 获取Time when the certificate takes effect
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EffectiveTime Time when the certificate takes effect
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置Time when the certificate takes effect
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param EffectiveTime Time when the certificate takes effect
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取Certificate common name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CommonName Certificate common name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCommonName() const;

                    /**
                     * 设置Certificate common name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CommonName Certificate common name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCommonName(const std::string& _commonName);

                    /**
                     * 判断参数 CommonName 是否已赋值
                     * @return CommonName 是否已赋值
                     */
                    bool CommonNameHasBeenSet() const;

                    /**
                     * 获取Domain names added to the SAN certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SubjectAltName Domain names added to the SAN certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置Domain names added to the SAN certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SubjectAltName Domain names added to the SAN certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取Certificate status. Valid values:
`applying`: Application in progress
`failed`: Application failed
`processing`: Deploying certificate
`deployed`: Certificate deployed
`disabled`: Certificate disabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Status Certificate status. Valid values:
`applying`: Application in progress
`failed`: Application failed
`processing`: Deploying certificate
`deployed`: Certificate deployed
`disabled`: Certificate disabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Certificate status. Valid values:
`applying`: Application in progress
`failed`: Application failed
`processing`: Deploying certificate
`deployed`: Certificate deployed
`disabled`: Certificate disabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Status Certificate status. Valid values:
`applying`: Application in progress
`failed`: Application failed
`processing`: Deploying certificate
`deployed`: Certificate deployed
`disabled`: Certificate disabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Returns a message to display failure causes when `Status=failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Message Returns a message to display failure causes when `Status=failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Returns a message to display failure causes when `Status=failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Message Returns a message to display failure causes when `Status=failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Server certificate ID, which is the ID of the default certificate. If you choose to upload an external certificate for SSL certificate management, a certificate ID will be generated.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Certificate alias
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Certificate type. Valid values:
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
                     * Time when the certificate takes effect
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * Certificate common name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_commonName;
                    bool m_commonNameHasBeenSet;

                    /**
                     * Domain names added to the SAN certificate
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * Certificate status. Valid values:
`applying`: Application in progress
`failed`: Application failed
`processing`: Deploying certificate
`deployed`: Certificate deployed
`disabled`: Certificate disabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Returns a message to display failure causes when `Status=failed`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DEFAULTSERVERCERTINFO_H_
