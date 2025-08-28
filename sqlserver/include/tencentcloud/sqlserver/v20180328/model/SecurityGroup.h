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
                * 
                */
                class SecurityGroup : public AbstractModel
                {
                public:
                    SecurityGroup();
                    ~SecurityGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ProjectId 
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置
                     * @param _projectId 
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
                     * 获取
                     * @return CreateTime 
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置
                     * @param _createTime 
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
                     * 获取
                     * @return InboundSet 
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetInboundSet() const;

                    /**
                     * 设置
                     * @param _inboundSet 
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
                     * 获取
                     * @return OutboundSet 
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetOutboundSet() const;

                    /**
                     * 设置
                     * @param _outboundSet 
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
                     * 获取
                     * @return SecurityGroupId 
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置
                     * @param _securityGroupId 
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
                     * 获取
                     * @return SecurityGroupName 
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置
                     * @param _securityGroupName 
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
                     * 获取
                     * @return SecurityGroupRemark 
                     * 
                     */
                    std::string GetSecurityGroupRemark() const;

                    /**
                     * 设置
                     * @param _securityGroupRemark 
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
                     * 
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SecurityGroupPolicy> m_inboundSet;
                    bool m_inboundSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SecurityGroupPolicy> m_outboundSet;
                    bool m_outboundSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_securityGroupRemark;
                    bool m_securityGroupRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SECURITYGROUP_H_
