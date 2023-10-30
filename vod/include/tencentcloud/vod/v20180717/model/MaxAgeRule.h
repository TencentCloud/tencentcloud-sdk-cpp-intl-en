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
                     * 获取
                     * @return MaxAgeType 
                     * 
                     */
                    std::string GetMaxAgeType() const;

                    /**
                     * 设置
                     * @param _maxAgeType 
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
                     * 获取
                     * @return MaxAgeContents 
                     * 
                     */
                    std::vector<std::string> GetMaxAgeContents() const;

                    /**
                     * 设置
                     * @param _maxAgeContents 
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
                     * 获取
                     * @return MaxAgeTime 
                     * 
                     */
                    uint64_t GetMaxAgeTime() const;

                    /**
                     * 设置
                     * @param _maxAgeTime 
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
                     * 
                     */
                    std::string m_maxAgeType;
                    bool m_maxAgeTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_maxAgeContents;
                    bool m_maxAgeContentsHasBeenSet;

                    /**
                     * 
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
