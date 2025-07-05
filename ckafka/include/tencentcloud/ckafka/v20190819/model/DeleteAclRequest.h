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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEACLREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DeleteAcl request structure.
                */
                class DeleteAclRequest : public AbstractModel
                {
                public:
                    DeleteAclRequest();
                    ~DeleteAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID information
                     * @return InstanceId Instance ID information
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID information
                     * @param _instanceId Instance ID information
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取ACL resource type (`2`: TOPIC, `3`: GROUP, `4`: CLUSTER).
                     * @return ResourceType ACL resource type (`2`: TOPIC, `3`: GROUP, `4`: CLUSTER).
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置ACL resource type (`2`: TOPIC, `3`: GROUP, `4`: CLUSTER).
                     * @param _resourceType ACL resource type (`2`: TOPIC, `3`: GROUP, `4`: CLUSTER).
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource name, which is related to `resourceType`. For example, if `resourceType` is `TOPIC`, this field indicates the topic name; if `resourceType` is `GROUP`, this field indicates the group name; if `resourceType` is `CLUSTER`, this field can be left empty.
                     * @return ResourceName Resource name, which is related to `resourceType`. For example, if `resourceType` is `TOPIC`, this field indicates the topic name; if `resourceType` is `GROUP`, this field indicates the group name; if `resourceType` is `CLUSTER`, this field can be left empty.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name, which is related to `resourceType`. For example, if `resourceType` is `TOPIC`, this field indicates the topic name; if `resourceType` is `GROUP`, this field indicates the group name; if `resourceType` is `CLUSTER`, this field can be left empty.
                     * @param _resourceName Resource name, which is related to `resourceType`. For example, if `resourceType` is `TOPIC`, this field indicates the topic name; if `resourceType` is `GROUP`, this field indicates the group name; if `resourceType` is `CLUSTER`, this field can be left empty.
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取ACL operation type (`2`: ALL, `3`: READ, `4`: WRITE, `5`: CREATE, `6`: DELETE, `7`: ALTER, `8`: DESCRIBE, `9`: CLUSTER_ACTION, `10`: DESCRIBE_CONFIGS, `11`: ALTER_CONFIGS, `12`: IDEMPOTENT_WRITE).
                     * @return Operation ACL operation type (`2`: ALL, `3`: READ, `4`: WRITE, `5`: CREATE, `6`: DELETE, `7`: ALTER, `8`: DESCRIBE, `9`: CLUSTER_ACTION, `10`: DESCRIBE_CONFIGS, `11`: ALTER_CONFIGS, `12`: IDEMPOTENT_WRITE).
                     * 
                     */
                    int64_t GetOperation() const;

                    /**
                     * 设置ACL operation type (`2`: ALL, `3`: READ, `4`: WRITE, `5`: CREATE, `6`: DELETE, `7`: ALTER, `8`: DESCRIBE, `9`: CLUSTER_ACTION, `10`: DESCRIBE_CONFIGS, `11`: ALTER_CONFIGS, `12`: IDEMPOTENT_WRITE).
                     * @param _operation ACL operation type (`2`: ALL, `3`: READ, `4`: WRITE, `5`: CREATE, `6`: DELETE, `7`: ALTER, `8`: DESCRIBE, `9`: CLUSTER_ACTION, `10`: DESCRIBE_CONFIGS, `11`: ALTER_CONFIGS, `12`: IDEMPOTENT_WRITE).
                     * 
                     */
                    void SetOperation(const int64_t& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Permission type (`2`: DENY, `3`: ALLOW). CKafka currently supports `ALLOW`, which is equivalent to allowlist. `DENY` will be supported for ACLs compatible with open-source Kafka.
                     * @return PermissionType Permission type (`2`: DENY, `3`: ALLOW). CKafka currently supports `ALLOW`, which is equivalent to allowlist. `DENY` will be supported for ACLs compatible with open-source Kafka.
                     * 
                     */
                    int64_t GetPermissionType() const;

                    /**
                     * 设置Permission type (`2`: DENY, `3`: ALLOW). CKafka currently supports `ALLOW`, which is equivalent to allowlist. `DENY` will be supported for ACLs compatible with open-source Kafka.
                     * @param _permissionType Permission type (`2`: DENY, `3`: ALLOW). CKafka currently supports `ALLOW`, which is equivalent to allowlist. `DENY` will be supported for ACLs compatible with open-source Kafka.
                     * 
                     */
                    void SetPermissionType(const int64_t& _permissionType);

                    /**
                     * 判断参数 PermissionType 是否已赋值
                     * @return PermissionType 是否已赋值
                     * 
                     */
                    bool PermissionTypeHasBeenSet() const;

                    /**
                     * 获取The default value is `*`, which means that any host can access. Currently, CKafka does not support the host as `*`, but the future product based on the open-source Kafka will directly support this
                     * @return Host The default value is `*`, which means that any host can access. Currently, CKafka does not support the host as `*`, but the future product based on the open-source Kafka will directly support this
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置The default value is `*`, which means that any host can access. Currently, CKafka does not support the host as `*`, but the future product based on the open-source Kafka will directly support this
                     * @param _host The default value is `*`, which means that any host can access. Currently, CKafka does not support the host as `*`, but the future product based on the open-source Kafka will directly support this
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取User list. The default value is `*`, which means that any user can access. The current user can only be one included in the user list
                     * @return Principal User list. The default value is `*`, which means that any user can access. The current user can only be one included in the user list
                     * 
                     */
                    std::string GetPrincipal() const;

                    /**
                     * 设置User list. The default value is `*`, which means that any user can access. The current user can only be one included in the user list
                     * @param _principal User list. The default value is `*`, which means that any user can access. The current user can only be one included in the user list
                     * 
                     */
                    void SetPrincipal(const std::string& _principal);

                    /**
                     * 判断参数 Principal 是否已赋值
                     * @return Principal 是否已赋值
                     * 
                     */
                    bool PrincipalHasBeenSet() const;

                private:

                    /**
                     * Instance ID information
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL resource type (`2`: TOPIC, `3`: GROUP, `4`: CLUSTER).
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource name, which is related to `resourceType`. For example, if `resourceType` is `TOPIC`, this field indicates the topic name; if `resourceType` is `GROUP`, this field indicates the group name; if `resourceType` is `CLUSTER`, this field can be left empty.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * ACL operation type (`2`: ALL, `3`: READ, `4`: WRITE, `5`: CREATE, `6`: DELETE, `7`: ALTER, `8`: DESCRIBE, `9`: CLUSTER_ACTION, `10`: DESCRIBE_CONFIGS, `11`: ALTER_CONFIGS, `12`: IDEMPOTENT_WRITE).
                     */
                    int64_t m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Permission type (`2`: DENY, `3`: ALLOW). CKafka currently supports `ALLOW`, which is equivalent to allowlist. `DENY` will be supported for ACLs compatible with open-source Kafka.
                     */
                    int64_t m_permissionType;
                    bool m_permissionTypeHasBeenSet;

                    /**
                     * The default value is `*`, which means that any host can access. Currently, CKafka does not support the host as `*`, but the future product based on the open-source Kafka will directly support this
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * User list. The default value is `*`, which means that any user can access. The current user can only be one included in the user list
                     */
                    std::string m_principal;
                    bool m_principalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEACLREQUEST_H_
