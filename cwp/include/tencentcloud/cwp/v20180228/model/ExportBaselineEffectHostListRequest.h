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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEEFFECTHOSTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportBaselineEffectHostList request structure.
                */
                class ExportBaselineEffectHostListRequest : public AbstractModel
                {
                public:
                    ExportBaselineEffectHostListRequest();
                    ~ExportBaselineEffectHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Baseline ID
                     * @return BaselineId Baseline ID
                     * 
                     */
                    uint64_t GetBaselineId() const;

                    /**
                     * 设置Baseline ID
                     * @param _baselineId Baseline ID
                     * 
                     */
                    void SetBaselineId(const uint64_t& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

                    /**
                     * 获取Filtering criteria
<li>AliasName - String - host alias</li>
                     * @return Filters Filtering criteria
<li>AliasName - String - host alias</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filtering criteria
<li>AliasName - String - host alias</li>
                     * @param _filters Filtering criteria
<li>AliasName - String - host alias</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return StrategyId Policy ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Policy ID
                     * @param _strategyId Policy ID
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

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

                    /**
                     * 获取Baseline name
                     * @return BaselineName Baseline name
                     * 
                     */
                    std::string GetBaselineName() const;

                    /**
                     * 设置Baseline name
                     * @param _baselineName Baseline name
                     * 
                     */
                    void SetBaselineName(const std::string& _baselineName);

                    /**
                     * 判断参数 BaselineName 是否已赋值
                     * @return BaselineName 是否已赋值
                     * 
                     */
                    bool BaselineNameHasBeenSet() const;

                private:

                    /**
                     * Baseline ID
                     */
                    uint64_t m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * Filtering criteria
<li>AliasName - String - host alias</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Policy ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Host UUID array
                     */
                    std::vector<std::string> m_uuidList;
                    bool m_uuidListHasBeenSet;

                    /**
                     * Baseline name
                     */
                    std::string m_baselineName;
                    bool m_baselineNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEEFFECTHOSTLISTREQUEST_H_
