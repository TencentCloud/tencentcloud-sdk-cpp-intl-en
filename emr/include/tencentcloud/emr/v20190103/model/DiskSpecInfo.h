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
                * Node disk information.
                */
                class DiskSpecInfo : public AbstractModel
                {
                public:
                    DiskSpecInfo();
                    ~DiskSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of disks.
                     * @return Count Number of disks.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of disks.
                     * @param _count Number of disks.
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
                     * 获取System disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

Data disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
<li>CLOUD_BIGDATA: Big Data Cloud Disk</li>
<li>CLOUD_HIGHIO: High-IO Cloud Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>REMOTE_SSD: Remote SSD Disk</li>

                     * @return DiskType System disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

Data disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
<li>CLOUD_BIGDATA: Big Data Cloud Disk</li>
<li>CLOUD_HIGHIO: High-IO Cloud Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>REMOTE_SSD: Remote SSD Disk</li>

                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置System disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

Data disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
<li>CLOUD_BIGDATA: Big Data Cloud Disk</li>
<li>CLOUD_HIGHIO: High-IO Cloud Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>REMOTE_SSD: Remote SSD Disk</li>

                     * @param _diskType System disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

Data disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
<li>CLOUD_BIGDATA: Big Data Cloud Disk</li>
<li>CLOUD_HIGHIO: High-IO Cloud Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>REMOTE_SSD: Remote SSD Disk</li>

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
                     * 获取Data capacity (GB).
                     * @return DiskSize Data capacity (GB).
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Data capacity (GB).
                     * @param _diskSize Data capacity (GB).
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
                     * 获取Additional performance.
                     * @return ExtraPerformance Additional performance.
                     * 
                     */
                    int64_t GetExtraPerformance() const;

                    /**
                     * 设置Additional performance.
                     * @param _extraPerformance Additional performance.
                     * 
                     */
                    void SetExtraPerformance(const int64_t& _extraPerformance);

                    /**
                     * 判断参数 ExtraPerformance 是否已赋值
                     * @return ExtraPerformance 是否已赋值
                     * 
                     */
                    bool ExtraPerformanceHasBeenSet() const;

                private:

                    /**
                     * Number of disks.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * System disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

Data disk type. Valid values:
<li>CLOUD_SSD: Cloud SSD</li>
<li>CLOUD_PREMIUM: Premium Disk</li>
<li>CLOUD_BASIC: Cloud Basic Disk</li>
<li>LOCAL_BASIC: Local Basic Disk</li>
<li>LOCAL_SSD: Local SSD</li>

<li>CLOUD_HSSD: Enhanced SSD</li>
<li>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</li>
<li>CLOUD_TSSD: Tremendous SSD</li>
<li>CLOUD_BIGDATA: Big Data Cloud Disk</li>
<li>CLOUD_HIGHIO: High-IO Cloud Disk</li>
<li>CLOUD_BSSD: Balanced SSD</li>
<li>REMOTE_SSD: Remote SSD Disk</li>

                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Data capacity (GB).
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Additional performance.
                     */
                    int64_t m_extraPerformance;
                    bool m_extraPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DISKSPECINFO_H_
