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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUP_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/SecurityGroupPolicy.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Security Group
                */
                class SecurityGroup : public AbstractModel
                {
                public:
                    SecurityGroup();
                    ~SecurityGroup() = default;
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
                     * 获取Creation Time, Time format: yyyy-mm-dd hh:mm:ss
                     * @return CreateTime Creation Time, Time format: yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation Time, Time format: yyyy-mm-dd hh:mm:ss
                     * @param _createTime Creation Time, Time format: yyyy-mm-dd hh:mm:ss
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
                     * 获取Inbound Rules
                     * @return InboundSet Inbound Rules
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetInboundSet() const;

                    /**
                     * 设置Inbound Rules
                     * @param _inboundSet Inbound Rules
                     * 
                     */
                    void SetInboundSet(const std::vector<SecurityGroupPolicy>& _inboundSet);

                    /**
                     * 判断参数 InboundSet 是否已赋值
                     * @return InboundSet 是否已赋值
                     * 
                     */
                    bool InboundSetHasBeenSet() const;

                    /**
                     * 获取Outbound Rules
                     * @return OutboundSet Outbound Rules
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetOutboundSet() const;

                    /**
                     * 设置Outbound Rules
                     * @param _outboundSet Outbound Rules
                     * 
                     */
                    void SetOutboundSet(const std::vector<SecurityGroupPolicy>& _outboundSet);

                    /**
                     * 判断参数 OutboundSet 是否已赋值
                     * @return OutboundSet 是否已赋值
                     * 
                     */
                    bool OutboundSetHasBeenSet() const;

                    /**
                     * 获取Security Group ID
                     * @return SecurityGroupId Security Group ID
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security Group ID
                     * @param _securityGroupId Security Group ID
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
                     * 获取Security Group Name
                     * @return SecurityGroupName Security Group Name
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置Security Group Name
                     * @param _securityGroupName Security Group Name
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
                     * 获取Security Group Remarks
                     * @return SecurityGroupRemark Security Group Remarks
                     * 
                     */
                    std::string GetSecurityGroupRemark() const;

                    /**
                     * 设置Security Group Remarks
                     * @param _securityGroupRemark Security Group Remarks
                     * 
                     */
                    void SetSecurityGroupRemark(const std::string& _securityGroupRemark);

                    /**
                     * 判断参数 SecurityGroupRemark 是否已赋值
                     * @return SecurityGroupRemark 是否已赋值
                     * 
                     */
                    bool SecurityGroupRemarkHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Creation Time, Time format: yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Inbound Rules
                     */
                    std::vector<SecurityGroupPolicy> m_inboundSet;
                    bool m_inboundSetHasBeenSet;

                    /**
                     * Outbound Rules
                     */
                    std::vector<SecurityGroupPolicy> m_outboundSet;
                    bool m_outboundSetHasBeenSet;

                    /**
                     * Security Group ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Security Group Name
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * Security Group Remarks
                     */
                    std::string m_securityGroupRemark;
                    bool m_securityGroupRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUP_H_
