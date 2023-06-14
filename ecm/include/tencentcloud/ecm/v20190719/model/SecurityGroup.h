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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUP_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Security group object
                */
                class SecurityGroup : public AbstractModel
                {
                public:
                    SecurityGroup();
                    ~SecurityGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Security group instance ID, such as `esg-ohuuioma`.
                     * @return SecurityGroupId Security group instance ID, such as `esg-ohuuioma`.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group instance ID, such as `esg-ohuuioma`.
                     * @param _securityGroupId Security group instance ID, such as `esg-ohuuioma`.
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
                     * 获取Security group name, which can be customized with up to 60 characters.
                     * @return SecurityGroupName Security group name, which can be customized with up to 60 characters.
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置Security group name, which can be customized with up to 60 characters.
                     * @param _securityGroupName Security group name, which can be customized with up to 60 characters.
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
                     * 获取Security group remarks, which can contain up to 100 characters.
                     * @return SecurityGroupDesc Security group remarks, which can contain up to 100 characters.
                     * 
                     */
                    std::string GetSecurityGroupDesc() const;

                    /**
                     * 设置Security group remarks, which can contain up to 100 characters.
                     * @param _securityGroupDesc Security group remarks, which can contain up to 100 characters.
                     * 
                     */
                    void SetSecurityGroupDesc(const std::string& _securityGroupDesc);

                    /**
                     * 判断参数 SecurityGroupDesc 是否已赋值
                     * @return SecurityGroupDesc 是否已赋值
                     * 
                     */
                    bool SecurityGroupDescHasBeenSet() const;

                    /**
                     * 获取Whether it is the default security group (which cannot be deleted).
                     * @return IsDefault Whether it is the default security group (which cannot be deleted).
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default security group (which cannot be deleted).
                     * @param _isDefault Whether it is the default security group (which cannot be deleted).
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Security group creation time.
                     * @return CreatedTime Security group creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Security group creation time.
                     * @param _createdTime Security group creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Tag key-value pairs.
                     * @return TagSet Tag key-value pairs.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pairs.
                     * @param _tagSet Tag key-value pairs.
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * Security group instance ID, such as `esg-ohuuioma`.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Security group name, which can be customized with up to 60 characters.
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * Security group remarks, which can contain up to 100 characters.
                     */
                    std::string m_securityGroupDesc;
                    bool m_securityGroupDescHasBeenSet;

                    /**
                     * Whether it is the default security group (which cannot be deleted).
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Security group creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Tag key-value pairs.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUP_H_
