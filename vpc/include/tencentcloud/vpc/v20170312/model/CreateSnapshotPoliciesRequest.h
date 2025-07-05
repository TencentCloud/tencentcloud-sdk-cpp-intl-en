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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESNAPSHOTPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SnapshotPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateSnapshotPolicies request structure.
                */
                class CreateSnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    CreateSnapshotPoliciesRequest();
                    ~CreateSnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Details of a snapshot policy
                     * @return SnapshotPolicies Details of a snapshot policy
                     * 
                     */
                    std::vector<SnapshotPolicy> GetSnapshotPolicies() const;

                    /**
                     * 设置Details of a snapshot policy
                     * @param _snapshotPolicies Details of a snapshot policy
                     * 
                     */
                    void SetSnapshotPolicies(const std::vector<SnapshotPolicy>& _snapshotPolicies);

                    /**
                     * 判断参数 SnapshotPolicies 是否已赋值
                     * @return SnapshotPolicies 是否已赋值
                     * 
                     */
                    bool SnapshotPoliciesHasBeenSet() const;

                private:

                    /**
                     * Details of a snapshot policy
                     */
                    std::vector<SnapshotPolicy> m_snapshotPolicies;
                    bool m_snapshotPoliciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESNAPSHOTPOLICIESREQUEST_H_
