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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGFOLLOWORIGIN_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGFOLLOWORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HeuristicCache.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取
                     * @return Switch 
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置
                     * @param _switch 
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
                     * @return HeuristicCache Heuristic cache configuration
                     * 
                     */
                    HeuristicCache GetHeuristicCache() const;

                    /**
                     * 设置Heuristic cache configuration
                     * @param _heuristicCache Heuristic cache configuration
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
                     * 
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Heuristic cache configuration
                     */
                    HeuristicCache m_heuristicCache;
                    bool m_heuristicCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGFOLLOWORIGIN_H_
