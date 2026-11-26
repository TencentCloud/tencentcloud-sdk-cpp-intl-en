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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Browser cache rule configuration, used to set the default MaxAge. Disabled by default.
                */
                class MaxAge : public AbstractModel
                {
                public:
                    MaxAge();
                    ~MaxAge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to follow the origin site, with values:
<li>on: follow the origin site, ignore the MaxAge time setting;</li>
<li>off: Do not follow the origin site. Use the MaxAge time setting.</li>
                     * @return FollowOrigin Whether to follow the origin site, with values:
<li>on: follow the origin site, ignore the MaxAge time setting;</li>
<li>off: Do not follow the origin site. Use the MaxAge time setting.</li>
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置Whether to follow the origin site, with values:
<li>on: follow the origin site, ignore the MaxAge time setting;</li>
<li>off: Do not follow the origin site. Use the MaxAge time setting.</li>
                     * @param _followOrigin Whether to follow the origin site, with values:
<li>on: follow the origin site, ignore the MaxAge time setting;</li>
<li>off: Do not follow the origin site. Use the MaxAge time setting.</li>
                     * 
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                    /**
                     * 获取MaxAge time setting, in seconds. Value range: 0–315360000.
Note: If the time is 0, no cache is used.
                     * @return MaxAgeTime MaxAge time setting, in seconds. Value range: 0–315360000.
Note: If the time is 0, no cache is used.
                     * 
                     */
                    int64_t GetMaxAgeTime() const;

                    /**
                     * 设置MaxAge time setting, in seconds. Value range: 0–315360000.
Note: If the time is 0, no cache is used.
                     * @param _maxAgeTime MaxAge time setting, in seconds. Value range: 0–315360000.
Note: If the time is 0, no cache is used.
                     * 
                     */
                    void SetMaxAgeTime(const int64_t& _maxAgeTime);

                    /**
                     * 判断参数 MaxAgeTime 是否已赋值
                     * @return MaxAgeTime 是否已赋值
                     * 
                     */
                    bool MaxAgeTimeHasBeenSet() const;

                private:

                    /**
                     * Whether to follow the origin site, with values:
<li>on: follow the origin site, ignore the MaxAge time setting;</li>
<li>off: Do not follow the origin site. Use the MaxAge time setting.</li>
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * MaxAge time setting, in seconds. Value range: 0–315360000.
Note: If the time is 0, no cache is used.
                     */
                    int64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGE_H_
