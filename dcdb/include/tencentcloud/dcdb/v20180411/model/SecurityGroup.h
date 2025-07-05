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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SECURITYGROUP_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/SecurityGroupBound.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * Security group details
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
                     * 获取Creation time in the format of yyyy-mm-dd hh:mm:ss
                     * @return CreateTime Creation time in the format of yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time in the format of yyyy-mm-dd hh:mm:ss
                     * @param _createTime Creation time in the format of yyyy-mm-dd hh:mm:ss
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
                     * 获取Inbound rule
                     * @return Inbound Inbound rule
                     * 
                     */
                    std::vector<SecurityGroupBound> GetInbound() const;

                    /**
                     * 设置Inbound rule
                     * @param _inbound Inbound rule
                     * 
                     */
                    void SetInbound(const std::vector<SecurityGroupBound>& _inbound);

                    /**
                     * 判断参数 Inbound 是否已赋值
                     * @return Inbound 是否已赋值
                     * 
                     */
                    bool InboundHasBeenSet() const;

                    /**
                     * 获取Outbound rule
                     * @return Outbound Outbound rule
                     * 
                     */
                    std::vector<SecurityGroupBound> GetOutbound() const;

                    /**
                     * 设置Outbound rule
                     * @param _outbound Outbound rule
                     * 
                     */
                    void SetOutbound(const std::vector<SecurityGroupBound>& _outbound);

                    /**
                     * 判断参数 Outbound 是否已赋值
                     * @return Outbound 是否已赋值
                     * 
                     */
                    bool OutboundHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Creation time in the format of yyyy-mm-dd hh:mm:ss
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
                     * Inbound rule
                     */
                    std::vector<SecurityGroupBound> m_inbound;
                    bool m_inboundHasBeenSet;

                    /**
                     * Outbound rule
                     */
                    std::vector<SecurityGroupBound> m_outbound;
                    bool m_outboundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SECURITYGROUP_H_
