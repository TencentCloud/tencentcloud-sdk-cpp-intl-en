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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTBASICINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Basic information of the certificate
                */
                class CertBasicInfo : public AbstractModel
                {
                public:
                    CertBasicInfo();
                    ~CertBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Issuer.
                     * @return Issuer Issuer.
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置Issuer.
                     * @param _issuer Issuer.
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取Issued to.
                     * @return Subject Issued to.
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Issued to.
                     * @param _subject Issued to.
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
                     * 获取Certificate fingerprint.
                     * @return Fingerprint Certificate fingerprint.
                     * 
                     */
                    std::string GetFingerprint() const;

                    /**
                     * 设置Certificate fingerprint.
                     * @param _fingerprint Certificate fingerprint.
                     * 
                     */
                    void SetFingerprint(const std::string& _fingerprint);

                    /**
                     * 判断参数 Fingerprint 是否已赋值
                     * @return Fingerprint 是否已赋值
                     * 
                     */
                    bool FingerprintHasBeenSet() const;

                    /**
                     * 获取Certificate valid period start time.
                     * @return ValidFrom Certificate valid period start time.
                     * 
                     */
                    std::string GetValidFrom() const;

                    /**
                     * 设置Certificate valid period start time.
                     * @param _validFrom Certificate valid period start time.
                     * 
                     */
                    void SetValidFrom(const std::string& _validFrom);

                    /**
                     * 判断参数 ValidFrom 是否已赋值
                     * @return ValidFrom 是否已赋值
                     * 
                     */
                    bool ValidFromHasBeenSet() const;

                    /**
                     * 获取Certificate valid period end time.
                     * @return ValidTo Certificate valid period end time.
                     * 
                     */
                    std::string GetValidTo() const;

                    /**
                     * 设置Certificate valid period end time.
                     * @param _validTo Certificate valid period end time.
                     * 
                     */
                    void SetValidTo(const std::string& _validTo);

                    /**
                     * 判断参数 ValidTo 是否已赋值
                     * @return ValidTo 是否已赋值
                     * 
                     */
                    bool ValidToHasBeenSet() const;

                private:

                    /**
                     * Issuer.
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * Issued to.
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * Certificate fingerprint.
                     */
                    std::string m_fingerprint;
                    bool m_fingerprintHasBeenSet;

                    /**
                     * Certificate valid period start time.
                     */
                    std::string m_validFrom;
                    bool m_validFromHasBeenSet;

                    /**
                     * Certificate valid period end time.
                     */
                    std::string m_validTo;
                    bool m_validToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTBASICINFO_H_
