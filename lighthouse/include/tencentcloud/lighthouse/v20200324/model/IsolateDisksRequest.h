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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ISOLATEDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ISOLATEDISKSREQUEST_H_

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
                * IsolateDisks request structure.
                */
                class IsolateDisksRequest : public AbstractModel
                {
                public:
                    IsolateDisksRequest();
                    ~IsolateDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of cloud disks. The value can be obtained from the `InstanceId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 20 disks can be processed at a time.
                     * @return DiskIds IDs of cloud disks. The value can be obtained from the `InstanceId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 20 disks can be processed at a time.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置IDs of cloud disks. The value can be obtained from the `InstanceId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 20 disks can be processed at a time.
                     * @param _diskIds IDs of cloud disks. The value can be obtained from the `InstanceId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 20 disks can be processed at a time.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                private:

                    /**
                     * IDs of cloud disks. The value can be obtained from the `InstanceId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 20 disks can be processed at a time.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ISOLATEDISKSREQUEST_H_
