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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISK_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISK_H_

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
                * Multi-cloud disk parameters
                */
                class MultiDisk : public AbstractModel
                {
                public:
                    MultiDisk();
                    ~MultiDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disk type
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium cloud disk.</li>
<li>CLOUD_HSSD: Enhanced SSD.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskType Disk type
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium cloud disk.</li>
<li>CLOUD_HSSD: Enhanced SSD.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium cloud disk.</li>
<li>CLOUD_HSSD: Enhanced SSD.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskType Disk type
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium cloud disk.</li>
<li>CLOUD_HSSD: Enhanced SSD.</li>
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
                     * 获取Cloud disk sizeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Volume Cloud disk sizeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Cloud disk sizeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _volume Cloud disk sizeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Number of cloud disks of this typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Number of cloud disks of this typeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of cloud disks of this typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _count Number of cloud disks of this typeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Disk type
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium cloud disk.</li>
<li>CLOUD_HSSD: Enhanced SSD.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Cloud disk sizeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Number of cloud disks of this typeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISK_H_
