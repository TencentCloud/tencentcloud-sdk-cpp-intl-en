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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEDOMAINCERTBINDINGS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEDOMAINCERTBINDINGS_H_

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
                * The domain and certificate information returned by `DescribeLiveDomainCertBindings` and `DescribeLiveDomainCertBindingsGray`.
                */
                class LiveDomainCertBindings : public AbstractModel
                {
                public:
                    LiveDomainCertBindings();
                    ~LiveDomainCertBindings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain name.
                     * @return DomainName The domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The domain name.
                     * @param _domainName The domain name.
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
                     * 获取The remarks for the certificate. This parameter is the same as `CertName`.
                     * @return CertificateAlias The remarks for the certificate. This parameter is the same as `CertName`.
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置The remarks for the certificate. This parameter is the same as `CertName`.
                     * @param _certificateAlias The remarks for the certificate. This parameter is the same as `CertName`.
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取The certificate type.
0: Self-owned certificate
1: Tencent Cloud-hosted certificate
                     * @return CertType The certificate type.
0: Self-owned certificate
1: Tencent Cloud-hosted certificate
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置The certificate type.
0: Self-owned certificate
1: Tencent Cloud-hosted certificate
                     * @param _certType The certificate type.
0: Self-owned certificate
1: Tencent Cloud-hosted certificate
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取Whether HTTPS is enabled.
1: Enabled
0: Disabled
                     * @return Status Whether HTTPS is enabled.
1: Enabled
0: Disabled
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Whether HTTPS is enabled.
1: Enabled
0: Disabled
                     * @param _status Whether HTTPS is enabled.
1: Enabled
0: Disabled
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The certificate expiration time.
Note: Beijing time (UTC+8) is used.
                     * @return CertExpireTime The certificate expiration time.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 设置The certificate expiration time.
Note: Beijing time (UTC+8) is used.
                     * @param _certExpireTime The certificate expiration time.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    void SetCertExpireTime(const std::string& _certExpireTime);

                    /**
                     * 判断参数 CertExpireTime 是否已赋值
                     * @return CertExpireTime 是否已赋值
                     * 
                     */
                    bool CertExpireTimeHasBeenSet() const;

                    /**
                     * 获取The certificate ID.
                     * @return CertId The certificate ID.
                     * 
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置The certificate ID.
                     * @param _certId The certificate ID.
                     * 
                     */
                    void SetCertId(const int64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取The SSL certificate ID assigned by Tencent Cloud.
                     * @return CloudCertId The SSL certificate ID assigned by Tencent Cloud.
                     * 
                     */
                    std::string GetCloudCertId() const;

                    /**
                     * 设置The SSL certificate ID assigned by Tencent Cloud.
                     * @param _cloudCertId The SSL certificate ID assigned by Tencent Cloud.
                     * 
                     */
                    void SetCloudCertId(const std::string& _cloudCertId);

                    /**
                     * 判断参数 CloudCertId 是否已赋值
                     * @return CloudCertId 是否已赋值
                     * 
                     */
                    bool CloudCertIdHasBeenSet() const;

                    /**
                     * 获取The last updated time.
Note: Beijing time (UTC+8) is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime The last updated time.
Note: Beijing time (UTC+8) is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last updated time.
Note: Beijing time (UTC+8) is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime The last updated time.
Note: Beijing time (UTC+8) is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * The domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The remarks for the certificate. This parameter is the same as `CertName`.
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * The certificate type.
0: Self-owned certificate
1: Tencent Cloud-hosted certificate
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * Whether HTTPS is enabled.
1: Enabled
0: Disabled
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The certificate expiration time.
Note: Beijing time (UTC+8) is used.
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * The certificate ID.
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * The SSL certificate ID assigned by Tencent Cloud.
                     */
                    std::string m_cloudCertId;
                    bool m_cloudCertIdHasBeenSet;

                    /**
                     * The last updated time.
Note: Beijing time (UTC+8) is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEDOMAINCERTBINDINGS_H_
