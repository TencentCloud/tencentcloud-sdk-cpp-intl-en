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
                     * 获取System disk type. For the restrictions on the system disk type, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Value values:<br>
<li>LOCAL_BASIC: Local Disk</li>
<li>LOCAL_SSD: Local SSD</li>
<li>CLOUD_BASIC: Basic Cloud Disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li><br>
Default value: Current disk types with inventory available.
                     * @return DiskType System disk type. For the restrictions on the system disk type, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Value values:<br>
<li>LOCAL_BASIC: Local Disk</li>
<li>LOCAL_SSD: Local SSD</li>
<li>CLOUD_BASIC: Basic Cloud Disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li><br>
Default value: Current disk types with inventory available.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置System disk type. For the restrictions on the system disk type, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Value values:<br>
<li>LOCAL_BASIC: Local Disk</li>
<li>LOCAL_SSD: Local SSD</li>
<li>CLOUD_BASIC: Basic Cloud Disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li><br>
Default value: Current disk types with inventory available.
                     * @param _diskType System disk type. For the restrictions on the system disk type, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Value values:<br>
<li>LOCAL_BASIC: Local Disk</li>
<li>LOCAL_SSD: Local SSD</li>
<li>CLOUD_BASIC: Basic Cloud Disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li><br>
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
                     * 获取System disk ID. System disks whose type is `LOCAL_BASIC` or `LOCAL_SSD` do not have an ID and do not support this parameter.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
                     * @return DiskId System disk ID. System disks whose type is `LOCAL_BASIC` or `LOCAL_SSD` do not have an ID and do not support this parameter.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置System disk ID. System disks whose type is `LOCAL_BASIC` or `LOCAL_SSD` do not have an ID and do not support this parameter.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
                     * @param _diskId System disk ID. System disks whose type is `LOCAL_BASIC` or `LOCAL_SSD` do not have an ID and do not support this parameter.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
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
                     * 获取System disk size; unit: GB; default value: 50 GB.
                     * @return DiskSize System disk size; unit: GB; default value: 50 GB.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置System disk size; unit: GB; default value: 50 GB.
                     * @param _diskSize System disk size; unit: GB; default value: 50 GB.
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
                     * 获取ID of the dedicated cluster to which the instance belongs.
                     * @return CdcId ID of the dedicated cluster to which the instance belongs.
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置ID of the dedicated cluster to which the instance belongs.
                     * @param _cdcId ID of the dedicated cluster to which the instance belongs.
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
                     * 获取Disk name, with a length of not more than 128 characters.

This parameter is in invite-only testing and is not yet open for use.
Note: This field may return null, indicating that no valid value is found.
                     * @return DiskName Disk name, with a length of not more than 128 characters.

This parameter is in invite-only testing and is not yet open for use.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Disk name, with a length of not more than 128 characters.

This parameter is in invite-only testing and is not yet open for use.
Note: This field may return null, indicating that no valid value is found.
                     * @param _diskName Disk name, with a length of not more than 128 characters.

This parameter is in invite-only testing and is not yet open for use.
Note: This field may return null, indicating that no valid value is found.
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
                     * System disk type. For the restrictions on the system disk type, refer to [Storage Overview](https://intl.cloud.tencent.com/document/product/213/4952?from_cn_redirect=1). Value values:<br>
<li>LOCAL_BASIC: Local Disk</li>
<li>LOCAL_SSD: Local SSD</li>
<li>CLOUD_BASIC: Basic Cloud Disk</li>
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_TSSD: Tremendous SSD</li><br>
Default value: Current disk types with inventory available.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * System disk ID. System disks whose type is `LOCAL_BASIC` or `LOCAL_SSD` do not have an ID and do not support this parameter.
It is only used as a response parameter for APIs such as `DescribeInstances`, and cannot be used as a request parameter for APIs such as `RunInstances`.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * System disk size; unit: GB; default value: 50 GB.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * ID of the dedicated cluster to which the instance belongs.
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * Disk name, with a length of not more than 128 characters.

This parameter is in invite-only testing and is not yet open for use.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_SYSTEMDISK_H_
