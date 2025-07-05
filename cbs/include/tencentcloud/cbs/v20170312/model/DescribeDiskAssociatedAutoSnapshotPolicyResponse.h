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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKASSOCIATEDAUTOSNAPSHOTPOLICYRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKASSOCIATEDAUTOSNAPSHOTPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/AutoSnapshotPolicy.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDiskAssociatedAutoSnapshotPolicy response structure.
                */
                class DescribeDiskAssociatedAutoSnapshotPolicyResponse : public AbstractModel
                {
                public:
                    DescribeDiskAssociatedAutoSnapshotPolicyResponse();
                    ~DescribeDiskAssociatedAutoSnapshotPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The quantity of scheduled snapshots binded to cloud disk.
                     * @return TotalCount The quantity of scheduled snapshots binded to cloud disk.
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
                     * 获取List of scheduled snapshots bound to cloud disk.
                     * @return AutoSnapshotPolicySet List of scheduled snapshots bound to cloud disk.
                     * 
                     */
                    std::vector<AutoSnapshotPolicy> GetAutoSnapshotPolicySet() const;

                    /**
                     * 判断参数 AutoSnapshotPolicySet 是否已赋值
                     * @return AutoSnapshotPolicySet 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicySetHasBeenSet() const;

                private:

                    /**
                     * The quantity of scheduled snapshots binded to cloud disk.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of scheduled snapshots bound to cloud disk.
                     */
                    std::vector<AutoSnapshotPolicy> m_autoSnapshotPolicySet;
                    bool m_autoSnapshotPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKASSOCIATEDAUTOSNAPSHOTPOLICYRESPONSE_H_
