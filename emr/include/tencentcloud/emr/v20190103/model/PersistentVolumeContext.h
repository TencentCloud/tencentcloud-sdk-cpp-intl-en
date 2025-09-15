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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUMECONTEXT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUMECONTEXT_H_

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
                * Description of Pod `PVC` storage method
                */
                class PersistentVolumeContext : public AbstractModel
                {
                public:
                    PersistentVolumeContext();
                    ~PersistentVolumeContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disk size in GB.
                     * @return DiskSize Disk size in GB.
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Disk size in GB.
                     * @param _diskSize Disk size in GB.
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Disk type, CLOUD_PREMIUM or CLOUD_SSD.
                     * @return DiskType Disk type, CLOUD_PREMIUM or CLOUD_SSD.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type, CLOUD_PREMIUM or CLOUD_SSD.
                     * @param _diskType Disk type, CLOUD_PREMIUM or CLOUD_SSD.
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
                     * 获取Number of disks.
                     * @return DiskNum Number of disks.
                     * 
                     */
                    int64_t GetDiskNum() const;

                    /**
                     * 设置Number of disks.
                     * @param _diskNum Number of disks.
                     * 
                     */
                    void SetDiskNum(const int64_t& _diskNum);

                    /**
                     * 判断参数 DiskNum 是否已赋值
                     * @return DiskNum 是否已赋值
                     * 
                     */
                    bool DiskNumHasBeenSet() const;

                    /**
                     * 获取Additional performance of cloud disks.
                     * @return ExtraPerformance Additional performance of cloud disks.
                     * 
                     */
                    int64_t GetExtraPerformance() const;

                    /**
                     * 设置Additional performance of cloud disks.
                     * @param _extraPerformance Additional performance of cloud disks.
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
                     * Disk size in GB.
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Disk type, CLOUD_PREMIUM or CLOUD_SSD.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Number of disks.
                     */
                    int64_t m_diskNum;
                    bool m_diskNumHasBeenSet;

                    /**
                     * Additional performance of cloud disks.
                     */
                    int64_t m_extraPerformance;
                    bool m_extraPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUMECONTEXT_H_
