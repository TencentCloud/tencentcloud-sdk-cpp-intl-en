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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCENODE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Instance node description information
                */
                class InstanceNode : public AbstractModel
                {
                public:
                    InstanceNode();
                    ~InstanceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address
                     * @return Ip IP address
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address
                     * @param _ip IP address
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Model, such as S1
                     * @return Spec Model, such as S1
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Model, such as S1
                     * @param _spec Model, such as S1
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return Core Number of CPU cores
                     * 
                     */
                    int64_t GetCore() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _core Number of CPU cores
                     * 
                     */
                    void SetCore(const int64_t& _core);

                    /**
                     * 判断参数 Core 是否已赋值
                     * @return Core 是否已赋值
                     * 
                     */
                    bool CoreHasBeenSet() const;

                    /**
                     * 获取Memory size
                     * @return Memory Memory size
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size
                     * @param _memory Memory size
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Disk type
                     * @return DiskType Disk type
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type
                     * @param _diskType Disk type
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Disk size
                     * @return DiskSize Disk size
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk size
                     * @param _diskSize Disk size
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取The name of the clickhouse cluster to which it belongs.
                     * @return Role The name of the clickhouse cluster to which it belongs.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置The name of the clickhouse cluster to which it belongs.
                     * @param _role The name of the clickhouse cluster to which it belongs.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取rip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rip rip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRip() const;

                    /**
                     * 设置rip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rip rip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRip(const std::string& _rip);

                    /**
                     * 判断参数 Rip 是否已赋值
                     * @return Rip 是否已赋值
                     * 
                     */
                    bool RipHasBeenSet() const;

                    /**
                     * 获取FE node role
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FeRole FE node role
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFeRole() const;

                    /**
                     * 设置FE node role
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _feRole FE node role
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFeRole(const std::string& _feRole);

                    /**
                     * 判断参数 FeRole 是否已赋值
                     * @return FeRole 是否已赋值
                     * 
                     */
                    bool FeRoleHasBeenSet() const;

                    /**
                     * 获取UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UUID UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uUID UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                private:

                    /**
                     * IP address
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Model, such as S1
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_core;
                    bool m_coreHasBeenSet;

                    /**
                     * Memory size
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk type
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Disk size
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * The name of the clickhouse cluster to which it belongs.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * rip
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rip;
                    bool m_ripHasBeenSet;

                    /**
                     * FE node role
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_feRole;
                    bool m_feRoleHasBeenSet;

                    /**
                     * UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCENODE_H_
