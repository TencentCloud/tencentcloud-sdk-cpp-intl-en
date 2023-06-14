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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CERTINFO_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * X.509 certificate information
                */
                class CertInfo : public AbstractModel
                {
                public:
                    CertInfo();
                    ~CertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate name
                     * @return CertName Certificate name
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Certificate name
                     * @param _certName Certificate name
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
                     * 获取Hex sequence number of a certificate
                     * @return CertSN Hex sequence number of a certificate
                     * 
                     */
                    std::string GetCertSN() const;

                    /**
                     * 设置Hex sequence number of a certificate
                     * @param _certSN Hex sequence number of a certificate
                     * 
                     */
                    void SetCertSN(const std::string& _certSN);

                    /**
                     * 判断参数 CertSN 是否已赋值
                     * @return CertSN 是否已赋值
                     * 
                     */
                    bool CertSNHasBeenSet() const;

                    /**
                     * 获取Certificate issuer
                     * @return IssuerName Certificate issuer
                     * 
                     */
                    std::string GetIssuerName() const;

                    /**
                     * 设置Certificate issuer
                     * @param _issuerName Certificate issuer
                     * 
                     */
                    void SetIssuerName(const std::string& _issuerName);

                    /**
                     * 判断参数 IssuerName 是否已赋值
                     * @return IssuerName 是否已赋值
                     * 
                     */
                    bool IssuerNameHasBeenSet() const;

                    /**
                     * 获取Certificate subject
                     * @return Subject Certificate subject
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Certificate subject
                     * @param _subject Certificate subject
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取Certificate creation time (timestamp in milliseconds)
                     * @return CreateTime Certificate creation time (timestamp in milliseconds)
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Certificate creation time (timestamp in milliseconds)
                     * @param _createTime Certificate creation time (timestamp in milliseconds)
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Certificate effective time (timestamp in milliseconds)
                     * @return EffectiveTime Certificate effective time (timestamp in milliseconds)
                     * 
                     */
                    uint64_t GetEffectiveTime() const;

                    /**
                     * 设置Certificate effective time (timestamp in milliseconds)
                     * @param _effectiveTime Certificate effective time (timestamp in milliseconds)
                     * 
                     */
                    void SetEffectiveTime(const uint64_t& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取Certificate expiration time (timestamp in milliseconds)
                     * @return ExpireTime Certificate expiration time (timestamp in milliseconds)
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Certificate expiration time (timestamp in milliseconds)
                     * @param _expireTime Certificate expiration time (timestamp in milliseconds)
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取X.509 certificate content
                     * @return CertText X.509 certificate content
                     * 
                     */
                    std::string GetCertText() const;

                    /**
                     * 设置X.509 certificate content
                     * @param _certText X.509 certificate content
                     * 
                     */
                    void SetCertText(const std::string& _certText);

                    /**
                     * 判断参数 CertText 是否已赋值
                     * @return CertText 是否已赋值
                     * 
                     */
                    bool CertTextHasBeenSet() const;

                private:

                    /**
                     * Certificate name
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Hex sequence number of a certificate
                     */
                    std::string m_certSN;
                    bool m_certSNHasBeenSet;

                    /**
                     * Certificate issuer
                     */
                    std::string m_issuerName;
                    bool m_issuerNameHasBeenSet;

                    /**
                     * Certificate subject
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * Certificate creation time (timestamp in milliseconds)
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Certificate effective time (timestamp in milliseconds)
                     */
                    uint64_t m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * Certificate expiration time (timestamp in milliseconds)
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * X.509 certificate content
                     */
                    std::string m_certText;
                    bool m_certTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CERTINFO_H_
