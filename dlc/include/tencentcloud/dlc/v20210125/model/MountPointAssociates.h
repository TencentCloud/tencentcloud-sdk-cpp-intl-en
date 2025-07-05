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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MOUNTPOINTASSOCIATES_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MOUNTPOINTASSOCIATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Bind fusion bucket information
                */
                class MountPointAssociates : public AbstractModel
                {
                public:
                    MountPointAssociates();
                    ~MountPointAssociates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bucket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BucketId Bucket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBucketId() const;

                    /**
                     * 设置Bucket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bucketId Bucket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBucketId(const std::string& _bucketId);

                    /**
                     * 判断参数 BucketId 是否已赋值
                     * @return BucketId 是否已赋值
                     * 
                     */
                    bool BucketIdHasBeenSet() const;

                    /**
                     * 获取vpcId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId vpcId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId vpcId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcCidrBlock Subnet address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置Subnet address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcCidrBlock Subnet address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessGroupId Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessGroupId Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

                    /**
                     * 获取Permission rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessRuleId Permission rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAccessRuleId() const;

                    /**
                     * 设置Permission rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessRuleId Permission rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessRuleId(const int64_t& _accessRuleId);

                    /**
                     * 判断参数 AccessRuleId 是否已赋值
                     * @return AccessRuleId 是否已赋值
                     * 
                     */
                    bool AccessRuleIdHasBeenSet() const;

                private:

                    /**
                     * Bucket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bucketId;
                    bool m_bucketIdHasBeenSet;

                    /**
                     * vpcId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                    /**
                     * Permission rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_accessRuleId;
                    bool m_accessRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MOUNTPOINTASSOCIATES_H_
