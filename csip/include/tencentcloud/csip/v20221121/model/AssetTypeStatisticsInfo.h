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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTYPESTATISTICSINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTYPESTATISTICSINFO_H_

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
                * Asset type and number of asset types with existing risks
                */
                class AssetTypeStatisticsInfo : public AbstractModel
                {
                public:
                    AssetTypeStatisticsInfo();
                    ~AssetTypeStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Asset type count</p>
                     * @return AssetTypeCount <p>Asset type count</p>
                     * 
                     */
                    uint64_t GetAssetTypeCount() const;

                    /**
                     * 设置<p>Asset type count</p>
                     * @param _assetTypeCount <p>Asset type count</p>
                     * 
                     */
                    void SetAssetTypeCount(const uint64_t& _assetTypeCount);

                    /**
                     * 判断参数 AssetTypeCount 是否已赋值
                     * @return AssetTypeCount 是否已赋值
                     * 
                     */
                    bool AssetTypeCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of asset types with existing risks</p>
                     * @return RiskAssetTypeCount <p>Number of asset types with existing risks</p>
                     * 
                     */
                    uint64_t GetRiskAssetTypeCount() const;

                    /**
                     * 设置<p>Number of asset types with existing risks</p>
                     * @param _riskAssetTypeCount <p>Number of asset types with existing risks</p>
                     * 
                     */
                    void SetRiskAssetTypeCount(const uint64_t& _riskAssetTypeCount);

                    /**
                     * 判断参数 RiskAssetTypeCount 是否已赋值
                     * @return RiskAssetTypeCount 是否已赋值
                     * 
                     */
                    bool RiskAssetTypeCountHasBeenSet() const;

                private:

                    /**
                     * <p>Asset type count</p>
                     */
                    uint64_t m_assetTypeCount;
                    bool m_assetTypeCountHasBeenSet;

                    /**
                     * <p>Number of asset types with existing risks</p>
                     */
                    uint64_t m_riskAssetTypeCount;
                    bool m_riskAssetTypeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTYPESTATISTICSINFO_H_
