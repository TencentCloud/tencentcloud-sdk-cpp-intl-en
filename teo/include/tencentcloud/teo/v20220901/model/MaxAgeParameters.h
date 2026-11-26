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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGEPARAMETERS_H_

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
                * Browser cache TTL config.
                */
                class MaxAgeParameters : public AbstractModel
                {
                public:
                    MaxAgeParameters();
                    ~MaxAgeParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Follow the origin server Cache-Control switch. Valid values:
<li>on: follow the origin site and ignore the CacheTime setting;</li>
<li>off: Do not follow the origin site. Use the CacheTime time setting.</li>
                     * @return FollowOrigin Follow the origin server Cache-Control switch. Valid values:
<li>on: follow the origin site and ignore the CacheTime setting;</li>
<li>off: Do not follow the origin site. Use the CacheTime time setting.</li>
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置Follow the origin server Cache-Control switch. Valid values:
<li>on: follow the origin site and ignore the CacheTime setting;</li>
<li>off: Do not follow the origin site. Use the CacheTime time setting.</li>
                     * @param _followOrigin Follow the origin server Cache-Control switch. Valid values:
<li>on: follow the origin site and ignore the CacheTime setting;</li>
<li>off: Do not follow the origin site. Use the CacheTime time setting.</li>
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
                     * 获取Custom cache time value in seconds. Value range: 0–315360000.<br>Note: When FollowOrigin is off, it means not to follow the origin site and use CacheTime to set the cache time. Otherwise, this field is ineffective.
                     * @return CacheTime Custom cache time value in seconds. Value range: 0–315360000.<br>Note: When FollowOrigin is off, it means not to follow the origin site and use CacheTime to set the cache time. Otherwise, this field is ineffective.
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置Custom cache time value in seconds. Value range: 0–315360000.<br>Note: When FollowOrigin is off, it means not to follow the origin site and use CacheTime to set the cache time. Otherwise, this field is ineffective.
                     * @param _cacheTime Custom cache time value in seconds. Value range: 0–315360000.<br>Note: When FollowOrigin is off, it means not to follow the origin site and use CacheTime to set the cache time. Otherwise, this field is ineffective.
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
                     * Follow the origin server Cache-Control switch. Valid values:
<li>on: follow the origin site and ignore the CacheTime setting;</li>
<li>off: Do not follow the origin site. Use the CacheTime time setting.</li>
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * Custom cache time value in seconds. Value range: 0–315360000.<br>Note: When FollowOrigin is off, it means not to follow the origin site and use CacheTime to set the cache time. Otherwise, this field is ineffective.
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGEPARAMETERS_H_
