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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSDENIEDACTIONSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSDENIEDACTIONSREQUEST_H_

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
                * DescribeSnapshotsDeniedActions request structure.
                */
                class DescribeSnapshotsDeniedActionsRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotsDeniedActionsRequest();
                    ~DescribeSnapshotsDeniedActionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot ID list, which can be queried through `DescribeSnapshots`.
                     * @return SnapshotIds Snapshot ID list, which can be queried through `DescribeSnapshots`.
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置Snapshot ID list, which can be queried through `DescribeSnapshots`.
                     * @param _snapshotIds Snapshot ID list, which can be queried through `DescribeSnapshots`.
                     * 
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                private:

                    /**
                     * Snapshot ID list, which can be queried through `DescribeSnapshots`.
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSDENIEDACTIONSREQUEST_H_
