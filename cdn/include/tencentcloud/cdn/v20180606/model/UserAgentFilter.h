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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_USERAGENTFILTER_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_USERAGENTFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/UserAgentFilterRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * `UserAgent` blacklist/whitelist configuration
                */
                class UserAgentFilter : public AbstractModel
                {
                public:
                    UserAgentFilter();
                    ~UserAgentFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Switch Switch. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _switch Switch. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取UA blacklist/whitelist effect rule list
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FilterRules UA blacklist/whitelist effect rule list
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<UserAgentFilterRule> GetFilterRules() const;

                    /**
                     * 设置UA blacklist/whitelist effect rule list
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _filterRules UA blacklist/whitelist effect rule list
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFilterRules(const std::vector<UserAgentFilterRule>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     * 
                     */
                    bool FilterRulesHasBeenSet() const;

                private:

                    /**
                     * Switch. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * UA blacklist/whitelist effect rule list
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<UserAgentFilterRule> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_USERAGENTFILTER_H_
