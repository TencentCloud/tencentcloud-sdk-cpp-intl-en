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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESLAVEZONESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESLAVEZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeSlaveZones request structure.
                */
                class DescribeSlaveZonesRequest : public AbstractModel
                {
                public:
                    DescribeSlaveZonesRequest();
                    ~DescribeSlaveZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
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
                     * 获取Cloud frame cluster ID.
                     * @return OssClusterId Cloud frame cluster ID.
                     * 
                     */
                    int64_t GetOssClusterId() const;

                    /**
                     * 设置Cloud frame cluster ID.
                     * @param _ossClusterId Cloud frame cluster ID.
                     * 
                     */
                    void SetOssClusterId(const int64_t& _ossClusterId);

                    /**
                     * 判断参数 OssClusterId 是否已赋值
                     * @return OssClusterId 是否已赋值
                     * 
                     */
                    bool OssClusterIdHasBeenSet() const;

                private:

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Cloud frame cluster ID.
                     */
                    int64_t m_ossClusterId;
                    bool m_ossClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESLAVEZONESREQUEST_H_
