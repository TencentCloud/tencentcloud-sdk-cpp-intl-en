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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CACHEKEY_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CACHEKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/QueryString.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Cache key configuration
                */
                class CacheKey : public AbstractModel
                {
                public:
                    CacheKey();
                    ~CacheKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String)
`off`: Disable full-path cache (i.e., enable Ignore Query String)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FullUrlCache Specifies whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String)
`off`: Disable full-path cache (i.e., enable Ignore Query String)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFullUrlCache() const;

                    /**
                     * 设置Specifies whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String)
`off`: Disable full-path cache (i.e., enable Ignore Query String)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _fullUrlCache Specifies whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String)
`off`: Disable full-path cache (i.e., enable Ignore Query String)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFullUrlCache(const std::string& _fullUrlCache);

                    /**
                     * 判断参数 FullUrlCache 是否已赋值
                     * @return FullUrlCache 是否已赋值
                     * 
                     */
                    bool FullUrlCacheHasBeenSet() const;

                    /**
                     * 获取Specifies whether the cache key is case sensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IgnoreCase Specifies whether the cache key is case sensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置Specifies whether the cache key is case sensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ignoreCase Specifies whether the cache key is case sensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIgnoreCase(const std::string& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     * 
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return QueryString Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    QueryString GetQueryString() const;

                    /**
                     * 设置Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _queryString Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQueryString(const QueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                private:

                    /**
                     * Specifies whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String)
`off`: Disable full-path cache (i.e., enable Ignore Query String)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_fullUrlCache;
                    bool m_fullUrlCacheHasBeenSet;

                    /**
                     * Specifies whether the cache key is case sensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    QueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CACHEKEY_H_
