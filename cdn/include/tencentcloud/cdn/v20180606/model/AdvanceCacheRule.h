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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCECACHERULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCECACHERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Advanced cache configuration rules
                */
                class AdvanceCacheRule : public AbstractModel
                {
                public:
                    AdvanceCacheRule();
                    ~AdvanceCacheRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`default`: the cache rules when the origin server has not returned max-age
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CacheType Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`default`: the cache rules when the origin server has not returned max-age
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCacheType() const;

                    /**
                     * 设置Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`default`: the cache rules when the origin server has not returned max-age
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CacheType Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`default`: the cache rules when the origin server has not returned max-age
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCacheType(const std::string& _cacheType);

                    /**
                     * 判断参数 CacheType 是否已赋值
                     * @return CacheType 是否已赋值
                     */
                    bool CacheTypeHasBeenSet() const;

                    /**
                     * 获取Content for each CacheType:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `default`, enter "no max-age".
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CacheContents Content for each CacheType:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `default`, enter "no max-age".
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> GetCacheContents() const;

                    /**
                     * 设置Content for each CacheType:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `default`, enter "no max-age".
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CacheContents Content for each CacheType:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `default`, enter "no max-age".
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCacheContents(const std::vector<std::string>& _cacheContents);

                    /**
                     * 判断参数 CacheContents 是否已赋值
                     * @return CacheContents 是否已赋值
                     */
                    bool CacheContentsHasBeenSet() const;

                    /**
                     * 获取Cache expiration time
Unit: second. The maximum value is 365 days.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CacheTime Cache expiration time
Unit: second. The maximum value is 365 days.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置Cache expiration time
Unit: second. The maximum value is 365 days.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CacheTime Cache expiration time
Unit: second. The maximum value is 365 days.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`default`: the cache rules when the origin server has not returned max-age
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_cacheType;
                    bool m_cacheTypeHasBeenSet;

                    /**
                     * Content for each CacheType:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `default`, enter "no max-age".
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_cacheContents;
                    bool m_cacheContentsHasBeenSet;

                    /**
                     * Cache expiration time
Unit: second. The maximum value is 365 days.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCECACHERULE_H_
