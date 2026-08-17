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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeSSLStatus response structure.
                */
                class DescribeSSLStatusResponse : public AbstractModel
                {
                public:
                    DescribeSSLStatusResponse();
                    ~DescribeSSLStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>SSL certificate download address.</p>
                     * @return CertDownloadUrl <p>SSL certificate download address.</p>
                     * 
                     */
                    std::string GetCertDownloadUrl() const;

                    /**
                     * 判断参数 CertDownloadUrl 是否已赋值
                     * @return CertDownloadUrl 是否已赋值
                     * 
                     */
                    bool CertDownloadUrlHasBeenSet() const;

                    /**
                     * 获取<p>Certificate download link expiration time.</p>
                     * @return UrlExpiredTime <p>Certificate download link expiration time.</p>
                     * 
                     */
                    std::string GetUrlExpiredTime() const;

                    /**
                     * 判断参数 UrlExpiredTime 是否已赋值
                     * @return UrlExpiredTime 是否已赋值
                     * 
                     */
                    bool UrlExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>Flag whether the instance enables SSL feature.</p><ul><li>true: enable.</li><li>false: disable.</li></ul>
                     * @return SSLConfig <p>Flag whether the instance enables SSL feature.</p><ul><li>true: enable.</li><li>false: disable.</li></ul>
                     * 
                     */
                    bool GetSSLConfig() const;

                    /**
                     * 判断参数 SSLConfig 是否已赋值
                     * @return SSLConfig 是否已赋值
                     * 
                     */
                    bool SSLConfigHasBeenSet() const;

                    /**
                     * 获取<p>Flag whether the instance supports SSL feature.</p><ul><li>true: support.</li><li>false: unsupported.</li></ul>
                     * @return FeatureSupport <p>Flag whether the instance supports SSL feature.</p><ul><li>true: support.</li><li>false: unsupported.</li></ul>
                     * 
                     */
                    bool GetFeatureSupport() const;

                    /**
                     * 判断参数 FeatureSupport 是否已赋值
                     * @return FeatureSupport 是否已赋值
                     * 
                     */
                    bool FeatureSupportHasBeenSet() const;

                    /**
                     * 获取<p>Describes the SSL configuration status.</p><ul><li>1: Configuration in progress.</li><li>2: Configured successfully.</li></ul>
                     * @return Status <p>Describes the SSL configuration status.</p><ul><li>1: Configuration in progress.</li><li>2: Configured successfully.</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Address type.</p><p>Enumeration value:</p><ul><li>0: Unlimited.</li><li>1: Private IPv4 address.</li><li>2: Private IPv6 address.</li><li>3: Public network.</li><li>-1: Unspecified.</li></ul>
                     * @return AddressType <p>Address type.</p><p>Enumeration value:</p><ul><li>0: Unlimited.</li><li>1: Private IPv4 address.</li><li>2: Private IPv6 address.</li><li>3: Public network.</li><li>-1: Unspecified.</li></ul>
                     * 
                     */
                    int64_t GetAddressType() const;

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>Current encrypted connection address</p>
                     * @return EncryptAddress <p>Current encrypted connection address</p>
                     * 
                     */
                    std::string GetEncryptAddress() const;

                    /**
                     * 判断参数 EncryptAddress 是否已赋值
                     * @return EncryptAddress 是否已赋值
                     * 
                     */
                    bool EncryptAddressHasBeenSet() const;

                private:

                    /**
                     * <p>SSL certificate download address.</p>
                     */
                    std::string m_certDownloadUrl;
                    bool m_certDownloadUrlHasBeenSet;

                    /**
                     * <p>Certificate download link expiration time.</p>
                     */
                    std::string m_urlExpiredTime;
                    bool m_urlExpiredTimeHasBeenSet;

                    /**
                     * <p>Flag whether the instance enables SSL feature.</p><ul><li>true: enable.</li><li>false: disable.</li></ul>
                     */
                    bool m_sSLConfig;
                    bool m_sSLConfigHasBeenSet;

                    /**
                     * <p>Flag whether the instance supports SSL feature.</p><ul><li>true: support.</li><li>false: unsupported.</li></ul>
                     */
                    bool m_featureSupport;
                    bool m_featureSupportHasBeenSet;

                    /**
                     * <p>Describes the SSL configuration status.</p><ul><li>1: Configuration in progress.</li><li>2: Configured successfully.</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Address type.</p><p>Enumeration value:</p><ul><li>0: Unlimited.</li><li>1: Private IPv4 address.</li><li>2: Private IPv6 address.</li><li>3: Public network.</li><li>-1: Unspecified.</li></ul>
                     */
                    int64_t m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>Current encrypted connection address</p>
                     */
                    std::string m_encryptAddress;
                    bool m_encryptAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
