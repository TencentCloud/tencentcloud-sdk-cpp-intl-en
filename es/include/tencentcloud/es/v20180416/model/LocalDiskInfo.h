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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_LOCALDISKINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_LOCALDISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Local disk information of node
                */
                class LocalDiskInfo : public AbstractModel
                {
                public:
                    LocalDiskInfo();
                    ~LocalDiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Local disk type <li>LOCAL_SATA: big data </li><li>NVME_SSD: high IO</li>
                     * @return LocalDiskType Local disk type <li>LOCAL_SATA: big data </li><li>NVME_SSD: high IO</li>
                     * 
                     */
                    std::string GetLocalDiskType() const;

                    /**
                     * 设置Local disk type <li>LOCAL_SATA: big data </li><li>NVME_SSD: high IO</li>
                     * @param _localDiskType Local disk type <li>LOCAL_SATA: big data </li><li>NVME_SSD: high IO</li>
                     * 
                     */
                    void SetLocalDiskType(const std::string& _localDiskType);

                    /**
                     * 判断参数 LocalDiskType 是否已赋值
                     * @return LocalDiskType 是否已赋值
                     * 
                     */
                    bool LocalDiskTypeHasBeenSet() const;

                    /**
                     * 获取Size of a single local disk
                     * @return LocalDiskSize Size of a single local disk
                     * 
                     */
                    uint64_t GetLocalDiskSize() const;

                    /**
                     * 设置Size of a single local disk
                     * @param _localDiskSize Size of a single local disk
                     * 
                     */
                    void SetLocalDiskSize(const uint64_t& _localDiskSize);

                    /**
                     * 判断参数 LocalDiskSize 是否已赋值
                     * @return LocalDiskSize 是否已赋值
                     * 
                     */
                    bool LocalDiskSizeHasBeenSet() const;

                    /**
                     * 获取Number of local disks
                     * @return LocalDiskCount Number of local disks
                     * 
                     */
                    uint64_t GetLocalDiskCount() const;

                    /**
                     * 设置Number of local disks
                     * @param _localDiskCount Number of local disks
                     * 
                     */
                    void SetLocalDiskCount(const uint64_t& _localDiskCount);

                    /**
                     * 判断参数 LocalDiskCount 是否已赋值
                     * @return LocalDiskCount 是否已赋值
                     * 
                     */
                    bool LocalDiskCountHasBeenSet() const;

                private:

                    /**
                     * Local disk type <li>LOCAL_SATA: big data </li><li>NVME_SSD: high IO</li>
                     */
                    std::string m_localDiskType;
                    bool m_localDiskTypeHasBeenSet;

                    /**
                     * Size of a single local disk
                     */
                    uint64_t m_localDiskSize;
                    bool m_localDiskSizeHasBeenSet;

                    /**
                     * Number of local disks
                     */
                    uint64_t m_localDiskCount;
                    bool m_localDiskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_LOCALDISKINFO_H_
