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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ZONESTATUS_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ZONESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Specification Sellable Status in a Specific Region's AZ
                */
                class ZoneStatus : public AbstractModel
                {
                public:
                    ZoneStatus();
                    ~ZoneStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification AZ
                     * @return Zone Specification AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Specification AZ
                     * @param _zone Specification AZ
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Specification Region
                     * @return Region Specification Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Specification Region
                     * @param _region Specification Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Specification Sale Status in the AZ: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     * @return Status Specification Sale Status in the AZ: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Specification Sale Status in the AZ: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     * @param _status Specification Sale Status in the AZ: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Specification AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Specification Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Specification Sale Status in the AZ: 1 - Normal, 2 - Sale disabled but upgradable, 3 - Sale completely disabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ZONESTATUS_H_
