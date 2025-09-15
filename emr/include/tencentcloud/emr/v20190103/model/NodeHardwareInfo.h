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


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Node hardware information
                */
                class NodeHardwareInfo : public AbstractModel
                {
                public:
                    NodeHardwareInfo();
                    ~NodeHardwareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User AppID.
                     * @return AppId User AppID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User AppID.
                     * @param _appId User AppID.
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
                     * 获取Serial number.
                     * @return SerialNo Serial number.
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置Serial number.
                     * @param _serialNo Serial number.
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
                     * 获取Machine instance ID.
                     * @return OrderNo Machine instance ID.
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置Machine instance ID.
                     * @param _orderNo Machine instance ID.
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
                     * 获取Public network IP address bound for the Master node.
                     * @return WanIp Public network IP address bound for the Master node.
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Public network IP address bound for the Master node.
                     * @param _wanIp Public network IP address bound for the Master node.
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
                     * 获取Node type. 0: Common node; 1: Master node.
 2: Core node; 3: Task node.
                     * @return Flag Node type. 0: Common node; 1: Master node.
 2: Core node; 3: Task node.
                     * 
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置Node type. 0: Common node; 1: Master node.
 2: Core node; 3: Task node.
                     * @param _flag Node type. 0: Common node; 1: Master node.
 2: Core node; 3: Task node.
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
                     * 获取Node specifications.
                     * @return Spec Node specifications.
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Node specifications.
                     * @param _spec Node specifications.
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
                     * 获取Number of node cores.
                     * @return CpuNum Number of node cores.
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置Number of node cores.
                     * @param _cpuNum Number of node cores.
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
                     * 获取Node memory (bytes).
                     * @return MemSize Node memory (bytes).
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Node memory (bytes).
                     * @param _memSize Node memory (bytes).
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
                     * 获取Node memory (GB).
                     * @return MemDesc Node memory (GB).
                     * 
                     */
                    std::string GetMemDesc() const;

                    /**
                     * 设置Node memory (GB).
                     * @param _memDesc Node memory (GB).
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
                     * 获取The region where the node is located.
                     * @return RegionId The region where the node is located.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置The region where the node is located.
                     * @param _regionId The region where the node is located.
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
                     * 获取The zone where the node is located.
                     * @return ZoneId The zone where the node is located.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置The zone where the node is located.
                     * @param _zoneId The zone where the node is located.
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
                     * 获取Application time.
                     * @return ApplyTime Application time.
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Application time.
                     * @param _applyTime Application time.
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
                     * 获取Release time.
                     * @return FreeTime Release time.
                     * 
                     */
                    std::string GetFreeTime() const;

                    /**
                     * 设置Release time.
                     * @param _freeTime Release time.
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
                     * 获取Hard disk size.
                     * @return DiskSize Hard disk size.
                     * 
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置Hard disk size.
                     * @param _diskSize Hard disk size.
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
                     * 获取Node description.
                     * @return NameTag Node description.
                     * 
                     */
                    std::string GetNameTag() const;

                    /**
                     * 设置Node description.
                     * @param _nameTag Node description.
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
                     * 获取Node deployment service.
                     * @return Services Node deployment service.
                     * 
                     */
                    std::string GetServices() const;

                    /**
                     * 设置Node deployment service.
                     * @param _services Node deployment service.
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
                     * 获取Disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput SSD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).

                     * @return StorageType Disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput SSD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).

                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置Disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput SSD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).

                     * @param _storageType Disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput SSD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).

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
                     * 获取System disk size (GB).
                     * @return RootSize System disk size (GB).
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置System disk size (GB).
                     * @param _rootSize System disk size (GB).
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
                     * 获取Payment type. Valid values: 0 (pay-as-you-go); 1 (yearly/monthly subscription).
                     * @return ChargeType Payment type. Valid values: 0 (pay-as-you-go); 1 (yearly/monthly subscription).
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Payment type. Valid values: 0 (pay-as-you-go); 1 (yearly/monthly subscription).
                     * @param _chargeType Payment type. Valid values: 0 (pay-as-you-go); 1 (yearly/monthly subscription).
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
                     * 获取Database IP address.
                     * @return CdbIp Database IP address.
                     * 
                     */
                    std::string GetCdbIp() const;

                    /**
                     * 设置Database IP address.
                     * @param _cdbIp Database IP address.
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
                     * 获取Database port.
                     * @return CdbPort Database port.
                     * 
                     */
                    int64_t GetCdbPort() const;

                    /**
                     * 设置Database port.
                     * @param _cdbPort Database port.
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
                     * 获取Hard disk capacity (bytes).
                     * @return HwDiskSize Hard disk capacity (bytes).
                     * 
                     */
                    int64_t GetHwDiskSize() const;

                    /**
                     * 设置Hard disk capacity (bytes).
                     * @param _hwDiskSize Hard disk capacity (bytes).
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
                     * 获取Hard disk capacity description.
                     * @return HwDiskSizeDesc Hard disk capacity description.
                     * 
                     */
                    std::string GetHwDiskSizeDesc() const;

                    /**
                     * 设置Hard disk capacity description.
                     * @param _hwDiskSizeDesc Hard disk capacity description.
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
                     * 获取Memory capacity (bytes).
                     * @return HwMemSize Memory capacity (bytes).
                     * 
                     */
                    int64_t GetHwMemSize() const;

                    /**
                     * 设置Memory capacity (bytes).
                     * @param _hwMemSize Memory capacity (bytes).
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
                     * 获取Memory capacity description.
                     * @return HwMemSizeDesc Memory capacity description.
                     * 
                     */
                    std::string GetHwMemSizeDesc() const;

                    /**
                     * 设置Memory capacity description.
                     * @param _hwMemSizeDesc Memory capacity description.
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
                     * 获取Expiration time.
                     * @return ExpireTime Expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time.
                     * @param _expireTime Expiration time.
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
                     * 获取Node resource ID.
                     * @return EmrResourceId Node resource ID.
                     * 
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置Node resource ID.
                     * @param _emrResourceId Node resource ID.
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
                     * 获取Renewal flag.
                     * @return IsAutoRenew Renewal flag.
                     * 
                     */
                    int64_t GetIsAutoRenew() const;

                    /**
                     * 设置Renewal flag.
                     * @param _isAutoRenew Renewal flag.
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
                     * 获取Device identification.
                     * @return DeviceClass Device identification.
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置Device identification.
                     * @param _deviceClass Device identification.
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
                     * 获取Supporting resizing.
                     * @return Mutable Supporting resizing.
                     * 
                     */
                    int64_t GetMutable() const;

                    /**
                     * 设置Supporting resizing.
                     * @param _mutable Supporting resizing.
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
                     * 获取Multi-cloud disk
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MCMultiDisk Multi-cloud disk
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MultiDiskMC> GetMCMultiDisk() const;

                    /**
                     * 设置Multi-cloud disk
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _mCMultiDisk Multi-cloud disk
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CdbNodeInfo Database information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CdbInfo GetCdbNodeInfo() const;

                    /**
                     * 设置Database information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _cdbNodeInfo Database information
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Private network IP address.
                     * @return Ip Private network IP address.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Private network IP address.
                     * @param _ip Private network IP address.
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
                     * 获取Whether this node can be terminated. 1: Yes, 0: No.
                     * @return Destroyable Whether this node can be terminated. 1: Yes, 0: No.
                     * 
                     */
                    int64_t GetDestroyable() const;

                    /**
                     * 设置Whether this node can be terminated. 1: Yes, 0: No.
                     * @param _destroyable Whether this node can be terminated. 1: Yes, 0: No.
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
                     * 获取Tags bound to node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tags bound to node
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags bound to node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tags bound to node
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether it is an automatic scaling node. 0: common node, 1: automatic scaling node.
                     * @return AutoFlag Whether it is an automatic scaling node. 0: common node, 1: automatic scaling node.
                     * 
                     */
                    int64_t GetAutoFlag() const;

                    /**
                     * 设置Whether it is an automatic scaling node. 0: common node, 1: automatic scaling node.
                     * @param _autoFlag Whether it is an automatic scaling node. 0: common node, 1: automatic scaling node.
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
                     * 获取Resource type, with the valid values of "host" and "pod".
                     * @return HardwareResourceType Resource type, with the valid values of "host" and "pod".
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置Resource type, with the valid values of "host" and "pod".
                     * @param _hardwareResourceType Resource type, with the valid values of "host" and "pod".
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
                     * 获取Whether it is a floating specification. 1: Yes, 0: No.
                     * @return IsDynamicSpec Whether it is a floating specification. 1: Yes, 0: No.
                     * 
                     */
                    int64_t GetIsDynamicSpec() const;

                    /**
                     * 设置Whether it is a floating specification. 1: Yes, 0: No.
                     * @param _isDynamicSpec Whether it is a floating specification. 1: Yes, 0: No.
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
                     * 获取Floating specification value in the JSON string format.
                     * @return DynamicPodSpec Floating specification value in the JSON string format.
                     * 
                     */
                    std::string GetDynamicPodSpec() const;

                    /**
                     * 设置Floating specification value in the JSON string format.
                     * @param _dynamicPodSpec Floating specification value in the JSON string format.
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
                     * 获取Whether the billing type can be changed. 1: Yes, 0: No.
                     * @return SupportModifyPayMode Whether the billing type can be changed. 1: Yes, 0: No.
                     * 
                     */
                    int64_t GetSupportModifyPayMode() const;

                    /**
                     * 设置Whether the billing type can be changed. 1: Yes, 0: No.
                     * @param _supportModifyPayMode Whether the billing type can be changed. 1: Yes, 0: No.
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
                     * 获取System disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput HDD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).
                     * @return RootStorageType System disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput HDD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).
                     * 
                     */
                    int64_t GetRootStorageType() const;

                    /**
                     * 设置System disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput HDD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).
                     * @param _rootStorageType System disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput HDD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).
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
                     * 获取Availability information.
                     * @return Zone Availability information.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability information.
                     * @param _zone Availability information.
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
                     * 获取Subnet
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SubnetInfo Subnet
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    SubnetInfo GetSubnetInfo() const;

                    /**
                     * 设置Subnet
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _subnetInfo Subnet
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Client.
                     * @return Clients Client.
                     * 
                     */
                    std::string GetClients() const;

                    /**
                     * 设置Client.
                     * @param _clients Client.
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
                     * 获取Current system time.
                     * @return CurrentTime Current system time.
                     * 
                     */
                    std::string GetCurrentTime() const;

                    /**
                     * 设置Current system time.
                     * @param _currentTime Current system time.
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
                     * 获取Indicates whether it is for federation. 1: Yes, 0: No.
                     * @return IsFederation Indicates whether it is for federation. 1: Yes, 0: No.
                     * 
                     */
                    int64_t GetIsFederation() const;

                    /**
                     * 设置Indicates whether it is for federation. 1: Yes, 0: No.
                     * @param _isFederation Indicates whether it is for federation. 1: Yes, 0: No.
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
                     * 获取Device name.
                     * @return DeviceName Device name.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name.
                     * @param _deviceName Device name.
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
                     * 获取Service.
                     * @return ServiceClient Service.
                     * 
                     */
                    std::string GetServiceClient() const;

                    /**
                     * 设置Service.
                     * @param _serviceClient Service.
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
                     * 获取Whether instance protection is enabled. True: enabled, false: disabled.
                     * @return DisableApiTermination Whether instance protection is enabled. True: enabled, false: disabled.
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置Whether instance protection is enabled. True: enabled, false: disabled.
                     * @param _disableApiTermination Whether instance protection is enabled. True: enabled, false: disabled.
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
                     * 获取0: old billing, 1: new billing.
                     * @return TradeVersion 0: old billing, 1: new billing.
                     * 
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置0: old billing, 1: new billing.
                     * @param _tradeVersion 0: old billing, 1: new billing.
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
                     * 获取Component status. ZooKeeper: STARTED, ResourceManager: STARTED, STARTED: Component is running, STOPPED: Component is halted.
                     * @return ServicesStatus Component status. ZooKeeper: STARTED, ResourceManager: STARTED, STARTED: Component is running, STOPPED: Component is halted.
                     * 
                     */
                    std::string GetServicesStatus() const;

                    /**
                     * 设置Component status. ZooKeeper: STARTED, ResourceManager: STARTED, STARTED: Component is running, STOPPED: Component is halted.
                     * @param _servicesStatus Component status. ZooKeeper: STARTED, ResourceManager: STARTED, STARTED: Component is running, STOPPED: Component is halted.
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
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Shared cluster ID.
                     * @return SharedClusterId Shared cluster ID.
                     * 
                     */
                    std::string GetSharedClusterId() const;

                    /**
                     * 设置Shared cluster ID.
                     * @param _sharedClusterId Shared cluster ID.
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
                     * 获取Shared cluster ID description.
                     * @return SharedClusterIdDesc Shared cluster ID description.
                     * 
                     */
                    std::string GetSharedClusterIdDesc() const;

                    /**
                     * 设置Shared cluster ID description.
                     * @param _sharedClusterIdDesc Shared cluster ID description.
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
                     * 获取Whether the resource is set for scheduled termination.
                     * @return TimingResource Whether the resource is set for scheduled termination.
                     * 
                     */
                    bool GetTimingResource() const;

                    /**
                     * 设置Whether the resource is set for scheduled termination.
                     * @param _timingResource Whether the resource is set for scheduled termination.
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
                     * 获取Corresponding TKE cluster ID in the case that the resource type (HardwareResourceType) is pod.
                     * @return TkeClusterId Corresponding TKE cluster ID in the case that the resource type (HardwareResourceType) is pod.
                     * 
                     */
                    std::string GetTkeClusterId() const;

                    /**
                     * 设置Corresponding TKE cluster ID in the case that the resource type (HardwareResourceType) is pod.
                     * @param _tkeClusterId Corresponding TKE cluster ID in the case that the resource type (HardwareResourceType) is pod.
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
                     * 获取Name list of services that can be configured when a new disk is mounted.
                     * @return ConfigurableServices Name list of services that can be configured when a new disk is mounted.
                     * 
                     */
                    std::vector<std::string> GetConfigurableServices() const;

                    /**
                     * 设置Name list of services that can be configured when a new disk is mounted.
                     * @param _configurableServices Name list of services that can be configured when a new disk is mounted.
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
                     * 获取Node labeling information: currently used only in the Terraform.
                     * @return NodeMark Node labeling information: currently used only in the Terraform.
                     * 
                     */
                    std::string GetNodeMark() const;

                    /**
                     * 设置Node labeling information: currently used only in the Terraform.
                     * @param _nodeMark Node labeling information: currently used only in the Terraform.
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
                     * 获取Whether auto-renewal is available for committed use resources.
                     * @return UnderwriteSetAutoRenew Whether auto-renewal is available for committed use resources.
                     * 
                     */
                    bool GetUnderwriteSetAutoRenew() const;

                    /**
                     * 设置Whether auto-renewal is available for committed use resources.
                     * @param _underwriteSetAutoRenew Whether auto-renewal is available for committed use resources.
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
                     * 获取GPU information.
                     * @return GpuDesc GPU information.
                     * 
                     */
                    std::string GetGpuDesc() const;

                    /**
                     * 设置GPU information.
                     * @param _gpuDesc GPU information.
                     * 
                     */
                    void SetGpuDesc(const std::string& _gpuDesc);

                    /**
                     * 判断参数 GpuDesc 是否已赋值
                     * @return GpuDesc 是否已赋值
                     * 
                     */
                    bool GpuDescHasBeenSet() const;

                private:

                    /**
                     * User AppID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Serial number.
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * Machine instance ID.
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * Public network IP address bound for the Master node.
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * Node type. 0: Common node; 1: Master node.
 2: Core node; 3: Task node.
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Node specifications.
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Number of node cores.
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * Node memory (bytes).
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Node memory (GB).
                     */
                    std::string m_memDesc;
                    bool m_memDescHasBeenSet;

                    /**
                     * The region where the node is located.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * The zone where the node is located.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Application time.
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Release time.
                     */
                    std::string m_freeTime;
                    bool m_freeTimeHasBeenSet;

                    /**
                     * Hard disk size.
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Node description.
                     */
                    std::string m_nameTag;
                    bool m_nameTagHasBeenSet;

                    /**
                     * Node deployment service.
                     */
                    std::string m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * Disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput SSD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).

                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * System disk size (GB).
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * Payment type. Valid values: 0 (pay-as-you-go); 1 (yearly/monthly subscription).
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Database IP address.
                     */
                    std::string m_cdbIp;
                    bool m_cdbIpHasBeenSet;

                    /**
                     * Database port.
                     */
                    int64_t m_cdbPort;
                    bool m_cdbPortHasBeenSet;

                    /**
                     * Hard disk capacity (bytes).
                     */
                    int64_t m_hwDiskSize;
                    bool m_hwDiskSizeHasBeenSet;

                    /**
                     * Hard disk capacity description.
                     */
                    std::string m_hwDiskSizeDesc;
                    bool m_hwDiskSizeDescHasBeenSet;

                    /**
                     * Memory capacity (bytes).
                     */
                    int64_t m_hwMemSize;
                    bool m_hwMemSizeHasBeenSet;

                    /**
                     * Memory capacity description.
                     */
                    std::string m_hwMemSizeDesc;
                    bool m_hwMemSizeDescHasBeenSet;

                    /**
                     * Expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Node resource ID.
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * Renewal flag.
                     */
                    int64_t m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * Device identification.
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * Supporting resizing.
                     */
                    int64_t m_mutable;
                    bool m_mutableHasBeenSet;

                    /**
                     * Multi-cloud disk
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MultiDiskMC> m_mCMultiDisk;
                    bool m_mCMultiDiskHasBeenSet;

                    /**
                     * Database information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CdbInfo m_cdbNodeInfo;
                    bool m_cdbNodeInfoHasBeenSet;

                    /**
                     * Private network IP address.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Whether this node can be terminated. 1: Yes, 0: No.
                     */
                    int64_t m_destroyable;
                    bool m_destroyableHasBeenSet;

                    /**
                     * Tags bound to node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether it is an automatic scaling node. 0: common node, 1: automatic scaling node.
                     */
                    int64_t m_autoFlag;
                    bool m_autoFlagHasBeenSet;

                    /**
                     * Resource type, with the valid values of "host" and "pod".
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * Whether it is a floating specification. 1: Yes, 0: No.
                     */
                    int64_t m_isDynamicSpec;
                    bool m_isDynamicSpecHasBeenSet;

                    /**
                     * Floating specification value in the JSON string format.
                     */
                    std::string m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * Whether the billing type can be changed. 1: Yes, 0: No.
                     */
                    int64_t m_supportModifyPayMode;
                    bool m_supportModifyPayModeHasBeenSet;

                    /**
                     * System disk type. Valid values: 1 (Local Disk), 2 (Cloud Disk), 3 (Local SSD), 4 (Cloud SSD), 5 (Premium Cloud Disk), 6 (Enhanced SSD), 11 (Throughput HDD), 12 (Tremendous SSD), 13 (Balanced SSD), 14 (Big Data Cloud Disk), 15 (High IO Cloud Disk), and 16 (Remote SSD).
                     */
                    int64_t m_rootStorageType;
                    bool m_rootStorageTypeHasBeenSet;

                    /**
                     * Availability information.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Subnet
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    SubnetInfo m_subnetInfo;
                    bool m_subnetInfoHasBeenSet;

                    /**
                     * Client.
                     */
                    std::string m_clients;
                    bool m_clientsHasBeenSet;

                    /**
                     * Current system time.
                     */
                    std::string m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * Indicates whether it is for federation. 1: Yes, 0: No.
                     */
                    int64_t m_isFederation;
                    bool m_isFederationHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Service.
                     */
                    std::string m_serviceClient;
                    bool m_serviceClientHasBeenSet;

                    /**
                     * Whether instance protection is enabled. True: enabled, false: disabled.
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * 0: old billing, 1: new billing.
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * Component status. ZooKeeper: STARTED, ResourceManager: STARTED, STARTED: Component is running, STOPPED: Component is halted.
                     */
                    std::string m_servicesStatus;
                    bool m_servicesStatusHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Shared cluster ID.
                     */
                    std::string m_sharedClusterId;
                    bool m_sharedClusterIdHasBeenSet;

                    /**
                     * Shared cluster ID description.
                     */
                    std::string m_sharedClusterIdDesc;
                    bool m_sharedClusterIdDescHasBeenSet;

                    /**
                     * Whether the resource is set for scheduled termination.
                     */
                    bool m_timingResource;
                    bool m_timingResourceHasBeenSet;

                    /**
                     * Corresponding TKE cluster ID in the case that the resource type (HardwareResourceType) is pod.
                     */
                    std::string m_tkeClusterId;
                    bool m_tkeClusterIdHasBeenSet;

                    /**
                     * Name list of services that can be configured when a new disk is mounted.
                     */
                    std::vector<std::string> m_configurableServices;
                    bool m_configurableServicesHasBeenSet;

                    /**
                     * Node labeling information: currently used only in the Terraform.
                     */
                    std::string m_nodeMark;
                    bool m_nodeMarkHasBeenSet;

                    /**
                     * Whether auto-renewal is available for committed use resources.
                     */
                    bool m_underwriteSetAutoRenew;
                    bool m_underwriteSetAutoRenewHasBeenSet;

                    /**
                     * GPU information.
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_
