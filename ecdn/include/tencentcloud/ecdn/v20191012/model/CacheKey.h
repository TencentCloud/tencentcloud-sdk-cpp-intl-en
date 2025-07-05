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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_CACHEKEY_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_CACHEKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Caching configuration.
                */
                class CacheKey : public AbstractModel
                {
                public:
                    CacheKey();
                    ~CacheKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable full path cache. Valid values: on, off.
                     * @return FullUrlCache Whether to enable full path cache. Valid values: on, off.
                     * 
                     */
                    std::string GetFullUrlCache() const;

                    /**
                     * 设置Whether to enable full path cache. Valid values: on, off.
                     * @param _fullUrlCache Whether to enable full path cache. Valid values: on, off.
                     * 
                     */
                    void SetFullUrlCache(const std::string& _fullUrlCache);

                    /**
                     * 判断参数 FullUrlCache 是否已赋值
                     * @return FullUrlCache 是否已赋值
                     * 
                     */
                    bool FullUrlCacheHasBeenSet() const;

                private:

                    /**
                     * Whether to enable full path cache. Valid values: on, off.
                     */
                    std::string m_fullUrlCache;
                    bool m_fullUrlCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_CACHEKEY_H_
