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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDCATEGORY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineCategory.h>
#include <tencentcloud/csip/v20221121/model/BaselineRiskLevelStatistic.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Aggregation results of the baseline subcategory dimension, carrying the pass/fail statistics of detection items under this subcategory.
                */
                class BaselineAggregatedCategory : public AbstractModel
                {
                public:
                    BaselineAggregatedCategory();
                    ~BaselineAggregatedCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Basic information of the baseline subcategory (including category ID, name, and description).</p>
                     * @return Category <p>Basic information of the baseline subcategory (including category ID, name, and description).</p>
                     * 
                     */
                    BaselineCategory GetCategory() const;

                    /**
                     * 设置<p>Basic information of the baseline subcategory (including category ID, name, and description).</p>
                     * @param _category <p>Basic information of the baseline subcategory (including category ID, name, and description).</p>
                     * 
                     */
                    void SetCategory(const BaselineCategory& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Distribution statistics of detection-failed items in this subcategory by risk level.</p>
                     * @return NotPassItemRiskLevelStatistic <p>Distribution statistics of detection-failed items in this subcategory by risk level.</p>
                     * 
                     */
                    std::vector<BaselineRiskLevelStatistic> GetNotPassItemRiskLevelStatistic() const;

                    /**
                     * 设置<p>Distribution statistics of detection-failed items in this subcategory by risk level.</p>
                     * @param _notPassItemRiskLevelStatistic <p>Distribution statistics of detection-failed items in this subcategory by risk level.</p>
                     * 
                     */
                    void SetNotPassItemRiskLevelStatistic(const std::vector<BaselineRiskLevelStatistic>& _notPassItemRiskLevelStatistic);

                    /**
                     * 判断参数 NotPassItemRiskLevelStatistic 是否已赋值
                     * @return NotPassItemRiskLevelStatistic 是否已赋值
                     * 
                     */
                    bool NotPassItemRiskLevelStatisticHasBeenSet() const;

                    /**
                     * 获取<p>Number of detection items with a PASS result in this subcategory.</p>
                     * @return PassItemCount <p>Number of detection items with a PASS result in this subcategory.</p>
                     * 
                     */
                    uint64_t GetPassItemCount() const;

                    /**
                     * 设置<p>Number of detection items with a PASS result in this subcategory.</p>
                     * @param _passItemCount <p>Number of detection items with a PASS result in this subcategory.</p>
                     * 
                     */
                    void SetPassItemCount(const uint64_t& _passItemCount);

                    /**
                     * 判断参数 PassItemCount 是否已赋值
                     * @return PassItemCount 是否已赋值
                     * 
                     */
                    bool PassItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of detection items with NOT_PASS result in this subcategory.</p>
                     * @return NotPassItemCount <p>Number of detection items with NOT_PASS result in this subcategory.</p>
                     * 
                     */
                    uint64_t GetNotPassItemCount() const;

                    /**
                     * 设置<p>Number of detection items with NOT_PASS result in this subcategory.</p>
                     * @param _notPassItemCount <p>Number of detection items with NOT_PASS result in this subcategory.</p>
                     * 
                     */
                    void SetNotPassItemCount(const uint64_t& _notPassItemCount);

                    /**
                     * 判断参数 NotPassItemCount 是否已赋值
                     * @return NotPassItemCount 是否已赋值
                     * 
                     */
                    bool NotPassItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Pass rate of detection items under this subcategory, unit: percentage (0-100), rounded to two decimal places.</p>
                     * @return PassRate <p>Pass rate of detection items under this subcategory, unit: percentage (0-100), rounded to two decimal places.</p>
                     * 
                     */
                    double GetPassRate() const;

                    /**
                     * 设置<p>Pass rate of detection items under this subcategory, unit: percentage (0-100), rounded to two decimal places.</p>
                     * @param _passRate <p>Pass rate of detection items under this subcategory, unit: percentage (0-100), rounded to two decimal places.</p>
                     * 
                     */
                    void SetPassRate(const double& _passRate);

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取<p>Whether the baseline category has been scanned</p>
                     * @return Scanned <p>Whether the baseline category has been scanned</p>
                     * 
                     */
                    bool GetScanned() const;

                    /**
                     * 设置<p>Whether the baseline category has been scanned</p>
                     * @param _scanned <p>Whether the baseline category has been scanned</p>
                     * 
                     */
                    void SetScanned(const bool& _scanned);

                    /**
                     * 判断参数 Scanned 是否已赋值
                     * @return Scanned 是否已赋值
                     * 
                     */
                    bool ScannedHasBeenSet() const;

                private:

                    /**
                     * <p>Basic information of the baseline subcategory (including category ID, name, and description).</p>
                     */
                    BaselineCategory m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Distribution statistics of detection-failed items in this subcategory by risk level.</p>
                     */
                    std::vector<BaselineRiskLevelStatistic> m_notPassItemRiskLevelStatistic;
                    bool m_notPassItemRiskLevelStatisticHasBeenSet;

                    /**
                     * <p>Number of detection items with a PASS result in this subcategory.</p>
                     */
                    uint64_t m_passItemCount;
                    bool m_passItemCountHasBeenSet;

                    /**
                     * <p>Number of detection items with NOT_PASS result in this subcategory.</p>
                     */
                    uint64_t m_notPassItemCount;
                    bool m_notPassItemCountHasBeenSet;

                    /**
                     * <p>Pass rate of detection items under this subcategory, unit: percentage (0-100), rounded to two decimal places.</p>
                     */
                    double m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * <p>Whether the baseline category has been scanned</p>
                     */
                    bool m_scanned;
                    bool m_scannedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDCATEGORY_H_
