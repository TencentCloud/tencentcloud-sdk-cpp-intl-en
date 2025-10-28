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
                * Browser cache rule configuration, which is used to set the default value of `MaxAge` and is disabled by default.
                */
                class MaxAge : public AbstractModel
                {
                public:
                    MaxAge();
                    ~MaxAge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to follow the origin server. Values:
<li>`on`: Follow the origin server and ignore the field MaxAgeTime;</li>
<li>`off`: Do not follow the origin server and apply the field MaxAgeTime.</li>
                     * @return FollowOrigin Whether to follow the origin server. Values:
<li>`on`: Follow the origin server and ignore the field MaxAgeTime;</li>
<li>`off`: Do not follow the origin server and apply the field MaxAgeTime.</li>
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置Whether to follow the origin server. Values:
<li>`on`: Follow the origin server and ignore the field MaxAgeTime;</li>
<li>`off`: Do not follow the origin server and apply the field MaxAgeTime.</li>
                     * @param _followOrigin Whether to follow the origin server. Values:
<li>`on`: Follow the origin server and ignore the field MaxAgeTime;</li>
<li>`off`: Do not follow the origin server and apply the field MaxAgeTime.</li>
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
                     * 获取Specifies the maximum amount of time (in seconds). Value range: 0 to 315360000.
Note: The value `0` means not to cache.
                     * @return MaxAgeTime Specifies the maximum amount of time (in seconds). Value range: 0 to 315360000.
Note: The value `0` means not to cache.
                     * 
                     */
                    int64_t GetMaxAgeTime() const;

                    /**
                     * 设置Specifies the maximum amount of time (in seconds). Value range: 0 to 315360000.
Note: The value `0` means not to cache.
                     * @param _maxAgeTime Specifies the maximum amount of time (in seconds). Value range: 0 to 315360000.
Note: The value `0` means not to cache.
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
                     * Whether to follow the origin server. Values:
<li>`on`: Follow the origin server and ignore the field MaxAgeTime;</li>
<li>`off`: Do not follow the origin server and apply the field MaxAgeTime.</li>
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * Specifies the maximum amount of time (in seconds). Value range: 0 to 315360000.
Note: The value `0` means not to cache.
                     */
                    int64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGE_H_
