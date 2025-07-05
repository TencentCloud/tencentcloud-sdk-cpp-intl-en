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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/SnapshotCopyResult.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CopySnapshotCrossRegions response structure.
                */
                class CopySnapshotCrossRegionsResponse : public AbstractModel
                {
                public:
                    CopySnapshotCrossRegionsResponse();
                    ~CopySnapshotCrossRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Result of the cross-region replication task. The ID of the new snapshot replica is returned if the request succeeds. Otherwise `Error` is returned.
                     * @return SnapshotCopyResultSet Result of the cross-region replication task. The ID of the new snapshot replica is returned if the request succeeds. Otherwise `Error` is returned.
                     * 
                     */
                    std::vector<SnapshotCopyResult> GetSnapshotCopyResultSet() const;

                    /**
                     * 判断参数 SnapshotCopyResultSet 是否已赋值
                     * @return SnapshotCopyResultSet 是否已赋值
                     * 
                     */
                    bool SnapshotCopyResultSetHasBeenSet() const;

                private:

                    /**
                     * Result of the cross-region replication task. The ID of the new snapshot replica is returned if the request succeeds. Otherwise `Error` is returned.
                     */
                    std::vector<SnapshotCopyResult> m_snapshotCopyResultSet;
                    bool m_snapshotCopyResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSRESPONSE_H_
