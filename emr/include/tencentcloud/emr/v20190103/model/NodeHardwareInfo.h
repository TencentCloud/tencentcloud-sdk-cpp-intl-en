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
                     * 获取User `APPID`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AppId User `APPID`
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User `APPID`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _appId User `APPID`
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Serial number
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SerialNo Serial number
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置Serial number
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _serialNo Serial number
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Machine instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrderNo Machine instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置Machine instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _orderNo Machine instance ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Public IP bound to master node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WanIp Public IP bound to master node
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Public IP bound to master node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _wanIp Public IP bound to master node
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node type. 0: common node; 1: master node;
2: core node; 3: task node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Flag Node type. 0: common node; 1: master node;
2: core node; 3: task node
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置Node type. 0: common node; 1: master node;
2: core node; 3: task node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _flag Node type. 0: common node; 1: master node;
2: core node; 3: task node
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Spec Node specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Node specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _spec Node specification
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of node cores
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CpuNum Number of node cores
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置Number of node cores
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _cpuNum Number of node cores
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node memory size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MemSize Node memory size
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Node memory size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _memSize Node memory size
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node memory description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MemDesc Node memory description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemDesc() const;

                    /**
                     * 设置Node memory description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _memDesc Node memory description
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Node region
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Node region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _regionId Node region
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId Node AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Node AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _zoneId Node AZ
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplyTime Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _applyTime Application time
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Release time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FreeTime Release time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFreeTime() const;

                    /**
                     * 设置Release time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _freeTime Release time
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DiskSize Disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置Disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _diskSize Disk size
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NameTag Node description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNameTag() const;

                    /**
                     * 设置Node description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _nameTag Node description
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Services deployed on node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Services Services deployed on node
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServices() const;

                    /**
                     * 设置Services deployed on node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _services Services deployed on node
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StorageType Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置Disk type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _storageType Disk type
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取System disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RootSize System disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置System disk size
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rootSize System disk size
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _chargeType Payment type
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CdbIp Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCdbIp() const;

                    /**
                     * 设置Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _cdbIp Database IP
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CdbPort Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCdbPort() const;

                    /**
                     * 设置Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _cdbPort Database port
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Disk capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HwDiskSize Disk capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHwDiskSize() const;

                    /**
                     * 设置Disk capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _hwDiskSize Disk capacity
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Disk capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HwDiskSizeDesc Disk capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHwDiskSizeDesc() const;

                    /**
                     * 设置Disk capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _hwDiskSizeDesc Disk capacity description
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Memory capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HwMemSize Memory capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHwMemSize() const;

                    /**
                     * 设置Memory capacity
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _hwMemSize Memory capacity
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Memory capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HwMemSizeDesc Memory capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHwMemSizeDesc() const;

                    /**
                     * 设置Memory capacity description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _hwMemSizeDesc Memory capacity description
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EmrResourceId Node resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置Node resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _emrResourceId Node resource ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsAutoRenew Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsAutoRenew() const;

                    /**
                     * 设置Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isAutoRenew Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Device flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeviceClass Device flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置Device flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deviceClass Device flag
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Support for configuration adjustment
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Mutable Support for configuration adjustment
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMutable() const;

                    /**
                     * 设置Support for configuration adjustment
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _mutable Support for configuration adjustment
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Ip Private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Private IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ip Private IP
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether this node can be terminated. 1: yes, 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Destroyable Whether this node can be terminated. 1: yes, 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDestroyable() const;

                    /**
                     * 设置Whether this node can be terminated. 1: yes, 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _destroyable Whether this node can be terminated. 1: yes, 0: no
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Wether the node is auto-scaling. 0 means common node. 1 means auto-scaling node.
                     * @return AutoFlag Wether the node is auto-scaling. 0 means common node. 1 means auto-scaling node.
                     * 
                     */
                    int64_t GetAutoFlag() const;

                    /**
                     * 设置Wether the node is auto-scaling. 0 means common node. 1 means auto-scaling node.
                     * @param _autoFlag Wether the node is auto-scaling. 0 means common node. 1 means auto-scaling node.
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
                     * 获取Resource type. Valid values: host, pod
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HardwareResourceType Resource type. Valid values: host, pod
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置Resource type. Valid values: host, pod
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _hardwareResourceType Resource type. Valid values: host, pod
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether floating specification is used. `1`: yes; `0`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return IsDynamicSpec Whether floating specification is used. `1`: yes; `0`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsDynamicSpec() const;

                    /**
                     * 设置Whether floating specification is used. `1`: yes; `0`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _isDynamicSpec Whether floating specification is used. `1`: yes; `0`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Floating specification in JSON string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DynamicPodSpec Floating specification in JSON string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDynamicPodSpec() const;

                    /**
                     * 设置Floating specification in JSON string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dynamicPodSpec Floating specification in JSON string
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Whether to support billing mode change. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SupportModifyPayMode Whether to support billing mode change. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSupportModifyPayMode() const;

                    /**
                     * 设置Whether to support billing mode change. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _supportModifyPayMode Whether to support billing mode change. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取System disk type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RootStorageType System disk type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRootStorageType() const;

                    /**
                     * 设置System disk type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _rootStorageType System disk type
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取AZ information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Zone AZ information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _zone AZ information
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Client
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Clients Client
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClients() const;

                    /**
                     * 设置Client
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _clients Client
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取The current system time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurrentTime The current system time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCurrentTime() const;

                    /**
                     * 设置The current system time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currentTime The current system time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether it is used in a federation. Valid values: `0` (no), `1` (yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsFederation Whether it is used in a federation. Valid values: `0` (no), `1` (yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsFederation() const;

                    /**
                     * 设置Whether it is used in a federation. Valid values: `0` (no), `1` (yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isFederation Whether it is used in a federation. Valid values: `0` (no), `1` (yes).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Device name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeviceName Device name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deviceName Device name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceClient Service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceClient() const;

                    /**
                     * 设置Service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceClient Service
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Enabling instance protection for this instance. Valid values: `true` (enable) and `false` (disable).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisableApiTermination Enabling instance protection for this instance. Valid values: `true` (enable) and `false` (disable).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置Enabling instance protection for this instance. Valid values: `true` (enable) and `false` (disable).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _disableApiTermination Enabling instance protection for this instance. Valid values: `true` (enable) and `false` (disable).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The billing version. Valid values: `0` (original billing) and `1` (new billing)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TradeVersion The billing version. Valid values: `0` (original billing) and `1` (new billing)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置The billing version. Valid values: `0` (original billing) and `1` (new billing)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tradeVersion The billing version. Valid values: `0` (original billing) and `1` (new billing)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Status of each component. Zookeeper: STARTED; ResourceManager: STARTED. STARTED indicates "already in operation"; STOPPED indicates "ceased".
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServicesStatus Status of each component. Zookeeper: STARTED; ResourceManager: STARTED. STARTED indicates "already in operation"; STOPPED indicates "ceased".
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServicesStatus() const;

                    /**
                     * 设置Status of each component. Zookeeper: STARTED; ResourceManager: STARTED. STARTED indicates "already in operation"; STOPPED indicates "ceased".
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _servicesStatus Status of each component. Zookeeper: STARTED; ResourceManager: STARTED. STARTED indicates "already in operation"; STOPPED indicates "ceased".
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServicesStatus(const std::string& _servicesStatus);

                    /**
                     * 判断参数 ServicesStatus 是否已赋值
                     * @return ServicesStatus 是否已赋值
                     * 
                     */
                    bool ServicesStatusHasBeenSet() const;

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
                     * Node type. 0: common node; 1: master node;
2: core node; 3: task node
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
                     * Wether the node is auto-scaling. 0 means common node. 1 means auto-scaling node.
                     */
                    int64_t m_autoFlag;
                    bool m_autoFlagHasBeenSet;

                    /**
                     * Resource type. Valid values: host, pod
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * Whether floating specification is used. `1`: yes; `0`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_isDynamicSpec;
                    bool m_isDynamicSpecHasBeenSet;

                    /**
                     * Floating specification in JSON string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * Whether to support billing mode change. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_supportModifyPayMode;
                    bool m_supportModifyPayModeHasBeenSet;

                    /**
                     * System disk type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_rootStorageType;
                    bool m_rootStorageTypeHasBeenSet;

                    /**
                     * AZ information
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * Client
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_clients;
                    bool m_clientsHasBeenSet;

                    /**
                     * The current system time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * Whether it is used in a federation. Valid values: `0` (no), `1` (yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isFederation;
                    bool m_isFederationHasBeenSet;

                    /**
                     * Device name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Service
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceClient;
                    bool m_serviceClientHasBeenSet;

                    /**
                     * Enabling instance protection for this instance. Valid values: `true` (enable) and `false` (disable).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * The billing version. Valid values: `0` (original billing) and `1` (new billing)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * Status of each component. Zookeeper: STARTED; ResourceManager: STARTED. STARTED indicates "already in operation"; STOPPED indicates "ceased".
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_servicesStatus;
                    bool m_servicesStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_
