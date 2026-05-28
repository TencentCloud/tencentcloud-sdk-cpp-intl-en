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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID Primary key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Primary key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD Primary key
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeId Node Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeId Node Id
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ip Instance Ip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Instance Ip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ip Instance Ip
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Eni IP of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EniIp Eni IP of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置Eni IP of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eniIp Eni IP of the instance
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Instance Port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Instance Port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Instance Port
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecCode Instance SpecCode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置Instance SpecCode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specCode Instance SpecCode
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeName Instance NodeName
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Instance NodeName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeName Instance NodeName
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cpu Instance Cpu
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Instance Cpu
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpu Instance Cpu
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mem Instance memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置Instance memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mem Instance memory
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Disk Instance Disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置Instance Disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _disk Instance Disk
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Instance type
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Instance status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Instance status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Instance status
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
                     * 获取instance version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version instance version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置instance version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version instance version
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone Region
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LocalDNS Instance LocalDNS
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocalDNS() const;

                    /**
                     * 设置Instance LocalDNS
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _localDNS Instance LocalDNS
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Instance Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Instance Region
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogDisk Instance log disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLogDisk() const;

                    /**
                     * 设置Instance log disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logDisk Instance log disk
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataDisk Instance data disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDataDisk() const;

                    /**
                     * 设置Instance data disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataDisk Instance data disk
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Zone ID of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneID Zone ID of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneID() const;

                    /**
                     * 设置Zone ID of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneID Zone ID of the instance
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecName Instance SpecName
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Instance SpecName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specName Instance SpecName
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Replicas Instance Replicas
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置Instance Replicas
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replicas Instance Replicas
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Shards Instance Shards
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetShards() const;

                    /**
                     * 设置Instance Shards
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shards Instance Shards
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataReplicas Instance data replica
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDataReplicas() const;

                    /**
                     * 设置Instance data replica
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataReplicas Instance data replica
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Initialize parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Params Initialize parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Initialize parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _params Initialize parameter
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageType Storage medium, CLOUD_PREMIUM: Premium Cloud Disk, CLOUD_SSD: SSD cloud disk, CLOUD_HSSD: HSSD cloud disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage medium, CLOUD_PREMIUM: Premium Cloud Disk, CLOUD_SSD: SSD cloud disk, CLOUD_HSSD: HSSD cloud disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageType Storage medium, CLOUD_PREMIUM: Premium Cloud Disk, CLOUD_SSD: SSD cloud disk, CLOUD_HSSD: HSSD cloud disk
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node Id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Instance Ip
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Eni IP of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * Instance Port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance SpecCode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * Instance NodeName
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Instance Cpu
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance memory
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Instance Disk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * Instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Instance status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * instance version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance LocalDNS
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_localDNS;
                    bool m_localDNSHasBeenSet;

                    /**
                     * Instance Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance log disk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_logDisk;
                    bool m_logDiskHasBeenSet;

                    /**
                     * Instance data disk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * Zone ID of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneID;
                    bool m_zoneIDHasBeenSet;

                    /**
                     * Instance SpecName
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Instance Replicas
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Instance Shards
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * Instance data replica
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataReplicas;
                    bool m_dataReplicasHasBeenSet;

                    /**
                     * Initialize parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Storage medium, CLOUD_PREMIUM: Premium Cloud Disk, CLOUD_SSD: SSD cloud disk, CLOUD_HSSD: HSSD cloud disk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCENODE_H_
