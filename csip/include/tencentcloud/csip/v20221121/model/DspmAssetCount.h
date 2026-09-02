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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETCOUNT_H_

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
                * Dspm asset statistics
                */
                class DspmAssetCount : public AbstractModel
                {
                public:
                    DspmAssetCount();
                    ~DspmAssetCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of assets
                     * @return AssetCount Number of assets
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置Number of assets
                     * @param _assetCount Number of assets
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
                     * 获取Number of assets with dangerous risks
                     * @return DangerRiskCount Number of assets with dangerous risks
                     * 
                     */
                    int64_t GetDangerRiskCount() const;

                    /**
                     * 设置Number of assets with dangerous risks
                     * @param _dangerRiskCount Number of assets with dangerous risks
                     * 
                     */
                    void SetDangerRiskCount(const int64_t& _dangerRiskCount);

                    /**
                     * 判断参数 DangerRiskCount 是否已赋值
                     * @return DangerRiskCount 是否已赋值
                     * 
                     */
                    bool DangerRiskCountHasBeenSet() const;

                    /**
                     * 获取Number of assets with low risk
                     * @return LowRiskCount Number of assets with low risk
                     * 
                     */
                    int64_t GetLowRiskCount() const;

                    /**
                     * 设置Number of assets with low risk
                     * @param _lowRiskCount Number of assets with low risk
                     * 
                     */
                    void SetLowRiskCount(const int64_t& _lowRiskCount);

                    /**
                     * 判断参数 LowRiskCount 是否已赋值
                     * @return LowRiskCount 是否已赋值
                     * 
                     */
                    bool LowRiskCountHasBeenSet() const;

                    /**
                     * 获取Number of instances with pending risks
                     * @return RiskAssetCount Number of instances with pending risks
                     * 
                     */
                    int64_t GetRiskAssetCount() const;

                    /**
                     * 设置Number of instances with pending risks
                     * @param _riskAssetCount Number of instances with pending risks
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
                     * 获取Number of instances with pending alarms
                     * @return AlarmAssetCount Number of instances with pending alarms
                     * 
                     */
                    int64_t GetAlarmAssetCount() const;

                    /**
                     * 设置Number of instances with pending alarms
                     * @param _alarmAssetCount Number of instances with pending alarms
                     * 
                     */
                    void SetAlarmAssetCount(const int64_t& _alarmAssetCount);

                    /**
                     * 判断参数 AlarmAssetCount 是否已赋值
                     * @return AlarmAssetCount 是否已赋值
                     * 
                     */
                    bool AlarmAssetCountHasBeenSet() const;

                private:

                    /**
                     * Number of assets
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * Number of assets with dangerous risks
                     */
                    int64_t m_dangerRiskCount;
                    bool m_dangerRiskCountHasBeenSet;

                    /**
                     * Number of assets with low risk
                     */
                    int64_t m_lowRiskCount;
                    bool m_lowRiskCountHasBeenSet;

                    /**
                     * Number of instances with pending risks
                     */
                    int64_t m_riskAssetCount;
                    bool m_riskAssetCountHasBeenSet;

                    /**
                     * Number of instances with pending alarms
                     */
                    int64_t m_alarmAssetCount;
                    bool m_alarmAssetCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETCOUNT_H_
