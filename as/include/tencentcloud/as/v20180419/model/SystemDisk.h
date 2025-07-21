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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * System disk configuration of the launch configuration. If this parameter is not specified, the default value is assigned to it.
                */
                class SystemDisk : public AbstractModel
                {
                public:
                    SystemDisk();
                    ~SystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取System disk type. for restrictions on the system disk type, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<li>Default value: CLOUD_PREMIUM.</li>
                     * @return DiskType System disk type. for restrictions on the system disk type, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<li>Default value: CLOUD_PREMIUM.</li>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置System disk type. for restrictions on the system disk type, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<li>Default value: CLOUD_PREMIUM.</li>
                     * @param _diskType System disk type. for restrictions on the system disk type, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<li>Default value: CLOUD_PREMIUM.</li>
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
                     * 获取System disk size, in GB. Default value: 50.
                     * @return DiskSize System disk size, in GB. Default value: 50.
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置System disk size, in GB. Default value: 50.
                     * @param _diskSize System disk size, in GB. Default value: 50.
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * System disk type. for restrictions on the system disk type, see [cloud block storage types](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). valid values:.
<Li>LOCAL_BASIC: local hard disk.</li>.
<Li>LOCAL_SSD: local ssd.</li>.
<Li>CLOUD_BASIC: general cloud disk.</li>.
<Li>CLOUD_PREMIUM: high-performance cloud block storage</li>.
<Li>CLOUD_SSD: cloud ssd</li>.
<Li>CLOUD_BSSD: universal ssd cloud disk</li>.
<Li>CLOUD_HSSD: enhanced ssd cloud disk</li>.
<Li>CLOUD_TSSD: ultra ssd.</li>.
<li>Default value: CLOUD_PREMIUM.</li>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * System disk size, in GB. Default value: 50.
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_
