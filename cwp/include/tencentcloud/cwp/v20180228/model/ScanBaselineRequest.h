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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANBASELINEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANBASELINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ScanBaseline request structure.
                */
                class ScanBaselineRequest : public AbstractModel
                {
                public:
                    ScanBaselineRequest();
                    ~ScanBaselineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * @return StrategyIdList Policy ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * 
                     */
                    std::vector<uint64_t> GetStrategyIdList() const;

                    /**
                     * 设置Policy ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * @param _strategyIdList Policy ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * 
                     */
                    void SetStrategyIdList(const std::vector<uint64_t>& _strategyIdList);

                    /**
                     * 判断参数 StrategyIdList 是否已赋值
                     * @return StrategyIdList 是否已赋值
                     * 
                     */
                    bool StrategyIdListHasBeenSet() const;

                    /**
                     * 获取Baseline ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * @return CategoryIdList Baseline ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * 
                     */
                    std::vector<uint64_t> GetCategoryIdList() const;

                    /**
                     * 设置Baseline ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * @param _categoryIdList Baseline ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * 
                     */
                    void SetCategoryIdList(const std::vector<uint64_t>& _categoryIdList);

                    /**
                     * 判断参数 CategoryIdList 是否已赋值
                     * @return CategoryIdList 是否已赋值
                     * 
                     */
                    bool CategoryIdListHasBeenSet() const;

                    /**
                     * 获取Detection item ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * @return RuleIdList Detection item ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * 
                     */
                    std::vector<uint64_t> GetRuleIdList() const;

                    /**
                     * 设置Detection item ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * @param _ruleIdList Detection item ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     * 
                     */
                    void SetRuleIdList(const std::vector<uint64_t>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                    /**
                     * 获取Not required when StrategyIdList is selected, but required in other cases.
                     * @return QuuidList Not required when StrategyIdList is selected, but required in other cases.
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置Not required when StrategyIdList is selected, but required in other cases.
                     * @param _quuidList Not required when StrategyIdList is selected, but required in other cases.
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取Host UUID array
                     * @return UuidList Host UUID array
                     * 
                     */
                    std::vector<std::string> GetUuidList() const;

                    /**
                     * 设置Host UUID array
                     * @param _uuidList Host UUID array
                     * 
                     */
                    void SetUuidList(const std::vector<std::string>& _uuidList);

                    /**
                     * 判断参数 UuidList 是否已赋值
                     * @return UuidList 是否已赋值
                     * 
                     */
                    bool UuidListHasBeenSet() const;

                private:

                    /**
                     * Policy ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     */
                    std::vector<uint64_t> m_strategyIdList;
                    bool m_strategyIdListHasBeenSet;

                    /**
                     * Baseline ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     */
                    std::vector<uint64_t> m_categoryIdList;
                    bool m_categoryIdListHasBeenSet;

                    /**
                     * Detection item ID array (Either StrategyIdList, CategoryIdList, or RuleIdList must be selected.)
                     */
                    std::vector<uint64_t> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                    /**
                     * Not required when StrategyIdList is selected, but required in other cases.
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * Host UUID array
                     */
                    std::vector<std::string> m_uuidList;
                    bool m_uuidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANBASELINEREQUEST_H_
