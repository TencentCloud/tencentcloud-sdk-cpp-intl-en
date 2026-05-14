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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_FLOWPACKAGEINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_FLOWPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Traffic package information
                */
                class FlowPackageInfo : public AbstractModel
                {
                public:
                    FlowPackageInfo();
                    ~FlowPackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique resource ID of the data transfer plan
                     * @return ResourceId Unique resource ID of the data transfer plan
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Unique resource ID of the data transfer plan
                     * @param _resourceId Unique resource ID of the data transfer plan
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取User AppId belonging to the data transfer plan
                     * @return AppId User AppId belonging to the data transfer plan
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User AppId belonging to the data transfer plan
                     * @param _appId User AppId belonging to the data transfer plan
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * @return PackageType Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * @param _packageType Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Traffic packet status. 0: Inactive, 1: Within validity period, 2: Expired.
                     * @return Status Traffic packet status. 0: Inactive, 1: Within validity period, 2: Expired.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Traffic packet status. 0: Inactive, 1: Within validity period, 2: Expired.
                     * @param _status Traffic packet status. 0: Inactive, 1: Within validity period, 2: Expired.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Purchase time, Unix timestamp format, unit: second
                     * @return CreateTime Purchase time, Unix timestamp format, unit: second
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Purchase time, Unix timestamp format, unit: second
                     * @param _createTime Purchase time, Unix timestamp format, unit: second
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Effective time, Unix Timestamp Format, unit: second
                     * @return ActiveTime Effective time, Unix Timestamp Format, unit: second
                     * 
                     */
                    int64_t GetActiveTime() const;

                    /**
                     * 设置Effective time, Unix Timestamp Format, unit: second
                     * @param _activeTime Effective time, Unix Timestamp Format, unit: second
                     * 
                     */
                    void SetActiveTime(const int64_t& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time, Unix Timestamp Format, unit: second
                     * @return ExpireTime Expiration time, Unix Timestamp Format, unit: second
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time, Unix Timestamp Format, unit: second
                     * @param _expireTime Expiration time, Unix Timestamp Format, unit: second
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Device ID list bound to the data transfer plan
                     * @return DeviceList Device ID list bound to the data transfer plan
                     * 
                     */
                    std::vector<std::string> GetDeviceList() const;

                    /**
                     * 设置Device ID list bound to the data transfer plan
                     * @param _deviceList Device ID list bound to the data transfer plan
                     * 
                     */
                    void SetDeviceList(const std::vector<std::string>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                    /**
                     * 获取Total traffic plan capacity (unit: MB)
                     * @return CapacitySize Total traffic plan capacity (unit: MB)
                     * 
                     */
                    uint64_t GetCapacitySize() const;

                    /**
                     * 设置Total traffic plan capacity (unit: MB)
                     * @param _capacitySize Total traffic plan capacity (unit: MB)
                     * 
                     */
                    void SetCapacitySize(const uint64_t& _capacitySize);

                    /**
                     * 判断参数 CapacitySize 是否已赋值
                     * @return CapacitySize 是否已赋值
                     * 
                     */
                    bool CapacitySizeHasBeenSet() const;

                    /**
                     * 获取Remaining data transfer plan, unit: MB
                     * @return CapacityRemain Remaining data transfer plan, unit: MB
                     * 
                     */
                    uint64_t GetCapacityRemain() const;

                    /**
                     * 设置Remaining data transfer plan, unit: MB
                     * @param _capacityRemain Remaining data transfer plan, unit: MB
                     * 
                     */
                    void SetCapacityRemain(const uint64_t& _capacityRemain);

                    /**
                     * 判断参数 CapacityRemain 是否已赋值
                     * @return CapacityRemain 是否已赋值
                     * 
                     */
                    bool CapacityRemainHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. true represents auto-renewal, false represents no auto-renewal.
                     * @return RenewFlag Auto-renewal flag. true represents auto-renewal, false represents no auto-renewal.
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. true represents auto-renewal, false represents no auto-renewal.
                     * @param _renewFlag Auto-renewal flag. true represents auto-renewal, false represents no auto-renewal.
                     * 
                     */
                    void SetRenewFlag(const bool& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Resource package change status: 0: No change; 1: Changing; 2: Changed or renewed
                     * @return ModifyStatus Resource package change status: 0: No change; 1: Changing; 2: Changed or renewed
                     * 
                     */
                    int64_t GetModifyStatus() const;

                    /**
                     * 设置Resource package change status: 0: No change; 1: Changing; 2: Changed or renewed
                     * @param _modifyStatus Resource package change status: 0: No change; 1: Changing; 2: Changed or renewed
                     * 
                     */
                    void SetModifyStatus(const int64_t& _modifyStatus);

                    /**
                     * 判断参数 ModifyStatus 是否已赋值
                     * @return ModifyStatus 是否已赋值
                     * 
                     */
                    bool ModifyStatusHasBeenSet() const;

                    /**
                     * 获取Traffic truncation flag. true to enable traffic truncation, false to disable traffic truncation.
                     * @return TruncFlag Traffic truncation flag. true to enable traffic truncation, false to disable traffic truncation.
                     * 
                     */
                    bool GetTruncFlag() const;

                    /**
                     * 设置Traffic truncation flag. true to enable traffic truncation, false to disable traffic truncation.
                     * @param _truncFlag Traffic truncation flag. true to enable traffic truncation, false to disable traffic truncation.
                     * 
                     */
                    void SetTruncFlag(const bool& _truncFlag);

                    /**
                     * 判断参数 TruncFlag 是否已赋值
                     * @return TruncFlag 是否已赋值
                     * 
                     */
                    bool TruncFlagHasBeenSet() const;

                    /**
                     * 获取Precise remaining data transfer plan, unit: MB
                     * @return CapacityRemainPrecise Precise remaining data transfer plan, unit: MB
                     * 
                     */
                    uint64_t GetCapacityRemainPrecise() const;

                    /**
                     * 设置Precise remaining data transfer plan, unit: MB
                     * @param _capacityRemainPrecise Precise remaining data transfer plan, unit: MB
                     * 
                     */
                    void SetCapacityRemainPrecise(const uint64_t& _capacityRemainPrecise);

                    /**
                     * 判断参数 CapacityRemainPrecise 是否已赋值
                     * @return CapacityRemainPrecise 是否已赋值
                     * 
                     */
                    bool CapacityRemainPreciseHasBeenSet() const;

                private:

                    /**
                     * Unique resource ID of the data transfer plan
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * User AppId belonging to the data transfer plan
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Traffic package specification type. Values are as follows:
DEVICE_1_FLOW_20G,DEVICE_2_FLOW_50G,
DEVICE_3_FLOW_100G,
DEVICE_5_FLOW_500G represents traffic packages of 20G, 50G, 100G, and 500G gear selection.
Gear selection also impacts the bandwidth cap of the data transfer plan.
20G: Bind up to 1 device.
50G: Bind up to 2 devices.
100G: Bind up to 3 devices.
500G: Bind up to 5 devices.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Traffic packet status. 0: Inactive, 1: Within validity period, 2: Expired.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Purchase time, Unix timestamp format, unit: second
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Effective time, Unix Timestamp Format, unit: second
                     */
                    int64_t m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * Expiration time, Unix Timestamp Format, unit: second
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Device ID list bound to the data transfer plan
                     */
                    std::vector<std::string> m_deviceList;
                    bool m_deviceListHasBeenSet;

                    /**
                     * Total traffic plan capacity (unit: MB)
                     */
                    uint64_t m_capacitySize;
                    bool m_capacitySizeHasBeenSet;

                    /**
                     * Remaining data transfer plan, unit: MB
                     */
                    uint64_t m_capacityRemain;
                    bool m_capacityRemainHasBeenSet;

                    /**
                     * Auto-renewal flag. true represents auto-renewal, false represents no auto-renewal.
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Resource package change status: 0: No change; 1: Changing; 2: Changed or renewed
                     */
                    int64_t m_modifyStatus;
                    bool m_modifyStatusHasBeenSet;

                    /**
                     * Traffic truncation flag. true to enable traffic truncation, false to disable traffic truncation.
                     */
                    bool m_truncFlag;
                    bool m_truncFlagHasBeenSet;

                    /**
                     * Precise remaining data transfer plan, unit: MB
                     */
                    uint64_t m_capacityRemainPrecise;
                    bool m_capacityRemainPreciseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_FLOWPACKAGEINFO_H_
