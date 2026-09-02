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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CFGRISKSTATISTICSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CFGRISKSTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Cloud resource configuration risk statistical information
                */
                class CFGRiskStatisticsItem : public AbstractModel
                {
                public:
                    CFGRiskStatisticsItem();
                    ~CFGRiskStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total number of risks</p>
                     * @return TotalRiskCount <p>Total number of risks</p>
                     * 
                     */
                    uint64_t GetTotalRiskCount() const;

                    /**
                     * 设置<p>Total number of risks</p>
                     * @param _totalRiskCount <p>Total number of risks</p>
                     * 
                     */
                    void SetTotalRiskCount(const uint64_t& _totalRiskCount);

                    /**
                     * 判断参数 TotalRiskCount 是否已赋值
                     * @return TotalRiskCount 是否已赋值
                     * 
                     */
                    bool TotalRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of newly-added risks in the past 7 days</p>
                     * @return RiskAddCount <p>Number of newly-added risks in the past 7 days</p>
                     * 
                     */
                    uint64_t GetRiskAddCount() const;

                    /**
                     * 设置<p>Number of newly-added risks in the past 7 days</p>
                     * @param _riskAddCount <p>Number of newly-added risks in the past 7 days</p>
                     * 
                     */
                    void SetRiskAddCount(const uint64_t& _riskAddCount);

                    /**
                     * 判断参数 RiskAddCount 是否已赋值
                     * @return RiskAddCount 是否已赋值
                     * 
                     */
                    bool RiskAddCountHasBeenSet() const;

                    /**
                     * 获取<p>All cloud resource configuration risk items to be fixed</p>
                     * @return CheckViewCount <p>All cloud resource configuration risk items to be fixed</p>
                     * 
                     */
                    uint64_t GetCheckViewCount() const;

                    /**
                     * 设置<p>All cloud resource configuration risk items to be fixed</p>
                     * @param _checkViewCount <p>All cloud resource configuration risk items to be fixed</p>
                     * 
                     */
                    void SetCheckViewCount(const uint64_t& _checkViewCount);

                    /**
                     * 判断参数 CheckViewCount 是否已赋值
                     * @return CheckViewCount 是否已赋值
                     * 
                     */
                    bool CheckViewCountHasBeenSet() const;

                    /**
                     * 获取<p>High priority risk to be fixed</p>
                     * @return HighPriorityRiskCount <p>High priority risk to be fixed</p>
                     * 
                     */
                    uint64_t GetHighPriorityRiskCount() const;

                    /**
                     * 设置<p>High priority risk to be fixed</p>
                     * @param _highPriorityRiskCount <p>High priority risk to be fixed</p>
                     * 
                     */
                    void SetHighPriorityRiskCount(const uint64_t& _highPriorityRiskCount);

                    /**
                     * 判断参数 HighPriorityRiskCount 是否已赋值
                     * @return HighPriorityRiskCount 是否已赋值
                     * 
                     */
                    bool HighPriorityRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Newly-added pending repair items in the last 7 days</p>
                     * @return CheckViewAddCount <p>Newly-added pending repair items in the last 7 days</p>
                     * 
                     */
                    uint64_t GetCheckViewAddCount() const;

                    /**
                     * 设置<p>Newly-added pending repair items in the last 7 days</p>
                     * @param _checkViewAddCount <p>Newly-added pending repair items in the last 7 days</p>
                     * 
                     */
                    void SetCheckViewAddCount(const uint64_t& _checkViewAddCount);

                    /**
                     * 判断参数 CheckViewAddCount 是否已赋值
                     * @return CheckViewAddCount 是否已赋值
                     * 
                     */
                    bool CheckViewAddCountHasBeenSet() const;

                    /**
                     * 获取<p>All cloud resource configuration risk items to be fixed, with high priority first</p>
                     * @return HighPriorityCheckViewCount <p>All cloud resource configuration risk items to be fixed, with high priority first</p>
                     * 
                     */
                    uint64_t GetHighPriorityCheckViewCount() const;

                    /**
                     * 设置<p>All cloud resource configuration risk items to be fixed, with high priority first</p>
                     * @param _highPriorityCheckViewCount <p>All cloud resource configuration risk items to be fixed, with high priority first</p>
                     * 
                     */
                    void SetHighPriorityCheckViewCount(const uint64_t& _highPriorityCheckViewCount);

                    /**
                     * 判断参数 HighPriorityCheckViewCount 是否已赋值
                     * @return HighPriorityCheckViewCount 是否已赋值
                     * 
                     */
                    bool HighPriorityCheckViewCountHasBeenSet() const;

                    /**
                     * 获取<p>Display quantity from the asset perspective</p>
                     * @return AssetViewCount <p>Display quantity from the asset perspective</p>
                     * 
                     */
                    uint64_t GetAssetViewCount() const;

                    /**
                     * 设置<p>Display quantity from the asset perspective</p>
                     * @param _assetViewCount <p>Display quantity from the asset perspective</p>
                     * 
                     */
                    void SetAssetViewCount(const uint64_t& _assetViewCount);

                    /**
                     * 判断参数 AssetViewCount 是否已赋值
                     * @return AssetViewCount 是否已赋值
                     * 
                     */
                    bool AssetViewCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of newly-added assets to be fixed in the last 7 days</p>
                     * @return AssetViewAddCount <p>Number of newly-added assets to be fixed in the last 7 days</p>
                     * 
                     */
                    uint64_t GetAssetViewAddCount() const;

                    /**
                     * 设置<p>Number of newly-added assets to be fixed in the last 7 days</p>
                     * @param _assetViewAddCount <p>Number of newly-added assets to be fixed in the last 7 days</p>
                     * 
                     */
                    void SetAssetViewAddCount(const uint64_t& _assetViewAddCount);

                    /**
                     * 判断参数 AssetViewAddCount 是否已赋值
                     * @return AssetViewAddCount 是否已赋值
                     * 
                     */
                    bool AssetViewAddCountHasBeenSet() const;

                    /**
                     * 获取<p>Display quantity from asset perspective, number of high-priority fixes</p>
                     * @return HighPriorityAssetViewCount <p>Display quantity from asset perspective, number of high-priority fixes</p>
                     * 
                     */
                    uint64_t GetHighPriorityAssetViewCount() const;

                    /**
                     * 设置<p>Display quantity from asset perspective, number of high-priority fixes</p>
                     * @param _highPriorityAssetViewCount <p>Display quantity from asset perspective, number of high-priority fixes</p>
                     * 
                     */
                    void SetHighPriorityAssetViewCount(const uint64_t& _highPriorityAssetViewCount);

                    /**
                     * 判断参数 HighPriorityAssetViewCount 是否已赋值
                     * @return HighPriorityAssetViewCount 是否已赋值
                     * 
                     */
                    bool HighPriorityAssetViewCountHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of risks</p>
                     */
                    uint64_t m_totalRiskCount;
                    bool m_totalRiskCountHasBeenSet;

                    /**
                     * <p>Number of newly-added risks in the past 7 days</p>
                     */
                    uint64_t m_riskAddCount;
                    bool m_riskAddCountHasBeenSet;

                    /**
                     * <p>All cloud resource configuration risk items to be fixed</p>
                     */
                    uint64_t m_checkViewCount;
                    bool m_checkViewCountHasBeenSet;

                    /**
                     * <p>High priority risk to be fixed</p>
                     */
                    uint64_t m_highPriorityRiskCount;
                    bool m_highPriorityRiskCountHasBeenSet;

                    /**
                     * <p>Newly-added pending repair items in the last 7 days</p>
                     */
                    uint64_t m_checkViewAddCount;
                    bool m_checkViewAddCountHasBeenSet;

                    /**
                     * <p>All cloud resource configuration risk items to be fixed, with high priority first</p>
                     */
                    uint64_t m_highPriorityCheckViewCount;
                    bool m_highPriorityCheckViewCountHasBeenSet;

                    /**
                     * <p>Display quantity from the asset perspective</p>
                     */
                    uint64_t m_assetViewCount;
                    bool m_assetViewCountHasBeenSet;

                    /**
                     * <p>Number of newly-added assets to be fixed in the last 7 days</p>
                     */
                    uint64_t m_assetViewAddCount;
                    bool m_assetViewAddCountHasBeenSet;

                    /**
                     * <p>Display quantity from asset perspective, number of high-priority fixes</p>
                     */
                    uint64_t m_highPriorityAssetViewCount;
                    bool m_highPriorityAssetViewCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CFGRISKSTATISTICSITEM_H_
