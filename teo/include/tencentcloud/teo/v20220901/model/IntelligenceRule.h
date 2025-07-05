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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INTELLIGENCERULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INTELLIGENCERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IntelligenceRuleItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot intelligence rules
                */
                class IntelligenceRule : public AbstractModel
                {
                public:
                    IntelligenceRule();
                    ~IntelligenceRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
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
                     * 获取Items in a bot intelligence rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntelligenceRuleItems Items in a bot intelligence rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<IntelligenceRuleItem> GetIntelligenceRuleItems() const;

                    /**
                     * 设置Items in a bot intelligence rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intelligenceRuleItems Items in a bot intelligence rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntelligenceRuleItems(const std::vector<IntelligenceRuleItem>& _intelligenceRuleItems);

                    /**
                     * 判断参数 IntelligenceRuleItems 是否已赋值
                     * @return IntelligenceRuleItems 是否已赋值
                     * 
                     */
                    bool IntelligenceRuleItemsHasBeenSet() const;

                private:

                    /**
                     * Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Items in a bot intelligence rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IntelligenceRuleItem> m_intelligenceRuleItems;
                    bool m_intelligenceRuleItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INTELLIGENCERULE_H_
