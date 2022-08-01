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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_STATUSCODECACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_STATUSCODECACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/StatusCodeCacheRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Status code cache expiration configuration. 404 status codes are cached for 10 seconds by default
                */
                class StatusCodeCache : public AbstractModel
                {
                public:
                    StatusCodeCache();
                    ~StatusCodeCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status code cache expiration configuration switch
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Switch Status code cache expiration configuration switch
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Status code cache expiration configuration switch
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Switch Status code cache expiration configuration switch
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Status code cache expiration rules details
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CacheRules Status code cache expiration rules details
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<StatusCodeCacheRule> GetCacheRules() const;

                    /**
                     * 设置Status code cache expiration rules details
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CacheRules Status code cache expiration rules details
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCacheRules(const std::vector<StatusCodeCacheRule>& _cacheRules);

                    /**
                     * 判断参数 CacheRules 是否已赋值
                     * @return CacheRules 是否已赋值
                     */
                    bool CacheRulesHasBeenSet() const;

                private:

                    /**
                     * Status code cache expiration configuration switch
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Status code cache expiration rules details
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<StatusCodeCacheRule> m_cacheRules;
                    bool m_cacheRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_STATUSCODECACHE_H_
