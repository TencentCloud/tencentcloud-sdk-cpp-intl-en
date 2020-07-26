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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/MaxAgeRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Browser cache rule configuration. This is used to set the MaxAge default value and is disabled by default. (This feature is in beta and not generally available yet.)
                */
                class MaxAge : public AbstractModel
                {
                public:
                    MaxAge();
                    ~MaxAge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Browser cache configuration switch
on: enabled
off: disabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Switch Browser cache configuration switch
on: enabled
off: disabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Browser cache configuration switch
on: enabled
off: disabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Switch Browser cache configuration switch
on: enabled
off: disabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取MaxAge rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxAgeRules MaxAge rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MaxAgeRule> GetMaxAgeRules() const;

                    /**
                     * 设置MaxAge rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxAgeRules MaxAge rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxAgeRules(const std::vector<MaxAgeRule>& _maxAgeRules);

                    /**
                     * 判断参数 MaxAgeRules 是否已赋值
                     * @return MaxAgeRules 是否已赋值
                     */
                    bool MaxAgeRulesHasBeenSet() const;

                private:

                    /**
                     * Browser cache configuration switch
on: enabled
off: disabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * MaxAge rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MaxAgeRule> m_maxAgeRules;
                    bool m_maxAgeRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGE_H_
