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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/AutoSnapshotPolicyInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeAutoSnapshotPolicies response structure.
                */
                class DescribeAutoSnapshotPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeAutoSnapshotPoliciesResponse();
                    ~DescribeAutoSnapshotPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of snapshot policies
                     * @return TotalCount Total number of snapshot policies
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Snapshot policy information
                     * @return AutoSnapshotPolicies Snapshot policy information
                     * 
                     */
                    std::vector<AutoSnapshotPolicyInfo> GetAutoSnapshotPolicies() const;

                    /**
                     * 判断参数 AutoSnapshotPolicies 是否已赋值
                     * @return AutoSnapshotPolicies 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPoliciesHasBeenSet() const;

                private:

                    /**
                     * Total number of snapshot policies
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Snapshot policy information
                     */
                    std::vector<AutoSnapshotPolicyInfo> m_autoSnapshotPolicies;
                    bool m_autoSnapshotPoliciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSE_H_
