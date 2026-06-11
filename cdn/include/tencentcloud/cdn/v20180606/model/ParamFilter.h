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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PARAMFILTER_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PARAMFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ParamFilterRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Parameter blocklist.
                */
                class ParamFilter : public AbstractModel
                {
                public:
                    ParamFilter();
                    ~ParamFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the blocklist parameter switch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Switch Specifies the blocklist parameter switch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Specifies the blocklist parameter switch.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _switch Specifies the blocklist parameter switch.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the blocklist rule parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FilterRules Specifies the blocklist rule parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ParamFilterRule> GetFilterRules() const;

                    /**
                     * 设置Specifies the blocklist rule parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _filterRules Specifies the blocklist rule parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFilterRules(const std::vector<ParamFilterRule>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     * 
                     */
                    bool FilterRulesHasBeenSet() const;

                private:

                    /**
                     * Specifies the blocklist parameter switch.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Specifies the blocklist rule parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ParamFilterRule> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PARAMFILTER_H_
