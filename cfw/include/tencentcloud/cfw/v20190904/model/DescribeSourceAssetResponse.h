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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/AssetZone.h>
#include <tencentcloud/cfw/v20190904/model/InstanceInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSourceAsset response structure.
                */
                class DescribeSourceAssetResponse : public AbstractModel
                {
                public:
                    DescribeSourceAssetResponse();
                    ~DescribeSourceAssetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Region collection
                     * @return ZoneList Region collection
                     * 
                     */
                    std::vector<AssetZone> GetZoneList() const;

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取Data
                     * @return Data Data
                     * 
                     */
                    std::vector<InstanceInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Total number of returned data
                     * @return Total Total number of returned data
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Region collection
                     */
                    std::vector<AssetZone> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * Data
                     */
                    std::vector<InstanceInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total number of returned data
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETRESPONSE_H_
