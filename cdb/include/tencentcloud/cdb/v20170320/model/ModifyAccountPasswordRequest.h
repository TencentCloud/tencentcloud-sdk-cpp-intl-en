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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Account.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyAccountPassword request structure.
                */
                class ModifyAccountPasswordRequest : public AbstractModel
                {
                public:
                    ModifyAccountPasswordRequest();
                    ~ModifyAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
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
                     * 获取New password of the database account. It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (_+-&=!@#$%^*()).
                     * @return NewPassword New password of the database account. It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (_+-&=!@#$%^*()).
                     * 
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置New password of the database account. It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (_+-&=!@#$%^*()).
                     * @param _newPassword New password of the database account. It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (_+-&=!@#$%^*()).
                     * 
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     * 
                     */
                    bool NewPasswordHasBeenSet() const;

                    /**
                     * 获取TDSQL for MySQL accounts. Obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/236/17499?from_cn_redirect=1) API.
                     * @return Accounts TDSQL for MySQL accounts. Obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/236/17499?from_cn_redirect=1) API.
                     * 
                     */
                    std::vector<Account> GetAccounts() const;

                    /**
                     * 设置TDSQL for MySQL accounts. Obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/236/17499?from_cn_redirect=1) API.
                     * @param _accounts TDSQL for MySQL accounts. Obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/236/17499?from_cn_redirect=1) API.
                     * 
                     */
                    void SetAccounts(const std::vector<Account>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取Deprecated.
                     * @return SkipValidatePassword Deprecated.
                     * @deprecated
                     */
                    bool GetSkipValidatePassword() const;

                    /**
                     * 设置Deprecated.
                     * @param _skipValidatePassword Deprecated.
                     * @deprecated
                     */
                    void SetSkipValidatePassword(const bool& _skipValidatePassword);

                    /**
                     * 判断参数 SkipValidatePassword 是否已赋值
                     * @return SkipValidatePassword 是否已赋值
                     * @deprecated
                     */
                    bool SkipValidatePasswordHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * New password of the database account. It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (_+-&=!@#$%^*()).
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                    /**
                     * TDSQL for MySQL accounts. Obtain through the [DescribeAccounts](https://www.tencentcloud.com/document/api/236/17499?from_cn_redirect=1) API.
                     */
                    std::vector<Account> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * Deprecated.
                     */
                    bool m_skipValidatePassword;
                    bool m_skipValidatePasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPASSWORDREQUEST_H_
