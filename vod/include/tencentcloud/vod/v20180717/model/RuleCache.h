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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_RULECACHE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_RULECACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RuleCacheConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class RuleCache : public AbstractModel
                {
                public:
                    RuleCache();
                    ~RuleCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return RuleType 
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置
                     * @param _ruleType 
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RulePaths 
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置
                     * @param _rulePaths 
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取
                     * @return CacheConfig 
                     * 
                     */
                    RuleCacheConfig GetCacheConfig() const;

                    /**
                     * 设置
                     * @param _cacheConfig 
                     * 
                     */
                    void SetCacheConfig(const RuleCacheConfig& _cacheConfig);

                    /**
                     * 判断参数 CacheConfig 是否已赋值
                     * @return CacheConfig 是否已赋值
                     * 
                     */
                    bool CacheConfigHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * 
                     */
                    RuleCacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RULECACHE_H_
