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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBETABLEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeTable request structure.
                */
                class DescribeTableRequest : public AbstractModel
                {
                public:
                    DescribeTableRequest();
                    ~DescribeTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource ID, which is the TCHouse-D resource ID used for table creation.
                     * @return InstanceId Resource ID, which is the TCHouse-D resource ID used for table creation.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Resource ID, which is the TCHouse-D resource ID used for table creation.
                     * @param _instanceId Resource ID, which is the TCHouse-D resource ID used for table creation.
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
                     * 获取Name of database where the table is located
                     * @return DbName Name of database where the table is located
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Name of database where the table is located
                     * @param _dbName Name of database where the table is located
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Table name (Currently only internal tables are supported.)
                     * @return TableName Table name (Currently only internal tables are supported.)
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name (Currently only internal tables are supported.)
                     * @param _tableName Table name (Currently only internal tables are supported.)
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @return UserName Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @param _userName Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
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
                     * 获取Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @return PassWord Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @param _passWord Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                private:

                    /**
                     * Resource ID, which is the TCHouse-D resource ID used for table creation.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Name of database where the table is located
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Table name (Currently only internal tables are supported.)
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBETABLEREQUEST_H_
