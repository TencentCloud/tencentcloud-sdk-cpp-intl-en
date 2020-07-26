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
                     * 获取User `APPID`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AppId User `APPID`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User `APPID`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AppId User `APPID`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Serial number
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SerialNo Serial number
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置Serial number
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SerialNo Serial number
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取Machine instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrderNo Machine instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置Machine instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrderNo Machine instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取Public IP bound to master node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WanIp Public IP bound to master node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Public IP bound to master node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param WanIp Public IP bound to master node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取Node type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Flag Node type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置Node type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Flag Node type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFlag(const int64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取Node specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Spec Node specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Node specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Spec Node specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取Number of node cores
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CpuNum Number of node cores
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置Number of node cores
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CpuNum Number of node cores
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取Node memory size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MemSize Node memory size
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Node memory size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MemSize Node memory size
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Node memory description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MemDesc Node memory description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMemDesc() const;

                    /**
                     * 设置Node memory description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MemDesc Node memory description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMemDesc(const std::string& _memDesc);

                    /**
                     * 判断参数 MemDesc 是否已赋值
                     * @return MemDesc 是否已赋值
                     */
                    bool MemDescHasBeenSet() const;

                    /**
                     * 获取Node region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Node region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Node region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RegionId Node region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Node AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId Node AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Node AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ZoneId Node AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplyTime Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApplyTime Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取Release time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FreeTime Release time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFreeTime() const;

                    /**
                     * 设置Release time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FreeTime Release time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFreeTime(const std::string& _freeTime);

                    /**
                     * 判断参数 FreeTime 是否已赋值
                     * @return FreeTime 是否已赋值
                     */
                    bool FreeTimeHasBeenSet() const;

                    /**
                     * 获取Disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DiskSize Disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置Disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DiskSize Disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDiskSize(const std::string& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Node description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NameTag Node description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNameTag() const;

                    /**
                     * 设置Node description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NameTag Node description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNameTag(const std::string& _nameTag);

                    /**
                     * 判断参数 NameTag 是否已赋值
                     * @return NameTag 是否已赋值
                     */
                    bool NameTagHasBeenSet() const;

                    /**
                     * 获取Services deployed on node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Services Services deployed on node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServices() const;

                    /**
                     * 设置Services deployed on node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Services Services deployed on node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServices(const std::string& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StorageType Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StorageType Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取System disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RootSize System disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置System disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RootSize System disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRootSize(const int64_t& _rootSize);

                    /**
                     * 判断参数 RootSize 是否已赋值
                     * @return RootSize 是否已赋值
                     */
                    bool RootSizeHasBeenSet() const;

                    /**
                     * 获取Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ChargeType Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CdbIp Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCdbIp() const;

                    /**
                     * 设置Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CdbIp Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCdbIp(const std::string& _cdbIp);

                    /**
                     * 判断参数 CdbIp 是否已赋值
                     * @return CdbIp 是否已赋值
                     */
                    bool CdbIpHasBeenSet() const;

                    /**
                     * 获取Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CdbPort Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCdbPort() const;

                    /**
                     * 设置Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CdbPort Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCdbPort(const int64_t& _cdbPort);

                    /**
                     * 判断参数 CdbPort 是否已赋值
                     * @return CdbPort 是否已赋值
                     */
                    bool CdbPortHasBeenSet() const;

                    /**
                     * 获取Disk capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HwDiskSize Disk capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHwDiskSize() const;

                    /**
                     * 设置Disk capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HwDiskSize Disk capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHwDiskSize(const int64_t& _hwDiskSize);

                    /**
                     * 判断参数 HwDiskSize 是否已赋值
                     * @return HwDiskSize 是否已赋值
                     */
                    bool HwDiskSizeHasBeenSet() const;

                    /**
                     * 获取Disk capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HwDiskSizeDesc Disk capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHwDiskSizeDesc() const;

                    /**
                     * 设置Disk capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HwDiskSizeDesc Disk capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHwDiskSizeDesc(const std::string& _hwDiskSizeDesc);

                    /**
                     * 判断参数 HwDiskSizeDesc 是否已赋值
                     * @return HwDiskSizeDesc 是否已赋值
                     */
                    bool HwDiskSizeDescHasBeenSet() const;

                    /**
                     * 获取Memory capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HwMemSize Memory capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHwMemSize() const;

                    /**
                     * 设置Memory capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HwMemSize Memory capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHwMemSize(const int64_t& _hwMemSize);

                    /**
                     * 判断参数 HwMemSize 是否已赋值
                     * @return HwMemSize 是否已赋值
                     */
                    bool HwMemSizeHasBeenSet() const;

                    /**
                     * 获取Memory capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HwMemSizeDesc Memory capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHwMemSizeDesc() const;

                    /**
                     * 设置Memory capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HwMemSizeDesc Memory capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHwMemSizeDesc(const std::string& _hwMemSizeDesc);

                    /**
                     * 判断参数 HwMemSizeDesc 是否已赋值
                     * @return HwMemSizeDesc 是否已赋值
                     */
                    bool HwMemSizeDescHasBeenSet() const;

                    /**
                     * 获取Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ExpireTime Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Node resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EmrResourceId Node resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置Node resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EmrResourceId Node resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEmrResourceId(const std::string& _emrResourceId);

                    /**
                     * 判断参数 EmrResourceId 是否已赋值
                     * @return EmrResourceId 是否已赋值
                     */
                    bool EmrResourceIdHasBeenSet() const;

                    /**
                     * 获取Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsAutoRenew Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsAutoRenew() const;

                    /**
                     * 设置Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsAutoRenew Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsAutoRenew(const int64_t& _isAutoRenew);

                    /**
                     * 判断参数 IsAutoRenew 是否已赋值
                     * @return IsAutoRenew 是否已赋值
                     */
                    bool IsAutoRenewHasBeenSet() const;

                    /**
                     * 获取Device flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeviceClass Device flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置Device flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DeviceClass Device flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeviceClass(const std::string& _deviceClass);

                    /**
                     * 判断参数 DeviceClass 是否已赋值
                     * @return DeviceClass 是否已赋值
                     */
                    bool DeviceClassHasBeenSet() const;

                    /**
                     * 获取Support for configuration adjustment
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Mutable Support for configuration adjustment
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMutable() const;

                    /**
                     * 设置Support for configuration adjustment
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Mutable Support for configuration adjustment
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMutable(const int64_t& _mutable);

                    /**
                     * 判断参数 Mutable 是否已赋值
                     * @return Mutable 是否已赋值
                     */
                    bool MutableHasBeenSet() const;

                    /**
                     * 获取Multi-cloud disk
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MCMultiDisk Multi-cloud disk
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MultiDiskMC> GetMCMultiDisk() const;

                    /**
                     * 设置Multi-cloud disk
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MCMultiDisk Multi-cloud disk
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMCMultiDisk(const std::vector<MultiDiskMC>& _mCMultiDisk);

                    /**
                     * 判断参数 MCMultiDisk 是否已赋值
                     * @return MCMultiDisk 是否已赋值
                     */
                    bool MCMultiDiskHasBeenSet() const;

                    /**
                     * 获取Database information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CdbNodeInfo Database information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CdbInfo GetCdbNodeInfo() const;

                    /**
                     * 设置Database information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CdbNodeInfo Database information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCdbNodeInfo(const CdbInfo& _cdbNodeInfo);

                    /**
                     * 判断参数 CdbNodeInfo 是否已赋值
                     * @return CdbNodeInfo 是否已赋值
                     */
                    bool CdbNodeInfoHasBeenSet() const;

                    /**
                     * 获取Private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Ip Private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Ip Private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Whether this node can be terminated. 1: yes, 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Destroyable Whether this node can be terminated. 1: yes, 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDestroyable() const;

                    /**
                     * 设置Whether this node can be terminated. 1: yes, 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Destroyable Whether this node can be terminated. 1: yes, 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDestroyable(const int64_t& _destroyable);

                    /**
                     * 判断参数 Destroyable 是否已赋值
                     * @return Destroyable 是否已赋值
                     */
                    bool DestroyableHasBeenSet() const;

                    /**
                     * 获取Tags bound to node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tags bound to node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags bound to node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tags Tags bound to node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether it is an automatically scalable node. 0: general node, 1: automatically scalable node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AutoFlag Whether it is an automatically scalable node. 0: general node, 1: automatically scalable node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAutoFlag() const;

                    /**
                     * 设置Whether it is an automatically scalable node. 0: general node, 1: automatically scalable node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AutoFlag Whether it is an automatically scalable node. 0: general node, 1: automatically scalable node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAutoFlag(const int64_t& _autoFlag);

                    /**
                     * 判断参数 AutoFlag 是否已赋值
                     * @return AutoFlag 是否已赋值
                     */
                    bool AutoFlagHasBeenSet() const;

                private:

                    /**
                     * User `APPID`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Serial number
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * Machine instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * Public IP bound to master node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * Node type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Node specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Number of node cores
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * Node memory size
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Node memory description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_memDesc;
                    bool m_memDescHasBeenSet;

                    /**
                     * Node region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Node AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Release time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_freeTime;
                    bool m_freeTimeHasBeenSet;

                    /**
                     * Disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Node description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nameTag;
                    bool m_nameTagHasBeenSet;

                    /**
                     * Services deployed on node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * System disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cdbIp;
                    bool m_cdbIpHasBeenSet;

                    /**
                     * Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cdbPort;
                    bool m_cdbPortHasBeenSet;

                    /**
                     * Disk capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hwDiskSize;
                    bool m_hwDiskSizeHasBeenSet;

                    /**
                     * Disk capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hwDiskSizeDesc;
                    bool m_hwDiskSizeDescHasBeenSet;

                    /**
                     * Memory capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hwMemSize;
                    bool m_hwMemSizeHasBeenSet;

                    /**
                     * Memory capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hwMemSizeDesc;
                    bool m_hwMemSizeDescHasBeenSet;

                    /**
                     * Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Node resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * Device flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * Support for configuration adjustment
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Whether this node can be terminated. 1: yes, 0: no
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Whether it is an automatically scalable node. 0: general node, 1: automatically scalable node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoFlag;
                    bool m_autoFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_
