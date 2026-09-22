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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MAXAGERULE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MAXAGERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MagAge rule configuration
                */
                class MaxAgeRule : public AbstractModel
                {
                public:
                    MaxAgeRule();
                    ~MaxAgeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Rule type:</p><li>all: takes effect for all files;</li><li>file: takes effect for a specified file suffix;</li><li>directory: takes effect for a specified path;</li><li>path: takes effect for an absolute path.</li>
                     * @return MaxAgeType <p>Rule type:</p><li>all: takes effect for all files;</li><li>file: takes effect for a specified file suffix;</li><li>directory: takes effect for a specified path;</li><li>path: takes effect for an absolute path.</li>
                     * 
                     */
                    std::string GetMaxAgeType() const;

                    /**
                     * 设置<p>Rule type:</p><li>all: takes effect for all files;</li><li>file: takes effect for a specified file suffix;</li><li>directory: takes effect for a specified path;</li><li>path: takes effect for an absolute path.</li>
                     * @param _maxAgeType <p>Rule type:</p><li>all: takes effect for all files;</li><li>file: takes effect for a specified file suffix;</li><li>directory: takes effect for a specified path;</li><li>path: takes effect for an absolute path.</li>
                     * 
                     */
                    void SetMaxAgeType(const std::string& _maxAgeType);

                    /**
                     * 判断参数 MaxAgeType 是否已赋值
                     * @return MaxAgeType 是否已赋值
                     * 
                     */
                    bool MaxAgeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Matching content for the corresponding type of MaxAgeType:</p><li>For all, fill in *;</li><li>For file, fill in the extension, such as jpg or txt;</li><li>For directory, fill in the path, such as /xxx/test/;</li><li>For path, fill in the absolute path, such as /xxx/test.html.</li><b>Note: The all rule is non-deletable, follows the origin site by default, and is modifiable.</b>
                     * @return MaxAgeContents <p>Matching content for the corresponding type of MaxAgeType:</p><li>For all, fill in *;</li><li>For file, fill in the extension, such as jpg or txt;</li><li>For directory, fill in the path, such as /xxx/test/;</li><li>For path, fill in the absolute path, such as /xxx/test.html.</li><b>Note: The all rule is non-deletable, follows the origin site by default, and is modifiable.</b>
                     * 
                     */
                    std::vector<std::string> GetMaxAgeContents() const;

                    /**
                     * 设置<p>Matching content for the corresponding type of MaxAgeType:</p><li>For all, fill in *;</li><li>For file, fill in the extension, such as jpg or txt;</li><li>For directory, fill in the path, such as /xxx/test/;</li><li>For path, fill in the absolute path, such as /xxx/test.html.</li><b>Note: The all rule is non-deletable, follows the origin site by default, and is modifiable.</b>
                     * @param _maxAgeContents <p>Matching content for the corresponding type of MaxAgeType:</p><li>For all, fill in *;</li><li>For file, fill in the extension, such as jpg or txt;</li><li>For directory, fill in the path, such as /xxx/test/;</li><li>For path, fill in the absolute path, such as /xxx/test.html.</li><b>Note: The all rule is non-deletable, follows the origin site by default, and is modifiable.</b>
                     * 
                     */
                    void SetMaxAgeContents(const std::vector<std::string>& _maxAgeContents);

                    /**
                     * 判断参数 MaxAgeContents 是否已赋值
                     * @return MaxAgeContents 是否已赋值
                     * 
                     */
                    bool MaxAgeContentsHasBeenSet() const;

                    /**
                     * 获取<p>MaxAge time setting, in seconds; <br><b>Note: 0 means no cache.</b></p>
                     * @return MaxAgeTime <p>MaxAge time setting, in seconds; <br><b>Note: 0 means no cache.</b></p>
                     * 
                     */
                    uint64_t GetMaxAgeTime() const;

                    /**
                     * 设置<p>MaxAge time setting, in seconds; <br><b>Note: 0 means no cache.</b></p>
                     * @param _maxAgeTime <p>MaxAge time setting, in seconds; <br><b>Note: 0 means no cache.</b></p>
                     * 
                     */
                    void SetMaxAgeTime(const uint64_t& _maxAgeTime);

                    /**
                     * 判断参数 MaxAgeTime 是否已赋值
                     * @return MaxAgeTime 是否已赋值
                     * 
                     */
                    bool MaxAgeTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to follow the origin site. Valid values: on, off. When enabled, the time setting is ignored.</p>
                     * @return FollowOrigin <p>Whether to follow the origin site. Valid values: on, off. When enabled, the time setting is ignored.</p>
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置<p>Whether to follow the origin site. Valid values: on, off. When enabled, the time setting is ignored.</p>
                     * @param _followOrigin <p>Whether to follow the origin site. Valid values: on, off. When enabled, the time setting is ignored.</p>
                     * 
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                private:

                    /**
                     * <p>Rule type:</p><li>all: takes effect for all files;</li><li>file: takes effect for a specified file suffix;</li><li>directory: takes effect for a specified path;</li><li>path: takes effect for an absolute path.</li>
                     */
                    std::string m_maxAgeType;
                    bool m_maxAgeTypeHasBeenSet;

                    /**
                     * <p>Matching content for the corresponding type of MaxAgeType:</p><li>For all, fill in *;</li><li>For file, fill in the extension, such as jpg or txt;</li><li>For directory, fill in the path, such as /xxx/test/;</li><li>For path, fill in the absolute path, such as /xxx/test.html.</li><b>Note: The all rule is non-deletable, follows the origin site by default, and is modifiable.</b>
                     */
                    std::vector<std::string> m_maxAgeContents;
                    bool m_maxAgeContentsHasBeenSet;

                    /**
                     * <p>MaxAge time setting, in seconds; <br><b>Note: 0 means no cache.</b></p>
                     */
                    uint64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                    /**
                     * <p>Whether to follow the origin site. Valid values: on, off. When enabled, the time setting is ignored.</p>
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MAXAGERULE_H_
