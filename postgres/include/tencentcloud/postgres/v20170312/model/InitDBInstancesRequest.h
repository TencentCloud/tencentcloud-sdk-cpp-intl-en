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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_INITDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_INITDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InitDBInstances request structure.
                */
                class InitDBInstancesRequest : public AbstractModel
                {
                public:
                    InitDBInstancesRequest();
                    ~InitDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID set.
                     * @return DBInstanceIdSet Instance ID set.
                     * 
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 设置Instance ID set.
                     * @param _dBInstanceIdSet Instance ID set.
                     * 
                     */
                    void SetDBInstanceIdSet(const std::vector<std::string>& _dBInstanceIdSet);

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     * 
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                    /**
                     * 获取Instance admin account username.
                     * @return AdminName Instance admin account username.
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置Instance admin account username.
                     * @param _adminName Instance admin account username.
                     * 
                     */
                    void SetAdminName(const std::string& _adminName);

                    /**
                     * 判断参数 AdminName 是否已赋值
                     * @return AdminName 是否已赋值
                     * 
                     */
                    bool AdminNameHasBeenSet() const;

                    /**
                     * 获取Password corresponding to instance root account username.
                     * @return AdminPassword Password corresponding to instance root account username.
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置Password corresponding to instance root account username.
                     * @param _adminPassword Password corresponding to instance root account username.
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取Instance character set. Valid values: UTF8, LATIN1.
                     * @return Charset Instance character set. Valid values: UTF8, LATIN1.
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置Instance character set. Valid values: UTF8, LATIN1.
                     * @param _charset Instance character set. Valid values: UTF8, LATIN1.
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID set.
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                    /**
                     * Instance admin account username.
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * Password corresponding to instance root account username.
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * Instance character set. Valid values: UTF8, LATIN1.
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INITDBINSTANCESREQUEST_H_
