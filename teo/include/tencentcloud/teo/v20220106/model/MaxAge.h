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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MAXAGE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MAXAGE_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Browser cache rule configuration. 
                */
                class MaxAge : public AbstractModel
                {
                public:
                    MaxAge();
                    ~MaxAge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the max age of the cache (in seconds). The maximum value is 365 days.
Note: the value `0` means not to cache.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return MaxAgeTime Specifies the max age of the cache (in seconds). The maximum value is 365 days.
Note: the value `0` means not to cache.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetMaxAgeTime() const;

                    /**
                     * 设置Specifies the max age of the cache (in seconds). The maximum value is 365 days.
Note: the value `0` means not to cache.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param MaxAgeTime Specifies the max age of the cache (in seconds). The maximum value is 365 days.
Note: the value `0` means not to cache.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetMaxAgeTime(const int64_t& _maxAgeTime);

                    /**
                     * 判断参数 MaxAgeTime 是否已赋值
                     * @return MaxAgeTime 是否已赋值
                     */
                    bool MaxAgeTimeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to follow the max cache age of the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FollowOrigin Specifies whether to follow the max cache age of the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置Specifies whether to follow the max cache age of the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param FollowOrigin Specifies whether to follow the max cache age of the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     */
                    bool FollowOriginHasBeenSet() const;

                private:

                    /**
                     * Specifies the max age of the cache (in seconds). The maximum value is 365 days.
Note: the value `0` means not to cache.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                    /**
                     * Specifies whether to follow the max cache age of the origin server. Valid values: `on` and `off`. If it's on, `MaxAgeTime` is ignored.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MAXAGE_H_
