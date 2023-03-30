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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SERVERDETAILINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SERVERDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Information of the machine at the storage layer (tcapsvr) in a dedicated cluster
                */
                class ServerDetailInfo : public AbstractModel
                {
                public:
                    ServerDetailInfo();
                    ~ServerDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID of the storage layer (tcapsvr)
                     * @return ServerUid The unique ID of the storage layer (tcapsvr)
                     */
                    std::string GetServerUid() const;

                    /**
                     * 设置The unique ID of the storage layer (tcapsvr)
                     * @param ServerUid The unique ID of the storage layer (tcapsvr)
                     */
                    void SetServerUid(const std::string& _serverUid);

                    /**
                     * 判断参数 ServerUid 是否已赋值
                     * @return ServerUid 是否已赋值
                     */
                    bool ServerUidHasBeenSet() const;

                    /**
                     * 获取Machine type
                     * @return MachineType Machine type
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Machine type
                     * @param MachineType Machine type
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Memory utilization
                     * @return MemoryRate Memory utilization
                     */
                    int64_t GetMemoryRate() const;

                    /**
                     * 设置Memory utilization
                     * @param MemoryRate Memory utilization
                     */
                    void SetMemoryRate(const int64_t& _memoryRate);

                    /**
                     * 判断参数 MemoryRate 是否已赋值
                     * @return MemoryRate 是否已赋值
                     */
                    bool MemoryRateHasBeenSet() const;

                    /**
                     * 获取Disk utilization
                     * @return DiskRate Disk utilization
                     */
                    int64_t GetDiskRate() const;

                    /**
                     * 设置Disk utilization
                     * @param DiskRate Disk utilization
                     */
                    void SetDiskRate(const int64_t& _diskRate);

                    /**
                     * 判断参数 DiskRate 是否已赋值
                     * @return DiskRate 是否已赋值
                     */
                    bool DiskRateHasBeenSet() const;

                    /**
                     * 获取The number of reads
                     * @return ReadNum The number of reads
                     */
                    int64_t GetReadNum() const;

                    /**
                     * 设置The number of reads
                     * @param ReadNum The number of reads
                     */
                    void SetReadNum(const int64_t& _readNum);

                    /**
                     * 判断参数 ReadNum 是否已赋值
                     * @return ReadNum 是否已赋值
                     */
                    bool ReadNumHasBeenSet() const;

                    /**
                     * 获取The number of writes
                     * @return WriteNum The number of writes
                     */
                    int64_t GetWriteNum() const;

                    /**
                     * 设置The number of writes
                     * @param WriteNum The number of writes
                     */
                    void SetWriteNum(const int64_t& _writeNum);

                    /**
                     * 判断参数 WriteNum 是否已赋值
                     * @return WriteNum 是否已赋值
                     */
                    bool WriteNumHasBeenSet() const;

                    /**
                     * 获取Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the storage layer (tcapsvr)
                     */
                    std::string m_serverUid;
                    bool m_serverUidHasBeenSet;

                    /**
                     * Machine type
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Memory utilization
                     */
                    int64_t m_memoryRate;
                    bool m_memoryRateHasBeenSet;

                    /**
                     * Disk utilization
                     */
                    int64_t m_diskRate;
                    bool m_diskRateHasBeenSet;

                    /**
                     * The number of reads
                     */
                    int64_t m_readNum;
                    bool m_readNumHasBeenSet;

                    /**
                     * The number of writes
                     */
                    int64_t m_writeNum;
                    bool m_writeNumHasBeenSet;

                    /**
                     * Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SERVERDETAILINFO_H_
