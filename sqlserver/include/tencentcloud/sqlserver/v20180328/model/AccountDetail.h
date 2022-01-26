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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBPrivilege.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Account details
                */
                class AccountDetail : public AbstractModel
                {
                public:
                    AccountDetail();
                    ~AccountDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account name
                     * @return Name Account name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Account name
                     * @param Name Account name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Account remarks
                     * @return Remark Account remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Account remarks
                     * @param Remark Account remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Account creation time
                     * @return CreateTime Account creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Account creation time
                     * @param CreateTime Account creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Account status. 1: creating, 2: normal, 3: modifying, 4: resetting password, -1: deleting
                     * @return Status Account status. 1: creating, 2: normal, 3: modifying, 4: resetting password, -1: deleting
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Account status. 1: creating, 2: normal, 3: modifying, 4: resetting password, -1: deleting
                     * @param Status Account status. 1: creating, 2: normal, 3: modifying, 4: resetting password, -1: deleting
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Account update time
                     * @return UpdateTime Account update time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Account update time
                     * @param UpdateTime Account update time
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Password update time
                     * @return PassTime Password update time
                     */
                    std::string GetPassTime() const;

                    /**
                     * 设置Password update time
                     * @param PassTime Password update time
                     */
                    void SetPassTime(const std::string& _passTime);

                    /**
                     * 判断参数 PassTime 是否已赋值
                     * @return PassTime 是否已赋值
                     */
                    bool PassTimeHasBeenSet() const;

                    /**
                     * 获取Internal account status, which should be `enable` normally
                     * @return InternalStatus Internal account status, which should be `enable` normally
                     */
                    std::string GetInternalStatus() const;

                    /**
                     * 设置Internal account status, which should be `enable` normally
                     * @param InternalStatus Internal account status, which should be `enable` normally
                     */
                    void SetInternalStatus(const std::string& _internalStatus);

                    /**
                     * 判断参数 InternalStatus 是否已赋值
                     * @return InternalStatus 是否已赋值
                     */
                    bool InternalStatusHasBeenSet() const;

                    /**
                     * 获取Information of read and write permissions of this account on relevant databases
                     * @return Dbs Information of read and write permissions of this account on relevant databases
                     */
                    std::vector<DBPrivilege> GetDbs() const;

                    /**
                     * 设置Information of read and write permissions of this account on relevant databases
                     * @param Dbs Information of read and write permissions of this account on relevant databases
                     */
                    void SetDbs(const std::vector<DBPrivilege>& _dbs);

                    /**
                     * 判断参数 Dbs 是否已赋值
                     * @return Dbs 是否已赋值
                     */
                    bool DbsHasBeenSet() const;

                    /**
                     * 获取Whether it is an admin account
                     * @return IsAdmin Whether it is an admin account
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置Whether it is an admin account
                     * @param IsAdmin Whether it is an admin account
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     */
                    bool IsAdminHasBeenSet() const;

                private:

                    /**
                     * Account name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Account remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Account creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Account status. 1: creating, 2: normal, 3: modifying, 4: resetting password, -1: deleting
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Account update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Password update time
                     */
                    std::string m_passTime;
                    bool m_passTimeHasBeenSet;

                    /**
                     * Internal account status, which should be `enable` normally
                     */
                    std::string m_internalStatus;
                    bool m_internalStatusHasBeenSet;

                    /**
                     * Information of read and write permissions of this account on relevant databases
                     */
                    std::vector<DBPrivilege> m_dbs;
                    bool m_dbsHasBeenSet;

                    /**
                     * Whether it is an admin account
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTDETAIL_H_
