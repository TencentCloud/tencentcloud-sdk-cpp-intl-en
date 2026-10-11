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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/MultiDiskMC.h>
#include <tencentcloud/emr/v20190103/model/CdbInfo.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/SubnetInfo.h>
#include <tencentcloud/emr/v20190103/model/DiskHealthIssue.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Node hardware information.
                */
                class NodeHardwareInfo : public AbstractModel
                {
                public:
                    NodeHardwareInfo();
                    ~NodeHardwareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>User APPID.</p>
                     * @return AppId <p>User APPID.</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>User APPID.</p>
                     * @param _appId <p>User APPID.</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Serial number.</p>
                     * @return SerialNo <p>Serial number.</p>
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置<p>Serial number.</p>
                     * @param _serialNo <p>Serial number.</p>
                     * 
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     * 
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取<p>Machine instance ID.</p>
                     * @return OrderNo <p>Machine instance ID.</p>
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置<p>Machine instance ID.</p>
                     * @param _orderNo <p>Machine instance ID.</p>
                     * 
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取<p>Public IP address bound to the Master node.</p>
                     * @return WanIp <p>Public IP address bound to the Master node.</p>
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置<p>Public IP address bound to the Master node.</p>
                     * @param _wanIp <p>Public IP address bound to the Master node.</p>
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取<p>Node type. Valid values: 0 (Common node), 1 (Master node)<br>2 (Core node) and 3 (Task node).</p>
                     * @return Flag <p>Node type. Valid values: 0 (Common node), 1 (Master node)<br>2 (Core node) and 3 (Task node).</p>
                     * 
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置<p>Node type. Valid values: 0 (Common node), 1 (Master node)<br>2 (Core node) and 3 (Task node).</p>
                     * @param _flag <p>Node type. Valid values: 0 (Common node), 1 (Master node)<br>2 (Core node) and 3 (Task node).</p>
                     * 
                     */
                    void SetFlag(const int64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取<p>Node specifications.</p>
                     * @return Spec <p>Node specifications.</p>
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>Node specifications.</p>
                     * @param _spec <p>Node specifications.</p>
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
                     * 获取<p>Number of node cores.</p>
                     * @return CpuNum <p>Number of node cores.</p>
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置<p>Number of node cores.</p>
                     * @param _cpuNum <p>Number of node cores.</p>
                     * 
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取<p>Node memory (bytes).</p>
                     * @return MemSize <p>Node memory (bytes).</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>Node memory (bytes).</p>
                     * @param _memSize <p>Node memory (bytes).</p>
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Node memory description (GB).</p>
                     * @return MemDesc <p>Node memory description (GB).</p>
                     * 
                     */
                    std::string GetMemDesc() const;

                    /**
                     * 设置<p>Node memory description (GB).</p>
                     * @param _memDesc <p>Node memory description (GB).</p>
                     * 
                     */
                    void SetMemDesc(const std::string& _memDesc);

                    /**
                     * 判断参数 MemDesc 是否已赋值
                     * @return MemDesc 是否已赋值
                     * 
                     */
                    bool MemDescHasBeenSet() const;

                    /**
                     * 获取<p>Region where the node is located.</p>
                     * @return RegionId <p>Region where the node is located.</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>Region where the node is located.</p>
                     * @param _regionId <p>Region where the node is located.</p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>Zone where the node is located.</p>
                     * @return ZoneId <p>Zone where the node is located.</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>Zone where the node is located.</p>
                     * @param _zoneId <p>Zone where the node is located.</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Application time.</p>
                     * @return ApplyTime <p>Application time.</p>
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置<p>Application time.</p>
                     * @param _applyTime <p>Application time.</p>
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取<p>Release time.</p>
                     * @return FreeTime <p>Release time.</p>
                     * 
                     */
                    std::string GetFreeTime() const;

                    /**
                     * 设置<p>Release time.</p>
                     * @param _freeTime <p>Release time.</p>
                     * 
                     */
                    void SetFreeTime(const std::string& _freeTime);

                    /**
                     * 判断参数 FreeTime 是否已赋值
                     * @return FreeTime 是否已赋值
                     * 
                     */
                    bool FreeTimeHasBeenSet() const;

                    /**
                     * 获取<p>Hard disk size.</p>
                     * @return DiskSize <p>Hard disk size.</p>
                     * 
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置<p>Hard disk size.</p>
                     * @param _diskSize <p>Hard disk size.</p>
                     * 
                     */
                    void SetDiskSize(const std::string& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Node description.</p>
                     * @return NameTag <p>Node description.</p>
                     * 
                     */
                    std::string GetNameTag() const;

                    /**
                     * 设置<p>Node description.</p>
                     * @param _nameTag <p>Node description.</p>
                     * 
                     */
                    void SetNameTag(const std::string& _nameTag);

                    /**
                     * 判断参数 NameTag 是否已赋值
                     * @return NameTag 是否已赋值
                     * 
                     */
                    bool NameTagHasBeenSet() const;

                    /**
                     * 获取<p>Services deployed on the node.</p>
                     * @return Services <p>Services deployed on the node.</p>
                     * 
                     */
                    std::string GetServices() const;

                    /**
                     * 设置<p>Services deployed on the node.</p>
                     * @param _services <p>Services deployed on the node.</p>
                     * 
                     */
                    void SetServices(const std::string& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取<p>Disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     * @return StorageType <p>Disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置<p>Disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     * @param _storageType <p>Disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     * 
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>System disk size (GB).</p>
                     * @return RootSize <p>System disk size (GB).</p>
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置<p>System disk size (GB).</p>
                     * @param _rootSize <p>System disk size (GB).</p>
                     * 
                     */
                    void SetRootSize(const int64_t& _rootSize);

                    /**
                     * 判断参数 RootSize 是否已赋值
                     * @return RootSize 是否已赋值
                     * 
                     */
                    bool RootSizeHasBeenSet() const;

                    /**
                     * 获取<p>Payment type. Valid values: 0 (pay-as-you-go) and 1 (yearly/monthly subscription).</p>
                     * @return ChargeType <p>Payment type. Valid values: 0 (pay-as-you-go) and 1 (yearly/monthly subscription).</p>
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置<p>Payment type. Valid values: 0 (pay-as-you-go) and 1 (yearly/monthly subscription).</p>
                     * @param _chargeType <p>Payment type. Valid values: 0 (pay-as-you-go) and 1 (yearly/monthly subscription).</p>
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Database IP address.</p>
                     * @return CdbIp <p>Database IP address.</p>
                     * 
                     */
                    std::string GetCdbIp() const;

                    /**
                     * 设置<p>Database IP address.</p>
                     * @param _cdbIp <p>Database IP address.</p>
                     * 
                     */
                    void SetCdbIp(const std::string& _cdbIp);

                    /**
                     * 判断参数 CdbIp 是否已赋值
                     * @return CdbIp 是否已赋值
                     * 
                     */
                    bool CdbIpHasBeenSet() const;

                    /**
                     * 获取<p>Database port.</p>
                     * @return CdbPort <p>Database port.</p>
                     * 
                     */
                    int64_t GetCdbPort() const;

                    /**
                     * 设置<p>Database port.</p>
                     * @param _cdbPort <p>Database port.</p>
                     * 
                     */
                    void SetCdbPort(const int64_t& _cdbPort);

                    /**
                     * 判断参数 CdbPort 是否已赋值
                     * @return CdbPort 是否已赋值
                     * 
                     */
                    bool CdbPortHasBeenSet() const;

                    /**
                     * 获取<p>Hard disk capacity (bytes).</p>
                     * @return HwDiskSize <p>Hard disk capacity (bytes).</p>
                     * 
                     */
                    int64_t GetHwDiskSize() const;

                    /**
                     * 设置<p>Hard disk capacity (bytes).</p>
                     * @param _hwDiskSize <p>Hard disk capacity (bytes).</p>
                     * 
                     */
                    void SetHwDiskSize(const int64_t& _hwDiskSize);

                    /**
                     * 判断参数 HwDiskSize 是否已赋值
                     * @return HwDiskSize 是否已赋值
                     * 
                     */
                    bool HwDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Hard disk capacity description.</p>
                     * @return HwDiskSizeDesc <p>Hard disk capacity description.</p>
                     * 
                     */
                    std::string GetHwDiskSizeDesc() const;

                    /**
                     * 设置<p>Hard disk capacity description.</p>
                     * @param _hwDiskSizeDesc <p>Hard disk capacity description.</p>
                     * 
                     */
                    void SetHwDiskSizeDesc(const std::string& _hwDiskSizeDesc);

                    /**
                     * 判断参数 HwDiskSizeDesc 是否已赋值
                     * @return HwDiskSizeDesc 是否已赋值
                     * 
                     */
                    bool HwDiskSizeDescHasBeenSet() const;

                    /**
                     * 获取<p>Memory capacity (bytes).</p>
                     * @return HwMemSize <p>Memory capacity (bytes).</p>
                     * 
                     */
                    int64_t GetHwMemSize() const;

                    /**
                     * 设置<p>Memory capacity (bytes).</p>
                     * @param _hwMemSize <p>Memory capacity (bytes).</p>
                     * 
                     */
                    void SetHwMemSize(const int64_t& _hwMemSize);

                    /**
                     * 判断参数 HwMemSize 是否已赋值
                     * @return HwMemSize 是否已赋值
                     * 
                     */
                    bool HwMemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Memory capacity description.</p>
                     * @return HwMemSizeDesc <p>Memory capacity description.</p>
                     * 
                     */
                    std::string GetHwMemSizeDesc() const;

                    /**
                     * 设置<p>Memory capacity description.</p>
                     * @param _hwMemSizeDesc <p>Memory capacity description.</p>
                     * 
                     */
                    void SetHwMemSizeDesc(const std::string& _hwMemSizeDesc);

                    /**
                     * 判断参数 HwMemSizeDesc 是否已赋值
                     * @return HwMemSizeDesc 是否已赋值
                     * 
                     */
                    bool HwMemSizeDescHasBeenSet() const;

                    /**
                     * 获取<p>Expiration time.</p>
                     * @return ExpireTime <p>Expiration time.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Expiration time.</p>
                     * @param _expireTime <p>Expiration time.</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>Node resource ID.</p>
                     * @return EmrResourceId <p>Node resource ID.</p>
                     * 
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置<p>Node resource ID.</p>
                     * @param _emrResourceId <p>Node resource ID.</p>
                     * 
                     */
                    void SetEmrResourceId(const std::string& _emrResourceId);

                    /**
                     * 判断参数 EmrResourceId 是否已赋值
                     * @return EmrResourceId 是否已赋值
                     * 
                     */
                    bool EmrResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Renewal flag.</p>
                     * @return IsAutoRenew <p>Renewal flag.</p>
                     * 
                     */
                    int64_t GetIsAutoRenew() const;

                    /**
                     * 设置<p>Renewal flag.</p>
                     * @param _isAutoRenew <p>Renewal flag.</p>
                     * 
                     */
                    void SetIsAutoRenew(const int64_t& _isAutoRenew);

                    /**
                     * 判断参数 IsAutoRenew 是否已赋值
                     * @return IsAutoRenew 是否已赋值
                     * 
                     */
                    bool IsAutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Device identifier.</p>
                     * @return DeviceClass <p>Device identifier.</p>
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置<p>Device identifier.</p>
                     * @param _deviceClass <p>Device identifier.</p>
                     * 
                     */
                    void SetDeviceClass(const std::string& _deviceClass);

                    /**
                     * 判断参数 DeviceClass 是否已赋值
                     * @return DeviceClass 是否已赋值
                     * 
                     */
                    bool DeviceClassHasBeenSet() const;

                    /**
                     * 获取<p>Supports configuration change.</p>
                     * @return Mutable <p>Supports configuration change.</p>
                     * 
                     */
                    int64_t GetMutable() const;

                    /**
                     * 设置<p>Supports configuration change.</p>
                     * @param _mutable <p>Supports configuration change.</p>
                     * 
                     */
                    void SetMutable(const int64_t& _mutable);

                    /**
                     * 判断参数 Mutable 是否已赋值
                     * @return Mutable 是否已赋值
                     * 
                     */
                    bool MutableHasBeenSet() const;

                    /**
                     * 获取<p>Multi-cloud disk.</p>
                     * @return MCMultiDisk <p>Multi-cloud disk.</p>
                     * 
                     */
                    std::vector<MultiDiskMC> GetMCMultiDisk() const;

                    /**
                     * 设置<p>Multi-cloud disk.</p>
                     * @param _mCMultiDisk <p>Multi-cloud disk.</p>
                     * 
                     */
                    void SetMCMultiDisk(const std::vector<MultiDiskMC>& _mCMultiDisk);

                    /**
                     * 判断参数 MCMultiDisk 是否已赋值
                     * @return MCMultiDisk 是否已赋值
                     * 
                     */
                    bool MCMultiDiskHasBeenSet() const;

                    /**
                     * 获取<p>Database information.</p>
                     * @return CdbNodeInfo <p>Database information.</p>
                     * 
                     */
                    CdbInfo GetCdbNodeInfo() const;

                    /**
                     * 设置<p>Database information.</p>
                     * @param _cdbNodeInfo <p>Database information.</p>
                     * 
                     */
                    void SetCdbNodeInfo(const CdbInfo& _cdbNodeInfo);

                    /**
                     * 判断参数 CdbNodeInfo 是否已赋值
                     * @return CdbNodeInfo 是否已赋值
                     * 
                     */
                    bool CdbNodeInfoHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address.</p>
                     * @return Ip <p>Private IP address.</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _ip <p>Private IP address.</p>
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
                     * 获取<p>Whether this node can be terminated. Valid values: 1 (yes) and 0 (no).</p>
                     * @return Destroyable <p>Whether this node can be terminated. Valid values: 1 (yes) and 0 (no).</p>
                     * 
                     */
                    int64_t GetDestroyable() const;

                    /**
                     * 设置<p>Whether this node can be terminated. Valid values: 1 (yes) and 0 (no).</p>
                     * @param _destroyable <p>Whether this node can be terminated. Valid values: 1 (yes) and 0 (no).</p>
                     * 
                     */
                    void SetDestroyable(const int64_t& _destroyable);

                    /**
                     * 判断参数 Destroyable 是否已赋值
                     * @return Destroyable 是否已赋值
                     * 
                     */
                    bool DestroyableHasBeenSet() const;

                    /**
                     * 获取<p>Tag bound to the node.</p>
                     * @return Tags <p>Tag bound to the node.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag bound to the node.</p>
                     * @param _tags <p>Tag bound to the node.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is an auto scaling node. Valid values: 0 (regular node) and 1 (auto scaling node).</p>
                     * @return AutoFlag <p>Whether it is an auto scaling node. Valid values: 0 (regular node) and 1 (auto scaling node).</p>
                     * 
                     */
                    int64_t GetAutoFlag() const;

                    /**
                     * 设置<p>Whether it is an auto scaling node. Valid values: 0 (regular node) and 1 (auto scaling node).</p>
                     * @param _autoFlag <p>Whether it is an auto scaling node. Valid values: 0 (regular node) and 1 (auto scaling node).</p>
                     * 
                     */
                    void SetAutoFlag(const int64_t& _autoFlag);

                    /**
                     * 判断参数 AutoFlag 是否已赋值
                     * @return AutoFlag 是否已赋值
                     * 
                     */
                    bool AutoFlagHasBeenSet() const;

                    /**
                     * 获取<p>Resource type. Valid values: host and pod.</p>
                     * @return HardwareResourceType <p>Resource type. Valid values: host and pod.</p>
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置<p>Resource type. Valid values: host and pod.</p>
                     * @param _hardwareResourceType <p>Resource type. Valid values: host and pod.</p>
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a floating specification. Valid values: 1 (yes) and 0 (no).</p>
                     * @return IsDynamicSpec <p>Whether it is a floating specification. Valid values: 1 (yes) and 0 (no).</p>
                     * 
                     */
                    int64_t GetIsDynamicSpec() const;

                    /**
                     * 设置<p>Whether it is a floating specification. Valid values: 1 (yes) and 0 (no).</p>
                     * @param _isDynamicSpec <p>Whether it is a floating specification. Valid values: 1 (yes) and 0 (no).</p>
                     * 
                     */
                    void SetIsDynamicSpec(const int64_t& _isDynamicSpec);

                    /**
                     * 判断参数 IsDynamicSpec 是否已赋值
                     * @return IsDynamicSpec 是否已赋值
                     * 
                     */
                    bool IsDynamicSpecHasBeenSet() const;

                    /**
                     * 获取<p>JSON string of the floating specification value.</p>
                     * @return DynamicPodSpec <p>JSON string of the floating specification value.</p>
                     * 
                     */
                    std::string GetDynamicPodSpec() const;

                    /**
                     * 设置<p>JSON string of the floating specification value.</p>
                     * @param _dynamicPodSpec <p>JSON string of the floating specification value.</p>
                     * 
                     */
                    void SetDynamicPodSpec(const std::string& _dynamicPodSpec);

                    /**
                     * 判断参数 DynamicPodSpec 是否已赋值
                     * @return DynamicPodSpec 是否已赋值
                     * 
                     */
                    bool DynamicPodSpecHasBeenSet() const;

                    /**
                     * 获取<p>Whether changing the billing mode is supported. Valid values: 1 (yes) and 0 (no).</p>
                     * @return SupportModifyPayMode <p>Whether changing the billing mode is supported. Valid values: 1 (yes) and 0 (no).</p>
                     * 
                     */
                    int64_t GetSupportModifyPayMode() const;

                    /**
                     * 设置<p>Whether changing the billing mode is supported. Valid values: 1 (yes) and 0 (no).</p>
                     * @param _supportModifyPayMode <p>Whether changing the billing mode is supported. Valid values: 1 (yes) and 0 (no).</p>
                     * 
                     */
                    void SetSupportModifyPayMode(const int64_t& _supportModifyPayMode);

                    /**
                     * 判断参数 SupportModifyPayMode 是否已赋值
                     * @return SupportModifyPayMode 是否已赋值
                     * 
                     */
                    bool SupportModifyPayModeHasBeenSet() const;

                    /**
                     * 获取<p>System disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     * @return RootStorageType <p>System disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     * 
                     */
                    int64_t GetRootStorageType() const;

                    /**
                     * 设置<p>System disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     * @param _rootStorageType <p>System disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     * 
                     */
                    void SetRootStorageType(const int64_t& _rootStorageType);

                    /**
                     * 判断参数 RootStorageType 是否已赋值
                     * @return RootStorageType 是否已赋值
                     * 
                     */
                    bool RootStorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>AZ information.</p>
                     * @return Zone <p>AZ information.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ information.</p>
                     * @param _zone <p>AZ information.</p>
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
                     * 获取<p>Subnet.</p>
                     * @return SubnetInfo <p>Subnet.</p>
                     * 
                     */
                    SubnetInfo GetSubnetInfo() const;

                    /**
                     * 设置<p>Subnet.</p>
                     * @param _subnetInfo <p>Subnet.</p>
                     * 
                     */
                    void SetSubnetInfo(const SubnetInfo& _subnetInfo);

                    /**
                     * 判断参数 SubnetInfo 是否已赋值
                     * @return SubnetInfo 是否已赋值
                     * 
                     */
                    bool SubnetInfoHasBeenSet() const;

                    /**
                     * 获取<p>Client.</p>
                     * @return Clients <p>Client.</p>
                     * 
                     */
                    std::string GetClients() const;

                    /**
                     * 设置<p>Client.</p>
                     * @param _clients <p>Client.</p>
                     * 
                     */
                    void SetClients(const std::string& _clients);

                    /**
                     * 判断参数 Clients 是否已赋值
                     * @return Clients 是否已赋值
                     * 
                     */
                    bool ClientsHasBeenSet() const;

                    /**
                     * 获取<p>Current system time.</p>
                     * @return CurrentTime <p>Current system time.</p>
                     * 
                     */
                    std::string GetCurrentTime() const;

                    /**
                     * 设置<p>Current system time.</p>
                     * @param _currentTime <p>Current system time.</p>
                     * 
                     */
                    void SetCurrentTime(const std::string& _currentTime);

                    /**
                     * 判断参数 CurrentTime 是否已赋值
                     * @return CurrentTime 是否已赋值
                     * 
                     */
                    bool CurrentTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is used for federation. Valid values: 1 (yes) and 0 (no).</p>
                     * @return IsFederation <p>Whether it is used for federation. Valid values: 1 (yes) and 0 (no).</p>
                     * 
                     */
                    int64_t GetIsFederation() const;

                    /**
                     * 设置<p>Whether it is used for federation. Valid values: 1 (yes) and 0 (no).</p>
                     * @param _isFederation <p>Whether it is used for federation. Valid values: 1 (yes) and 0 (no).</p>
                     * 
                     */
                    void SetIsFederation(const int64_t& _isFederation);

                    /**
                     * 判断参数 IsFederation 是否已赋值
                     * @return IsFederation 是否已赋值
                     * 
                     */
                    bool IsFederationHasBeenSet() const;

                    /**
                     * 获取<p>Device name.</p>
                     * @return DeviceName <p>Device name.</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>Device name.</p>
                     * @param _deviceName <p>Device name.</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>Service.</p>
                     * @return ServiceClient <p>Service.</p>
                     * 
                     */
                    std::string GetServiceClient() const;

                    /**
                     * 设置<p>Service.</p>
                     * @param _serviceClient <p>Service.</p>
                     * 
                     */
                    void SetServiceClient(const std::string& _serviceClient);

                    /**
                     * 判断参数 ServiceClient 是否已赋值
                     * @return ServiceClient 是否已赋值
                     * 
                     */
                    bool ServiceClientHasBeenSet() const;

                    /**
                     * 获取<p>Whether instance protection is enabled for this instance. Valid values: true (enabled) and false (disabled).</p>
                     * @return DisableApiTermination <p>Whether instance protection is enabled for this instance. Valid values: true (enabled) and false (disabled).</p>
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置<p>Whether instance protection is enabled for this instance. Valid values: true (enabled) and false (disabled).</p>
                     * @param _disableApiTermination <p>Whether instance protection is enabled for this instance. Valid values: true (enabled) and false (disabled).</p>
                     * 
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     * 
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                    /**
                     * 获取<p>0 indicates the old billing mode, and 1 indicates the new billing mode.</p>
                     * @return TradeVersion <p>0 indicates the old billing mode, and 1 indicates the new billing mode.</p>
                     * 
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置<p>0 indicates the old billing mode, and 1 indicates the new billing mode.</p>
                     * @param _tradeVersion <p>0 indicates the old billing mode, and 1 indicates the new billing mode.</p>
                     * 
                     */
                    void SetTradeVersion(const int64_t& _tradeVersion);

                    /**
                     * 判断参数 TradeVersion 是否已赋值
                     * @return TradeVersion 是否已赋值
                     * 
                     */
                    bool TradeVersionHasBeenSet() const;

                    /**
                     * 获取<p>Status of each component. ZooKeeper: STARTED; ResourceManager: STARTED. STARTED means started, and STOPPED means stopped.</p>
                     * @return ServicesStatus <p>Status of each component. ZooKeeper: STARTED; ResourceManager: STARTED. STARTED means started, and STOPPED means stopped.</p>
                     * 
                     */
                    std::string GetServicesStatus() const;

                    /**
                     * 设置<p>Status of each component. ZooKeeper: STARTED; ResourceManager: STARTED. STARTED means started, and STOPPED means stopped.</p>
                     * @param _servicesStatus <p>Status of each component. ZooKeeper: STARTED; ResourceManager: STARTED. STARTED means started, and STOPPED means stopped.</p>
                     * 
                     */
                    void SetServicesStatus(const std::string& _servicesStatus);

                    /**
                     * 判断参数 ServicesStatus 是否已赋值
                     * @return ServicesStatus 是否已赋值
                     * 
                     */
                    bool ServicesStatusHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Shared cluster ID.</p>
                     * @return SharedClusterId <p>Shared cluster ID.</p>
                     * 
                     */
                    std::string GetSharedClusterId() const;

                    /**
                     * 设置<p>Shared cluster ID.</p>
                     * @param _sharedClusterId <p>Shared cluster ID.</p>
                     * 
                     */
                    void SetSharedClusterId(const std::string& _sharedClusterId);

                    /**
                     * 判断参数 SharedClusterId 是否已赋值
                     * @return SharedClusterId 是否已赋值
                     * 
                     */
                    bool SharedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Description of the shared cluster ID.</p>
                     * @return SharedClusterIdDesc <p>Description of the shared cluster ID.</p>
                     * 
                     */
                    std::string GetSharedClusterIdDesc() const;

                    /**
                     * 设置<p>Description of the shared cluster ID.</p>
                     * @param _sharedClusterIdDesc <p>Description of the shared cluster ID.</p>
                     * 
                     */
                    void SetSharedClusterIdDesc(const std::string& _sharedClusterIdDesc);

                    /**
                     * 判断参数 SharedClusterIdDesc 是否已赋值
                     * @return SharedClusterIdDesc 是否已赋值
                     * 
                     */
                    bool SharedClusterIdDescHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a scheduled termination resource.</p>
                     * @return TimingResource <p>Whether it is a scheduled termination resource.</p>
                     * 
                     */
                    bool GetTimingResource() const;

                    /**
                     * 设置<p>Whether it is a scheduled termination resource.</p>
                     * @param _timingResource <p>Whether it is a scheduled termination resource.</p>
                     * 
                     */
                    void SetTimingResource(const bool& _timingResource);

                    /**
                     * 判断参数 TimingResource 是否已赋值
                     * @return TimingResource 是否已赋值
                     * 
                     */
                    bool TimingResourceHasBeenSet() const;

                    /**
                     * 获取<p>TKE cluster ID when the resource type (HardwareResourceType) is pod.</p>
                     * @return TkeClusterId <p>TKE cluster ID when the resource type (HardwareResourceType) is pod.</p>
                     * 
                     */
                    std::string GetTkeClusterId() const;

                    /**
                     * 设置<p>TKE cluster ID when the resource type (HardwareResourceType) is pod.</p>
                     * @param _tkeClusterId <p>TKE cluster ID when the resource type (HardwareResourceType) is pod.</p>
                     * 
                     */
                    void SetTkeClusterId(const std::string& _tkeClusterId);

                    /**
                     * 判断参数 TkeClusterId 是否已赋值
                     * @return TkeClusterId 是否已赋值
                     * 
                     */
                    bool TkeClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Name list of services that can be configured when a new disk is mounted.</p>
                     * @return ConfigurableServices <p>Name list of services that can be configured when a new disk is mounted.</p>
                     * 
                     */
                    std::vector<std::string> GetConfigurableServices() const;

                    /**
                     * 设置<p>Name list of services that can be configured when a new disk is mounted.</p>
                     * @param _configurableServices <p>Name list of services that can be configured when a new disk is mounted.</p>
                     * 
                     */
                    void SetConfigurableServices(const std::vector<std::string>& _configurableServices);

                    /**
                     * 判断参数 ConfigurableServices 是否已赋值
                     * @return ConfigurableServices 是否已赋值
                     * 
                     */
                    bool ConfigurableServicesHasBeenSet() const;

                    /**
                     * 获取<p>Node annotation information, which is currently only provided for the Terraform platform.</p>
                     * @return NodeMark <p>Node annotation information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    std::string GetNodeMark() const;

                    /**
                     * 设置<p>Node annotation information, which is currently only provided for the Terraform platform.</p>
                     * @param _nodeMark <p>Node annotation information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    void SetNodeMark(const std::string& _nodeMark);

                    /**
                     * 判断参数 NodeMark 是否已赋值
                     * @return NodeMark 是否已赋值
                     * 
                     */
                    bool NodeMarkHasBeenSet() const;

                    /**
                     * 获取<p>Whether the committed use resource supports setting auto-renewal.</p>
                     * @return UnderwriteSetAutoRenew <p>Whether the committed use resource supports setting auto-renewal.</p>
                     * 
                     */
                    bool GetUnderwriteSetAutoRenew() const;

                    /**
                     * 设置<p>Whether the committed use resource supports setting auto-renewal.</p>
                     * @param _underwriteSetAutoRenew <p>Whether the committed use resource supports setting auto-renewal.</p>
                     * 
                     */
                    void SetUnderwriteSetAutoRenew(const bool& _underwriteSetAutoRenew);

                    /**
                     * 判断参数 UnderwriteSetAutoRenew 是否已赋值
                     * @return UnderwriteSetAutoRenew 是否已赋值
                     * 
                     */
                    bool UnderwriteSetAutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>GPU information.</p>
                     * @return GpuDesc <p>GPU information.</p>
                     * 
                     */
                    std::string GetGpuDesc() const;

                    /**
                     * 设置<p>GPU information.</p>
                     * @param _gpuDesc <p>GPU information.</p>
                     * 
                     */
                    void SetGpuDesc(const std::string& _gpuDesc);

                    /**
                     * 判断参数 GpuDesc 是否已赋值
                     * @return GpuDesc 是否已赋值
                     * 
                     */
                    bool GpuDescHasBeenSet() const;

                    /**
                     * 获取<p>Disk issue description.</p>
                     * @return DiskHealthIssues <p>Disk issue description.</p>
                     * 
                     */
                    std::vector<DiskHealthIssue> GetDiskHealthIssues() const;

                    /**
                     * 设置<p>Disk issue description.</p>
                     * @param _diskHealthIssues <p>Disk issue description.</p>
                     * 
                     */
                    void SetDiskHealthIssues(const std::vector<DiskHealthIssue>& _diskHealthIssues);

                    /**
                     * 判断参数 DiskHealthIssues 是否已赋值
                     * @return DiskHealthIssues 是否已赋值
                     * 
                     */
                    bool DiskHealthIssuesHasBeenSet() const;

                    /**
                     * 获取<p>ID of the node group where the node resides.</p>
                     * @return NodeGroupId <p>ID of the node group where the node resides.</p>
                     * 
                     */
                    std::string GetNodeGroupId() const;

                    /**
                     * 设置<p>ID of the node group where the node resides.</p>
                     * @param _nodeGroupId <p>ID of the node group where the node resides.</p>
                     * 
                     */
                    void SetNodeGroupId(const std::string& _nodeGroupId);

                    /**
                     * 判断参数 NodeGroupId 是否已赋值
                     * @return NodeGroupId 是否已赋值
                     * 
                     */
                    bool NodeGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Name of the node group where the node resides.</p>
                     * @return NodeGroupName <p>Name of the node group where the node resides.</p>
                     * 
                     */
                    std::string GetNodeGroupName() const;

                    /**
                     * 设置<p>Name of the node group where the node resides.</p>
                     * @param _nodeGroupName <p>Name of the node group where the node resides.</p>
                     * 
                     */
                    void SetNodeGroupName(const std::string& _nodeGroupName);

                    /**
                     * 判断参数 NodeGroupName 是否已赋值
                     * @return NodeGroupName 是否已赋值
                     * 
                     */
                    bool NodeGroupNameHasBeenSet() const;

                private:

                    /**
                     * <p>User APPID.</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Serial number.</p>
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * <p>Machine instance ID.</p>
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * <p>Public IP address bound to the Master node.</p>
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * <p>Node type. Valid values: 0 (Common node), 1 (Master node)<br>2 (Core node) and 3 (Task node).</p>
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * <p>Node specifications.</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>Number of node cores.</p>
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * <p>Node memory (bytes).</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Node memory description (GB).</p>
                     */
                    std::string m_memDesc;
                    bool m_memDescHasBeenSet;

                    /**
                     * <p>Region where the node is located.</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>Zone where the node is located.</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Application time.</p>
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * <p>Release time.</p>
                     */
                    std::string m_freeTime;
                    bool m_freeTimeHasBeenSet;

                    /**
                     * <p>Hard disk size.</p>
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Node description.</p>
                     */
                    std::string m_nameTag;
                    bool m_nameTagHasBeenSet;

                    /**
                     * <p>Services deployed on the node.</p>
                     */
                    std::string m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * <p>Disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>System disk size (GB).</p>
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * <p>Payment type. Valid values: 0 (pay-as-you-go) and 1 (yearly/monthly subscription).</p>
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>Database IP address.</p>
                     */
                    std::string m_cdbIp;
                    bool m_cdbIpHasBeenSet;

                    /**
                     * <p>Database port.</p>
                     */
                    int64_t m_cdbPort;
                    bool m_cdbPortHasBeenSet;

                    /**
                     * <p>Hard disk capacity (bytes).</p>
                     */
                    int64_t m_hwDiskSize;
                    bool m_hwDiskSizeHasBeenSet;

                    /**
                     * <p>Hard disk capacity description.</p>
                     */
                    std::string m_hwDiskSizeDesc;
                    bool m_hwDiskSizeDescHasBeenSet;

                    /**
                     * <p>Memory capacity (bytes).</p>
                     */
                    int64_t m_hwMemSize;
                    bool m_hwMemSizeHasBeenSet;

                    /**
                     * <p>Memory capacity description.</p>
                     */
                    std::string m_hwMemSizeDesc;
                    bool m_hwMemSizeDescHasBeenSet;

                    /**
                     * <p>Expiration time.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Node resource ID.</p>
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * <p>Renewal flag.</p>
                     */
                    int64_t m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * <p>Device identifier.</p>
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * <p>Supports configuration change.</p>
                     */
                    int64_t m_mutable;
                    bool m_mutableHasBeenSet;

                    /**
                     * <p>Multi-cloud disk.</p>
                     */
                    std::vector<MultiDiskMC> m_mCMultiDisk;
                    bool m_mCMultiDiskHasBeenSet;

                    /**
                     * <p>Database information.</p>
                     */
                    CdbInfo m_cdbNodeInfo;
                    bool m_cdbNodeInfoHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>Whether this node can be terminated. Valid values: 1 (yes) and 0 (no).</p>
                     */
                    int64_t m_destroyable;
                    bool m_destroyableHasBeenSet;

                    /**
                     * <p>Tag bound to the node.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Whether it is an auto scaling node. Valid values: 0 (regular node) and 1 (auto scaling node).</p>
                     */
                    int64_t m_autoFlag;
                    bool m_autoFlagHasBeenSet;

                    /**
                     * <p>Resource type. Valid values: host and pod.</p>
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * <p>Whether it is a floating specification. Valid values: 1 (yes) and 0 (no).</p>
                     */
                    int64_t m_isDynamicSpec;
                    bool m_isDynamicSpecHasBeenSet;

                    /**
                     * <p>JSON string of the floating specification value.</p>
                     */
                    std::string m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * <p>Whether changing the billing mode is supported. Valid values: 1 (yes) and 0 (no).</p>
                     */
                    int64_t m_supportModifyPayMode;
                    bool m_supportModifyPayModeHasBeenSet;

                    /**
                     * <p>System disk type. Valid values: 1 (Local Basic Disk), 2 (Cloud Basic Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Disk), 6 (Enhanced SSD), 11 (Throughput-Optimized Cloud Disk), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High-IO Cloud Disk), and 16 (Remote SSD Disk).</p>
                     */
                    int64_t m_rootStorageType;
                    bool m_rootStorageTypeHasBeenSet;

                    /**
                     * <p>AZ information.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Subnet.</p>
                     */
                    SubnetInfo m_subnetInfo;
                    bool m_subnetInfoHasBeenSet;

                    /**
                     * <p>Client.</p>
                     */
                    std::string m_clients;
                    bool m_clientsHasBeenSet;

                    /**
                     * <p>Current system time.</p>
                     */
                    std::string m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * <p>Whether it is used for federation. Valid values: 1 (yes) and 0 (no).</p>
                     */
                    int64_t m_isFederation;
                    bool m_isFederationHasBeenSet;

                    /**
                     * <p>Device name.</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>Service.</p>
                     */
                    std::string m_serviceClient;
                    bool m_serviceClientHasBeenSet;

                    /**
                     * <p>Whether instance protection is enabled for this instance. Valid values: true (enabled) and false (disabled).</p>
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * <p>0 indicates the old billing mode, and 1 indicates the new billing mode.</p>
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * <p>Status of each component. ZooKeeper: STARTED; ResourceManager: STARTED. STARTED means started, and STOPPED means stopped.</p>
                     */
                    std::string m_servicesStatus;
                    bool m_servicesStatusHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Shared cluster ID.</p>
                     */
                    std::string m_sharedClusterId;
                    bool m_sharedClusterIdHasBeenSet;

                    /**
                     * <p>Description of the shared cluster ID.</p>
                     */
                    std::string m_sharedClusterIdDesc;
                    bool m_sharedClusterIdDescHasBeenSet;

                    /**
                     * <p>Whether it is a scheduled termination resource.</p>
                     */
                    bool m_timingResource;
                    bool m_timingResourceHasBeenSet;

                    /**
                     * <p>TKE cluster ID when the resource type (HardwareResourceType) is pod.</p>
                     */
                    std::string m_tkeClusterId;
                    bool m_tkeClusterIdHasBeenSet;

                    /**
                     * <p>Name list of services that can be configured when a new disk is mounted.</p>
                     */
                    std::vector<std::string> m_configurableServices;
                    bool m_configurableServicesHasBeenSet;

                    /**
                     * <p>Node annotation information, which is currently only provided for the Terraform platform.</p>
                     */
                    std::string m_nodeMark;
                    bool m_nodeMarkHasBeenSet;

                    /**
                     * <p>Whether the committed use resource supports setting auto-renewal.</p>
                     */
                    bool m_underwriteSetAutoRenew;
                    bool m_underwriteSetAutoRenewHasBeenSet;

                    /**
                     * <p>GPU information.</p>
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                    /**
                     * <p>Disk issue description.</p>
                     */
                    std::vector<DiskHealthIssue> m_diskHealthIssues;
                    bool m_diskHealthIssuesHasBeenSet;

                    /**
                     * <p>ID of the node group where the node resides.</p>
                     */
                    std::string m_nodeGroupId;
                    bool m_nodeGroupIdHasBeenSet;

                    /**
                     * <p>Name of the node group where the node resides.</p>
                     */
                    std::string m_nodeGroupName;
                    bool m_nodeGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_
