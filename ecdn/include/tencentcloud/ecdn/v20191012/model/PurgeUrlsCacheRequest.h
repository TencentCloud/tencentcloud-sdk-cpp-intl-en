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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_PURGEURLSCACHEREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_PURGEURLSCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
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
                     * 获取List of URLs to be purged. The protocol header must be included.
                     * @return Urls List of URLs to be purged. The protocol header must be included.
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置List of URLs to be purged. The protocol header must be included.
                     * @param _urls List of URLs to be purged. The protocol header must be included.
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                private:

                    /**
                     * List of URLs to be purged. The protocol header must be included.
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_PURGEURLSCACHEREQUEST_H_
