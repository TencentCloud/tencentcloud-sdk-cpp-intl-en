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
                     * 获取Download address for SSL certificate
                     * @return CertDownloadUrl Download address for SSL certificate
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
                     * 获取Expiration time of the certificate download address
                     * @return UrlExpiredTime Expiration time of the certificate download address
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
                     * 获取Whether the SSL is enabled for the identified instance.
- `true`: Enabled
- `false`: Disabled
                     * @return SSLConfig Whether the SSL is enabled for the identified instance.
- `true`: Enabled
- `false`: Disabled
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
                     * 获取Whether SSL is supported for the identified instance.
-`true`: Supported
-`false`: Not supported
                     * @return FeatureSupport Whether SSL is supported for the identified instance.
-`true`: Supported
-`false`: Not supported
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
                     * 获取Status of SSL configuration
- `1`: Configuring
- `2`: Configured successfully
                     * @return Status Status of SSL configuration
- `1`: Configuring
- `2`: Configured successfully
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Download address for SSL certificate
                     */
                    std::string m_certDownloadUrl;
                    bool m_certDownloadUrlHasBeenSet;

                    /**
                     * Expiration time of the certificate download address
                     */
                    std::string m_urlExpiredTime;
                    bool m_urlExpiredTimeHasBeenSet;

                    /**
                     * Whether the SSL is enabled for the identified instance.
- `true`: Enabled
- `false`: Disabled
                     */
                    bool m_sSLConfig;
                    bool m_sSLConfigHasBeenSet;

                    /**
                     * Whether SSL is supported for the identified instance.
-`true`: Supported
-`false`: Not supported
                     */
                    bool m_featureSupport;
                    bool m_featureSupportHasBeenSet;

                    /**
                     * Status of SSL configuration
- `1`: Configuring
- `2`: Configured successfully
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
