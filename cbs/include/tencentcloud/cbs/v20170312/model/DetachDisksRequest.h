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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DETACHDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DETACHDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DetachDisks request structure.
                */
                class DetachDisksRequest : public AbstractModel
                {
                public:
                    DetachDisksRequest();
                    ~DetachDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of the cloud disks to be unmounted, which can be queried via the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API. Up to 10 elastic cloud disks can be unmounted in a single request.
                     * @return DiskIds IDs of the cloud disks to be unmounted, which can be queried via the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API. Up to 10 elastic cloud disks can be unmounted in a single request.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置IDs of the cloud disks to be unmounted, which can be queried via the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API. Up to 10 elastic cloud disks can be unmounted in a single request.
                     * @param _diskIds IDs of the cloud disks to be unmounted, which can be queried via the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API. Up to 10 elastic cloud disks can be unmounted in a single request.
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
                     * 获取Indicates the CVM from which you want to unmount the disks. This parameter is only available for shared cloud disks.
                     * @return InstanceId Indicates the CVM from which you want to unmount the disks. This parameter is only available for shared cloud disks.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Indicates the CVM from which you want to unmount the disks. This parameter is only available for shared cloud disks.
                     * @param _instanceId Indicates the CVM from which you want to unmount the disks. This parameter is only available for shared cloud disks.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * IDs of the cloud disks to be unmounted, which can be queried via the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API. Up to 10 elastic cloud disks can be unmounted in a single request.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Indicates the CVM from which you want to unmount the disks. This parameter is only available for shared cloud disks.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DETACHDISKSREQUEST_H_
