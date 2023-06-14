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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DEVICEDISKINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DEVICEDISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Disk monitoring data of the instance
                */
                class DeviceDiskInfo : public AbstractModel
                {
                public:
                    DeviceDiskInfo();
                    ~DeviceDiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time percentage of IO operations per second
                     * @return IoRatioPerSec Time percentage of IO operations per second
                     * 
                     */
                    std::vector<int64_t> GetIoRatioPerSec() const;

                    /**
                     * 设置Time percentage of IO operations per second
                     * @param _ioRatioPerSec Time percentage of IO operations per second
                     * 
                     */
                    void SetIoRatioPerSec(const std::vector<int64_t>& _ioRatioPerSec);

                    /**
                     * 判断参数 IoRatioPerSec 是否已赋值
                     * @return IoRatioPerSec 是否已赋值
                     * 
                     */
                    bool IoRatioPerSecHasBeenSet() const;

                    /**
                     * 获取Average wait time of device I/O operations * 100 in milliseconds. For example, if the value is 201, the average wait time of I/O operations is 201/100 = 2.1 milliseconds.
                     * @return IoWaitTime Average wait time of device I/O operations * 100 in milliseconds. For example, if the value is 201, the average wait time of I/O operations is 201/100 = 2.1 milliseconds.
                     * 
                     */
                    std::vector<int64_t> GetIoWaitTime() const;

                    /**
                     * 设置Average wait time of device I/O operations * 100 in milliseconds. For example, if the value is 201, the average wait time of I/O operations is 201/100 = 2.1 milliseconds.
                     * @param _ioWaitTime Average wait time of device I/O operations * 100 in milliseconds. For example, if the value is 201, the average wait time of I/O operations is 201/100 = 2.1 milliseconds.
                     * 
                     */
                    void SetIoWaitTime(const std::vector<int64_t>& _ioWaitTime);

                    /**
                     * 判断参数 IoWaitTime 是否已赋值
                     * @return IoWaitTime 是否已赋值
                     * 
                     */
                    bool IoWaitTimeHasBeenSet() const;

                    /**
                     * 获取Average number of read operations completed by the disk per second * 100. For example, if the value is 2,002, the average number of read operations completed by the disk per second is 2,002/100=20.2.
                     * @return Read Average number of read operations completed by the disk per second * 100. For example, if the value is 2,002, the average number of read operations completed by the disk per second is 2,002/100=20.2.
                     * 
                     */
                    std::vector<int64_t> GetRead() const;

                    /**
                     * 设置Average number of read operations completed by the disk per second * 100. For example, if the value is 2,002, the average number of read operations completed by the disk per second is 2,002/100=20.2.
                     * @param _read Average number of read operations completed by the disk per second * 100. For example, if the value is 2,002, the average number of read operations completed by the disk per second is 2,002/100=20.2.
                     * 
                     */
                    void SetRead(const std::vector<int64_t>& _read);

                    /**
                     * 判断参数 Read 是否已赋值
                     * @return Read 是否已赋值
                     * 
                     */
                    bool ReadHasBeenSet() const;

                    /**
                     * 获取Average number of write operations completed by the disk per second * 100. For example, if the value is 30,001, the average number of write operations completed by the disk per second is 30,001/100=300.01.
                     * @return Write Average number of write operations completed by the disk per second * 100. For example, if the value is 30,001, the average number of write operations completed by the disk per second is 30,001/100=300.01.
                     * 
                     */
                    std::vector<int64_t> GetWrite() const;

                    /**
                     * 设置Average number of write operations completed by the disk per second * 100. For example, if the value is 30,001, the average number of write operations completed by the disk per second is 30,001/100=300.01.
                     * @param _write Average number of write operations completed by the disk per second * 100. For example, if the value is 30,001, the average number of write operations completed by the disk per second is 30,001/100=300.01.
                     * 
                     */
                    void SetWrite(const std::vector<int64_t>& _write);

                    /**
                     * 判断参数 Write 是否已赋值
                     * @return Write 是否已赋值
                     * 
                     */
                    bool WriteHasBeenSet() const;

                    /**
                     * 获取Disk capacity. Each value is comprised of two data, with the first data representing the used capacity and the second one representing the total disk capacity.
                     * @return CapacityRatio Disk capacity. Each value is comprised of two data, with the first data representing the used capacity and the second one representing the total disk capacity.
                     * 
                     */
                    std::vector<int64_t> GetCapacityRatio() const;

                    /**
                     * 设置Disk capacity. Each value is comprised of two data, with the first data representing the used capacity and the second one representing the total disk capacity.
                     * @param _capacityRatio Disk capacity. Each value is comprised of two data, with the first data representing the used capacity and the second one representing the total disk capacity.
                     * 
                     */
                    void SetCapacityRatio(const std::vector<int64_t>& _capacityRatio);

                    /**
                     * 判断参数 CapacityRatio 是否已赋值
                     * @return CapacityRatio 是否已赋值
                     * 
                     */
                    bool CapacityRatioHasBeenSet() const;

                private:

                    /**
                     * Time percentage of IO operations per second
                     */
                    std::vector<int64_t> m_ioRatioPerSec;
                    bool m_ioRatioPerSecHasBeenSet;

                    /**
                     * Average wait time of device I/O operations * 100 in milliseconds. For example, if the value is 201, the average wait time of I/O operations is 201/100 = 2.1 milliseconds.
                     */
                    std::vector<int64_t> m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * Average number of read operations completed by the disk per second * 100. For example, if the value is 2,002, the average number of read operations completed by the disk per second is 2,002/100=20.2.
                     */
                    std::vector<int64_t> m_read;
                    bool m_readHasBeenSet;

                    /**
                     * Average number of write operations completed by the disk per second * 100. For example, if the value is 30,001, the average number of write operations completed by the disk per second is 30,001/100=300.01.
                     */
                    std::vector<int64_t> m_write;
                    bool m_writeHasBeenSet;

                    /**
                     * Disk capacity. Each value is comprised of two data, with the first data representing the used capacity and the second one representing the total disk capacity.
                     */
                    std::vector<int64_t> m_capacityRatio;
                    bool m_capacityRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DEVICEDISKINFO_H_
