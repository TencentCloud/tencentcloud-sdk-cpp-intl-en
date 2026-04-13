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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ModifyPrivilege.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAccountPrivileges request structure.
                */
                class ModifyAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    ModifyAccountPrivilegesRequest();
                    ~ModifyAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Modify the permission of this account for a database object. obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1) api.
                     * @return UserName Modify the permission of this account for a database object. obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Modify the permission of this account for a database object. obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1) api.
                     * @param _userName Modify the permission of this account for a database object. obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1) api.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Permission information to modify. supports batch modification. the maximum number of modifications per batch is 50.
                     * @return ModifyPrivilegeSet Permission information to modify. supports batch modification. the maximum number of modifications per batch is 50.
                     * 
                     */
                    std::vector<ModifyPrivilege> GetModifyPrivilegeSet() const;

                    /**
                     * 设置Permission information to modify. supports batch modification. the maximum number of modifications per batch is 50.
                     * @param _modifyPrivilegeSet Permission information to modify. supports batch modification. the maximum number of modifications per batch is 50.
                     * 
                     */
                    void SetModifyPrivilegeSet(const std::vector<ModifyPrivilege>& _modifyPrivilegeSet);

                    /**
                     * 判断参数 ModifyPrivilegeSet 是否已赋值
                     * @return ModifyPrivilegeSet 是否已赋值
                     * 
                     */
                    bool ModifyPrivilegeSetHasBeenSet() const;

                private:

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Modify the permission of this account for a database object. obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1) api.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Permission information to modify. supports batch modification. the maximum number of modifications per batch is 50.
                     */
                    std::vector<ModifyPrivilege> m_modifyPrivilegeSet;
                    bool m_modifyPrivilegeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
