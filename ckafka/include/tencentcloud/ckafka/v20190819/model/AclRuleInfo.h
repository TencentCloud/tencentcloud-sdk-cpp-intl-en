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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULEINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Four pieces of information of ACL rules: source IP address, destination IP address, source port, and destination port
                */
                class AclRuleInfo : public AbstractModel
                {
                public:
                    AclRuleInfo();
                    ~AclRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ACL operation types. Enumerated values: `All` (all operations), `Read` (read), `Write` (write).
                     * @return Operation ACL operation types. Enumerated values: `All` (all operations), `Read` (read), `Write` (write).
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置ACL operation types. Enumerated values: `All` (all operations), `Read` (read), `Write` (write).
                     * @param Operation ACL operation types. Enumerated values: `All` (all operations), `Read` (read), `Write` (write).
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Permission types: `Deny`, `Allow`.
                     * @return PermissionType Permission types: `Deny`, `Allow`.
                     */
                    std::string GetPermissionType() const;

                    /**
                     * 设置Permission types: `Deny`, `Allow`.
                     * @param PermissionType Permission types: `Deny`, `Allow`.
                     */
                    void SetPermissionType(const std::string& _permissionType);

                    /**
                     * 判断参数 PermissionType 是否已赋值
                     * @return PermissionType 是否已赋值
                     */
                    bool PermissionTypeHasBeenSet() const;

                    /**
                     * 获取The default value is `*`, which means that any host can access the topic. CKafka currently does not support specifying a host value of * or an IP range.
                     * @return Host The default value is `*`, which means that any host can access the topic. CKafka currently does not support specifying a host value of * or an IP range.
                     */
                    std::string GetHost() const;

                    /**
                     * 设置The default value is `*`, which means that any host can access the topic. CKafka currently does not support specifying a host value of * or an IP range.
                     * @param Host The default value is `*`, which means that any host can access the topic. CKafka currently does not support specifying a host value of * or an IP range.
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取The list of users allowed to access the topic. Default value: `User:*`, which means all users. The current user must be in the user list. Add the prefix `User:` before the user name (`User:A`, for example).
                     * @return Principal The list of users allowed to access the topic. Default value: `User:*`, which means all users. The current user must be in the user list. Add the prefix `User:` before the user name (`User:A`, for example).
                     */
                    std::string GetPrincipal() const;

                    /**
                     * 设置The list of users allowed to access the topic. Default value: `User:*`, which means all users. The current user must be in the user list. Add the prefix `User:` before the user name (`User:A`, for example).
                     * @param Principal The list of users allowed to access the topic. Default value: `User:*`, which means all users. The current user must be in the user list. Add the prefix `User:` before the user name (`User:A`, for example).
                     */
                    void SetPrincipal(const std::string& _principal);

                    /**
                     * 判断参数 Principal 是否已赋值
                     * @return Principal 是否已赋值
                     */
                    bool PrincipalHasBeenSet() const;

                private:

                    /**
                     * ACL operation types. Enumerated values: `All` (all operations), `Read` (read), `Write` (write).
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Permission types: `Deny`, `Allow`.
                     */
                    std::string m_permissionType;
                    bool m_permissionTypeHasBeenSet;

                    /**
                     * The default value is `*`, which means that any host can access the topic. CKafka currently does not support specifying a host value of * or an IP range.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * The list of users allowed to access the topic. Default value: `User:*`, which means all users. The current user must be in the user list. Add the prefix `User:` before the user name (`User:A`, for example).
                     */
                    std::string m_principal;
                    bool m_principalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULEINFO_H_
