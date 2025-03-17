/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_LOAD_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_LOAD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/LoadSpec.h>
#include <tencentcloud/pts/v20210728/model/VpcLoadDistribution.h>
#include <tencentcloud/pts/v20210728/model/GeoRegionsLoadItem.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Load configuration.
                */
                class Load : public AbstractModel
                {
                public:
                    Load();
                    ~Load() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @return LoadSpec Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    LoadSpec GetLoadSpec() const;

                    /**
                     * 设置Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _loadSpec Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLoadSpec(const LoadSpec& _loadSpec);

                    /**
                     * 判断参数 LoadSpec 是否已赋值
                     * @return LoadSpec 是否已赋值
                     * 
                     */
                    bool LoadSpecHasBeenSet() const;

                    /**
                     * 获取Stress source from vpc.

Note: This field may return null, indicating that no valid value is found.
                     * @return VpcLoadDistribution Stress source from vpc.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    VpcLoadDistribution GetVpcLoadDistribution() const;

                    /**
                     * 设置Stress source from vpc.

Note: This field may return null, indicating that no valid value is found.
                     * @param _vpcLoadDistribution Stress source from vpc.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetVpcLoadDistribution(const VpcLoadDistribution& _vpcLoadDistribution);

                    /**
                     * 判断参数 VpcLoadDistribution 是否已赋值
                     * @return VpcLoadDistribution 是否已赋值
                     * 
                     */
                    bool VpcLoadDistributionHasBeenSet() const;

                    /**
                     * 获取Multi-region stress distribution.

Note: This field may return null, indicating that no valid value is found.
                     * @return GeoRegionsLoadDistribution Multi-region stress distribution.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<GeoRegionsLoadItem> GetGeoRegionsLoadDistribution() const;

                    /**
                     * 设置Multi-region stress distribution.

Note: This field may return null, indicating that no valid value is found.
                     * @param _geoRegionsLoadDistribution Multi-region stress distribution.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetGeoRegionsLoadDistribution(const std::vector<GeoRegionsLoadItem>& _geoRegionsLoadDistribution);

                    /**
                     * 判断参数 GeoRegionsLoadDistribution 是否已赋值
                     * @return GeoRegionsLoadDistribution 是否已赋值
                     * 
                     */
                    bool GeoRegionsLoadDistributionHasBeenSet() const;

                private:

                    /**
                     * Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    LoadSpec m_loadSpec;
                    bool m_loadSpecHasBeenSet;

                    /**
                     * Stress source from vpc.

Note: This field may return null, indicating that no valid value is found.
                     */
                    VpcLoadDistribution m_vpcLoadDistribution;
                    bool m_vpcLoadDistributionHasBeenSet;

                    /**
                     * Multi-region stress distribution.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<GeoRegionsLoadItem> m_geoRegionsLoadDistribution;
                    bool m_geoRegionsLoadDistributionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_LOAD_H_
