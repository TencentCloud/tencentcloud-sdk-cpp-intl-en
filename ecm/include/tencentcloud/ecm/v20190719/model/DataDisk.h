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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DATADISK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DATADISK_H_

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
                * Data disk information
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data disk size in GB.
                     * @return DiskSize Data disk size in GB.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Data disk size in GB.
                     * @param _diskSize Data disk size in GB.
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
                     * 获取Data disk type. Valid values:
- LOCAL_BASIC: local disk
- CLOUD_PREMIUM: Premium Cloud Storage

Default value: LOCAL_BASIC.
                     * @return DiskType Data disk type. Valid values:
- LOCAL_BASIC: local disk
- CLOUD_PREMIUM: Premium Cloud Storage

Default value: LOCAL_BASIC.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Data disk type. Valid values:
- LOCAL_BASIC: local disk
- CLOUD_PREMIUM: Premium Cloud Storage

Default value: LOCAL_BASIC.
                     * @param _diskType Data disk type. Valid values:
- LOCAL_BASIC: local disk
- CLOUD_PREMIUM: Premium Cloud Storage

Default value: LOCAL_BASIC.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                private:

                    /**
                     * Data disk size in GB.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Data disk type. Valid values:
- LOCAL_BASIC: local disk
- CLOUD_PREMIUM: Premium Cloud Storage

Default value: LOCAL_BASIC.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DATADISK_H_
