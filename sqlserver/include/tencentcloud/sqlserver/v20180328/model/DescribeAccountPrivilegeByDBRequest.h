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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEACCOUNTPRIVILEGEBYDBREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEACCOUNTPRIVILEGEBYDBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeAccountPrivilegeByDB request structure.
                */
                class DescribeAccountPrivilegeByDBRequest : public AbstractModel
                {
                public:
                    DescribeAccountPrivilegeByDBRequest();
                    ~DescribeAccountPrivilegeByDBRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format of mssql-njj2mtpl7.
                     * @return InstanceId Instance ID, in the format of mssql-njj2mtpl7.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format of mssql-njj2mtpl7.
                     * @param _instanceId Instance ID, in the format of mssql-njj2mtpl7.
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
                     * 获取Database name.
                     * @return DBName Database name.
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置Database name.
                     * @param _dBName Database name.
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取Database account name.
                     * @return AccountName Database account name.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Database account name.
                     * @param _accountName Database account name.
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * @return Limit The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * @param _limit The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number in pagination mode. The default value is 0.
                     * @return Offset Page number in pagination mode. The default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number in pagination mode. The default value is 0.
                     * @param _offset Page number in pagination mode. The default value is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format of mssql-njj2mtpl7.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * Database account name.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number in pagination mode. The default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEACCOUNTPRIVILEGEBYDBREQUEST_H_
