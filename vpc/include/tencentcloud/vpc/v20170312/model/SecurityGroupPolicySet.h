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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICYSET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICYSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityGroupPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Security group policy set
                */
                class SecurityGroupPolicySet : public AbstractModel
                {
                public:
                    SecurityGroupPolicySet();
                    ~SecurityGroupPolicySet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The version number of the security group policy, which will automatically increase by one each time you update the security group policy, so as to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Version The version number of the security group policy, which will automatically increase by one each time you update the security group policy, so as to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置The version number of the security group policy, which will automatically increase by one each time you update the security group policy, so as to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _version The version number of the security group policy, which will automatically increase by one each time you update the security group policy, so as to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Outbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Egress Outbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetEgress() const;

                    /**
                     * 设置Outbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _egress Outbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEgress(const std::vector<SecurityGroupPolicy>& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                    /**
                     * 获取Inbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Ingress Inbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetIngress() const;

                    /**
                     * 设置Inbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _ingress Inbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIngress(const std::vector<SecurityGroupPolicy>& _ingress);

                    /**
                     * 判断参数 Ingress 是否已赋值
                     * @return Ingress 是否已赋值
                     * 
                     */
                    bool IngressHasBeenSet() const;

                private:

                    /**
                     * The version number of the security group policy, which will automatically increase by one each time you update the security group policy, so as to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Outbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SecurityGroupPolicy> m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * Inbound rule. 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SecurityGroupPolicy> m_ingress;
                    bool m_ingressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICYSET_H_
