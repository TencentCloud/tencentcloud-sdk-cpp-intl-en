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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DISKSPEC_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DISKSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Disk specification description
                */
                class DiskSpec : public AbstractModel
                {
                public:
                    DiskSpec();
                    ~DiskSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disk type, such as CLOUD_SSD and LOCAL_SSD
                     * @return DiskType Disk type, such as CLOUD_SSD and LOCAL_SSD
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type, such as CLOUD_SSD and LOCAL_SSD
                     * @param _diskType Disk type, such as CLOUD_SSD and LOCAL_SSD
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
                     * 获取Disk type description, such as cloud SSD and local SSD
                     * @return DiskDesc Disk type description, such as cloud SSD and local SSD
                     * 
                     */
                    std::string GetDiskDesc() const;

                    /**
                     * 设置Disk type description, such as cloud SSD and local SSD
                     * @param _diskDesc Disk type description, such as cloud SSD and local SSD
                     * 
                     */
                    void SetDiskDesc(const std::string& _diskDesc);

                    /**
                     * 判断参数 DiskDesc 是否已赋值
                     * @return DiskDesc 是否已赋值
                     * 
                     */
                    bool DiskDescHasBeenSet() const;

                    /**
                     * 获取Minimum disk size, in GB
                     * @return MinDiskSize Minimum disk size, in GB
                     * 
                     */
                    int64_t GetMinDiskSize() const;

                    /**
                     * 设置Minimum disk size, in GB
                     * @param _minDiskSize Minimum disk size, in GB
                     * 
                     */
                    void SetMinDiskSize(const int64_t& _minDiskSize);

                    /**
                     * 判断参数 MinDiskSize 是否已赋值
                     * @return MinDiskSize 是否已赋值
                     * 
                     */
                    bool MinDiskSizeHasBeenSet() const;

                    /**
                     * 获取Maximum disk size, in GB
                     * @return MaxDiskSize Maximum disk size, in GB
                     * 
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置Maximum disk size, in GB
                     * @param _maxDiskSize Maximum disk size, in GB
                     * 
                     */
                    void SetMaxDiskSize(const int64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取Number of disks
                     * @return DiskCount Number of disks
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置Number of disks
                     * @param _diskCount Number of disks
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                private:

                    /**
                     * Disk type, such as CLOUD_SSD and LOCAL_SSD
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Disk type description, such as cloud SSD and local SSD
                     */
                    std::string m_diskDesc;
                    bool m_diskDescHasBeenSet;

                    /**
                     * Minimum disk size, in GB
                     */
                    int64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * Maximum disk size, in GB
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * Number of disks
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DISKSPEC_H_
