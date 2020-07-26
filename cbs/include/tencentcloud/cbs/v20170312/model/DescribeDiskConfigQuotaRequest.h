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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKCONFIGQUOTAREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKCONFIGQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDiskConfigQuota request structure.
                */
                class DescribeDiskConfigQuotaRequest : public AbstractModel
                {
                public:
                    DescribeDiskConfigQuotaRequest();
                    ~DescribeDiskConfigQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Inquiry type. Value range: INQUIRY_CBS_CONFIG: query the configuration list of cloud disks <br><li>INQUIRY_CVM_CONFIG: query the configuration list of cloud disks and instances.
                     * @return InquiryType Inquiry type. Value range: INQUIRY_CBS_CONFIG: query the configuration list of cloud disks <br><li>INQUIRY_CVM_CONFIG: query the configuration list of cloud disks and instances.
                     */
                    std::string GetInquiryType() const;

                    /**
                     * 设置Inquiry type. Value range: INQUIRY_CBS_CONFIG: query the configuration list of cloud disks <br><li>INQUIRY_CVM_CONFIG: query the configuration list of cloud disks and instances.
                     * @param InquiryType Inquiry type. Value range: INQUIRY_CBS_CONFIG: query the configuration list of cloud disks <br><li>INQUIRY_CVM_CONFIG: query the configuration list of cloud disks and instances.
                     */
                    void SetInquiryType(const std::string& _inquiryType);

                    /**
                     * 判断参数 InquiryType 是否已赋值
                     * @return InquiryType 是否已赋值
                     */
                    bool InquiryTypeHasBeenSet() const;

                    /**
                     * 获取Query configuration under one or more [availability zone](/document/product/213/15753#ZoneInfo).
                     * @return Zones Query configuration under one or more [availability zone](/document/product/213/15753#ZoneInfo).
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Query configuration under one or more [availability zone](/document/product/213/15753#ZoneInfo).
                     * @param Zones Query configuration under one or more [availability zone](/document/product/213/15753#ZoneInfo).
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Billing mode. Value range: <br><li>POSTPAID_BY_HOUR: postpaid.
                     * @return DiskChargeType Billing mode. Value range: <br><li>POSTPAID_BY_HOUR: postpaid.
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Billing mode. Value range: <br><li>POSTPAID_BY_HOUR: postpaid.
                     * @param DiskChargeType Billing mode. Value range: <br><li>POSTPAID_BY_HOUR: postpaid.
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取Type of hard disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
                     * @return DiskTypes Type of hard disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
                     */
                    std::vector<std::string> GetDiskTypes() const;

                    /**
                     * 设置Type of hard disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
                     * @param DiskTypes Type of hard disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
                     */
                    void SetDiskTypes(const std::vector<std::string>& _diskTypes);

                    /**
                     * 判断参数 DiskTypes 是否已赋值
                     * @return DiskTypes 是否已赋值
                     */
                    bool DiskTypesHasBeenSet() const;

                    /**
                     * 获取The system disk or data disk. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * @return DiskUsage The system disk or data disk. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置The system disk or data disk. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * @param DiskUsage The system disk or data disk. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取Filter by the instance model series, such as S1, I1 and M1. For more information, please see [Instance Types](https://cloud.tencent.com/document/product/213/11518)
                     * @return InstanceFamilies Filter by the instance model series, such as S1, I1 and M1. For more information, please see [Instance Types](https://cloud.tencent.com/document/product/213/11518)
                     */
                    std::vector<std::string> GetInstanceFamilies() const;

                    /**
                     * 设置Filter by the instance model series, such as S1, I1 and M1. For more information, please see [Instance Types](https://cloud.tencent.com/document/product/213/11518)
                     * @param InstanceFamilies Filter by the instance model series, such as S1, I1 and M1. For more information, please see [Instance Types](https://cloud.tencent.com/document/product/213/11518)
                     */
                    void SetInstanceFamilies(const std::vector<std::string>& _instanceFamilies);

                    /**
                     * 判断参数 InstanceFamilies 是否已赋值
                     * @return InstanceFamilies 是否已赋值
                     */
                    bool InstanceFamiliesHasBeenSet() const;

                    /**
                     * 获取Instance CPU cores.
                     * @return CPU Instance CPU cores.
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置Instance CPU cores.
                     * @param CPU Instance CPU cores.
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Instance memory size.
                     * @return Memory Instance memory size.
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance memory size.
                     * @param Memory Instance memory size.
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                private:

                    /**
                     * Inquiry type. Value range: INQUIRY_CBS_CONFIG: query the configuration list of cloud disks <br><li>INQUIRY_CVM_CONFIG: query the configuration list of cloud disks and instances.
                     */
                    std::string m_inquiryType;
                    bool m_inquiryTypeHasBeenSet;

                    /**
                     * Query configuration under one or more [availability zone](/document/product/213/15753#ZoneInfo).
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Billing mode. Value range: <br><li>POSTPAID_BY_HOUR: postpaid.
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * Type of hard disk medium. Value range: <br><li>CLOUD_BASIC: Ordinary cloud disk <br><li>CLOUD_PREMIUM: Premium cloud storage <br><li>CLOUD_SSD: SSD cloud disk.
                     */
                    std::vector<std::string> m_diskTypes;
                    bool m_diskTypesHasBeenSet;

                    /**
                     * The system disk or data disk. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Filter by the instance model series, such as S1, I1 and M1. For more information, please see [Instance Types](https://cloud.tencent.com/document/product/213/11518)
                     */
                    std::vector<std::string> m_instanceFamilies;
                    bool m_instanceFamiliesHasBeenSet;

                    /**
                     * Instance CPU cores.
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Instance memory size.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKCONFIGQUOTAREQUEST_H_
