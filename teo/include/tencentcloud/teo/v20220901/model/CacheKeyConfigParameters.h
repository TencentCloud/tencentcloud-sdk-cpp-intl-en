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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCONFIGPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCONFIGPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyQueryString.h>


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
                class CacheKeyConfigParameters : public AbstractModel
                {
                public:
                    CacheKeyConfigParameters();
                    ~CacheKeyConfigParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable full-path cache. values:.
<Li>`On`: enable full-path cache (i.e., disable ignore query string).</li>.
<Li>`Off`: disable full-path cache (i.e., enable ignore query string).</li>.
                     * @return FullURLCache Whether to enable full-path cache. values:.
<Li>`On`: enable full-path cache (i.e., disable ignore query string).</li>.
<Li>`Off`: disable full-path cache (i.e., enable ignore query string).</li>.
                     * 
                     */
                    std::string GetFullURLCache() const;

                    /**
                     * 设置Whether to enable full-path cache. values:.
<Li>`On`: enable full-path cache (i.e., disable ignore query string).</li>.
<Li>`Off`: disable full-path cache (i.e., enable ignore query string).</li>.
                     * @param _fullURLCache Whether to enable full-path cache. values:.
<Li>`On`: enable full-path cache (i.e., disable ignore query string).</li>.
<Li>`Off`: disable full-path cache (i.e., enable ignore query string).</li>.
                     * 
                     */
                    void SetFullURLCache(const std::string& _fullURLCache);

                    /**
                     * 判断参数 FullURLCache 是否已赋值
                     * @return FullURLCache 是否已赋值
                     * 
                     */
                    bool FullURLCacheHasBeenSet() const;

                    /**
                     * 获取Whether to ignore case in the cache key. values:.
<Li>`On`: ignore;</li>.
<Li>`Off`: not ignore.</li>.
                     * @return IgnoreCase Whether to ignore case in the cache key. values:.
<Li>`On`: ignore;</li>.
<Li>`Off`: not ignore.</li>.
                     * 
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置Whether to ignore case in the cache key. values:.
<Li>`On`: ignore;</li>.
<Li>`Off`: not ignore.</li>.
                     * @param _ignoreCase Whether to ignore case in the cache key. values:.
<Li>`On`: ignore;</li>.
<Li>`Off`: not ignore.</li>.
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
                     * 获取Query string retention configuration parameter. this field and fullurlcache must be set simultaneously, but cannot both be `on`.
                     * @return QueryString Query string retention configuration parameter. this field and fullurlcache must be set simultaneously, but cannot both be `on`.
                     * 
                     */
                    CacheKeyQueryString GetQueryString() const;

                    /**
                     * 设置Query string retention configuration parameter. this field and fullurlcache must be set simultaneously, but cannot both be `on`.
                     * @param _queryString Query string retention configuration parameter. this field and fullurlcache must be set simultaneously, but cannot both be `on`.
                     * 
                     */
                    void SetQueryString(const CacheKeyQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                private:

                    /**
                     * Whether to enable full-path cache. values:.
<Li>`On`: enable full-path cache (i.e., disable ignore query string).</li>.
<Li>`Off`: disable full-path cache (i.e., enable ignore query string).</li>.
                     */
                    std::string m_fullURLCache;
                    bool m_fullURLCacheHasBeenSet;

                    /**
                     * Whether to ignore case in the cache key. values:.
<Li>`On`: ignore;</li>.
<Li>`Off`: not ignore.</li>.
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * Query string retention configuration parameter. this field and fullurlcache must be set simultaneously, but cannot both be `on`.
                     */
                    CacheKeyQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCONFIGPARAMETERS_H_
