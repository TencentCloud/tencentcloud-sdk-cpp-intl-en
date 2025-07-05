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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineCustomRuleIdName.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Baseline Information
                */
                class BaselineItemInfo : public AbstractModel
                {
                public:
                    BaselineItemInfo();
                    ~BaselineItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Baseline Detection Item ID
                     * @return ItemId Baseline Detection Item ID
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置Baseline Detection Item ID
                     * @param _itemId Baseline Detection Item ID
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取Detection Item Name
                     * @return ItemName Detection Item Name
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置Detection Item Name
                     * @param _itemName Detection Item Name
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取ID of the Rule to Which the Detection Item Belongs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId ID of the Rule to Which the Detection Item Belongs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置ID of the Rule to Which the Detection Item Belongs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId ID of the Rule to Which the Detection Item Belongs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Detection item description
                     * @return ItemDesc Detection item description
                     * 
                     */
                    std::string GetItemDesc() const;

                    /**
                     * 设置Detection item description
                     * @param _itemDesc Detection item description
                     * 
                     */
                    void SetItemDesc(const std::string& _itemDesc);

                    /**
                     * 判断参数 ItemDesc 是否已赋值
                     * @return ItemDesc 是否已赋值
                     * 
                     */
                    bool ItemDescHasBeenSet() const;

                    /**
                     * 获取Remediation Method for Inspection Items
                     * @return FixMethod Remediation Method for Inspection Items
                     * 
                     */
                    std::string GetFixMethod() const;

                    /**
                     * 设置Remediation Method for Inspection Items
                     * @param _fixMethod Remediation Method for Inspection Items
                     * 
                     */
                    void SetFixMethod(const std::string& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                    /**
                     * 获取Rule Name of Detection Item
                     * @return RuleName Rule Name of Detection Item
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule Name of Detection Item
                     * @param _ruleName Rule Name of Detection Item
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return Level Risk level
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Risk level
                     * @param _level Risk level
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取System Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SysRuleId System Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSysRuleId() const;

                    /**
                     * 设置System Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sysRuleId System Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSysRuleId(const int64_t& _sysRuleId);

                    /**
                     * 判断参数 SysRuleId 是否已赋值
                     * @return SysRuleId 是否已赋值
                     * 
                     */
                    bool SysRuleIdHasBeenSet() const;

                    /**
                     * 获取Referenced Custom Rule Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RelatedCustomRuleInfo Referenced Custom Rule Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BaselineCustomRuleIdName> GetRelatedCustomRuleInfo() const;

                    /**
                     * 设置Referenced Custom Rule Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _relatedCustomRuleInfo Referenced Custom Rule Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRelatedCustomRuleInfo(const std::vector<BaselineCustomRuleIdName>& _relatedCustomRuleInfo);

                    /**
                     * 判断参数 RelatedCustomRuleInfo 是否已赋值
                     * @return RelatedCustomRuleInfo 是否已赋值
                     * 
                     */
                    bool RelatedCustomRuleInfoHasBeenSet() const;

                private:

                    /**
                     * Baseline Detection Item ID
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Detection Item Name
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * ID of the Rule to Which the Detection Item Belongs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Detection item description
                     */
                    std::string m_itemDesc;
                    bool m_itemDescHasBeenSet;

                    /**
                     * Remediation Method for Inspection Items
                     */
                    std::string m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                    /**
                     * Rule Name of Detection Item
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Risk level
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * System Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sysRuleId;
                    bool m_sysRuleIdHasBeenSet;

                    /**
                     * Referenced Custom Rule Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BaselineCustomRuleIdName> m_relatedCustomRuleInfo;
                    bool m_relatedCustomRuleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMINFO_H_
