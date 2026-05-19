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
                     * 获取<p>Certificate expiration time.<li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li></p><p>Parameter format: YYYY-MM-DDThh:mm:ss+08:00</p>
                     * @return CertExpireTime <p>Certificate expiration time.<li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li></p><p>Parameter format: YYYY-MM-DDThh:mm:ss+08:00</p>
                     * 
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 设置<p>Certificate expiration time.<li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li></p><p>Parameter format: YYYY-MM-DDThh:mm:ss+08:00</p>
                     * @param _certExpireTime <p>Certificate expiration time.<li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li></p><p>Parameter format: YYYY-MM-DDThh:mm:ss+08:00</p>
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
                     * 获取<p>Certificate ID in Tencent Cloud SSL product.</p>
                     * @return CloudCertId <p>Certificate ID in Tencent Cloud SSL product.</p>
                     * 
                     */
                    std::string GetCloudCertId() const;

                    /**
                     * 设置<p>Certificate ID in Tencent Cloud SSL product.</p>
                     * @param _cloudCertId <p>Certificate ID in Tencent Cloud SSL product.</p>
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
                     * <p>Certificate expiration time.<li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li></p><p>Parameter format: YYYY-MM-DDThh:mm:ss+08:00</p>
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * <p>Certificate ID in Tencent Cloud SSL product.</p>
                     */
                    std::string m_cloudCertId;
                    bool m_cloudCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINHTTPSCONFIG_H_
