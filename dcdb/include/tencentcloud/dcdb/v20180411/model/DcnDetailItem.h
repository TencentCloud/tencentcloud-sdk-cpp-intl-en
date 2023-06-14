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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DCNDETAILITEM_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DCNDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DCN details
                */
                class DcnDetailItem : public AbstractModel
                {
                public:
                    DcnDetailItem();
                    ~DcnDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Region where the instance resides
                     * @return Region Region where the instance resides
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region where the instance resides
                     * @param _region Region where the instance resides
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
                     * 获取Availability zone where the instance resides
                     * @return Zone Availability zone where the instance resides
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone where the instance resides
                     * @param _zone Availability zone where the instance resides
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
                     * 获取Instance IP address
                     * @return Vip Instance IP address
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance IP address
                     * @param _vip Instance IP address
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Instance IPv6 address
                     * @return Vipv6 Instance IPv6 address
                     * 
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置Instance IPv6 address
                     * @param _vipv6 Instance IPv6 address
                     * 
                     */
                    void SetVipv6(const std::string& _vipv6);

                    /**
                     * 判断参数 Vipv6 是否已赋值
                     * @return Vipv6 是否已赋值
                     * 
                     */
                    bool Vipv6HasBeenSet() const;

                    /**
                     * 获取Instance port
                     * @return Vport Instance port
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Instance port
                     * @param _vport Instance port
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return Status Instance status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status
                     * @param _status Instance status
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
                     * 获取Instance status description
                     * @return StatusDesc Instance status description
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Instance status description
                     * @param _statusDesc Instance status description
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取DCN flag. Valid values: `1` (primary), `2` (disaster recovery)
                     * @return DcnFlag DCN flag. Valid values: `1` (primary), `2` (disaster recovery)
                     * 
                     */
                    int64_t GetDcnFlag() const;

                    /**
                     * 设置DCN flag. Valid values: `1` (primary), `2` (disaster recovery)
                     * @param _dcnFlag DCN flag. Valid values: `1` (primary), `2` (disaster recovery)
                     * 
                     */
                    void SetDcnFlag(const int64_t& _dcnFlag);

                    /**
                     * 判断参数 DcnFlag 是否已赋值
                     * @return DcnFlag 是否已赋值
                     * 
                     */
                    bool DcnFlagHasBeenSet() const;

                    /**
                     * 获取DCN status. Valid values: `0` (none), `1` (creating), `2` (syncing), `3` (disconnected)
                     * @return DcnStatus DCN status. Valid values: `0` (none), `1` (creating), `2` (syncing), `3` (disconnected)
                     * 
                     */
                    int64_t GetDcnStatus() const;

                    /**
                     * 设置DCN status. Valid values: `0` (none), `1` (creating), `2` (syncing), `3` (disconnected)
                     * @param _dcnStatus DCN status. Valid values: `0` (none), `1` (creating), `2` (syncing), `3` (disconnected)
                     * 
                     */
                    void SetDcnStatus(const int64_t& _dcnStatus);

                    /**
                     * 判断参数 DcnStatus 是否已赋值
                     * @return DcnStatus 是否已赋值
                     * 
                     */
                    bool DcnStatusHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of the instance
                     * @return Cpu Number of CPU cores of the instance
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores of the instance
                     * @param _cpu Number of CPU cores of the instance
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
                     * 获取Instance memory capacity in GB
                     * @return Memory Instance memory capacity in GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory capacity in GB
                     * @param _memory Instance memory capacity in GB
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
                     * 获取Instance storage capacity in GB
                     * @return Storage Instance storage capacity in GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Instance storage capacity in GB
                     * @param _storage Instance storage capacity in GB
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Billing mode
                     * @return PayMode Billing mode
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode
                     * @param _payMode Billing mode
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Creation time of the instance in the format of 2006-01-02 15:04:05
                     * @return CreateTime Creation time of the instance in the format of 2006-01-02 15:04:05
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the instance in the format of 2006-01-02 15:04:05
                     * @param _createTime Creation time of the instance in the format of 2006-01-02 15:04:05
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time of the instance in the format of 2006-01-02 15:04:05
                     * @return PeriodEndTime Expiration time of the instance in the format of 2006-01-02 15:04:05
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置Expiration time of the instance in the format of 2006-01-02 15:04:05
                     * @param _periodEndTime Expiration time of the instance in the format of 2006-01-02 15:04:05
                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: `1` (dedicated primary instance), `2` (non-dedicated primary instance), `3` (non-dedicated disaster recovery instance), and `4` (dedicated disaster recovery instance).
                     * @return InstanceType Instance type. Valid values: `1` (dedicated primary instance), `2` (non-dedicated primary instance), `3` (non-dedicated disaster recovery instance), and `4` (dedicated disaster recovery instance).
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Instance type. Valid values: `1` (dedicated primary instance), `2` (non-dedicated primary instance), `3` (non-dedicated disaster recovery instance), and `4` (dedicated disaster recovery instance).
                     * @param _instanceType Instance type. Valid values: `1` (dedicated primary instance), `2` (non-dedicated primary instance), `3` (non-dedicated disaster recovery instance), and `4` (dedicated disaster recovery instance).
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Whether KMS is enabled.
                     * @return EncryptStatus Whether KMS is enabled.
                     * 
                     */
                    int64_t GetEncryptStatus() const;

                    /**
                     * 设置Whether KMS is enabled.
                     * @param _encryptStatus Whether KMS is enabled.
                     * 
                     */
                    void SetEncryptStatus(const int64_t& _encryptStatus);

                    /**
                     * 判断参数 EncryptStatus 是否已赋值
                     * @return EncryptStatus 是否已赋值
                     * 
                     */
                    bool EncryptStatusHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Region where the instance resides
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Availability zone where the instance resides
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance IP address
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Instance IPv6 address
                     */
                    std::string m_vipv6;
                    bool m_vipv6HasBeenSet;

                    /**
                     * Instance port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Instance status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance status description
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * DCN flag. Valid values: `1` (primary), `2` (disaster recovery)
                     */
                    int64_t m_dcnFlag;
                    bool m_dcnFlagHasBeenSet;

                    /**
                     * DCN status. Valid values: `0` (none), `1` (creating), `2` (syncing), `3` (disconnected)
                     */
                    int64_t m_dcnStatus;
                    bool m_dcnStatusHasBeenSet;

                    /**
                     * Number of CPU cores of the instance
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance memory capacity in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance storage capacity in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Billing mode
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Creation time of the instance in the format of 2006-01-02 15:04:05
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Expiration time of the instance in the format of 2006-01-02 15:04:05
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Instance type. Valid values: `1` (dedicated primary instance), `2` (non-dedicated primary instance), `3` (non-dedicated disaster recovery instance), and `4` (dedicated disaster recovery instance).
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Whether KMS is enabled.
                     */
                    int64_t m_encryptStatus;
                    bool m_encryptStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DCNDETAILITEM_H_
