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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/HeuristicCache.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Path cache configuration follows the origin server configuration.
                */
                class CacheConfigFollowOrigin : public AbstractModel
                {
                public:
                    CacheConfigFollowOrigin();
                    ~CacheConfigFollowOrigin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
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
                     * 获取Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return HeuristicCache Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    HeuristicCache GetHeuristicCache() const;

                    /**
                     * 设置Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _heuristicCache Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHeuristicCache(const HeuristicCache& _heuristicCache);

                    /**
                     * 判断参数 HeuristicCache 是否已赋值
                     * @return HeuristicCache 是否已赋值
                     * 
                     */
                    bool HeuristicCacheHasBeenSet() const;

                private:

                    /**
                     * Whether to follow the origin configuration for path cache. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Heuristic cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    HeuristicCache m_heuristicCache;
                    bool m_heuristicCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_
