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
                     * 获取Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     * @return MaxAgeType Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     * 
                     */
                    std::string GetMaxAgeType() const;

                    /**
                     * 设置Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     * @param _maxAgeType Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
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
                     * 获取Matching content under the corresponding type of MaxAgeType: <li>Fill in * when all is used; </li> <li> Fill in suffix name when file is used, such as jpg, txt; </li> <li> Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li> <b>Note: all rules cannot be deleted. They follow the origin site by default and can be modified. </b>
                     * @return MaxAgeContents Matching content under the corresponding type of MaxAgeType: <li>Fill in * when all is used; </li> <li> Fill in suffix name when file is used, such as jpg, txt; </li> <li> Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li> <b>Note: all rules cannot be deleted. They follow the origin site by default and can be modified. </b>
                     * 
                     */
                    std::vector<std::string> GetMaxAgeContents() const;

                    /**
                     * 设置Matching content under the corresponding type of MaxAgeType: <li>Fill in * when all is used; </li> <li> Fill in suffix name when file is used, such as jpg, txt; </li> <li> Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li> <b>Note: all rules cannot be deleted. They follow the origin site by default and can be modified. </b>
                     * @param _maxAgeContents Matching content under the corresponding type of MaxAgeType: <li>Fill in * when all is used; </li> <li> Fill in suffix name when file is used, such as jpg, txt; </li> <li> Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li> <b>Note: all rules cannot be deleted. They follow the origin site by default and can be modified. </b>
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
                     * 获取MaxAge time setting, unit second; <b>Note: The time is 0, which means no caching. </b>
                     * @return MaxAgeTime MaxAge time setting, unit second; <b>Note: The time is 0, which means no caching. </b>
                     * 
                     */
                    uint64_t GetMaxAgeTime() const;

                    /**
                     * 设置MaxAge time setting, unit second; <b>Note: The time is 0, which means no caching. </b>
                     * @param _maxAgeTime MaxAge time setting, unit second; <b>Note: The time is 0, which means no caching. </b>
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
                     * 获取Whether to follow the origin server. Valid values: on and off. If it's on, MaxAgeTime is ignored.
                     * @return FollowOrigin Whether to follow the origin server. Valid values: on and off. If it's on, MaxAgeTime is ignored.
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置Whether to follow the origin server. Valid values: on and off. If it's on, MaxAgeTime is ignored.
                     * @param _followOrigin Whether to follow the origin server. Valid values: on and off. If it's on, MaxAgeTime is ignored.
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
                     * Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     */
                    std::string m_maxAgeType;
                    bool m_maxAgeTypeHasBeenSet;

                    /**
                     * Matching content under the corresponding type of MaxAgeType: <li>Fill in * when all is used; </li> <li> Fill in suffix name when file is used, such as jpg, txt; </li> <li> Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li> <b>Note: all rules cannot be deleted. They follow the origin site by default and can be modified. </b>
                     */
                    std::vector<std::string> m_maxAgeContents;
                    bool m_maxAgeContentsHasBeenSet;

                    /**
                     * MaxAge time setting, unit second; <b>Note: The time is 0, which means no caching. </b>
                     */
                    uint64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                    /**
                     * Whether to follow the origin server. Valid values: on and off. If it's on, MaxAgeTime is ignored.
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MAXAGERULE_H_
