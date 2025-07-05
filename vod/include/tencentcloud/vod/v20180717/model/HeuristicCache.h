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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HEURISTICCACHE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HEURISTICCACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HeuristicCacheConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取Heuristic cache configuration switch, the values u200bu200bare: 
<li>on: on; </li>
<li>off: off. </li>
                     * @return Switch Heuristic cache configuration switch, the values u200bu200bare: 
<li>on: on; </li>
<li>off: off. </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Heuristic cache configuration switch, the values u200bu200bare: 
<li>on: on; </li>
<li>off: off. </li>
                     * @param _switch Heuristic cache configuration switch, the values u200bu200bare: 
<li>on: on; </li>
<li>off: off. </li>
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
                     * 获取Custom heuristic cache time configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CacheConfig Custom heuristic cache time configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    HeuristicCacheConfig GetCacheConfig() const;

                    /**
                     * 设置Custom heuristic cache time configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cacheConfig Custom heuristic cache time configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCacheConfig(const HeuristicCacheConfig& _cacheConfig);

                    /**
                     * 判断参数 CacheConfig 是否已赋值
                     * @return CacheConfig 是否已赋值
                     * 
                     */
                    bool CacheConfigHasBeenSet() const;

                private:

                    /**
                     * Heuristic cache configuration switch, the values u200bu200bare: 
<li>on: on; </li>
<li>off: off. </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Custom heuristic cache time configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    HeuristicCacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HEURISTICCACHE_H_
