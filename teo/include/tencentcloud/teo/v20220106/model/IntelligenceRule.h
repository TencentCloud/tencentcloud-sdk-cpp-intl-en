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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_INTELLIGENCERULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_INTELLIGENCERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/IntelligenceRuleItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取Switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Switch Switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _switch Switch
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
                     * @return Items Items in a bot intelligence rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<IntelligenceRuleItem> GetItems() const;

                    /**
                     * 设置Items in a bot intelligence rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _items Items in a bot intelligence rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetItems(const std::vector<IntelligenceRuleItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Switch
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Items in a bot intelligence rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IntelligenceRuleItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_INTELLIGENCERULE_H_
