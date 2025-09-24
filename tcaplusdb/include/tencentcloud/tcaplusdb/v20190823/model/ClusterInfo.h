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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CLUSTERINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ServerDetailInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ProxyDetailInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/KafkaInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Cluster details
                */
                class ClusterInfo : public AbstractModel
                {
                public:
                    ClusterInfo();
                    ~ClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster region
                     * @return Region Cluster region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Cluster region
                     * @param _region Cluster region
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
                     * 获取Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     * @return IdlType Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     * 
                     */
                    std::string GetIdlType() const;

                    /**
                     * 设置Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     * @param _idlType Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     * 
                     */
                    void SetIdlType(const std::string& _idlType);

                    /**
                     * 判断参数 IdlType 是否已赋值
                     * @return IdlType 是否已赋值
                     * 
                     */
                    bool IdlTypeHasBeenSet() const;

                    /**
                     * 获取Network type
                     * @return NetworkType Network type
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Network type
                     * @param _networkType Network type
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取ID of the VPC instance with which a cluster is associated
                     * @return VpcId ID of the VPC instance with which a cluster is associated
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC instance with which a cluster is associated
                     * @param _vpcId ID of the VPC instance with which a cluster is associated
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取ID of the subnet instance with which a cluster is associated
                     * @return SubnetId ID of the subnet instance with which a cluster is associated
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置ID of the subnet instance with which a cluster is associated
                     * @param _subnetId ID of the subnet instance with which a cluster is associated
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedTime Creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time
                     * @param _createdTime Creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Cluster password
                     * @return Password Cluster password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Cluster password
                     * @param _password Cluster password
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Password status
                     * @return PasswordStatus Password status
                     * 
                     */
                    std::string GetPasswordStatus() const;

                    /**
                     * 设置Password status
                     * @param _passwordStatus Password status
                     * 
                     */
                    void SetPasswordStatus(const std::string& _passwordStatus);

                    /**
                     * 判断参数 PasswordStatus 是否已赋值
                     * @return PasswordStatus 是否已赋值
                     * 
                     */
                    bool PasswordStatusHasBeenSet() const;

                    /**
                     * 获取TcaplusDB SDK connection parameter: access ID
                     * @return ApiAccessId TcaplusDB SDK connection parameter: access ID
                     * 
                     */
                    std::string GetApiAccessId() const;

                    /**
                     * 设置TcaplusDB SDK connection parameter: access ID
                     * @param _apiAccessId TcaplusDB SDK connection parameter: access ID
                     * 
                     */
                    void SetApiAccessId(const std::string& _apiAccessId);

                    /**
                     * 判断参数 ApiAccessId 是否已赋值
                     * @return ApiAccessId 是否已赋值
                     * 
                     */
                    bool ApiAccessIdHasBeenSet() const;

                    /**
                     * 获取TcaplusDB SDK connection parameter: access address
                     * @return ApiAccessIp TcaplusDB SDK connection parameter: access address
                     * 
                     */
                    std::string GetApiAccessIp() const;

                    /**
                     * 设置TcaplusDB SDK connection parameter: access address
                     * @param _apiAccessIp TcaplusDB SDK connection parameter: access address
                     * 
                     */
                    void SetApiAccessIp(const std::string& _apiAccessIp);

                    /**
                     * 判断参数 ApiAccessIp 是否已赋值
                     * @return ApiAccessIp 是否已赋值
                     * 
                     */
                    bool ApiAccessIpHasBeenSet() const;

                    /**
                     * 获取TcaplusDB SDK connection parameter: access port
                     * @return ApiAccessPort TcaplusDB SDK connection parameter: access port
                     * 
                     */
                    int64_t GetApiAccessPort() const;

                    /**
                     * 设置TcaplusDB SDK connection parameter: access port
                     * @param _apiAccessPort TcaplusDB SDK connection parameter: access port
                     * 
                     */
                    void SetApiAccessPort(const int64_t& _apiAccessPort);

                    /**
                     * 判断参数 ApiAccessPort 是否已赋值
                     * @return ApiAccessPort 是否已赋值
                     * 
                     */
                    bool ApiAccessPortHasBeenSet() const;

                    /**
                     * 获取If the value of PasswordStatus is unmodifiable, it indicates that the old password has not expired. This field will display the expiration time of the old password; otherwise, the value is null.
                     * @return OldPasswordExpireTime If the value of PasswordStatus is unmodifiable, it indicates that the old password has not expired. This field will display the expiration time of the old password; otherwise, the value is null.
                     * 
                     */
                    std::string GetOldPasswordExpireTime() const;

                    /**
                     * 设置If the value of PasswordStatus is unmodifiable, it indicates that the old password has not expired. This field will display the expiration time of the old password; otherwise, the value is null.
                     * @param _oldPasswordExpireTime If the value of PasswordStatus is unmodifiable, it indicates that the old password has not expired. This field will display the expiration time of the old password; otherwise, the value is null.
                     * 
                     */
                    void SetOldPasswordExpireTime(const std::string& _oldPasswordExpireTime);

                    /**
                     * 判断参数 OldPasswordExpireTime 是否已赋值
                     * @return OldPasswordExpireTime 是否已赋值
                     * 
                     */
                    bool OldPasswordExpireTimeHasBeenSet() const;

                    /**
                     * 获取TencentDB for TcaplusDB (TcaplusDB) SDK connection parameters, which are used to access the IPv6 address.
                     * @return ApiAccessIpv6 TencentDB for TcaplusDB (TcaplusDB) SDK connection parameters, which are used to access the IPv6 address.
                     * 
                     */
                    std::string GetApiAccessIpv6() const;

                    /**
                     * 设置TencentDB for TcaplusDB (TcaplusDB) SDK connection parameters, which are used to access the IPv6 address.
                     * @param _apiAccessIpv6 TencentDB for TcaplusDB (TcaplusDB) SDK connection parameters, which are used to access the IPv6 address.
                     * 
                     */
                    void SetApiAccessIpv6(const std::string& _apiAccessIpv6);

                    /**
                     * 判断参数 ApiAccessIpv6 是否已赋值
                     * @return ApiAccessIpv6 是否已赋值
                     * 
                     */
                    bool ApiAccessIpv6HasBeenSet() const;

                    /**
                     * 获取Cluster type. 0,1: shared cluster; 2: independent cluster.
                     * @return ClusterType Cluster type. 0,1: shared cluster; 2: independent cluster.
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置Cluster type. 0,1: shared cluster; 2: independent cluster.
                     * @param _clusterType Cluster type. 0,1: shared cluster; 2: independent cluster.
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Cluster status. 0: indicates normal operation; 1: indicates frozen isolation (usually due to arrears); 2: indicates to be recycled (usually when the user proactively triggers deletion); 3: pending release (indicating that resources occupied by this table can be released); 4: changing.
                     * @return ClusterStatus Cluster status. 0: indicates normal operation; 1: indicates frozen isolation (usually due to arrears); 2: indicates to be recycled (usually when the user proactively triggers deletion); 3: pending release (indicating that resources occupied by this table can be released); 4: changing.
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置Cluster status. 0: indicates normal operation; 1: indicates frozen isolation (usually due to arrears); 2: indicates to be recycled (usually when the user proactively triggers deletion); 3: pending release (indicating that resources occupied by this table can be released); 4: changing.
                     * @param _clusterStatus Cluster status. 0: indicates normal operation; 1: indicates frozen isolation (usually due to arrears); 2: indicates to be recycled (usually when the user proactively triggers deletion); 3: pending release (indicating that resources occupied by this table can be released); 4: changing.
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Read CU.
                     * @return ReadCapacityUnit Read CU.
                     * 
                     */
                    int64_t GetReadCapacityUnit() const;

                    /**
                     * 设置Read CU.
                     * @param _readCapacityUnit Read CU.
                     * 
                     */
                    void SetReadCapacityUnit(const int64_t& _readCapacityUnit);

                    /**
                     * 判断参数 ReadCapacityUnit 是否已赋值
                     * @return ReadCapacityUnit 是否已赋值
                     * 
                     */
                    bool ReadCapacityUnitHasBeenSet() const;

                    /**
                     * 获取Write CU.
                     * @return WriteCapacityUnit Write CU.
                     * 
                     */
                    int64_t GetWriteCapacityUnit() const;

                    /**
                     * 设置Write CU.
                     * @param _writeCapacityUnit Write CU.
                     * 
                     */
                    void SetWriteCapacityUnit(const int64_t& _writeCapacityUnit);

                    /**
                     * 判断参数 WriteCapacityUnit 是否已赋值
                     * @return WriteCapacityUnit 是否已赋值
                     * 
                     */
                    bool WriteCapacityUnitHasBeenSet() const;

                    /**
                     * 获取Disk capacity.
                     * @return DiskVolume Disk capacity.
                     * 
                     */
                    int64_t GetDiskVolume() const;

                    /**
                     * 设置Disk capacity.
                     * @param _diskVolume Disk capacity.
                     * 
                     */
                    void SetDiskVolume(const int64_t& _diskVolume);

                    /**
                     * 判断参数 DiskVolume 是否已赋值
                     * @return DiskVolume 是否已赋值
                     * 
                     */
                    bool DiskVolumeHasBeenSet() const;

                    /**
                     * 获取Information about the dedicated server.
                     * @return ServerList Information about the dedicated server.
                     * 
                     */
                    std::vector<ServerDetailInfo> GetServerList() const;

                    /**
                     * 设置Information about the dedicated server.
                     * @param _serverList Information about the dedicated server.
                     * 
                     */
                    void SetServerList(const std::vector<ServerDetailInfo>& _serverList);

                    /**
                     * 判断参数 ServerList 是否已赋值
                     * @return ServerList 是否已赋值
                     * 
                     */
                    bool ServerListHasBeenSet() const;

                    /**
                     * 获取Information about the dedicated proxy server.
                     * @return ProxyList Information about the dedicated proxy server.
                     * 
                     */
                    std::vector<ProxyDetailInfo> GetProxyList() const;

                    /**
                     * 设置Information about the dedicated proxy server.
                     * @param _proxyList Information about the dedicated proxy server.
                     * 
                     */
                    void SetProxyList(const std::vector<ProxyDetailInfo>& _proxyList);

                    /**
                     * 判断参数 ProxyList 是否已赋值
                     * @return ProxyList 是否已赋值
                     * 
                     */
                    bool ProxyListHasBeenSet() const;

                    /**
                     * 获取Whether the cluster operation approval feature is enabled. Valid values: `0` (disabled), `1` (enabled)
                     * @return Censorship Whether the cluster operation approval feature is enabled. Valid values: `0` (disabled), `1` (enabled)
                     * 
                     */
                    int64_t GetCensorship() const;

                    /**
                     * 设置Whether the cluster operation approval feature is enabled. Valid values: `0` (disabled), `1` (enabled)
                     * @param _censorship Whether the cluster operation approval feature is enabled. Valid values: `0` (disabled), `1` (enabled)
                     * 
                     */
                    void SetCensorship(const int64_t& _censorship);

                    /**
                     * 判断参数 Censorship 是否已赋值
                     * @return Censorship 是否已赋值
                     * 
                     */
                    bool CensorshipHasBeenSet() const;

                    /**
                     * 获取Approver UIN list.
                     * @return DbaUins Approver UIN list.
                     * 
                     */
                    std::vector<std::string> GetDbaUins() const;

                    /**
                     * 设置Approver UIN list.
                     * @param _dbaUins Approver UIN list.
                     * 
                     */
                    void SetDbaUins(const std::vector<std::string>& _dbaUins);

                    /**
                     * 判断参数 DbaUins 是否已赋值
                     * @return DbaUins 是否已赋值
                     * 
                     */
                    bool DbaUinsHasBeenSet() const;

                    /**
                     * 获取Whether data subscription is enabled.
                     * @return DataFlowStatus Whether data subscription is enabled.
                     * 
                     */
                    int64_t GetDataFlowStatus() const;

                    /**
                     * 设置Whether data subscription is enabled.
                     * @param _dataFlowStatus Whether data subscription is enabled.
                     * 
                     */
                    void SetDataFlowStatus(const int64_t& _dataFlowStatus);

                    /**
                     * 判断参数 DataFlowStatus 是否已赋值
                     * @return DataFlowStatus 是否已赋值
                     * 
                     */
                    bool DataFlowStatusHasBeenSet() const;

                    /**
                     * 获取Kafka information for data subscription.
                     * @return KafkaInfo Kafka information for data subscription.
                     * 
                     */
                    KafkaInfo GetKafkaInfo() const;

                    /**
                     * 设置Kafka information for data subscription.
                     * @param _kafkaInfo Kafka information for data subscription.
                     * 
                     */
                    void SetKafkaInfo(const KafkaInfo& _kafkaInfo);

                    /**
                     * 判断参数 KafkaInfo 是否已赋值
                     * @return KafkaInfo 是否已赋值
                     * 
                     */
                    bool KafkaInfoHasBeenSet() const;

                    /**
                     * 获取Retention period for the Txh backup file of the cluster before expiration and deletion.
                     * @return TxhBackupExpireDay Retention period for the Txh backup file of the cluster before expiration and deletion.
                     * 
                     */
                    uint64_t GetTxhBackupExpireDay() const;

                    /**
                     * 设置Retention period for the Txh backup file of the cluster before expiration and deletion.
                     * @param _txhBackupExpireDay Retention period for the Txh backup file of the cluster before expiration and deletion.
                     * 
                     */
                    void SetTxhBackupExpireDay(const uint64_t& _txhBackupExpireDay);

                    /**
                     * 判断参数 TxhBackupExpireDay 是否已赋值
                     * @return TxhBackupExpireDay 是否已赋值
                     * 
                     */
                    bool TxhBackupExpireDayHasBeenSet() const;

                    /**
                     * 获取Retention period for the Ulog backup file of the cluster before expiration and deletion.
                     * @return UlogBackupExpireDay Retention period for the Ulog backup file of the cluster before expiration and deletion.
                     * 
                     */
                    uint64_t GetUlogBackupExpireDay() const;

                    /**
                     * 设置Retention period for the Ulog backup file of the cluster before expiration and deletion.
                     * @param _ulogBackupExpireDay Retention period for the Ulog backup file of the cluster before expiration and deletion.
                     * 
                     */
                    void SetUlogBackupExpireDay(const uint64_t& _ulogBackupExpireDay);

                    /**
                     * 判断参数 UlogBackupExpireDay 是否已赋值
                     * @return UlogBackupExpireDay 是否已赋值
                     * 
                     */
                    bool UlogBackupExpireDayHasBeenSet() const;

                    /**
                     * 获取Whether the expiration policy for the Ulog backup file of the cluster is read-only. 0: UlogBackupExpire is read-only and cannot be modified; 1: UlogBackupExpire can be modified.
                     * @return IsReadOnlyUlogBackupExpireDay Whether the expiration policy for the Ulog backup file of the cluster is read-only. 0: UlogBackupExpire is read-only and cannot be modified; 1: UlogBackupExpire can be modified.
                     * 
                     */
                    uint64_t GetIsReadOnlyUlogBackupExpireDay() const;

                    /**
                     * 设置Whether the expiration policy for the Ulog backup file of the cluster is read-only. 0: UlogBackupExpire is read-only and cannot be modified; 1: UlogBackupExpire can be modified.
                     * @param _isReadOnlyUlogBackupExpireDay Whether the expiration policy for the Ulog backup file of the cluster is read-only. 0: UlogBackupExpire is read-only and cannot be modified; 1: UlogBackupExpire can be modified.
                     * 
                     */
                    void SetIsReadOnlyUlogBackupExpireDay(const uint64_t& _isReadOnlyUlogBackupExpireDay);

                    /**
                     * 判断参数 IsReadOnlyUlogBackupExpireDay 是否已赋值
                     * @return IsReadOnlyUlogBackupExpireDay 是否已赋值
                     * 
                     */
                    bool IsReadOnlyUlogBackupExpireDayHasBeenSet() const;

                    /**
                     * 获取restproxy status.
                     * @return RestProxyStatus restproxy status.
                     * 
                     */
                    int64_t GetRestProxyStatus() const;

                    /**
                     * 设置restproxy status.
                     * @param _restProxyStatus restproxy status.
                     * 
                     */
                    void SetRestProxyStatus(const int64_t& _restProxyStatus);

                    /**
                     * 判断参数 RestProxyStatus 是否已赋值
                     * @return RestProxyStatus 是否已赋值
                     * 
                     */
                    bool RestProxyStatusHasBeenSet() const;

                    /**
                     * 获取Total number of shards in the cluster.
                     * @return ShardTotalNum Total number of shards in the cluster.
                     * 
                     */
                    int64_t GetShardTotalNum() const;

                    /**
                     * 设置Total number of shards in the cluster.
                     * @param _shardTotalNum Total number of shards in the cluster.
                     * 
                     */
                    void SetShardTotalNum(const int64_t& _shardTotalNum);

                    /**
                     * 判断参数 ShardTotalNum 是否已赋值
                     * @return ShardTotalNum 是否已赋值
                     * 
                     */
                    bool ShardTotalNumHasBeenSet() const;

                    /**
                     * 获取Total number of used shards.
                     * @return ShardUsedNum Total number of used shards.
                     * 
                     */
                    int64_t GetShardUsedNum() const;

                    /**
                     * 设置Total number of used shards.
                     * @param _shardUsedNum Total number of used shards.
                     * 
                     */
                    void SetShardUsedNum(const int64_t& _shardUsedNum);

                    /**
                     * 判断参数 ShardUsedNum 是否已赋值
                     * @return ShardUsedNum 是否已赋值
                     * 
                     */
                    bool ShardUsedNumHasBeenSet() const;

                private:

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Cluster data description language type, such as `PROTO`, `TDR`, or `MIX`
                     */
                    std::string m_idlType;
                    bool m_idlTypeHasBeenSet;

                    /**
                     * Network type
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * ID of the VPC instance with which a cluster is associated
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the subnet instance with which a cluster is associated
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Cluster password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Password status
                     */
                    std::string m_passwordStatus;
                    bool m_passwordStatusHasBeenSet;

                    /**
                     * TcaplusDB SDK connection parameter: access ID
                     */
                    std::string m_apiAccessId;
                    bool m_apiAccessIdHasBeenSet;

                    /**
                     * TcaplusDB SDK connection parameter: access address
                     */
                    std::string m_apiAccessIp;
                    bool m_apiAccessIpHasBeenSet;

                    /**
                     * TcaplusDB SDK connection parameter: access port
                     */
                    int64_t m_apiAccessPort;
                    bool m_apiAccessPortHasBeenSet;

                    /**
                     * If the value of PasswordStatus is unmodifiable, it indicates that the old password has not expired. This field will display the expiration time of the old password; otherwise, the value is null.
                     */
                    std::string m_oldPasswordExpireTime;
                    bool m_oldPasswordExpireTimeHasBeenSet;

                    /**
                     * TencentDB for TcaplusDB (TcaplusDB) SDK connection parameters, which are used to access the IPv6 address.
                     */
                    std::string m_apiAccessIpv6;
                    bool m_apiAccessIpv6HasBeenSet;

                    /**
                     * Cluster type. 0,1: shared cluster; 2: independent cluster.
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Cluster status. 0: indicates normal operation; 1: indicates frozen isolation (usually due to arrears); 2: indicates to be recycled (usually when the user proactively triggers deletion); 3: pending release (indicating that resources occupied by this table can be released); 4: changing.
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Read CU.
                     */
                    int64_t m_readCapacityUnit;
                    bool m_readCapacityUnitHasBeenSet;

                    /**
                     * Write CU.
                     */
                    int64_t m_writeCapacityUnit;
                    bool m_writeCapacityUnitHasBeenSet;

                    /**
                     * Disk capacity.
                     */
                    int64_t m_diskVolume;
                    bool m_diskVolumeHasBeenSet;

                    /**
                     * Information about the dedicated server.
                     */
                    std::vector<ServerDetailInfo> m_serverList;
                    bool m_serverListHasBeenSet;

                    /**
                     * Information about the dedicated proxy server.
                     */
                    std::vector<ProxyDetailInfo> m_proxyList;
                    bool m_proxyListHasBeenSet;

                    /**
                     * Whether the cluster operation approval feature is enabled. Valid values: `0` (disabled), `1` (enabled)
                     */
                    int64_t m_censorship;
                    bool m_censorshipHasBeenSet;

                    /**
                     * Approver UIN list.
                     */
                    std::vector<std::string> m_dbaUins;
                    bool m_dbaUinsHasBeenSet;

                    /**
                     * Whether data subscription is enabled.
                     */
                    int64_t m_dataFlowStatus;
                    bool m_dataFlowStatusHasBeenSet;

                    /**
                     * Kafka information for data subscription.
                     */
                    KafkaInfo m_kafkaInfo;
                    bool m_kafkaInfoHasBeenSet;

                    /**
                     * Retention period for the Txh backup file of the cluster before expiration and deletion.
                     */
                    uint64_t m_txhBackupExpireDay;
                    bool m_txhBackupExpireDayHasBeenSet;

                    /**
                     * Retention period for the Ulog backup file of the cluster before expiration and deletion.
                     */
                    uint64_t m_ulogBackupExpireDay;
                    bool m_ulogBackupExpireDayHasBeenSet;

                    /**
                     * Whether the expiration policy for the Ulog backup file of the cluster is read-only. 0: UlogBackupExpire is read-only and cannot be modified; 1: UlogBackupExpire can be modified.
                     */
                    uint64_t m_isReadOnlyUlogBackupExpireDay;
                    bool m_isReadOnlyUlogBackupExpireDayHasBeenSet;

                    /**
                     * restproxy status.
                     */
                    int64_t m_restProxyStatus;
                    bool m_restProxyStatusHasBeenSet;

                    /**
                     * Total number of shards in the cluster.
                     */
                    int64_t m_shardTotalNum;
                    bool m_shardTotalNumHasBeenSet;

                    /**
                     * Total number of used shards.
                     */
                    int64_t m_shardUsedNum;
                    bool m_shardUsedNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CLUSTERINFO_H_
