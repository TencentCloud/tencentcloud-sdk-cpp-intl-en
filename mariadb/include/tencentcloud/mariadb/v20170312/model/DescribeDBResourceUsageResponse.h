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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBRESOURCEUSAGERESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBRESOURCEUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/MonitorData.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBResourceUsage response structure.
                */
                class DescribeDBResourceUsageResponse : public AbstractModel
                {
                public:
                    DescribeDBResourceUsageResponse();
                    ~DescribeDBResourceUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Available capacity of binlog disk in GB
                     * @return BinlogDiskAvailable Available capacity of binlog disk in GB
                     */
                    MonitorData GetBinlogDiskAvailable() const;

                    /**
                     * 判断参数 BinlogDiskAvailable 是否已赋值
                     * @return BinlogDiskAvailable 是否已赋值
                     */
                    bool BinlogDiskAvailableHasBeenSet() const;

                    /**
                     * 获取Available disk capacity in GB
                     * @return DataDiskAvailable Available disk capacity in GB
                     */
                    MonitorData GetDataDiskAvailable() const;

                    /**
                     * 判断参数 DataDiskAvailable 是否已赋值
                     * @return DataDiskAvailable 是否已赋值
                     */
                    bool DataDiskAvailableHasBeenSet() const;

                    /**
                     * 获取CPU utilization
                     * @return CpuUsageRate CPU utilization
                     */
                    MonitorData GetCpuUsageRate() const;

                    /**
                     * 判断参数 CpuUsageRate 是否已赋值
                     * @return CpuUsageRate 是否已赋值
                     */
                    bool CpuUsageRateHasBeenSet() const;

                    /**
                     * 获取Available memory size in GB
                     * @return MemAvailable Available memory size in GB
                     */
                    MonitorData GetMemAvailable() const;

                    /**
                     * 判断参数 MemAvailable 是否已赋值
                     * @return MemAvailable 是否已赋值
                     */
                    bool MemAvailableHasBeenSet() const;

                private:

                    /**
                     * Available capacity of binlog disk in GB
                     */
                    MonitorData m_binlogDiskAvailable;
                    bool m_binlogDiskAvailableHasBeenSet;

                    /**
                     * Available disk capacity in GB
                     */
                    MonitorData m_dataDiskAvailable;
                    bool m_dataDiskAvailableHasBeenSet;

                    /**
                     * CPU utilization
                     */
                    MonitorData m_cpuUsageRate;
                    bool m_cpuUsageRateHasBeenSet;

                    /**
                     * Available memory size in GB
                     */
                    MonitorData m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBRESOURCEUSAGERESPONSE_H_
