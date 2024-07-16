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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ATTACHCBSSPEC_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ATTACHCBSSPEC_H_

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
                * Specifications of nodes in the cluster and disk specifications description
                */
                class AttachCBSSpec : public AbstractModel
                {
                public:
                    AttachCBSSpec();
                    ~AttachCBSSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node disk type, such as CLOUD_SSD"\"CLOUD_PREMIUM
                     * @return DiskType Node disk type, such as CLOUD_SSD"\"CLOUD_PREMIUM
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Node disk type, such as CLOUD_SSD"\"CLOUD_PREMIUM
                     * @param _diskType Node disk type, such as CLOUD_SSD"\"CLOUD_PREMIUM
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
                     * 获取Disk capacity, in GB
                     * @return DiskSize Disk capacity, in GB
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk capacity, in GB
                     * @param _diskSize Disk capacity, in GB
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
                     * 获取Total number of disks
                     * @return DiskCount Total number of disks
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置Total number of disks
                     * @param _diskCount Total number of disks
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return DiskDesc Description
                     * 
                     */
                    std::string GetDiskDesc() const;

                    /**
                     * 设置Description
                     * @param _diskDesc Description
                     * 
                     */
                    void SetDiskDesc(const std::string& _diskDesc);

                    /**
                     * 判断参数 DiskDesc 是否已赋值
                     * @return DiskDesc 是否已赋值
                     * 
                     */
                    bool DiskDescHasBeenSet() const;

                private:

                    /**
                     * Node disk type, such as CLOUD_SSD"\"CLOUD_PREMIUM
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Disk capacity, in GB
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Total number of disks
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_diskDesc;
                    bool m_diskDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ATTACHCBSSPEC_H_
