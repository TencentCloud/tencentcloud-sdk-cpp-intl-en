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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHEKEY_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHEKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/QueryStringKey.h>
#include <tencentcloud/cdn/v20180606/model/CookieKey.h>
#include <tencentcloud/cdn/v20180606/model/HeaderKey.h>
#include <tencentcloud/cdn/v20180606/model/CacheTagKey.h>
#include <tencentcloud/cdn/v20180606/model/SchemeKey.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Cache key configuration (filter parameter configuration)
                */
                class CacheKey : public AbstractModel
                {
                public:
                    CacheKey();
                    ~CacheKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable full-path cache
on: enable full-path cache (i.e., disable parameter filter)
off: disable full-path cache (i.e., enable parameter filter)
                     * @return FullUrlCache Whether to enable full-path cache
on: enable full-path cache (i.e., disable parameter filter)
off: disable full-path cache (i.e., enable parameter filter)
                     */
                    std::string GetFullUrlCache() const;

                    /**
                     * 设置Whether to enable full-path cache
on: enable full-path cache (i.e., disable parameter filter)
off: disable full-path cache (i.e., enable parameter filter)
                     * @param FullUrlCache Whether to enable full-path cache
on: enable full-path cache (i.e., disable parameter filter)
off: disable full-path cache (i.e., enable parameter filter)
                     */
                    void SetFullUrlCache(const std::string& _fullUrlCache);

                    /**
                     * 判断参数 FullUrlCache 是否已赋值
                     * @return FullUrlCache 是否已赋值
                     */
                    bool FullUrlCacheHasBeenSet() const;

                    /**
                     * 获取Whether caches are case insensitive
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IgnoreCase Whether caches are case insensitive
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置Whether caches are case insensitive
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IgnoreCase Whether caches are case insensitive
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIgnoreCase(const std::string& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return QueryString Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    QueryStringKey GetQueryString() const;

                    /**
                     * 设置Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param QueryString Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetQueryString(const QueryStringKey& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Cookie contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Cookie Cookie contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CookieKey GetCookie() const;

                    /**
                     * 设置Cookie contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Cookie Cookie contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCookie(const CookieKey& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     */
                    bool CookieHasBeenSet() const;

                    /**
                     * 获取Request header contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Header Request header contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    HeaderKey GetHeader() const;

                    /**
                     * 设置Request header contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Header Request header contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeader(const HeaderKey& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取Custom string contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CacheTag Custom string contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CacheTagKey GetCacheTag() const;

                    /**
                     * 设置Custom string contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CacheTag Custom string contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCacheTag(const CacheTagKey& _cacheTag);

                    /**
                     * 判断参数 CacheTag 是否已赋值
                     * @return CacheTag 是否已赋值
                     */
                    bool CacheTagHasBeenSet() const;

                    /**
                     * 获取Request protocol contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Scheme Request protocol contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SchemeKey GetScheme() const;

                    /**
                     * 设置Request protocol contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Scheme Request protocol contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScheme(const SchemeKey& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     */
                    bool SchemeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable full-path cache
on: enable full-path cache (i.e., disable parameter filter)
off: disable full-path cache (i.e., enable parameter filter)
                     */
                    std::string m_fullUrlCache;
                    bool m_fullUrlCacheHasBeenSet;

                    /**
                     * Whether caches are case insensitive
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    QueryStringKey m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Cookie contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CookieKey m_cookie;
                    bool m_cookieHasBeenSet;

                    /**
                     * Request header contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    HeaderKey m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * Custom string contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CacheTagKey m_cacheTag;
                    bool m_cacheTagHasBeenSet;

                    /**
                     * Request protocol contained in `CacheKey`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SchemeKey m_scheme;
                    bool m_schemeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHEKEY_H_
