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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_GATEWAYREGION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_GATEWAYREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Multi-Channel security gateway available region.
                */
                class GatewayRegion : public AbstractModel
                {
                public:
                    GatewayRegion();
                    ~GatewayRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID.
                     * @return RegionId Region ID.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID.
                     * @param _regionId Region ID.
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Chinese region name.
                     * @return CNName Chinese region name.
                     * 
                     */
                    std::string GetCNName() const;

                    /**
                     * 设置Chinese region name.
                     * @param _cNName Chinese region name.
                     * 
                     */
                    void SetCNName(const std::string& _cNName);

                    /**
                     * 判断参数 CNName 是否已赋值
                     * @return CNName 是否已赋值
                     * 
                     */
                    bool CNNameHasBeenSet() const;

                    /**
                     * 获取English name of the region.
                     * @return ENName English name of the region.
                     * 
                     */
                    std::string GetENName() const;

                    /**
                     * 设置English name of the region.
                     * @param _eNName English name of the region.
                     * 
                     */
                    void SetENName(const std::string& _eNName);

                    /**
                     * 判断参数 ENName 是否已赋值
                     * @return ENName 是否已赋值
                     * 
                     */
                    bool ENNameHasBeenSet() const;

                private:

                    /**
                     * Region ID.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Chinese region name.
                     */
                    std::string m_cNName;
                    bool m_cNNameHasBeenSet;

                    /**
                     * English name of the region.
                     */
                    std::string m_eNName;
                    bool m_eNNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_GATEWAYREGION_H_
