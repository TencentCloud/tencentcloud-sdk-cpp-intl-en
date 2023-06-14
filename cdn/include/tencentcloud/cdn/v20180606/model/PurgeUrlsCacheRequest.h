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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PURGEURLSCACHEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PURGEURLSCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * PurgeUrlsCache request structure.
                */
                class PurgeUrlsCacheRequest : public AbstractModel
                {
                public:
                    PurgeUrlsCacheRequest();
                    ~PurgeUrlsCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     * @return Urls List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     * @param _urls List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取Purging region
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified purging region should match the domain name acceleration region.
                     * @return Area Purging region
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified purging region should match the domain name acceleration region.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Purging region
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified purging region should match the domain name acceleration region.
                     * @param _area Purging region
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified purging region should match the domain name acceleration region.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Whether to encode Chinese characters for purge
                     * @return UrlEncode Whether to encode Chinese characters for purge
                     * 
                     */
                    bool GetUrlEncode() const;

                    /**
                     * 设置Whether to encode Chinese characters for purge
                     * @param _urlEncode Whether to encode Chinese characters for purge
                     * 
                     */
                    void SetUrlEncode(const bool& _urlEncode);

                    /**
                     * 判断参数 UrlEncode 是否已赋值
                     * @return UrlEncode 是否已赋值
                     * 
                     */
                    bool UrlEncodeHasBeenSet() const;

                private:

                    /**
                     * List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * Purging region
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified purging region should match the domain name acceleration region.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Whether to encode Chinese characters for purge
                     */
                    bool m_urlEncode;
                    bool m_urlEncodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PURGEURLSCACHEREQUEST_H_
