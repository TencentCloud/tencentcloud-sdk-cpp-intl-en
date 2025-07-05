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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINHTTPSCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINHTTPSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * HTTPS configuration information of the domain name
                */
                class DomainHTTPSConfig : public AbstractModel
                {
                public:
                    DomainHTTPSConfig();
                    ~DomainHTTPSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time when the certificate expires
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
                     * @return CertExpireTime Time when the certificate expires
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
                     * 
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 设置Time when the certificate expires
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
                     * @param _certExpireTime Time when the certificate expires
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
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
                     * 获取Certificate ID in Tencent Cloud SSL product.
                     * @return CloudCertId Certificate ID in Tencent Cloud SSL product.
                     * 
                     */
                    std::string GetCloudCertId() const;

                    /**
                     * 设置Certificate ID in Tencent Cloud SSL product.
                     * @param _cloudCertId Certificate ID in Tencent Cloud SSL product.
                     * 
                     */
                    void SetCloudCertId(const std::string& _cloudCertId);

                    /**
                     * 判断参数 CloudCertId 是否已赋值
                     * @return CloudCertId 是否已赋值
                     * 
                     */
                    bool CloudCertIdHasBeenSet() const;

                private:

                    /**
                     * Time when the certificate expires
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * Certificate ID in Tencent Cloud SSL product.
                     */
                    std::string m_cloudCertId;
                    bool m_cloudCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINHTTPSCONFIG_H_
