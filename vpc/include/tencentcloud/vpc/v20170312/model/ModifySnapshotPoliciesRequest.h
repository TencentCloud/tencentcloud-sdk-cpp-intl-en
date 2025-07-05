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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSNAPSHOTPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/BatchModifySnapshotPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifySnapshotPolicies request structure.
                */
                class ModifySnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    ModifySnapshotPoliciesRequest();
                    ~ModifySnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Modify snapshot policies
                     * @return SnapshotPoliciesInfo Modify snapshot policies
                     * 
                     */
                    std::vector<BatchModifySnapshotPolicy> GetSnapshotPoliciesInfo() const;

                    /**
                     * 设置Modify snapshot policies
                     * @param _snapshotPoliciesInfo Modify snapshot policies
                     * 
                     */
                    void SetSnapshotPoliciesInfo(const std::vector<BatchModifySnapshotPolicy>& _snapshotPoliciesInfo);

                    /**
                     * 判断参数 SnapshotPoliciesInfo 是否已赋值
                     * @return SnapshotPoliciesInfo 是否已赋值
                     * 
                     */
                    bool SnapshotPoliciesInfoHasBeenSet() const;

                private:

                    /**
                     * Modify snapshot policies
                     */
                    std::vector<BatchModifySnapshotPolicy> m_snapshotPoliciesInfo;
                    bool m_snapshotPoliciesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSNAPSHOTPOLICIESREQUEST_H_
