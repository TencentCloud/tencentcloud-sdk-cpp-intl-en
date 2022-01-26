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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAINCERTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAINCERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Domain name certificate information
                */
                class DomainCertInfo : public AbstractModel
                {
                public:
                    DomainCertInfo();
                    ~DomainCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate ID.
                     * @return CertId Certificate ID.
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置Certificate ID.
                     * @param CertId Certificate ID.
                     */
                    void SetCertId(const int64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Certificate name.
                     * @return CertName Certificate name.
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Certificate name.
                     * @param CertName Certificate name.
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取Description.
                     * @return Description Description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param Description Description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Creation time in UTC format.
                     * @return CreateTime Creation time in UTC format.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time in UTC format.
                     * @param CreateTime Creation time in UTC format.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Certificate content.
                     * @return HttpsCrt Certificate content.
                     */
                    std::string GetHttpsCrt() const;

                    /**
                     * 设置Certificate content.
                     * @param HttpsCrt Certificate content.
                     */
                    void SetHttpsCrt(const std::string& _httpsCrt);

                    /**
                     * 判断参数 HttpsCrt 是否已赋值
                     * @return HttpsCrt 是否已赋值
                     */
                    bool HttpsCrtHasBeenSet() const;

                    /**
                     * 获取Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate.
                     * @return CertType Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate.
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate.
                     * @param CertType Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate.
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取Certificate expiration time in UTC format.
                     * @return CertExpireTime Certificate expiration time in UTC format.
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 设置Certificate expiration time in UTC format.
                     * @param CertExpireTime Certificate expiration time in UTC format.
                     */
                    void SetCertExpireTime(const std::string& _certExpireTime);

                    /**
                     * 判断参数 CertExpireTime 是否已赋值
                     * @return CertExpireTime 是否已赋值
                     */
                    bool CertExpireTimeHasBeenSet() const;

                    /**
                     * 获取Domain name that uses this certificate.
                     * @return DomainName Domain name that uses this certificate.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name that uses this certificate.
                     * @param DomainName Domain name that uses this certificate.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Certificate status.
                     * @return Status Certificate status.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Certificate status.
                     * @param Status Certificate status.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取List of domain names in the certificate.
["*.x.com"] for example.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CertDomains List of domain names in the certificate.
["*.x.com"] for example.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetCertDomains() const;

                    /**
                     * 设置List of domain names in the certificate.
["*.x.com"] for example.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param CertDomains List of domain names in the certificate.
["*.x.com"] for example.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCertDomains(const std::vector<std::string>& _certDomains);

                    /**
                     * 判断参数 CertDomains 是否已赋值
                     * @return CertDomains 是否已赋值
                     */
                    bool CertDomainsHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud SSL certificate ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CloudCertId Tencent Cloud SSL certificate ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCloudCertId() const;

                    /**
                     * 设置Tencent Cloud SSL certificate ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param CloudCertId Tencent Cloud SSL certificate ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCloudCertId(const std::string& _cloudCertId);

                    /**
                     * 判断参数 CloudCertId 是否已赋值
                     * @return CloudCertId 是否已赋值
                     */
                    bool CloudCertIdHasBeenSet() const;

                private:

                    /**
                     * Certificate ID.
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Certificate name.
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time in UTC format.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Certificate content.
                     */
                    std::string m_httpsCrt;
                    bool m_httpsCrtHasBeenSet;

                    /**
                     * Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate.
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * Certificate expiration time in UTC format.
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * Domain name that uses this certificate.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Certificate status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of domain names in the certificate.
["*.x.com"] for example.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_certDomains;
                    bool m_certDomainsHasBeenSet;

                    /**
                     * Tencent Cloud SSL certificate ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cloudCertId;
                    bool m_cloudCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAINCERTINFO_H_
