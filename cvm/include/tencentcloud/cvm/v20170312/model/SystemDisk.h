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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_SYSTEMDISK_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_SYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes information on the block device where the operating system is stored, i.e., the system disk.
                */
                class SystemDisk : public AbstractModel
                {
                public:
                    SystemDisk();
                    ~SystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the system disk type. for the restrictions on the system disk type, refer to [storage overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). value range:<br>
<li>LOCAL_BASIC: Local SATA disk</li>
<li>LOCAL_SSD: Local NVMe SSD</li>
<li>CLOUD_BASIC: Cloud SATA disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium SSD</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
Default value: Current disk types with inventory available.
                     * @return DiskType Specifies the system disk type. for the restrictions on the system disk type, refer to [storage overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). value range:<br>
<li>LOCAL_BASIC: Local SATA disk</li>
<li>LOCAL_SSD: Local NVMe SSD</li>
<li>CLOUD_BASIC: Cloud SATA disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium SSD</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
Default value: Current disk types with inventory available.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Specifies the system disk type. for the restrictions on the system disk type, refer to [storage overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). value range:<br>
<li>LOCAL_BASIC: Local SATA disk</li>
<li>LOCAL_SSD: Local NVMe SSD</li>
<li>CLOUD_BASIC: Cloud SATA disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium SSD</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
Default value: Current disk types with inventory available.
                     * @param _diskType Specifies the system disk type. for the restrictions on the system disk type, refer to [storage overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). value range:<br>
<li>LOCAL_BASIC: Local SATA disk</li>
<li>LOCAL_SSD: Local NVMe SSD</li>
<li>CLOUD_BASIC: Cloud SATA disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium SSD</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
Default value: Current disk types with inventory available.
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
                     * 获取Specifies the system disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     * @return DiskId Specifies the system disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Specifies the system disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     * @param _diskId Specifies the system disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取System disk size; unit: GiB; default value: 50 GiB.
                     * @return DiskSize System disk size; unit: GiB; default value: 50 GiB.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置System disk size; unit: GiB; default value: 50 GiB.
                     * @param _diskSize System disk size; unit: GiB; default value: 50 GiB.
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
                     * 获取Specifies the exclusive cluster ID it belongs to.
                     * @return CdcId Specifies the exclusive cluster ID it belongs to.
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置Specifies the exclusive cluster ID it belongs to.
                     * @param _cdcId Specifies the exclusive cluster ID it belongs to.
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取Disk name, which specifies a length not exceeding 128 characters.
                     * @return DiskName Disk name, which specifies a length not exceeding 128 characters.
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Disk name, which specifies a length not exceeding 128 characters.
                     * @param _diskName Disk name, which specifies a length not exceeding 128 characters.
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                private:

                    /**
                     * Specifies the system disk type. for the restrictions on the system disk type, refer to [storage overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). value range:<br>
<li>LOCAL_BASIC: Local SATA disk</li>
<li>LOCAL_SSD: Local NVMe SSD</li>
<li>CLOUD_BASIC: Cloud SATA disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium SSD</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
Default value: Current disk types with inventory available.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Specifies the system disk ID.
This parameter currently only serves as a response parameter for query apis such as `DescribeInstances`, and cannot be used as an input parameter for write apis such as `RunInstances`.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * System disk size; unit: GiB; default value: 50 GiB.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Specifies the exclusive cluster ID it belongs to.
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * Disk name, which specifies a length not exceeding 128 characters.
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_SYSTEMDISK_H_
