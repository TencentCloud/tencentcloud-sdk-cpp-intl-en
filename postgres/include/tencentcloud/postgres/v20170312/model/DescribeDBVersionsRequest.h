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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBVERSIONSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBVersions request structure.
                */
                class DescribeDBVersionsRequest : public AbstractModel
                {
                public:
                    DescribeDBVersionsRequest();
                    ~DescribeDBVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance storage type. The supported versions are returned based on the disk type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
                     * @return StorageType <p>Instance storage type. The supported versions are returned based on the disk type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Instance storage type. The supported versions are returned based on the disk type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
                     * @param _storageType <p>Instance storage type. The supported versions are returned based on the disk type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance storage type. The supported versions are returned based on the disk type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBVERSIONSREQUEST_H_
