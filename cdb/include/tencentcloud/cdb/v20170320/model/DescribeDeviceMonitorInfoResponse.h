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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEVICEMONITORINFORESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEVICEMONITORINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/DeviceCpuInfo.h>
#include <tencentcloud/cdb/v20170320/model/DeviceMemInfo.h>
#include <tencentcloud/cdb/v20170320/model/DeviceNetInfo.h>
#include <tencentcloud/cdb/v20170320/model/DeviceDiskInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDeviceMonitorInfo response structure.
                */
                class DescribeDeviceMonitorInfoResponse : public AbstractModel
                {
                public:
                    DescribeDeviceMonitorInfoResponse();
                    ~DescribeDeviceMonitorInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CPU monitoring data of the instance
                     * @return Cpu CPU monitoring data of the instance
                     * 
                     */
                    DeviceCpuInfo GetCpu() const;

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory monitoring data of the instance
                     * @return Mem Memory monitoring data of the instance
                     * 
                     */
                    DeviceMemInfo GetMem() const;

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取Network monitoring data of the instance
                     * @return Net Network monitoring data of the instance
                     * 
                     */
                    DeviceNetInfo GetNet() const;

                    /**
                     * 判断参数 Net 是否已赋值
                     * @return Net 是否已赋值
                     * 
                     */
                    bool NetHasBeenSet() const;

                    /**
                     * 获取Disk monitoring data of the instance
                     * @return Disk Disk monitoring data of the instance
                     * 
                     */
                    DeviceDiskInfo GetDisk() const;

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                private:

                    /**
                     * CPU monitoring data of the instance
                     */
                    DeviceCpuInfo m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory monitoring data of the instance
                     */
                    DeviceMemInfo m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Network monitoring data of the instance
                     */
                    DeviceNetInfo m_net;
                    bool m_netHasBeenSet;

                    /**
                     * Disk monitoring data of the instance
                     */
                    DeviceDiskInfo m_disk;
                    bool m_diskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEVICEMONITORINFORESPONSE_H_
