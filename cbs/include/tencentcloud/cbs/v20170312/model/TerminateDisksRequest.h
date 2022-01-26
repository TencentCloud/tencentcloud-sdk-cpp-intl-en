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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_TERMINATEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_TERMINATEDISKSREQUEST_H_

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
                * TerminateDisks request structure.
                */
                class TerminateDisksRequest : public AbstractModel
                {
                public:
                    TerminateDisksRequest();
                    ~TerminateDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cloud disk IDs required to be returned.
                     * @return DiskIds List of cloud disk IDs required to be returned.
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置List of cloud disk IDs required to be returned.
                     * @param DiskIds List of cloud disk IDs required to be returned.
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     * @return DeleteSnapshot Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     */
                    int64_t GetDeleteSnapshot() const;

                    /**
                     * 设置Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     * @param DeleteSnapshot Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     */
                    void SetDeleteSnapshot(const int64_t& _deleteSnapshot);

                    /**
                     * 判断参数 DeleteSnapshot 是否已赋值
                     * @return DeleteSnapshot 是否已赋值
                     */
                    bool DeleteSnapshotHasBeenSet() const;

                private:

                    /**
                     * List of cloud disk IDs required to be returned.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     */
                    int64_t m_deleteSnapshot;
                    bool m_deleteSnapshotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_TERMINATEDISKSREQUEST_H_
