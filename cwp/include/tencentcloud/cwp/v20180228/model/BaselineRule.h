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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Item.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Baseline rule
                */
                class BaselineRule : public AbstractModel
                {
                public:
                    BaselineRule();
                    ~BaselineRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule Name, up to 128 English characters in length
                     * @return RuleName Rule Name, up to 128 English characters in length
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule Name, up to 128 English characters in length
                     * @param _ruleName Rule Name, up to 128 English characters in length
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
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule type [0: system|1: custom].
                     * @return RuleType Rule type [0: system|1: custom].
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置Rule type [0: system|1: custom].
                     * @param _ruleType Rule type [0: system|1: custom].
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Rule Classification
                     * @return CategoryId Rule Classification
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置Rule Classification
                     * @param _categoryId Rule Classification
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return RuleDesc Rule description
                     * 
                     */
                    std::string GetRuleDesc() const;

                    /**
                     * 设置Rule description
                     * @param _ruleDesc Rule description
                     * 
                     */
                    void SetRuleDesc(const std::string& _ruleDesc);

                    /**
                     * 判断参数 RuleDesc 是否已赋值
                     * @return RuleDesc 是否已赋值
                     * 
                     */
                    bool RuleDescHasBeenSet() const;

                    /**
                     * 获取Number of Hosts
                     * @return HostCount Number of Hosts
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置Number of Hosts
                     * @param _hostCount Number of Hosts
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Adaptation Item ID List
                     * @return Items Adaptation Item ID List
                     * 
                     */
                    std::vector<Item> GetItems() const;

                    /**
                     * 设置Adaptation Item ID List
                     * @param _items Adaptation Item ID List
                     * 
                     */
                    void SetItems(const std::vector<Item>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取[0: all Pro and Ultimate Editions|1: host ID|2: IP].
                     * @return AssetType [0: all Pro and Ultimate Editions|1: host ID|2: IP].
                     * 
                     */
                    int64_t GetAssetType() const;

                    /**
                     * 设置[0: all Pro and Ultimate Editions|1: host ID|2: IP].
                     * @param _assetType [0: all Pro and Ultimate Editions|1: host ID|2: IP].
                     * 
                     */
                    void SetAssetType(const int64_t& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Host Id collection
                     * @return HostIds Host Id collection
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置Host Id collection
                     * @param _hostIds Host Id collection
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取Host IP address
                     * @return HostIps Host IP address
                     * 
                     */
                    std::vector<std::string> GetHostIps() const;

                    /**
                     * 设置Host IP address
                     * @param _hostIps Host IP address
                     * 
                     */
                    void SetHostIps(const std::vector<std::string>& _hostIps);

                    /**
                     * 判断参数 HostIps 是否已赋值
                     * @return HostIps 是否已赋值
                     * 
                     */
                    bool HostIpsHasBeenSet() const;

                private:

                    /**
                     * Rule Name, up to 128 English characters in length
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule type [0: system|1: custom].
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Rule Classification
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_ruleDesc;
                    bool m_ruleDescHasBeenSet;

                    /**
                     * Number of Hosts
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Adaptation Item ID List
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * [0: all Pro and Ultimate Editions|1: host ID|2: IP].
                     */
                    int64_t m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Host Id collection
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::vector<std::string> m_hostIps;
                    bool m_hostIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULE_H_
