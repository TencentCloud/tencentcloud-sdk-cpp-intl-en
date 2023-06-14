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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SECURITYGROUPDETAIL_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SECURITYGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/SecurityGroupsInboundAndOutbound.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Security group details
                */
                class SecurityGroupDetail : public AbstractModel
                {
                public:
                    SecurityGroupDetail();
                    ~SecurityGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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

                    /**
                     * 获取Security group name
                     * @return SecurityGroupName Security group name
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置Security group name
                     * @param _securityGroupName Security group name
                     * 
                     */
                    void SetSecurityGroupName(const std::string& _securityGroupName);

                    /**
                     * 判断参数 SecurityGroupName 是否已赋值
                     * @return SecurityGroupName 是否已赋值
                     * 
                     */
                    bool SecurityGroupNameHasBeenSet() const;

                    /**
                     * 获取Security group remarks
                     * @return SecurityGroupRemark Security group remarks
                     * 
                     */
                    std::string GetSecurityGroupRemark() const;

                    /**
                     * 设置Security group remarks
                     * @param _securityGroupRemark Security group remarks
                     * 
                     */
                    void SetSecurityGroupRemark(const std::string& _securityGroupRemark);

                    /**
                     * 判断参数 SecurityGroupRemark 是否已赋值
                     * @return SecurityGroupRemark 是否已赋值
                     * 
                     */
                    bool SecurityGroupRemarkHasBeenSet() const;

                    /**
                     * 获取Security group inbound rule
                     * @return InboundRule Security group inbound rule
                     * 
                     */
                    std::vector<SecurityGroupsInboundAndOutbound> GetInboundRule() const;

                    /**
                     * 设置Security group inbound rule
                     * @param _inboundRule Security group inbound rule
                     * 
                     */
                    void SetInboundRule(const std::vector<SecurityGroupsInboundAndOutbound>& _inboundRule);

                    /**
                     * 判断参数 InboundRule 是否已赋值
                     * @return InboundRule 是否已赋值
                     * 
                     */
                    bool InboundRuleHasBeenSet() const;

                    /**
                     * 获取Security group outbound rule
                     * @return OutboundRule Security group outbound rule
                     * 
                     */
                    std::vector<SecurityGroupsInboundAndOutbound> GetOutboundRule() const;

                    /**
                     * 设置Security group outbound rule
                     * @param _outboundRule Security group outbound rule
                     * 
                     */
                    void SetOutboundRule(const std::vector<SecurityGroupsInboundAndOutbound>& _outboundRule);

                    /**
                     * 判断参数 OutboundRule 是否已赋值
                     * @return OutboundRule 是否已赋值
                     * 
                     */
                    bool OutboundRuleHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Security group ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Security group name
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * Security group remarks
                     */
                    std::string m_securityGroupRemark;
                    bool m_securityGroupRemarkHasBeenSet;

                    /**
                     * Security group inbound rule
                     */
                    std::vector<SecurityGroupsInboundAndOutbound> m_inboundRule;
                    bool m_inboundRuleHasBeenSet;

                    /**
                     * Security group outbound rule
                     */
                    std::vector<SecurityGroupsInboundAndOutbound> m_outboundRule;
                    bool m_outboundRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SECURITYGROUPDETAIL_H_
