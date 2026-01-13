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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESIZEDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESIZEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ResizeDisks request structure.
                */
                class ResizeDisksRequest : public AbstractModel
                {
                public:
                    ResizeDisksRequest();
                    ~ResizeDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud disk ID list, which can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/api/1207/66093?from_cn_redirect=1) API. The maximum length of the list is 15.
                     * @return DiskIds Cloud disk ID list, which can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/api/1207/66093?from_cn_redirect=1) API. The maximum length of the list is 15.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置Cloud disk ID list, which can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/api/1207/66093?from_cn_redirect=1) API. The maximum length of the list is 15.
                     * @param _diskIds Cloud disk ID list, which can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/api/1207/66093?from_cn_redirect=1) API. The maximum length of the list is 15.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Size of the cloud disk after scale-out, in GB. The value range of the Premium Disk size is [10, 4000], and that of the Cloud SSD size is [20, 4000]. The cloud disk size after scale-out must be greater than the current disk size.
                     * @return DiskSize Size of the cloud disk after scale-out, in GB. The value range of the Premium Disk size is [10, 4000], and that of the Cloud SSD size is [20, 4000]. The cloud disk size after scale-out must be greater than the current disk size.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Size of the cloud disk after scale-out, in GB. The value range of the Premium Disk size is [10, 4000], and that of the Cloud SSD size is [20, 4000]. The cloud disk size after scale-out must be greater than the current disk size.
                     * @param _diskSize Size of the cloud disk after scale-out, in GB. The value range of the Premium Disk size is [10, 4000], and that of the Cloud SSD size is [20, 4000]. The cloud disk size after scale-out must be greater than the current disk size.
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
                     * Cloud disk ID list, which can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/api/1207/66093?from_cn_redirect=1) API. The maximum length of the list is 15.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Size of the cloud disk after scale-out, in GB. The value range of the Premium Disk size is [10, 4000], and that of the Cloud SSD size is [20, 4000]. The cloud disk size after scale-out must be greater than the current disk size.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESIZEDISKSREQUEST_H_
