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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SYSTEMDISK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * System disk description.
                */
                class SystemDisk : public AbstractModel
                {
                public:
                    SystemDisk();
                    ~SystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disk type. Valid values:
- LOCAL_BASIC: local disk;
- CLOUD_PREMIUM: Premium Cloud Storage;
Default value: CLOUD_BASIC.
                     * @return DiskType Disk type. Valid values:
- LOCAL_BASIC: local disk;
- CLOUD_PREMIUM: Premium Cloud Storage;
Default value: CLOUD_BASIC.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type. Valid values:
- LOCAL_BASIC: local disk;
- CLOUD_PREMIUM: Premium Cloud Storage;
Default value: CLOUD_BASIC.
                     * @param _diskType Disk type. Valid values:
- LOCAL_BASIC: local disk;
- CLOUD_PREMIUM: Premium Cloud Storage;
Default value: CLOUD_BASIC.
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
                     * 获取Disk ID. This parameter is temporarily unavailable.
                     * @return DiskId Disk ID. This parameter is temporarily unavailable.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Disk ID. This parameter is temporarily unavailable.
                     * @param _diskId Disk ID. This parameter is temporarily unavailable.
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
                     * 获取Disk size in GB.
                     * @return DiskSize Disk size in GB.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk size in GB.
                     * @param _diskSize Disk size in GB.
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
                     * Disk type. Valid values:
- LOCAL_BASIC: local disk;
- CLOUD_PREMIUM: Premium Cloud Storage;
Default value: CLOUD_BASIC.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Disk ID. This parameter is temporarily unavailable.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Disk size in GB.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SYSTEMDISK_H_
