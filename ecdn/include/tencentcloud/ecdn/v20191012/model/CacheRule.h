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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_CACHERULE_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_CACHERULE_H_

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
                * Caching configuration rule.
                */
                class CacheRule : public AbstractModel
                {
                public:
                    CacheRule();
                    ~CacheRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache type. Valid values: all (all files), file (extension type), directory (directory), path (full path), index (homepage).
                     * @return CacheType Cache type. Valid values: all (all files), file (extension type), directory (directory), path (full path), index (homepage).
                     * 
                     */
                    std::string GetCacheType() const;

                    /**
                     * 设置Cache type. Valid values: all (all files), file (extension type), directory (directory), path (full path), index (homepage).
                     * @param _cacheType Cache type. Valid values: all (all files), file (extension type), directory (directory), path (full path), index (homepage).
                     * 
                     */
                    void SetCacheType(const std::string& _cacheType);

                    /**
                     * 判断参数 CacheType 是否已赋值
                     * @return CacheType 是否已赋值
                     * 
                     */
                    bool CacheTypeHasBeenSet() const;

                    /**
                     * 获取Cached content list.
                     * @return CacheContents Cached content list.
                     * 
                     */
                    std::vector<std::string> GetCacheContents() const;

                    /**
                     * 设置Cached content list.
                     * @param _cacheContents Cached content list.
                     * 
                     */
                    void SetCacheContents(const std::vector<std::string>& _cacheContents);

                    /**
                     * 判断参数 CacheContents 是否已赋值
                     * @return CacheContents 是否已赋值
                     * 
                     */
                    bool CacheContentsHasBeenSet() const;

                    /**
                     * 获取Cache time in seconds.
                     * @return CacheTime Cache time in seconds.
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置Cache time in seconds.
                     * @param _cacheTime Cache time in seconds.
                     * 
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * Cache type. Valid values: all (all files), file (extension type), directory (directory), path (full path), index (homepage).
                     */
                    std::string m_cacheType;
                    bool m_cacheTypeHasBeenSet;

                    /**
                     * Cached content list.
                     */
                    std::vector<std::string> m_cacheContents;
                    bool m_cacheContentsHasBeenSet;

                    /**
                     * Cache time in seconds.
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_CACHERULE_H_
