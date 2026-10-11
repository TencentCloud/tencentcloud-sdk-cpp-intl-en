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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DISK_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Disk information.
                */
                class Disk : public AbstractModel
                {
                public:
                    Disk();
                    ~Disk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data disk type, which is available when an EMR container cluster is created. Valid values:
<li>CLOUD_SSD: SSD Cloud Disk</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
                     * @return DiskType Data disk type, which is available when an EMR container cluster is created. Valid values:
<li>CLOUD_SSD: SSD Cloud Disk</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Data disk type, which is available when an EMR container cluster is created. Valid values:
<li>CLOUD_SSD: SSD Cloud Disk</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
                     * @param _diskType Data disk type, which is available when an EMR container cluster is created. Valid values:
<li>CLOUD_SSD: SSD Cloud Disk</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
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
                     * 获取Single block size (GB).
                     * @return DiskCapacity Single block size (GB).
                     * 
                     */
                    int64_t GetDiskCapacity() const;

                    /**
                     * 设置Single block size (GB).
                     * @param _diskCapacity Single block size (GB).
                     * 
                     */
                    void SetDiskCapacity(const int64_t& _diskCapacity);

                    /**
                     * 判断参数 DiskCapacity 是否已赋值
                     * @return DiskCapacity 是否已赋值
                     * 
                     */
                    bool DiskCapacityHasBeenSet() const;

                    /**
                     * 获取Number of data disks.
                     * @return DiskNumber Number of data disks.
                     * 
                     */
                    int64_t GetDiskNumber() const;

                    /**
                     * 设置Number of data disks.
                     * @param _diskNumber Number of data disks.
                     * 
                     */
                    void SetDiskNumber(const int64_t& _diskNumber);

                    /**
                     * 判断参数 DiskNumber 是否已赋值
                     * @return DiskNumber 是否已赋值
                     * 
                     */
                    bool DiskNumberHasBeenSet() const;

                private:

                    /**
                     * Data disk type, which is available when an EMR container cluster is created. Valid values:
<li>CLOUD_SSD: SSD Cloud Disk</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Single block size (GB).
                     */
                    int64_t m_diskCapacity;
                    bool m_diskCapacityHasBeenSet;

                    /**
                     * Number of data disks.
                     */
                    int64_t m_diskNumber;
                    bool m_diskNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DISK_H_
