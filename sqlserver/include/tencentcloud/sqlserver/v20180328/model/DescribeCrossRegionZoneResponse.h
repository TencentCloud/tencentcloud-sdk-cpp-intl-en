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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSREGIONZONERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSREGIONZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeCrossRegionZone response structure.
                */
                class DescribeCrossRegionZoneResponse : public AbstractModel
                {
                public:
                    DescribeCrossRegionZoneResponse();
                    ~DescribeCrossRegionZoneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取String ID of the region where the secondary node is located, in the format of ap-guangzhou.
                     * @return Region String ID of the region where the secondary node is located, in the format of ap-guangzhou.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取String ID of the AZ where the secondary node is located, in the format of ap-guangzhou-1.
                     * @return Zone String ID of the AZ where the secondary node is located, in the format of ap-guangzhou-1.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * String ID of the region where the secondary node is located, in the format of ap-guangzhou.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * String ID of the AZ where the secondary node is located, in the format of ap-guangzhou-1.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSREGIONZONERESPONSE_H_
