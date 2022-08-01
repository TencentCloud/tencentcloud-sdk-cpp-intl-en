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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_RANGEORIGINPULL_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_RANGEORIGINPULL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/RangeOriginPullRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Range GETs configuration which is enabled by default
                */
                class RangeOriginPull : public AbstractModel
                {
                public:
                    RangeOriginPull();
                    ~RangeOriginPull() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Range GETs configuration switch
`on`: Enable
`off`: Disable
                     * @return Switch Range GETs configuration switch
`on`: Enable
`off`: Disable
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Range GETs configuration switch
`on`: Enable
`off`: Disable
                     * @param Switch Range GETs configuration switch
`on`: Enable
`off`: Disable
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Range GETs configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RangeRules Range GETs configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<RangeOriginPullRule> GetRangeRules() const;

                    /**
                     * 设置Range GETs configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param RangeRules Range GETs configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetRangeRules(const std::vector<RangeOriginPullRule>& _rangeRules);

                    /**
                     * 判断参数 RangeRules 是否已赋值
                     * @return RangeRules 是否已赋值
                     */
                    bool RangeRulesHasBeenSet() const;

                private:

                    /**
                     * Range GETs configuration switch
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Range GETs configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<RangeOriginPullRule> m_rangeRules;
                    bool m_rangeRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_RANGEORIGINPULL_H_
