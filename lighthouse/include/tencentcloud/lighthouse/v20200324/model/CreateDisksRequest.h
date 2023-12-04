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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DiskChargePrepaid.h>
#include <tencentcloud/lighthouse/v20200324/model/AutoMountConfiguration.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateDisks request structure.
                */
                class CreateDisksRequest : public AbstractModel
                {
                public:
                    CreateDisksRequest();
                    ~CreateDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone. You can call [DescribeZones](https://intl.cloud.tencent.com/document/product/1207/57513?from_cn_redirect=1) and get the information in the `Zone` parameter re 
                     * @return Zone Availability zone. You can call [DescribeZones](https://intl.cloud.tencent.com/document/product/1207/57513?from_cn_redirect=1) and get the information in the `Zone` parameter re 
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone. You can call [DescribeZones](https://intl.cloud.tencent.com/document/product/1207/57513?from_cn_redirect=1) and get the information in the `Zone` parameter re 
                     * @param _zone Availability zone. You can call [DescribeZones](https://intl.cloud.tencent.com/document/product/1207/57513?from_cn_redirect=1) and get the information in the `Zone` parameter re 
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
                     * 获取Cloud disk size in GB.
                     * @return DiskSize Cloud disk size in GB.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size in GB.
                     * @param _diskSize Cloud disk size in GB.
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Cloud disk media type. Valid values: "CLOUD_PREMIUM" (premium cloud disk), "CLOUD_SSD" (SSD cloud disk).
                     * @return DiskType Cloud disk media type. Valid values: "CLOUD_PREMIUM" (premium cloud disk), "CLOUD_SSD" (SSD cloud disk).
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk media type. Valid values: "CLOUD_PREMIUM" (premium cloud disk), "CLOUD_SSD" (SSD cloud disk).
                     * @param _diskType Cloud disk media type. Valid values: "CLOUD_PREMIUM" (premium cloud disk), "CLOUD_SSD" (SSD cloud disk).
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Parameters of monthly subscribed cloud disks
                     * @return DiskChargePrepaid Parameters of monthly subscribed cloud disks
                     * 
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置Parameters of monthly subscribed cloud disks
                     * @param _diskChargePrepaid Parameters of monthly subscribed cloud disks
                     * 
                     */
                    void SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid);

                    /**
                     * 判断参数 DiskChargePrepaid 是否已赋值
                     * @return DiskChargePrepaid 是否已赋值
                     * 
                     */
                    bool DiskChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Image name, which can contain up to 60 characters.
                     * @return DiskName Image name, which can contain up to 60 characters.
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Image name, which can contain up to 60 characters.
                     * @param _diskName Image name, which can contain up to 60 characters.
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取Number of cloud disks. Range: [1, 30]. Default value: 1.
                     * @return DiskCount Number of cloud disks. Range: [1, 30]. Default value: 1.
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置Number of cloud disks. Range: [1, 30]. Default value: 1.
                     * @param _diskCount Number of cloud disks. Range: [1, 30]. Default value: 1.
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取Specify the quota of disk backups. No quota if it’s left empty. Only one quota is allowed.
                     * @return DiskBackupQuota Specify the quota of disk backups. No quota if it’s left empty. Only one quota is allowed.
                     * 
                     */
                    int64_t GetDiskBackupQuota() const;

                    /**
                     * 设置Specify the quota of disk backups. No quota if it’s left empty. Only one quota is allowed.
                     * @param _diskBackupQuota Specify the quota of disk backups. No quota if it’s left empty. Only one quota is allowed.
                     * 
                     */
                    void SetDiskBackupQuota(const int64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     * 
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                    /**
                     * 获取Whether to use the vouchers automatically. It defaults to No.
                     * @return AutoVoucher Whether to use the vouchers automatically. It defaults to No.
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置Whether to use the vouchers automatically. It defaults to No.
                     * @param _autoVoucher Whether to use the vouchers automatically. It defaults to No.
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Automatically mount and initialize the data disk.
                     * @return AutoMountConfiguration Automatically mount and initialize the data disk.
                     * 
                     */
                    AutoMountConfiguration GetAutoMountConfiguration() const;

                    /**
                     * 设置Automatically mount and initialize the data disk.
                     * @param _autoMountConfiguration Automatically mount and initialize the data disk.
                     * 
                     */
                    void SetAutoMountConfiguration(const AutoMountConfiguration& _autoMountConfiguration);

                    /**
                     * 判断参数 AutoMountConfiguration 是否已赋值
                     * @return AutoMountConfiguration 是否已赋值
                     * 
                     */
                    bool AutoMountConfigurationHasBeenSet() const;

                private:

                    /**
                     * Availability zone. You can call [DescribeZones](https://intl.cloud.tencent.com/document/product/1207/57513?from_cn_redirect=1) and get the information in the `Zone` parameter re 
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Cloud disk size in GB.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Cloud disk media type. Valid values: "CLOUD_PREMIUM" (premium cloud disk), "CLOUD_SSD" (SSD cloud disk).
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Parameters of monthly subscribed cloud disks
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * Image name, which can contain up to 60 characters.
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * Number of cloud disks. Range: [1, 30]. Default value: 1.
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Specify the quota of disk backups. No quota if it’s left empty. Only one quota is allowed.
                     */
                    int64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                    /**
                     * Whether to use the vouchers automatically. It defaults to No.
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Automatically mount and initialize the data disk.
                     */
                    AutoMountConfiguration m_autoMountConfiguration;
                    bool m_autoMountConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKSREQUEST_H_
