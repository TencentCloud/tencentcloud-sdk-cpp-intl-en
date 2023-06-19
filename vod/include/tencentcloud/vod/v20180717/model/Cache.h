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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CACHE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RuleCache.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Node cache expiration time configuration.
                */
                class Cache : public AbstractModel
                {
                public:
                    Cache();
                    ~Cache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Advanced path cache configuration.
                     * @return RuleCache Advanced path cache configuration.
                     * 
                     */
                    std::vector<RuleCache> GetRuleCache() const;

                    /**
                     * 设置Advanced path cache configuration.
                     * @param _ruleCache Advanced path cache configuration.
                     * 
                     */
                    void SetRuleCache(const std::vector<RuleCache>& _ruleCache);

                    /**
                     * 判断参数 RuleCache 是否已赋值
                     * @return RuleCache 是否已赋值
                     * 
                     */
                    bool RuleCacheHasBeenSet() const;

                private:

                    /**
                     * Advanced path cache configuration.
                     */
                    std::vector<RuleCache> m_ruleCache;
                    bool m_ruleCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CACHE_H_
