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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSOVERVIEW_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Data structure of the COS audit overview page
                */
                class CosOverview : public AbstractModel
                {
                public:
                    CosOverview();
                    ~CosOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total number of assets</p>
                     * @return AssetCount <p>Total number of assets</p>
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置<p>Total number of assets</p>
                     * @param _assetCount <p>Total number of assets</p>
                     * 
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of assets that need to be processed immediately</p>
                     * @return AlarmAssetCount <p>Number of assets that need to be processed immediately</p>
                     * 
                     */
                    int64_t GetAlarmAssetCount() const;

                    /**
                     * 设置<p>Number of assets that need to be processed immediately</p>
                     * @param _alarmAssetCount <p>Number of assets that need to be processed immediately</p>
                     * 
                     */
                    void SetAlarmAssetCount(const int64_t& _alarmAssetCount);

                    /**
                     * 判断参数 AlarmAssetCount 是否已赋值
                     * @return AlarmAssetCount 是否已赋值
                     * 
                     */
                    bool AlarmAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of assets to be hardened</p>
                     * @return RiskAssetCount <p>Number of assets to be hardened</p>
                     * 
                     */
                    int64_t GetRiskAssetCount() const;

                    /**
                     * 设置<p>Number of assets to be hardened</p>
                     * @param _riskAssetCount <p>Number of assets to be hardened</p>
                     * 
                     */
                    void SetRiskAssetCount(const int64_t& _riskAssetCount);

                    /**
                     * 判断参数 RiskAssetCount 是否已赋值
                     * @return RiskAssetCount 是否已赋值
                     * 
                     */
                    bool RiskAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of alarms</p>
                     * @return AlarmCount <p>Total number of alarms</p>
                     * 
                     */
                    int64_t GetAlarmCount() const;

                    /**
                     * 设置<p>Total number of alarms</p>
                     * @param _alarmCount <p>Total number of alarms</p>
                     * 
                     */
                    void SetAlarmCount(const int64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of new alarms on the day</p>
                     * @return IncrementAlarmCount <p>Total number of new alarms on the day</p>
                     * 
                     */
                    int64_t GetIncrementAlarmCount() const;

                    /**
                     * 设置<p>Total number of new alarms on the day</p>
                     * @param _incrementAlarmCount <p>Total number of new alarms on the day</p>
                     * 
                     */
                    void SetIncrementAlarmCount(const int64_t& _incrementAlarmCount);

                    /**
                     * 判断参数 IncrementAlarmCount 是否已赋值
                     * @return IncrementAlarmCount 是否已赋值
                     * 
                     */
                    bool IncrementAlarmCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of risks</p>
                     * @return RiskCount <p>Total number of risks</p>
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>Total number of risks</p>
                     * @param _riskCount <p>Total number of risks</p>
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of new alarms on the day</p>
                     * @return IncrementRiskCount <p>Total number of new alarms on the day</p>
                     * 
                     */
                    int64_t GetIncrementRiskCount() const;

                    /**
                     * 设置<p>Total number of new alarms on the day</p>
                     * @param _incrementRiskCount <p>Total number of new alarms on the day</p>
                     * 
                     */
                    void SetIncrementRiskCount(const int64_t& _incrementRiskCount);

                    /**
                     * 判断参数 IncrementRiskCount 是否已赋值
                     * @return IncrementRiskCount 是否已赋值
                     * 
                     */
                    bool IncrementRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Risk top details</p>
                     * @return RiskTop <p>Risk top details</p>
                     * 
                     */
                    std::vector<CosRiskInfo> GetRiskTop() const;

                    /**
                     * 设置<p>Risk top details</p>
                     * @param _riskTop <p>Risk top details</p>
                     * 
                     */
                    void SetRiskTop(const std::vector<CosRiskInfo>& _riskTop);

                    /**
                     * 判断参数 RiskTop 是否已赋值
                     * @return RiskTop 是否已赋值
                     * 
                     */
                    bool RiskTopHasBeenSet() const;

                    /**
                     * 获取<p>top alarm risks</p>
                     * @return AlarmTop <p>top alarm risks</p>
                     * 
                     */
                    std::vector<CosRiskInfo> GetAlarmTop() const;

                    /**
                     * 设置<p>top alarm risks</p>
                     * @param _alarmTop <p>top alarm risks</p>
                     * 
                     */
                    void SetAlarmTop(const std::vector<CosRiskInfo>& _alarmTop);

                    /**
                     * 判断参数 AlarmTop 是否已赋值
                     * @return AlarmTop 是否已赋值
                     * 
                     */
                    bool AlarmTopHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-level sensitive files</p>
                     * @return HighLevelSensitiveFileCount <p>Number of high-level sensitive files</p>
                     * 
                     */
                    int64_t GetHighLevelSensitiveFileCount() const;

                    /**
                     * 设置<p>Number of high-level sensitive files</p>
                     * @param _highLevelSensitiveFileCount <p>Number of high-level sensitive files</p>
                     * 
                     */
                    void SetHighLevelSensitiveFileCount(const int64_t& _highLevelSensitiveFileCount);

                    /**
                     * 判断参数 HighLevelSensitiveFileCount 是否已赋值
                     * @return HighLevelSensitiveFileCount 是否已赋值
                     * 
                     */
                    bool HighLevelSensitiveFileCountHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of assets</p>
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>Number of assets that need to be processed immediately</p>
                     */
                    int64_t m_alarmAssetCount;
                    bool m_alarmAssetCountHasBeenSet;

                    /**
                     * <p>Number of assets to be hardened</p>
                     */
                    int64_t m_riskAssetCount;
                    bool m_riskAssetCountHasBeenSet;

                    /**
                     * <p>Total number of alarms</p>
                     */
                    int64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * <p>Total number of new alarms on the day</p>
                     */
                    int64_t m_incrementAlarmCount;
                    bool m_incrementAlarmCountHasBeenSet;

                    /**
                     * <p>Total number of risks</p>
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>Total number of new alarms on the day</p>
                     */
                    int64_t m_incrementRiskCount;
                    bool m_incrementRiskCountHasBeenSet;

                    /**
                     * <p>Risk top details</p>
                     */
                    std::vector<CosRiskInfo> m_riskTop;
                    bool m_riskTopHasBeenSet;

                    /**
                     * <p>top alarm risks</p>
                     */
                    std::vector<CosRiskInfo> m_alarmTop;
                    bool m_alarmTopHasBeenSet;

                    /**
                     * <p>Number of high-level sensitive files</p>
                     */
                    int64_t m_highLevelSensitiveFileCount;
                    bool m_highLevelSensitiveFileCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSOVERVIEW_H_
