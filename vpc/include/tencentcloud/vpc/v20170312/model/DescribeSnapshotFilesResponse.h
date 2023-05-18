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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTFILESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SnapshotFileInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSnapshotFiles response structure.
                */
                class DescribeSnapshotFilesResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotFilesResponse();
                    ~DescribeSnapshotFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot files
                     * @return SnapshotFileSet Snapshot files
                     */
                    std::vector<SnapshotFileInfo> GetSnapshotFileSet() const;

                    /**
                     * 判断参数 SnapshotFileSet 是否已赋值
                     * @return SnapshotFileSet 是否已赋值
                     */
                    bool SnapshotFileSetHasBeenSet() const;

                    /**
                     * 获取The number of eligible objects.
                     * @return TotalCount The number of eligible objects.
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Snapshot files
                     */
                    std::vector<SnapshotFileInfo> m_snapshotFileSet;
                    bool m_snapshotFileSetHasBeenSet;

                    /**
                     * The number of eligible objects.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTFILESRESPONSE_H_
