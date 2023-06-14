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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBDETAIL_H_

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
                * Database information
                */
                class DBDetail : public AbstractModel
                {
                public:
                    DBDetail();
                    ~DBDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
                     * @return Name Database name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Database name
                     * @param _name Database name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Character set
                     * @return Charset Character set
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置Character set
                     * @param _charset Character set
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

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
                     * 获取Database creation time
                     * @return CreateTime Database creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Database creation time
                     * @param _createTime Database creation time
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
                     * 获取Database status. 1: creating, 2: running, 3: modifying, -1: dropping
                     * @return Status Database status. 1: creating, 2: running, 3: modifying, -1: dropping
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Database status. 1: creating, 2: running, 3: modifying, -1: dropping
                     * @param _status Database status. 1: creating, 2: running, 3: modifying, -1: dropping
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Database account permission information
                     * @return Accounts Database account permission information
                     * 
                     */
                    std::vector<AccountPrivilege> GetAccounts() const;

                    /**
                     * 设置Database account permission information
                     * @param _accounts Database account permission information
                     * 
                     */
                    void SetAccounts(const std::vector<AccountPrivilege>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取Internal status. ONLINE: running
                     * @return InternalStatus Internal status. ONLINE: running
                     * 
                     */
                    std::string GetInternalStatus() const;

                    /**
                     * 设置Internal status. ONLINE: running
                     * @param _internalStatus Internal status. ONLINE: running
                     * 
                     */
                    void SetInternalStatus(const std::string& _internalStatus);

                    /**
                     * 判断参数 InternalStatus 是否已赋值
                     * @return InternalStatus 是否已赋值
                     * 
                     */
                    bool InternalStatusHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Character set
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Database creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Database status. 1: creating, 2: running, 3: modifying, -1: dropping
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Database account permission information
                     */
                    std::vector<AccountPrivilege> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * Internal status. ONLINE: running
                     */
                    std::string m_internalStatus;
                    bool m_internalStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBDETAIL_H_
