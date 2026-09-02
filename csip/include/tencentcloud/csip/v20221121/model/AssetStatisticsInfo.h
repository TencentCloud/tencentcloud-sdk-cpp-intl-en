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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETSTATISTICSINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETSTATISTICSINFO_H_

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
                * Asset Overview statistical information
                */
                class AssetStatisticsInfo : public AbstractModel
                {
                public:
                    AssetStatisticsInfo();
                    ~AssetStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total number of assets</p>
                     * @return AssetTotalCount <p>Total number of assets</p>
                     * 
                     */
                    uint64_t GetAssetTotalCount() const;

                    /**
                     * 设置<p>Total number of assets</p>
                     * @param _assetTotalCount <p>Total number of assets</p>
                     * 
                     */
                    void SetAssetTotalCount(const uint64_t& _assetTotalCount);

                    /**
                     * 判断参数 AssetTotalCount 是否已赋值
                     * @return AssetTotalCount 是否已赋值
                     * 
                     */
                    bool AssetTotalCountHasBeenSet() const;

                    /**
                     * 获取<p>New asset count in the last 7 days</p>
                     * @return AssetAddCount <p>New asset count in the last 7 days</p>
                     * 
                     */
                    uint64_t GetAssetAddCount() const;

                    /**
                     * 设置<p>New asset count in the last 7 days</p>
                     * @param _assetAddCount <p>New asset count in the last 7 days</p>
                     * 
                     */
                    void SetAssetAddCount(const uint64_t& _assetAddCount);

                    /**
                     * 判断参数 AssetAddCount 是否已赋值
                     * @return AssetAddCount 是否已赋值
                     * 
                     */
                    bool AssetAddCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of risky assets</p>
                     * @return RiskAssetCount <p>Number of risky assets</p>
                     * 
                     */
                    uint64_t GetRiskAssetCount() const;

                    /**
                     * 设置<p>Number of risky assets</p>
                     * @param _riskAssetCount <p>Number of risky assets</p>
                     * 
                     */
                    void SetRiskAssetCount(const uint64_t& _riskAssetCount);

                    /**
                     * 判断参数 RiskAssetCount 是否已赋值
                     * @return RiskAssetCount 是否已赋值
                     * 
                     */
                    bool RiskAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of assets with alarms.</p>
                     * @return AlarmAssetCount <p>Number of assets with alarms.</p>
                     * 
                     */
                    uint64_t GetAlarmAssetCount() const;

                    /**
                     * 设置<p>Number of assets with alarms.</p>
                     * @param _alarmAssetCount <p>Number of assets with alarms.</p>
                     * 
                     */
                    void SetAlarmAssetCount(const uint64_t& _alarmAssetCount);

                    /**
                     * 判断参数 AlarmAssetCount 是否已赋值
                     * @return AlarmAssetCount 是否已赋值
                     * 
                     */
                    bool AlarmAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of public network assets</p>
                     * @return PublicAssetCount <p>Number of public network assets</p>
                     * 
                     */
                    uint64_t GetPublicAssetCount() const;

                    /**
                     * 设置<p>Number of public network assets</p>
                     * @param _publicAssetCount <p>Number of public network assets</p>
                     * 
                     */
                    void SetPublicAssetCount(const uint64_t& _publicAssetCount);

                    /**
                     * 判断参数 PublicAssetCount 是否已赋值
                     * @return PublicAssetCount 是否已赋值
                     * 
                     */
                    bool PublicAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of exposed assets</p>
                     * @return ExposeAssetCount <p>Number of exposed assets</p>
                     * 
                     */
                    uint64_t GetExposeAssetCount() const;

                    /**
                     * 设置<p>Number of exposed assets</p>
                     * @param _exposeAssetCount <p>Number of exposed assets</p>
                     * 
                     */
                    void SetExposeAssetCount(const uint64_t& _exposeAssetCount);

                    /**
                     * 判断参数 ExposeAssetCount 是否已赋值
                     * @return ExposeAssetCount 是否已赋值
                     * 
                     */
                    bool ExposeAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Host asset quantity</p>
                     * @return CloudHostAssetCount <p>Host asset quantity</p>
                     * 
                     */
                    uint64_t GetCloudHostAssetCount() const;

                    /**
                     * 设置<p>Host asset quantity</p>
                     * @param _cloudHostAssetCount <p>Host asset quantity</p>
                     * 
                     */
                    void SetCloudHostAssetCount(const uint64_t& _cloudHostAssetCount);

                    /**
                     * 判断参数 CloudHostAssetCount 是否已赋值
                     * @return CloudHostAssetCount 是否已赋值
                     * 
                     */
                    bool CloudHostAssetCountHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of assets</p>
                     */
                    uint64_t m_assetTotalCount;
                    bool m_assetTotalCountHasBeenSet;

                    /**
                     * <p>New asset count in the last 7 days</p>
                     */
                    uint64_t m_assetAddCount;
                    bool m_assetAddCountHasBeenSet;

                    /**
                     * <p>Number of risky assets</p>
                     */
                    uint64_t m_riskAssetCount;
                    bool m_riskAssetCountHasBeenSet;

                    /**
                     * <p>Number of assets with alarms.</p>
                     */
                    uint64_t m_alarmAssetCount;
                    bool m_alarmAssetCountHasBeenSet;

                    /**
                     * <p>Number of public network assets</p>
                     */
                    uint64_t m_publicAssetCount;
                    bool m_publicAssetCountHasBeenSet;

                    /**
                     * <p>Number of exposed assets</p>
                     */
                    uint64_t m_exposeAssetCount;
                    bool m_exposeAssetCountHasBeenSet;

                    /**
                     * <p>Host asset quantity</p>
                     */
                    uint64_t m_cloudHostAssetCount;
                    bool m_cloudHostAssetCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETSTATISTICSINFO_H_
