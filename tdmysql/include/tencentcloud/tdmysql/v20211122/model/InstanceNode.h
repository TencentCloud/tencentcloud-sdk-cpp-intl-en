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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCENODE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Node information
                */
                class InstanceNode : public AbstractModel
                {
                public:
                    InstanceNode();
                    ~InstanceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary key
                     * @return ID Primary key
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Primary key
                     * @param _iD Primary key
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Node Id
                     * @return NodeId Node Id
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node Id
                     * @param _nodeId Node Id
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Instance Ip
                     * @return Ip Instance Ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Instance Ip
                     * @param _ip Instance Ip
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
                     * 获取Instance EniIp
                     * @return EniIp Instance EniIp
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置Instance EniIp
                     * @param _eniIp Instance EniIp
                     * 
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     * 
                     */
                    bool EniIpHasBeenSet() const;

                    /**
                     * 获取Instance Port
                     * @return Port Instance Port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Instance Port
                     * @param _port Instance Port
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Instance SpecCode
                     * @return SpecCode Instance SpecCode
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置Instance SpecCode
                     * @param _specCode Instance SpecCode
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取Instance NodeName
                     * @return NodeName Instance NodeName
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Instance NodeName
                     * @param _nodeName Instance NodeName
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Instance Cpu
                     * @return Cpu Instance Cpu
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Instance Cpu
                     * @param _cpu Instance Cpu
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Instance memory
                     * @return Mem Instance memory
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置Instance memory
                     * @param _mem Instance memory
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取Instance Disk
                     * @return Disk Instance Disk
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置Instance Disk
                     * @param _disk Instance Disk
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取Instance type
                     * @return Type Instance type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Instance type
                     * @param _type Instance type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return Status Instance status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Instance status
                     * @param _status Instance status
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
                     * 获取Instance version
                     * @return Version Instance version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Instance version
                     * @param _version Instance version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Instance region
                     * @return Zone Instance region
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance region
                     * @param _zone Instance region
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
                     * 获取Instance LocalDNS
                     * @return LocalDNS Instance LocalDNS
                     * 
                     */
                    std::string GetLocalDNS() const;

                    /**
                     * 设置Instance LocalDNS
                     * @param _localDNS Instance LocalDNS
                     * 
                     */
                    void SetLocalDNS(const std::string& _localDNS);

                    /**
                     * 判断参数 LocalDNS 是否已赋值
                     * @return LocalDNS 是否已赋值
                     * 
                     */
                    bool LocalDNSHasBeenSet() const;

                    /**
                     * 获取Instance Region
                     * @return Region Instance Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance Region
                     * @param _region Instance Region
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
                     * 获取Instance log disk
                     * @return LogDisk Instance log disk
                     * 
                     */
                    int64_t GetLogDisk() const;

                    /**
                     * 设置Instance log disk
                     * @param _logDisk Instance log disk
                     * 
                     */
                    void SetLogDisk(const int64_t& _logDisk);

                    /**
                     * 判断参数 LogDisk 是否已赋值
                     * @return LogDisk 是否已赋值
                     * 
                     */
                    bool LogDiskHasBeenSet() const;

                    /**
                     * 获取Instance data disk
                     * @return DataDisk Instance data disk
                     * 
                     */
                    int64_t GetDataDisk() const;

                    /**
                     * 设置Instance data disk
                     * @param _dataDisk Instance data disk
                     * 
                     */
                    void SetDataDisk(const int64_t& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取Instance Zone ID
                     * @return ZoneID Instance Zone ID
                     * 
                     */
                    std::string GetZoneID() const;

                    /**
                     * 设置Instance Zone ID
                     * @param _zoneID Instance Zone ID
                     * 
                     */
                    void SetZoneID(const std::string& _zoneID);

                    /**
                     * 判断参数 ZoneID 是否已赋值
                     * @return ZoneID 是否已赋值
                     * 
                     */
                    bool ZoneIDHasBeenSet() const;

                    /**
                     * 获取Instance SpecName
                     * @return SpecName Instance SpecName
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Instance SpecName
                     * @param _specName Instance SpecName
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Instance Replicas
                     * @return Replicas Instance Replicas
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置Instance Replicas
                     * @param _replicas Instance Replicas
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取Instance Shards
                     * @return Shards Instance Shards
                     * 
                     */
                    int64_t GetShards() const;

                    /**
                     * 设置Instance Shards
                     * @param _shards Instance Shards
                     * 
                     */
                    void SetShards(const int64_t& _shards);

                    /**
                     * 判断参数 Shards 是否已赋值
                     * @return Shards 是否已赋值
                     * 
                     */
                    bool ShardsHasBeenSet() const;

                    /**
                     * 获取Instance data replica
                     * @return DataReplicas Instance data replica
                     * 
                     */
                    int64_t GetDataReplicas() const;

                    /**
                     * 设置Instance data replica
                     * @param _dataReplicas Instance data replica
                     * 
                     */
                    void SetDataReplicas(const int64_t& _dataReplicas);

                    /**
                     * 判断参数 DataReplicas 是否已赋值
                     * @return DataReplicas 是否已赋值
                     * 
                     */
                    bool DataReplicasHasBeenSet() const;

                    /**
                     * 获取Instance initialization parameter
                     * @return Params Instance initialization parameter
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Instance initialization parameter
                     * @param _params Instance initialization parameter
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Storage medium, CLOUD_PREMIUM: Premium Cloud Disk, CLOUD_SSD: SSD cloud disk, CLOUD_HSSD: HSSD cloud disk
                     * @return StorageType Storage medium, CLOUD_PREMIUM: Premium Cloud Disk, CLOUD_SSD: SSD cloud disk, CLOUD_HSSD: HSSD cloud disk
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage medium, CLOUD_PREMIUM: Premium Cloud Disk, CLOUD_SSD: SSD cloud disk, CLOUD_HSSD: HSSD cloud disk
                     * @param _storageType Storage medium, CLOUD_PREMIUM: Premium Cloud Disk, CLOUD_SSD: SSD cloud disk, CLOUD_HSSD: HSSD cloud disk
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * Primary key
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node Id
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Instance Ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Instance EniIp
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * Instance Port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance SpecCode
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * Instance NodeName
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Instance Cpu
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance memory
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Instance Disk
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Instance region
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance LocalDNS
                     */
                    std::string m_localDNS;
                    bool m_localDNSHasBeenSet;

                    /**
                     * Instance Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance log disk
                     */
                    int64_t m_logDisk;
                    bool m_logDiskHasBeenSet;

                    /**
                     * Instance data disk
                     */
                    int64_t m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * Instance Zone ID
                     */
                    std::string m_zoneID;
                    bool m_zoneIDHasBeenSet;

                    /**
                     * Instance SpecName
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Instance Replicas
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Instance Shards
                     */
                    int64_t m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * Instance data replica
                     */
                    int64_t m_dataReplicas;
                    bool m_dataReplicasHasBeenSet;

                    /**
                     * Instance initialization parameter
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Storage medium, CLOUD_PREMIUM: Premium Cloud Disk, CLOUD_SSD: SSD cloud disk, CLOUD_HSSD: HSSD cloud disk
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCENODE_H_
