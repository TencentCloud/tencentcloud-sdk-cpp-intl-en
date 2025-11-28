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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CERTIFICATEINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CERTIFICATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Pulsar cluster TLS certificate information.
                */
                class CertificateInfo : public AbstractModel
                {
                public:
                    CertificateInfo();
                    ~CertificateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the id in SSL certificate management.
                     * @return CertificateId Specifies the id in SSL certificate management.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Specifies the id in SSL certificate management.
                     * @param _certificateId Specifies the id in SSL certificate management.
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

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
                     * 获取Specifies the domain name bound to the certificate.
                     * @return DomainName Specifies the domain name bound to the certificate.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Specifies the domain name bound to the certificate.
                     * @param _domainName Specifies the domain name bound to the certificate.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Certificate status: 0 indicates issued.
Expiring soon.
Not activated.
3. indicates expired.
Indicates the unavailability.
                     * @return Status Certificate status: 0 indicates issued.
Expiring soon.
Not activated.
3. indicates expired.
Indicates the unavailability.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Certificate status: 0 indicates issued.
Expiring soon.
Not activated.
3. indicates expired.
Indicates the unavailability.
                     * @param _status Certificate status: 0 indicates issued.
Expiring soon.
Not activated.
3. indicates expired.
Indicates the unavailability.
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
                     * 获取Certificate type: 0: root certificate, 1: server certificate.
                     * @return Type Certificate type: 0: root certificate, 1: server certificate.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Certificate type: 0: root certificate, 1: server certificate.
                     * @param _type Certificate type: 0: root certificate, 1: server certificate.
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
                     * 获取TencentCloud: SSL certificate. Default: TDMQ official Default certificate.
                     * @return Origin TencentCloud: SSL certificate. Default: TDMQ official Default certificate.
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置TencentCloud: SSL certificate. Default: TDMQ official Default certificate.
                     * @param _origin TencentCloud: SSL certificate. Default: TDMQ official Default certificate.
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Certificate addition/update time.
                     * @return ModifyTime Certificate addition/update time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Certificate addition/update time.
                     * @param _modifyTime Certificate addition/update time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Specifies the id in SSL certificate management.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Certificate expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Specifies the domain name bound to the certificate.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Certificate status: 0 indicates issued.
Expiring soon.
Not activated.
3. indicates expired.
Indicates the unavailability.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Certificate type: 0: root certificate, 1: server certificate.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * TencentCloud: SSL certificate. Default: TDMQ official Default certificate.
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Certificate addition/update time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CERTIFICATEINFO_H_
