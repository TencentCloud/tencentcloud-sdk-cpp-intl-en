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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HEURISTICCACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HEURISTICCACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CacheConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Heuristic cache configuration
                */
                class HeuristicCache : public AbstractModel
                {
                public:
                    HeuristicCache();
                    ~HeuristicCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable heuristic caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return Switch Whether to enable heuristic caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable heuristic caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _switch Whether to enable heuristic caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Heuristic cache validity configuration
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @return CacheConfig Heuristic cache validity configuration
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置Heuristic cache validity configuration
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * @param _cacheConfig Heuristic cache validity configuration
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCacheConfig(const CacheConfig& _cacheConfig);

                    /**
                     * 判断参数 CacheConfig 是否已赋值
                     * @return CacheConfig 是否已赋值
                     * 
                     */
                    bool CacheConfigHasBeenSet() const;

                private:

                    /**
                     * Whether to enable heuristic caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Heuristic cache validity configuration
Note: This field may return·`null`, indicating that no valid values can be obtained.
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HEURISTICCACHE_H_
