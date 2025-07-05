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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CACHEINFO_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CACHEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Cache information
                */
                class CacheInfo : public AbstractModel
                {
                public:
                    CacheInfo();
                    ~CacheInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache cleanup time (hours)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CacheClearDelay Cache cleanup time (hours)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCacheClearDelay() const;

                    /**
                     * 设置Cache cleanup time (hours)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cacheClearDelay Cache cleanup time (hours)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCacheClearDelay(const uint64_t& _cacheClearDelay);

                    /**
                     * 判断参数 CacheClearDelay 是否已赋值
                     * @return CacheClearDelay 是否已赋值
                     * 
                     */
                    bool CacheClearDelayHasBeenSet() const;

                    /**
                     * 获取Cache cleanup schedule time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CacheClearTime Cache cleanup schedule time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCacheClearTime() const;

                    /**
                     * 设置Cache cleanup schedule time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cacheClearTime Cache cleanup schedule time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCacheClearTime(const std::string& _cacheClearTime);

                    /**
                     * 判断参数 CacheClearTime 是否已赋值
                     * @return CacheClearTime 是否已赋值
                     * 
                     */
                    bool CacheClearTimeHasBeenSet() const;

                    /**
                     * 获取Whether the cache has been cleaned up
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CacheCleared Whether the cache has been cleaned up
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCacheCleared() const;

                    /**
                     * 设置Whether the cache has been cleaned up
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cacheCleared Whether the cache has been cleaned up
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCacheCleared(const bool& _cacheCleared);

                    /**
                     * 判断参数 CacheCleared 是否已赋值
                     * @return CacheCleared 是否已赋值
                     * 
                     */
                    bool CacheClearedHasBeenSet() const;

                private:

                    /**
                     * Cache cleanup time (hours)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cacheClearDelay;
                    bool m_cacheClearDelayHasBeenSet;

                    /**
                     * Cache cleanup schedule time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cacheClearTime;
                    bool m_cacheClearTimeHasBeenSet;

                    /**
                     * Whether the cache has been cleaned up
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_cacheCleared;
                    bool m_cacheClearedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CACHEINFO_H_
