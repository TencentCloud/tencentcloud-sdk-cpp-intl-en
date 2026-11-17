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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VPREXPLAININFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VPREXPLAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VPRExplainDimension.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * VPR rating interpretation card
                */
                class VPRExplainInfo : public AbstractModel
                {
                public:
                    VPRExplainInfo();
                    ~VPRExplainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Vulnerability intelligence</p>
                     * @return VulIntel <p>Vulnerability intelligence</p>
                     * 
                     */
                    std::vector<VPRExplainDimension> GetVulIntel() const;

                    /**
                     * 设置<p>Vulnerability intelligence</p>
                     * @param _vulIntel <p>Vulnerability intelligence</p>
                     * 
                     */
                    void SetVulIntel(const std::vector<VPRExplainDimension>& _vulIntel);

                    /**
                     * 判断参数 VulIntel 是否已赋值
                     * @return VulIntel 是否已赋值
                     * 
                     */
                    bool VulIntelHasBeenSet() const;

                    /**
                     * 获取<p>Asset context</p>
                     * @return AssetContext <p>Asset context</p>
                     * 
                     */
                    std::vector<VPRExplainDimension> GetAssetContext() const;

                    /**
                     * 设置<p>Asset context</p>
                     * @param _assetContext <p>Asset context</p>
                     * 
                     */
                    void SetAssetContext(const std::vector<VPRExplainDimension>& _assetContext);

                    /**
                     * 判断参数 AssetContext 是否已赋值
                     * @return AssetContext 是否已赋值
                     * 
                     */
                    bool AssetContextHasBeenSet() const;

                private:

                    /**
                     * <p>Vulnerability intelligence</p>
                     */
                    std::vector<VPRExplainDimension> m_vulIntel;
                    bool m_vulIntelHasBeenSet;

                    /**
                     * <p>Asset context</p>
                     */
                    std::vector<VPRExplainDimension> m_assetContext;
                    bool m_assetContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VPREXPLAININFO_H_
