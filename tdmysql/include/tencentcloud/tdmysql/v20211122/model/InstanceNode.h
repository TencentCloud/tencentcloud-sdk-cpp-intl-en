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
                     * 获取
                     * @return ID 
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置
                     * @param _iD 
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
                     * 获取
                     * @return InstanceId 
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置
                     * @param _instanceId 
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
                     * 获取
                     * @return Ip 
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置
                     * @param _ip 
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
                     * 获取
                     * @return EniIp 
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置
                     * @param _eniIp 
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
                     * 获取
                     * @return Port 
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置
                     * @param _port 
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
                     * 获取
                     * @return SpecCode 
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置
                     * @param _specCode 
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
                     * 获取
                     * @return NodeName 
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置
                     * @param _nodeName 
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
                     * 获取
                     * @return Cpu 
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置
                     * @param _cpu 
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
                     * 获取
                     * @return Mem 
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置
                     * @param _mem 
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
                     * 获取
                     * @return Disk 
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置
                     * @param _disk 
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
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * 获取
                     * @return Status 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
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
                     * 获取
                     * @return Version 
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置
                     * @param _version 
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
                     * 获取
                     * @return Zone 
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置
                     * @param _zone 
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
                     * 获取
                     * @return LocalDNS 
                     * 
                     */
                    std::string GetLocalDNS() const;

                    /**
                     * 设置
                     * @param _localDNS 
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
                     * 获取
                     * @return Region 
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置
                     * @param _region 
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
                     * 获取
                     * @return LogDisk 
                     * 
                     */
                    int64_t GetLogDisk() const;

                    /**
                     * 设置
                     * @param _logDisk 
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
                     * 获取
                     * @return DataDisk 
                     * 
                     */
                    int64_t GetDataDisk() const;

                    /**
                     * 设置
                     * @param _dataDisk 
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
                     * 获取
                     * @return ZoneID 
                     * 
                     */
                    std::string GetZoneID() const;

                    /**
                     * 设置
                     * @param _zoneID 
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
                     * 获取
                     * @return SpecName 
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置
                     * @param _specName 
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
                     * 获取
                     * @return Replicas 
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置
                     * @param _replicas 
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
                     * 获取
                     * @return Shards 
                     * 
                     */
                    int64_t GetShards() const;

                    /**
                     * 设置
                     * @param _shards 
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
                     * 获取
                     * @return DataReplicas 
                     * 
                     */
                    int64_t GetDataReplicas() const;

                    /**
                     * 设置
                     * @param _dataReplicas 
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
                     * 获取
                     * @return Params 
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置
                     * @param _params 
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
                     * 获取
                     * @return StorageType 
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置
                     * @param _storageType 
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
                     * 
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node Id
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_localDNS;
                    bool m_localDNSHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_logDisk;
                    bool m_logDiskHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_zoneID;
                    bool m_zoneIDHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_dataReplicas;
                    bool m_dataReplicasHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCENODE_H_
