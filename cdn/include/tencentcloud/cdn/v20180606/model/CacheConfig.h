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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIG_H_

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
                * Heuristic cache validity configuration
                */
                class CacheConfig : public AbstractModel
                {
                public:
                    CacheConfig();
                    ~CacheConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable heuristic cache validity. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return HeuristicCacheTimeSwitch Whether to enable heuristic cache validity. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHeuristicCacheTimeSwitch() const;

                    /**
                     * 设置Whether to enable heuristic cache validity. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _heuristicCacheTimeSwitch Whether to enable heuristic cache validity. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeuristicCacheTimeSwitch(const std::string& _heuristicCacheTimeSwitch);

                    /**
                     * 判断参数 HeuristicCacheTimeSwitch 是否已赋值
                     * @return HeuristicCacheTimeSwitch 是否已赋值
                     * 
                     */
                    bool HeuristicCacheTimeSwitchHasBeenSet() const;

                    /**
                     * 获取Unit: Second
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return HeuristicCacheTime Unit: Second
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHeuristicCacheTime() const;

                    /**
                     * 设置Unit: Second
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _heuristicCacheTime Unit: Second
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeuristicCacheTime(const int64_t& _heuristicCacheTime);

                    /**
                     * 判断参数 HeuristicCacheTime 是否已赋值
                     * @return HeuristicCacheTime 是否已赋值
                     * 
                     */
                    bool HeuristicCacheTimeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable heuristic cache validity. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    std::string m_heuristicCacheTimeSwitch;
                    bool m_heuristicCacheTimeSwitchHasBeenSet;

                    /**
                     * Unit: Second
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_heuristicCacheTime;
                    bool m_heuristicCacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIG_H_
