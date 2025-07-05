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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DISKSPECINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DISKSPECINFO_H_

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
                * Node disk information
                */
                class DiskSpecInfo : public AbstractModel
                {
                public:
                    DiskSpecInfo();
                    ~DiskSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The number of disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count The number of disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _count The number of disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取The system disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>

The data disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>
<li>`CLOUD_HSSD`: Enhanced SSD</li>
<li>`CLOUD_THROUGHPUT`: Throughput HDD</li>
<li>CLOUD_TSSD: ulTra SSD</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskType The system disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>

The data disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>
<li>`CLOUD_HSSD`: Enhanced SSD</li>
<li>`CLOUD_THROUGHPUT`: Throughput HDD</li>
<li>CLOUD_TSSD: ulTra SSD</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置The system disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>

The data disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>
<li>`CLOUD_HSSD`: Enhanced SSD</li>
<li>`CLOUD_THROUGHPUT`: Throughput HDD</li>
<li>CLOUD_TSSD: ulTra SSD</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskType The system disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>

The data disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>
<li>`CLOUD_HSSD`: Enhanced SSD</li>
<li>`CLOUD_THROUGHPUT`: Throughput HDD</li>
<li>CLOUD_TSSD: ulTra SSD</li>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The disk capacity in GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskSize The disk capacity in GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置The disk capacity in GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskSize The disk capacity in GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * The number of disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * The system disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>

The data disk type. Valid values:
<li>`CLOUD_SSD`: Cloud SSD</li>
<li>`CLOUD_PREMIUM`: Premium cloud disk</li>
<li>`CLOUD_BASIC`: Cloud HDD</li>
<li>`LOCAL_BASIC`: Local disk</li>
<li>`LOCAL_SSD`: Local SSD</li>
<li>`CLOUD_HSSD`: Enhanced SSD</li>
<li>`CLOUD_THROUGHPUT`: Throughput HDD</li>
<li>CLOUD_TSSD: ulTra SSD</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * The disk capacity in GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DISKSPECINFO_H_
