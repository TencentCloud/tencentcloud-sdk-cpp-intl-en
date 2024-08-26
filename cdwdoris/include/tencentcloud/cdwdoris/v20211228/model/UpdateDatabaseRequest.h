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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATEDATABASEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATEDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/PropertiesMap.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * UpdateDatabase request structure.
                */
                class UpdateDatabaseRequest : public AbstractModel
                {
                public:
                    UpdateDatabaseRequest();
                    ~UpdateDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The database name to be modified
                     * @return DbName The database name to be modified
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置The database name to be modified
                     * @param _dbName The database name to be modified
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
                     * 获取Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES. Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES.
                     * @return Operation Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES. Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES. Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES.
                     * @param _operation Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES. Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Quota value, which is used to set the quota of data volume or replicas.
                     * @return Quota Quota value, which is used to set the quota of data volume or replicas.
                     * 
                     */
                    std::string GetQuota() const;

                    /**
                     * 设置Quota value, which is used to set the quota of data volume or replicas.
                     * @param _quota Quota value, which is used to set the quota of data volume or replicas.
                     * 
                     */
                    void SetQuota(const std::string& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                    /**
                     * 获取New database name, used for renaming operation.
                     * @return NewDbName New database name, used for renaming operation.
                     * 
                     */
                    std::string GetNewDbName() const;

                    /**
                     * 设置New database name, used for renaming operation.
                     * @param _newDbName New database name, used for renaming operation.
                     * 
                     */
                    void SetNewDbName(const std::string& _newDbName);

                    /**
                     * 判断参数 NewDbName 是否已赋值
                     * @return NewDbName 是否已赋值
                     * 
                     */
                    bool NewDbNameHasBeenSet() const;

                    /**
                     * 获取Attribute key-value pair to be set
                     * @return Properties Attribute key-value pair to be set
                     * 
                     */
                    std::vector<PropertiesMap> GetProperties() const;

                    /**
                     * 设置Attribute key-value pair to be set
                     * @param _properties Attribute key-value pair to be set
                     * 
                     */
                    void SetProperties(const std::vector<PropertiesMap>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

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
                     * The database name to be modified
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES. Modify the operation type, such as SET_QUOTA, RENAME, SET_REPLICA_QUOTA, and SET_PROPERTIES.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Quota value, which is used to set the quota of data volume or replicas.
                     */
                    std::string m_quota;
                    bool m_quotaHasBeenSet;

                    /**
                     * New database name, used for renaming operation.
                     */
                    std::string m_newDbName;
                    bool m_newDbNameHasBeenSet;

                    /**
                     * Attribute key-value pair to be set
                     */
                    std::vector<PropertiesMap> m_properties;
                    bool m_propertiesHasBeenSet;

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

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATEDATABASEREQUEST_H_
