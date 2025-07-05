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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HEURISTICCACHECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HEURISTICCACHECONFIG_H_

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
                * Heuristic cache configuration
                */
                class HeuristicCacheConfig : public AbstractModel
                {
                public:
                    HeuristicCacheConfig();
                    ~HeuristicCacheConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Heuristic custom time cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * @return HeuristicCacheTimeSwitch Heuristic custom time cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetHeuristicCacheTimeSwitch() const;

                    /**
                     * 设置Heuristic custom time cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * @param _heuristicCacheTimeSwitch Heuristic custom time cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
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
                     * 获取Unit: seconds.
                     * @return HeuristicCacheTime Unit: seconds.
                     * 
                     */
                    uint64_t GetHeuristicCacheTime() const;

                    /**
                     * 设置Unit: seconds.
                     * @param _heuristicCacheTime Unit: seconds.
                     * 
                     */
                    void SetHeuristicCacheTime(const uint64_t& _heuristicCacheTime);

                    /**
                     * 判断参数 HeuristicCacheTime 是否已赋值
                     * @return HeuristicCacheTime 是否已赋值
                     * 
                     */
                    bool HeuristicCacheTimeHasBeenSet() const;

                private:

                    /**
                     * Heuristic custom time cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_heuristicCacheTimeSwitch;
                    bool m_heuristicCacheTimeSwitchHasBeenSet;

                    /**
                     * Unit: seconds.
                     */
                    uint64_t m_heuristicCacheTime;
                    bool m_heuristicCacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HEURISTICCACHECONFIG_H_
