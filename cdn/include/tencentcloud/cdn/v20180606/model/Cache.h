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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/SimpleCache.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedCache.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Node cache expiration time configuration. There are two types of configuration:
+ Basic cache expiration rules configuration
+ Advanced cache expiration rules configuration
                */
                class Cache : public AbstractModel
                {
                public:
                    Cache();
                    ~Cache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Basic cache expiration time configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SimpleCache Basic cache expiration time configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SimpleCache GetSimpleCache() const;

                    /**
                     * 设置Basic cache expiration time configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SimpleCache Basic cache expiration time configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSimpleCache(const SimpleCache& _simpleCache);

                    /**
                     * 判断参数 SimpleCache 是否已赋值
                     * @return SimpleCache 是否已赋值
                     */
                    bool SimpleCacheHasBeenSet() const;

                    /**
                     * 获取Advanced cache expiration configuration (This feature is in beta and not generally available yet.)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdvancedCache Advanced cache expiration configuration (This feature is in beta and not generally available yet.)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AdvancedCache GetAdvancedCache() const;

                    /**
                     * 设置Advanced cache expiration configuration (This feature is in beta and not generally available yet.)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AdvancedCache Advanced cache expiration configuration (This feature is in beta and not generally available yet.)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAdvancedCache(const AdvancedCache& _advancedCache);

                    /**
                     * 判断参数 AdvancedCache 是否已赋值
                     * @return AdvancedCache 是否已赋值
                     */
                    bool AdvancedCacheHasBeenSet() const;

                private:

                    /**
                     * Basic cache expiration time configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SimpleCache m_simpleCache;
                    bool m_simpleCacheHasBeenSet;

                    /**
                     * Advanced cache expiration configuration (This feature is in beta and not generally available yet.)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AdvancedCache m_advancedCache;
                    bool m_advancedCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHE_H_
