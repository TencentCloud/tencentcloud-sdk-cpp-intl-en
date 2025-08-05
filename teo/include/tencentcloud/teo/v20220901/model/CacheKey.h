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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/QueryString.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The cache key configuration.
                */
                class CacheKey : public AbstractModel
                {
                public:
                    CacheKey();
                    ~CacheKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable full path cache. valid values:.
<li>`on`: enable full-path cache (i.e., disable ignore query string).</li>.
<li>`off`: disable full-path cache (i.e., enable parameter ignore).</li>.
                     * @return FullUrlCache Whether to enable full path cache. valid values:.
<li>`on`: enable full-path cache (i.e., disable ignore query string).</li>.
<li>`off`: disable full-path cache (i.e., enable parameter ignore).</li>.
                     * 
                     */
                    std::string GetFullUrlCache() const;

                    /**
                     * 设置Whether to enable full path cache. valid values:.
<li>`on`: enable full-path cache (i.e., disable ignore query string).</li>.
<li>`off`: disable full-path cache (i.e., enable parameter ignore).</li>.
                     * @param _fullUrlCache Whether to enable full path cache. valid values:.
<li>`on`: enable full-path cache (i.e., disable ignore query string).</li>.
<li>`off`: disable full-path cache (i.e., enable parameter ignore).</li>.
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
                     * 获取Specifies whether to use case-insensitive cache. valid values:.
<li>`on`: ignore</li>.
<li>`off`: not ignore</li>.
                     * @return IgnoreCase Specifies whether to use case-insensitive cache. valid values:.
<li>`on`: ignore</li>.
<li>`off`: not ignore</li>.
                     * 
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置Specifies whether to use case-insensitive cache. valid values:.
<li>`on`: ignore</li>.
<li>`off`: not ignore</li>.
                     * @param _ignoreCase Specifies whether to use case-insensitive cache. valid values:.
<li>`on`: ignore</li>.
<li>`off`: not ignore</li>.
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
                     * 获取Request parameter contained in `CacheKey`. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return QueryString Request parameter contained in `CacheKey`. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    QueryString GetQueryString() const;

                    /**
                     * 设置Request parameter contained in `CacheKey`. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _queryString Request parameter contained in `CacheKey`. 
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * Whether to enable full path cache. valid values:.
<li>`on`: enable full-path cache (i.e., disable ignore query string).</li>.
<li>`off`: disable full-path cache (i.e., enable parameter ignore).</li>.
                     */
                    std::string m_fullUrlCache;
                    bool m_fullUrlCacheHasBeenSet;

                    /**
                     * Specifies whether to use case-insensitive cache. valid values:.
<li>`on`: ignore</li>.
<li>`off`: not ignore</li>.
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * Request parameter contained in `CacheKey`. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    QueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEY_H_
