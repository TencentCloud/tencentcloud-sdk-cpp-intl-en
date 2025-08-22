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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECOLLATIONTIMEZONEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECOLLATIONTIMEZONEREQUEST_H_

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
                * DescribeCollationTimeZone request structure.
                */
                class DescribeCollationTimeZoneRequest : public AbstractModel
                {
                public:
                    DescribeCollationTimeZoneRequest();
                    ~DescribeCollationTimeZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Host type of the purchased instance. PM: physical server; CLOUD_PREMIUM: CVM with Premium Cloud Disk;
CLOUD_SSD: CVM with Cloud SSD; CLOUD_HSSD: CVM with Enhanced SSD; CLOUD_TSSD: CVM with Tremendous SSD; CLOUD_BSSD: CVM with Balanced SSD; CLOUD_BASIC: CVM with cloud disk. PM is set as the default value.
                     * @return MachineType Host type of the purchased instance. PM: physical server; CLOUD_PREMIUM: CVM with Premium Cloud Disk;
CLOUD_SSD: CVM with Cloud SSD; CLOUD_HSSD: CVM with Enhanced SSD; CLOUD_TSSD: CVM with Tremendous SSD; CLOUD_BSSD: CVM with Balanced SSD; CLOUD_BASIC: CVM with cloud disk. PM is set as the default value.
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Host type of the purchased instance. PM: physical server; CLOUD_PREMIUM: CVM with Premium Cloud Disk;
CLOUD_SSD: CVM with Cloud SSD; CLOUD_HSSD: CVM with Enhanced SSD; CLOUD_TSSD: CVM with Tremendous SSD; CLOUD_BSSD: CVM with Balanced SSD; CLOUD_BASIC: CVM with cloud disk. PM is set as the default value.
                     * @param _machineType Host type of the purchased instance. PM: physical server; CLOUD_PREMIUM: CVM with Premium Cloud Disk;
CLOUD_SSD: CVM with Cloud SSD; CLOUD_HSSD: CVM with Enhanced SSD; CLOUD_TSSD: CVM with Tremendous SSD; CLOUD_BSSD: CVM with Balanced SSD; CLOUD_BASIC: CVM with cloud disk. PM is set as the default value.
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Version number of the purchased instance.
                     * @return DBVersion Version number of the purchased instance.
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置Version number of the purchased instance.
                     * @param _dBVersion Version number of the purchased instance.
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                private:

                    /**
                     * Host type of the purchased instance. PM: physical server; CLOUD_PREMIUM: CVM with Premium Cloud Disk;
CLOUD_SSD: CVM with Cloud SSD; CLOUD_HSSD: CVM with Enhanced SSD; CLOUD_TSSD: CVM with Tremendous SSD; CLOUD_BSSD: CVM with Balanced SSD; CLOUD_BASIC: CVM with cloud disk. PM is set as the default value.
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Version number of the purchased instance.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECOLLATIONTIMEZONEREQUEST_H_
