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
                     * 获取Certificate download address
                     * @return CertDownloadUrl Certificate download address
                     */
                    std::string GetCertDownloadUrl() const;

                    /**
                     * 判断参数 CertDownloadUrl 是否已赋值
                     * @return CertDownloadUrl 是否已赋值
                     */
                    bool CertDownloadUrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the certificate download address
                     * @return UrlExpiredTime Expiration time of the certificate download address
                     */
                    std::string GetUrlExpiredTime() const;

                    /**
                     * 判断参数 UrlExpiredTime 是否已赋值
                     * @return UrlExpiredTime 是否已赋值
                     */
                    bool UrlExpiredTimeHasBeenSet() const;

                    /**
                     * 获取SSL configuration status of an instance. Valid values: `true` (enable), `false` (disable).
                     * @return SSLConfig SSL configuration status of an instance. Valid values: `true` (enable), `false` (disable).
                     */
                    bool GetSSLConfig() const;

                    /**
                     * 判断参数 SSLConfig 是否已赋值
                     * @return SSLConfig 是否已赋值
                     */
                    bool SSLConfigHasBeenSet() const;

                    /**
                     * 获取Whether the instance supports SSL. Valid values: `true` (Yes. When minor version is upgraded.), `false` (No).
                     * @return FeatureSupport Whether the instance supports SSL. Valid values: `true` (Yes. When minor version is upgraded.), `false` (No).
                     */
                    bool GetFeatureSupport() const;

                    /**
                     * 判断参数 FeatureSupport 是否已赋值
                     * @return FeatureSupport 是否已赋值
                     */
                    bool FeatureSupportHasBeenSet() const;

                    /**
                     * 获取SSL configuration status. Valid values: `1`(Configuring), `2` (Configured).
                     * @return Status SSL configuration status. Valid values: `1`(Configuring), `2` (Configured).
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Certificate download address
                     */
                    std::string m_certDownloadUrl;
                    bool m_certDownloadUrlHasBeenSet;

                    /**
                     * Expiration time of the certificate download address
                     */
                    std::string m_urlExpiredTime;
                    bool m_urlExpiredTimeHasBeenSet;

                    /**
                     * SSL configuration status of an instance. Valid values: `true` (enable), `false` (disable).
                     */
                    bool m_sSLConfig;
                    bool m_sSLConfigHasBeenSet;

                    /**
                     * Whether the instance supports SSL. Valid values: `true` (Yes. When minor version is upgraded.), `false` (No).
                     */
                    bool m_featureSupport;
                    bool m_featureSupportHasBeenSet;

                    /**
                     * SSL configuration status. Valid values: `1`(Configuring), `2` (Configured).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
