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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISKMC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISKMC_H_

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
                class MultiDiskMC : public AbstractModel
                {
                public:
                    MultiDiskMC();
                    ~MultiDiskMC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of cloud disks of this type.
                     * @return Count Number of cloud disks of this type.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of cloud disks of this type.
                     * @param _count Number of cloud disks of this type.
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
                     * 获取Disk type.
1: Local Disk.
2: Cloud Disk.
3: Local SSD.
4: Cloud SSD.
5: Premium Cloud Disk.
6: Enhanced SSD.
11: Throughput HDD.
12: Tremendous SSD.
13: Balanced SSD.
14: Big Data Cloud Disk.
15: High IO Cloud Disk.
16: Remote SSD.
                     * @return Type Disk type.
1: Local Disk.
2: Cloud Disk.
3: Local SSD.
4: Cloud SSD.
5: Premium Cloud Disk.
6: Enhanced SSD.
11: Throughput HDD.
12: Tremendous SSD.
13: Balanced SSD.
14: Big Data Cloud Disk.
15: High IO Cloud Disk.
16: Remote SSD.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Disk type.
1: Local Disk.
2: Cloud Disk.
3: Local SSD.
4: Cloud SSD.
5: Premium Cloud Disk.
6: Enhanced SSD.
11: Throughput HDD.
12: Tremendous SSD.
13: Balanced SSD.
14: Big Data Cloud Disk.
15: High IO Cloud Disk.
16: Remote SSD.
                     * @param _type Disk type.
1: Local Disk.
2: Cloud Disk.
3: Local SSD.
4: Cloud SSD.
5: Premium Cloud Disk.
6: Enhanced SSD.
11: Throughput HDD.
12: Tremendous SSD.
13: Balanced SSD.
14: Big Data Cloud Disk.
15: High IO Cloud Disk.
16: Remote SSD.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Disk size.
                     * @return Size Disk size.
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置Disk size.
                     * @param _size Disk size.
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Cloud disk size (bytes).
                     * @return Volume Cloud disk size (bytes).
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Cloud disk size (bytes).
                     * @param _volume Cloud disk size (bytes).
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * Number of cloud disks of this type.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Disk type.
1: Local Disk.
2: Cloud Disk.
3: Local SSD.
4: Cloud SSD.
5: Premium Cloud Disk.
6: Enhanced SSD.
11: Throughput HDD.
12: Tremendous SSD.
13: Balanced SSD.
14: Big Data Cloud Disk.
15: High IO Cloud Disk.
16: Remote SSD.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Disk size.
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Cloud disk size (bytes).
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISKMC_H_
