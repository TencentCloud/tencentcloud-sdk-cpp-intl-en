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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKASSOCIATEDAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKASSOCIATEDAUTOSNAPSHOTPOLICYREQUEST_H_

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
                * DescribeDiskAssociatedAutoSnapshotPolicy request structure.
                */
                class DescribeDiskAssociatedAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    DescribeDiskAssociatedAutoSnapshotPolicyRequest();
                    ~DescribeDiskAssociatedAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the queried cloud disk.
                     * @return DiskId The ID of the queried cloud disk.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置The ID of the queried cloud disk.
                     * @param _diskId The ID of the queried cloud disk.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the queried cloud disk.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKASSOCIATEDAUTOSNAPSHOTPOLICYREQUEST_H_
