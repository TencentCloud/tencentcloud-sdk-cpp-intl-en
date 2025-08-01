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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REFERREDSECURITYGROUP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REFERREDSECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Referred security groups
                */
                class ReferredSecurityGroup : public AbstractModel
                {
                public:
                    ReferredSecurityGroup();
                    ~ReferredSecurityGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Security group instance ID.
                     * @return SecurityGroupId Security group instance ID.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group instance ID.
                     * @param _securityGroupId Security group instance ID.
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取IDs of all referred security group instances.
                     * @return ReferredSecurityGroupIds IDs of all referred security group instances.
                     * 
                     */
                    std::vector<std::string> GetReferredSecurityGroupIds() const;

                    /**
                     * 设置IDs of all referred security group instances.
                     * @param _referredSecurityGroupIds IDs of all referred security group instances.
                     * 
                     */
                    void SetReferredSecurityGroupIds(const std::vector<std::string>& _referredSecurityGroupIds);

                    /**
                     * 判断参数 ReferredSecurityGroupIds 是否已赋值
                     * @return ReferredSecurityGroupIds 是否已赋值
                     * 
                     */
                    bool ReferredSecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Security group instance ID.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * IDs of all referred security group instances.
                     */
                    std::vector<std::string> m_referredSecurityGroupIds;
                    bool m_referredSecurityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REFERREDSECURITYGROUP_H_
