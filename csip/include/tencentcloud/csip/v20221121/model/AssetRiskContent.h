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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETRISKCONTENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETRISKCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Risk information grouped by risk engine
                */
                class AssetRiskContent : public AbstractModel
                {
                public:
                    AssetRiskContent();
                    ~AssetRiskContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk engine</p>
                     * @return EngineType <p>Risk engine</p>
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置<p>Risk engine</p>
                     * @param _engineType <p>Risk engine</p>
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取<p>Risk distribution of a specific risk under the risk engine</p>
                     * @return Risks <p>Risk distribution of a specific risk under the risk engine</p>
                     * 
                     */
                    std::vector<AssetRiskInfo> GetRisks() const;

                    /**
                     * 设置<p>Risk distribution of a specific risk under the risk engine</p>
                     * @param _risks <p>Risk distribution of a specific risk under the risk engine</p>
                     * 
                     */
                    void SetRisks(const std::vector<AssetRiskInfo>& _risks);

                    /**
                     * 判断参数 Risks 是否已赋值
                     * @return Risks 是否已赋值
                     * 
                     */
                    bool RisksHasBeenSet() const;

                    /**
                     * 获取<p>Asset ID.</p>
                     * @return AssetRID <p>Asset ID.</p>
                     * 
                     */
                    std::string GetAssetRID() const;

                    /**
                     * 设置<p>Asset ID.</p>
                     * @param _assetRID <p>Asset ID.</p>
                     * 
                     */
                    void SetAssetRID(const std::string& _assetRID);

                    /**
                     * 判断参数 AssetRID 是否已赋值
                     * @return AssetRID 是否已赋值
                     * 
                     */
                    bool AssetRIDHasBeenSet() const;

                private:

                    /**
                     * <p>Risk engine</p>
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * <p>Risk distribution of a specific risk under the risk engine</p>
                     */
                    std::vector<AssetRiskInfo> m_risks;
                    bool m_risksHasBeenSet;

                    /**
                     * <p>Asset ID.</p>
                     */
                    std::string m_assetRID;
                    bool m_assetRIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETRISKCONTENT_H_
