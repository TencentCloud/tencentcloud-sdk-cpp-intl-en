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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Account information
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID in the format of postgres-lnp6j617
                     * @return DBInstanceId Instance ID in the format of postgres-lnp6j617
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID in the format of postgres-lnp6j617
                     * @param DBInstanceId Instance ID in the format of postgres-lnp6j617
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return UserName Account
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Account
                     * @param UserName Account
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

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
                     * 获取Account last modified time
                     * @return UpdateTime Account last modified time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Account last modified time
                     * @param UpdateTime Account last modified time
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of postgres-lnp6j617
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Account remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Account status. 1: creating, 2: normal, 3: modifying, 4: resetting password, -1: deleting
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Account creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Account last modified time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_
