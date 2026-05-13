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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INITIALIZEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INITIALIZEDISKSREQUEST_H_

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
                * InitializeDisks request structure.
                */
                class InitializeDisksRequest : public AbstractModel
                {
                public:
                    InitializeDisksRequest();
                    ~InitializeDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cloud disk ids to be reinitialized. can be accessed through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. the initialization is limited to not exceeding 20 disks.
                     * @return DiskIds List of cloud disk ids to be reinitialized. can be accessed through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. the initialization is limited to not exceeding 20 disks.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置List of cloud disk ids to be reinitialized. can be accessed through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. the initialization is limited to not exceeding 20 disks.
                     * @param _diskIds List of cloud disk ids to be reinitialized. can be accessed through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. the initialization is limited to not exceeding 20 disks.
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
                     * List of cloud disk ids to be reinitialized. can be accessed through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. the initialization is limited to not exceeding 20 disks.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INITIALIZEDISKSREQUEST_H_
