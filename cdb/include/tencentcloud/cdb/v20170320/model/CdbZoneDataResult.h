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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CDBZONEDATARESULT_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CDBZONEDATARESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/CdbSellConfig.h>
#include <tencentcloud/cdb/v20170320/model/CdbRegionSellConf.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * The purchasable specifications in a region
                */
                class CdbZoneDataResult : public AbstractModel
                {
                public:
                    CdbZoneDataResult();
                    ~CdbZoneDataResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of purchasable specifications
                     * @return Configs List of purchasable specifications
                     */
                    std::vector<CdbSellConfig> GetConfigs() const;

                    /**
                     * 设置List of purchasable specifications
                     * @param Configs List of purchasable specifications
                     */
                    void SetConfigs(const std::vector<CdbSellConfig>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     */
                    bool ConfigsHasBeenSet() const;

                    /**
                     * 获取List of AZs in purchasable regions
                     * @return Regions List of AZs in purchasable regions
                     */
                    std::vector<CdbRegionSellConf> GetRegions() const;

                    /**
                     * 设置List of AZs in purchasable regions
                     * @param Regions List of AZs in purchasable regions
                     */
                    void SetRegions(const std::vector<CdbRegionSellConf>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * List of purchasable specifications
                     */
                    std::vector<CdbSellConfig> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * List of AZs in purchasable regions
                     */
                    std::vector<CdbRegionSellConf> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CDBZONEDATARESULT_H_
