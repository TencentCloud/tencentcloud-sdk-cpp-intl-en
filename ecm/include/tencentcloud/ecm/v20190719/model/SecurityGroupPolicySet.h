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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPPOLICYSET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPPOLICYSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SecurityGroupPolicy.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * @return Version The version number of the security group policy, which will automatically increase by one each time you update the security group policy, so as to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置The version number of the security group policy, which will automatically increase by one each time you update the security group policy, so as to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored.
                     * @param _version The version number of the security group policy, which will automatically increase by one each time you update the security group policy, so as to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored.
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
                     * 获取Outbound rule. You must select either an outbound rule or inbound rule.
                     * @return Egress Outbound rule. You must select either an outbound rule or inbound rule.
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetEgress() const;

                    /**
                     * 设置Outbound rule. You must select either an outbound rule or inbound rule.
                     * @param _egress Outbound rule. You must select either an outbound rule or inbound rule.
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
                     * 获取Inbound rule. You must select either outbound rule or inbound rule.
                     * @return Ingress Inbound rule. You must select either outbound rule or inbound rule.
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetIngress() const;

                    /**
                     * 设置Inbound rule. You must select either outbound rule or inbound rule.
                     * @param _ingress Inbound rule. You must select either outbound rule or inbound rule.
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
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Outbound rule. You must select either an outbound rule or inbound rule.
                     */
                    std::vector<SecurityGroupPolicy> m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * Inbound rule. You must select either outbound rule or inbound rule.
                     */
                    std::vector<SecurityGroupPolicy> m_ingress;
                    bool m_ingressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPPOLICYSET_H_
