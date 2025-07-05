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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ENABLECACHESREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ENABLECACHESREQUEST_H_

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
                * EnableCaches request structure.
                */
                class EnableCachesRequest : public AbstractModel
                {
                public:
                    EnableCachesRequest();
                    ~EnableCachesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of unblocked URLs
                     * @return Urls List of unblocked URLs
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置List of unblocked URLs
                     * @param _urls List of unblocked URLs
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
                     * 获取URL blocking date
                     * @return Date URL blocking date
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置URL blocking date
                     * @param _date URL blocking date
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * List of unblocked URLs
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * URL blocking date
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ENABLECACHESREQUEST_H_
