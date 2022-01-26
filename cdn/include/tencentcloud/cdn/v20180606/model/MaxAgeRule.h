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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGERULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGERULE_H_

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
                * MaxAge rules configuration
                */
                class MaxAgeRule : public AbstractModel
                {
                public:
                    MaxAgeRule();
                    ~MaxAgeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule types:
`all`: effective for all files.
`file`: effective for specified file suffixes.
`directory`: effective for specified paths.
`path`: effective for specified absolute paths.
`index`: effective for specified homepages.
                     * @return MaxAgeType Rule types:
`all`: effective for all files.
`file`: effective for specified file suffixes.
`directory`: effective for specified paths.
`path`: effective for specified absolute paths.
`index`: effective for specified homepages.
                     */
                    std::string GetMaxAgeType() const;

                    /**
                     * 设置Rule types:
`all`: effective for all files.
`file`: effective for specified file suffixes.
`directory`: effective for specified paths.
`path`: effective for specified absolute paths.
`index`: effective for specified homepages.
                     * @param MaxAgeType Rule types:
`all`: effective for all files.
`file`: effective for specified file suffixes.
`directory`: effective for specified paths.
`path`: effective for specified absolute paths.
`index`: effective for specified homepages.
                     */
                    void SetMaxAgeType(const std::string& _maxAgeType);

                    /**
                     * 判断参数 MaxAgeType 是否已赋值
                     * @return MaxAgeType 是否已赋值
                     */
                    bool MaxAgeTypeHasBeenSet() const;

                    /**
                     * 获取Content for each `MaxAgeType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Note: the rule `all` cannot be deleted. It follows origin by default and can be modified.
                     * @return MaxAgeContents Content for each `MaxAgeType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Note: the rule `all` cannot be deleted. It follows origin by default and can be modified.
                     */
                    std::vector<std::string> GetMaxAgeContents() const;

                    /**
                     * 设置Content for each `MaxAgeType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Note: the rule `all` cannot be deleted. It follows origin by default and can be modified.
                     * @param MaxAgeContents Content for each `MaxAgeType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Note: the rule `all` cannot be deleted. It follows origin by default and can be modified.
                     */
                    void SetMaxAgeContents(const std::vector<std::string>& _maxAgeContents);

                    /**
                     * 判断参数 MaxAgeContents 是否已赋值
                     * @return MaxAgeContents 是否已赋值
                     */
                    bool MaxAgeContentsHasBeenSet() const;

                    /**
                     * 获取MaxAge time (in seconds)
Note: the value `0` means not to cache.
                     * @return MaxAgeTime MaxAge time (in seconds)
Note: the value `0` means not to cache.
                     */
                    int64_t GetMaxAgeTime() const;

                    /**
                     * 设置MaxAge time (in seconds)
Note: the value `0` means not to cache.
                     * @param MaxAgeTime MaxAge time (in seconds)
Note: the value `0` means not to cache.
                     */
                    void SetMaxAgeTime(const int64_t& _maxAgeTime);

                    /**
                     * 判断参数 MaxAgeTime 是否已赋值
                     * @return MaxAgeTime 是否已赋值
                     */
                    bool MaxAgeTimeHasBeenSet() const;

                    /**
                     * 获取Whether to follow the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FollowOrigin Whether to follow the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置Whether to follow the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FollowOrigin Whether to follow the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     */
                    bool FollowOriginHasBeenSet() const;

                private:

                    /**
                     * Rule types:
`all`: effective for all files.
`file`: effective for specified file suffixes.
`directory`: effective for specified paths.
`path`: effective for specified absolute paths.
`index`: effective for specified homepages.
                     */
                    std::string m_maxAgeType;
                    bool m_maxAgeTypeHasBeenSet;

                    /**
                     * Content for each `MaxAgeType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Note: the rule `all` cannot be deleted. It follows origin by default and can be modified.
                     */
                    std::vector<std::string> m_maxAgeContents;
                    bool m_maxAgeContentsHasBeenSet;

                    /**
                     * MaxAge time (in seconds)
Note: the value `0` means not to cache.
                     */
                    int64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                    /**
                     * Whether to follow the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGERULE_H_
