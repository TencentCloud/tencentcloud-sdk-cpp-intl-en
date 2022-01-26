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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * System disk configuration of the launch configuration. If this parameter is not specified, the default value is assigned to it.
                */
                class SystemDisk : public AbstractModel
                {
                public:
                    SystemDisk();
                    ~SystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取System disk type. For more information on limits of system disk types, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: local disk <br><li>`LOCAL_SSD`: local SSD disk <br><li>`CLOUD_BASIC`: HDD cloud disk <br><li>`CLOUD_PREMIUM`: premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk <br><br>Default value: `CLOUD_PREMIUM`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return DiskType System disk type. For more information on limits of system disk types, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: local disk <br><li>`LOCAL_SSD`: local SSD disk <br><li>`CLOUD_BASIC`: HDD cloud disk <br><li>`CLOUD_PREMIUM`: premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk <br><br>Default value: `CLOUD_PREMIUM`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置System disk type. For more information on limits of system disk types, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: local disk <br><li>`LOCAL_SSD`: local SSD disk <br><li>`CLOUD_BASIC`: HDD cloud disk <br><li>`CLOUD_PREMIUM`: premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk <br><br>Default value: `CLOUD_PREMIUM`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param DiskType System disk type. For more information on limits of system disk types, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: local disk <br><li>`LOCAL_SSD`: local SSD disk <br><li>`CLOUD_BASIC`: HDD cloud disk <br><li>`CLOUD_PREMIUM`: premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk <br><br>Default value: `CLOUD_PREMIUM`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取System disk size in GB. Default value: 50
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskSize System disk size in GB. Default value: 50
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置System disk size in GB. Default value: 50
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DiskSize System disk size in GB. Default value: 50
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * System disk type. For more information on limits of system disk types, see [Cloud Disk Types](https://intl.cloud.tencent.com/document/product/362/31636). Valid values:<br><li>`LOCAL_BASIC`: local disk <br><li>`LOCAL_SSD`: local SSD disk <br><li>`CLOUD_BASIC`: HDD cloud disk <br><li>`CLOUD_PREMIUM`: premium cloud storage<br><li>`CLOUD_SSD`: SSD cloud disk <br><br>Default value: `CLOUD_PREMIUM`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * System disk size in GB. Default value: 50
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_
