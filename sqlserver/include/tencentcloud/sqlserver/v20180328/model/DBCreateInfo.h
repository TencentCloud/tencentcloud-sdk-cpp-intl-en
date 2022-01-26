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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBCREATEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBCREATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/AccountPrivilege.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Database creation information
                */
                class DBCreateInfo : public AbstractModel
                {
                public:
                    DBCreateInfo();
                    ~DBCreateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
                     * @return DBName Database name
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置Database name
                     * @param DBName Database name
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取Character set, which can be queried by the `DescribeDBCharsets` API. Default value: `Chinese_PRC_CI_AS`.
                     * @return Charset Character set, which can be queried by the `DescribeDBCharsets` API. Default value: `Chinese_PRC_CI_AS`.
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置Character set, which can be queried by the `DescribeDBCharsets` API. Default value: `Chinese_PRC_CI_AS`.
                     * @param Charset Character set, which can be queried by the `DescribeDBCharsets` API. Default value: `Chinese_PRC_CI_AS`.
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取Database account permission information
                     * @return Accounts Database account permission information
                     */
                    std::vector<AccountPrivilege> GetAccounts() const;

                    /**
                     * 设置Database account permission information
                     * @param Accounts Database account permission information
                     */
                    void SetAccounts(const std::vector<AccountPrivilege>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param Remark Remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * Character set, which can be queried by the `DescribeDBCharsets` API. Default value: `Chinese_PRC_CI_AS`.
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * Database account permission information
                     */
                    std::vector<AccountPrivilege> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBCREATEINFO_H_
