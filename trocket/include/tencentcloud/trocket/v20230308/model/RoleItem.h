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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_ROLEITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_ROLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/DetailedRolePerm.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Role information.
                */
                class RoleItem : public AbstractModel
                {
                public:
                    RoleItem();
                    ~RoleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role name.
                     * @return RoleName Role name.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name.
                     * @param _roleName Role name.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable consumption.
                     * @return PermRead Whether to enable consumption.
                     * 
                     */
                    bool GetPermRead() const;

                    /**
                     * 设置Whether to enable consumption.
                     * @param _permRead Whether to enable consumption.
                     * 
                     */
                    void SetPermRead(const bool& _permRead);

                    /**
                     * 判断参数 PermRead 是否已赋值
                     * @return PermRead 是否已赋值
                     * 
                     */
                    bool PermReadHasBeenSet() const;

                    /**
                     * 获取Whether to enable production
                     * @return PermWrite Whether to enable production
                     * 
                     */
                    bool GetPermWrite() const;

                    /**
                     * 设置Whether to enable production
                     * @param _permWrite Whether to enable production
                     * 
                     */
                    void SetPermWrite(const bool& _permWrite);

                    /**
                     * 判断参数 PermWrite 是否已赋值
                     * @return PermWrite 是否已赋值
                     * 
                     */
                    bool PermWriteHasBeenSet() const;

                    /**
                     * 获取Access Key
                     * @return AccessKey Access Key
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access Key
                     * @param _accessKey Access Key
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Secret Key
                     * @return SecretKey Secret Key
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Secret Key
                     * @param _secretKey Secret Key
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Role creation time. **It is a Unix timestamp (ms).**
                     * @return CreatedTime Role creation time. **It is a Unix timestamp (ms).**
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 设置Role creation time. **It is a Unix timestamp (ms).**
                     * @param _createdTime Role creation time. **It is a Unix timestamp (ms).**
                     * 
                     */
                    void SetCreatedTime(const int64_t& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Role update time. **It is a Unix timestamp (ms).**
                     * @return ModifiedTime Role update time. **It is a Unix timestamp (ms).**
                     * 
                     */
                    int64_t GetModifiedTime() const;

                    /**
                     * 设置Role update time. **It is a Unix timestamp (ms).**
                     * @param _modifiedTime Role update time. **It is a Unix timestamp (ms).**
                     * 
                     */
                    void SetModifiedTime(const int64_t& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group level).
                     * @return PermType Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group level).
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group level).
                     * @param _permType Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group level).
                     * 
                     */
                    void SetPermType(const std::string& _permType);

                    /**
                     * 判断参数 PermType 是否已赋值
                     * @return PermType 是否已赋值
                     * 
                     */
                    bool PermTypeHasBeenSet() const;

                    /**
                     * 获取Permission configuration in Topic and Group dimension.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetailedRolePerms Permission configuration in Topic and Group dimension.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DetailedRolePerm> GetDetailedRolePerms() const;

                    /**
                     * 设置Permission configuration in Topic and Group dimension.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detailedRolePerms Permission configuration in Topic and Group dimension.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetailedRolePerms(const std::vector<DetailedRolePerm>& _detailedRolePerms);

                    /**
                     * 判断参数 DetailedRolePerms 是否已赋值
                     * @return DetailedRolePerms 是否已赋值
                     * 
                     */
                    bool DetailedRolePermsHasBeenSet() const;

                private:

                    /**
                     * Role name.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Whether to enable consumption.
                     */
                    bool m_permRead;
                    bool m_permReadHasBeenSet;

                    /**
                     * Whether to enable production
                     */
                    bool m_permWrite;
                    bool m_permWriteHasBeenSet;

                    /**
                     * Access Key
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Secret Key
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Role creation time. **It is a Unix timestamp (ms).**
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Role update time. **It is a Unix timestamp (ms).**
                     */
                    int64_t m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group level).
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * Permission configuration in Topic and Group dimension.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DetailedRolePerm> m_detailedRolePerms;
                    bool m_detailedRolePermsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_ROLEITEM_H_
