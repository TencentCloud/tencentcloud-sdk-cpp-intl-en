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
                * Cache key configuration.
                */
                class CacheKey : public AbstractModel
                {
                public:
                    CacheKey();
                    ~CacheKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable full path cache. Valid values:
<li>on: Turn on full path cache (that is, disable parameter ignoring);</li>
<li>off: Disable full path cache (parameter ignorable enabled).</li>
                     * @return FullUrlCache Whether to enable full path cache. Valid values:
<li>on: Turn on full path cache (that is, disable parameter ignoring);</li>
<li>off: Disable full path cache (parameter ignorable enabled).</li>
                     * 
                     */
                    std::string GetFullUrlCache() const;

                    /**
                     * 设置Whether to enable full path cache. Valid values:
<li>on: Turn on full path cache (that is, disable parameter ignoring);</li>
<li>off: Disable full path cache (parameter ignorable enabled).</li>
                     * @param _fullUrlCache Whether to enable full path cache. Valid values:
<li>on: Turn on full path cache (that is, disable parameter ignoring);</li>
<li>off: Disable full path cache (parameter ignorable enabled).</li>
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
                     * 获取Whether to ignore case-insensitive cache. Valid values:
<li>on: Ignore;</li>
<li>off: Do not ignore.</li>
                     * @return IgnoreCase Whether to ignore case-insensitive cache. Valid values:
<li>on: Ignore;</li>
<li>off: Do not ignore.</li>
                     * 
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置Whether to ignore case-insensitive cache. Valid values:
<li>on: Ignore;</li>
<li>off: Do not ignore.</li>
                     * @param _ignoreCase Whether to ignore case-insensitive cache. Valid values:
<li>on: Ignore;</li>
<li>off: Do not ignore.</li>
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
                     * 获取CacheKey contains request parameters.
                     * @return QueryString CacheKey contains request parameters.
                     * 
                     */
                    QueryString GetQueryString() const;

                    /**
                     * 设置CacheKey contains request parameters.
                     * @param _queryString CacheKey contains request parameters.
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
                     * Whether to enable full path cache. Valid values:
<li>on: Turn on full path cache (that is, disable parameter ignoring);</li>
<li>off: Disable full path cache (parameter ignorable enabled).</li>
                     */
                    std::string m_fullUrlCache;
                    bool m_fullUrlCacheHasBeenSet;

                    /**
                     * Whether to ignore case-insensitive cache. Valid values:
<li>on: Ignore;</li>
<li>off: Do not ignore.</li>
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * CacheKey contains request parameters.
                     */
                    QueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEY_H_
