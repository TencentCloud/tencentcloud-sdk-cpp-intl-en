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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEIGNOREREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEIGNOREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBaselineRuleIgnore request structure.
                */
                class ModifyBaselineRuleIgnoreRequest : public AbstractModel
                {
                public:
                    ModifyBaselineRuleIgnoreRequest();
                    ~ModifyBaselineRuleIgnoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
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
                     * 获取Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
                     * @return AssetType Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
                     * 
                     */
                    int64_t GetAssetType() const;

                    /**
                     * 设置Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
                     * @param _assetType Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
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
                     * 获取Related item
                     * @return ItemIds Related item
                     * 
                     */
                    std::vector<int64_t> GetItemIds() const;

                    /**
                     * 设置Related item
                     * @param _itemIds Related item
                     * 
                     */
                    void SetItemIds(const std::vector<int64_t>& _itemIds);

                    /**
                     * 判断参数 ItemIds 是否已赋值
                     * @return ItemIds 是否已赋值
                     * 
                     */
                    bool ItemIdsHasBeenSet() const;

                    /**
                     * 获取Host ID
                     * @return HostIds Host ID
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置Host ID
                     * @param _hostIds Host ID
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

                    /**
                     * 获取Whether to select all filters
                     * @return SelectAll Whether to select all filters
                     * 
                     */
                    int64_t GetSelectAll() const;

                    /**
                     * 设置Whether to select all filters
                     * @param _selectAll Whether to select all filters
                     * 
                     */
                    void SetSelectAll(const int64_t& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     * 
                     */
                    bool SelectAllHasBeenSet() const;

                    /**
                     * 获取<li>ItemName - string - Required: No - Item name</li>
                     * @return Filters <li>ItemName - string - Required: No - Item name</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>ItemName - string - Required: No - Item name</li>
                     * @param _filters <li>ItemName - string - Required: No - Item name</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
                     */
                    int64_t m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Rule ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Related item
                     */
                    std::vector<int64_t> m_itemIds;
                    bool m_itemIdsHasBeenSet;

                    /**
                     * Host ID
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::vector<std::string> m_hostIps;
                    bool m_hostIpsHasBeenSet;

                    /**
                     * Whether to select all filters
                     */
                    int64_t m_selectAll;
                    bool m_selectAllHasBeenSet;

                    /**
                     * <li>ItemName - string - Required: No - Item name</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEIGNOREREQUEST_H_
