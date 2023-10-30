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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_USERAGENTFILTER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_USERAGENTFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/UserAgentFilterRule.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * UserAgent:blacklist/whitelist configuration
                */
                class UserAgentFilter : public AbstractModel
                {
                public:
                    UserAgentFilter();
                    ~UserAgentFilter() = default;
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
                     * 获取UA blacklist/whitelist effect rule list
                     * @return FilterRules UA blacklist/whitelist effect rule list
                     * 
                     */
                    std::vector<UserAgentFilterRule> GetFilterRules() const;

                    /**
                     * 设置UA blacklist/whitelist effect rule list
                     * @param _filterRules UA blacklist/whitelist effect rule list
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
                     * 
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * UA blacklist/whitelist effect rule list
                     */
                    std::vector<UserAgentFilterRule> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_USERAGENTFILTER_H_
