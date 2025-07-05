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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESGSNAPSHOTFILECONTENTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESGSNAPSHOTFILECONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSgSnapshotFileContent request structure.
                */
                class DescribeSgSnapshotFileContentRequest : public AbstractModel
                {
                public:
                    DescribeSgSnapshotFileContentRequest();
                    ~DescribeSgSnapshotFileContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot policy IDs
                     * @return SnapshotPolicyId Snapshot policy IDs
                     * 
                     */
                    std::string GetSnapshotPolicyId() const;

                    /**
                     * 设置Snapshot policy IDs
                     * @param _snapshotPolicyId Snapshot policy IDs
                     * 
                     */
                    void SetSnapshotPolicyId(const std::string& _snapshotPolicyId);

                    /**
                     * 判断参数 SnapshotPolicyId 是否已赋值
                     * @return SnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取Snapshot file ID
                     * @return SnapshotFileId Snapshot file ID
                     * 
                     */
                    std::string GetSnapshotFileId() const;

                    /**
                     * 设置Snapshot file ID
                     * @param _snapshotFileId Snapshot file ID
                     * 
                     */
                    void SetSnapshotFileId(const std::string& _snapshotFileId);

                    /**
                     * 判断参数 SnapshotFileId 是否已赋值
                     * @return SnapshotFileId 是否已赋值
                     * 
                     */
                    bool SnapshotFileIdHasBeenSet() const;

                    /**
                     * 获取Security group ID
                     * @return SecurityGroupId Security group ID
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID
                     * @param _securityGroupId Security group ID
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * Snapshot policy IDs
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * Snapshot file ID
                     */
                    std::string m_snapshotFileId;
                    bool m_snapshotFileIdHasBeenSet;

                    /**
                     * Security group ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESGSNAPSHOTFILECONTENTREQUEST_H_
