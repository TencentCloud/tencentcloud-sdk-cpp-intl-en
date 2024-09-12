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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COPYTABLEDATASREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COPYTABLEDATASREQUEST_H_

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
                * CopyTableDatas request structure.
                */
                class CopyTableDatasRequest : public AbstractModel
                {
                public:
                    CopyTableDatasRequest();
                    ~CopyTableDatasRequest() = default;
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
                     * 获取Name of the database where the source table is located.
                     * @return CopiedFromDb Name of the database where the source table is located.
                     * 
                     */
                    std::string GetCopiedFromDb() const;

                    /**
                     * 设置Name of the database where the source table is located.
                     * @param _copiedFromDb Name of the database where the source table is located.
                     * 
                     */
                    void SetCopiedFromDb(const std::string& _copiedFromDb);

                    /**
                     * 判断参数 CopiedFromDb 是否已赋值
                     * @return CopiedFromDb 是否已赋值
                     * 
                     */
                    bool CopiedFromDbHasBeenSet() const;

                    /**
                     * 获取Source table name
                     * @return CopiedFromTable Source table name
                     * 
                     */
                    std::string GetCopiedFromTable() const;

                    /**
                     * 设置Source table name
                     * @param _copiedFromTable Source table name
                     * 
                     */
                    void SetCopiedFromTable(const std::string& _copiedFromTable);

                    /**
                     * 判断参数 CopiedFromTable 是否已赋值
                     * @return CopiedFromTable 是否已赋值
                     * 
                     */
                    bool CopiedFromTableHasBeenSet() const;

                    /**
                     * 获取Name of the database where the target table is located
                     * @return CopyToDb Name of the database where the target table is located
                     * 
                     */
                    std::string GetCopyToDb() const;

                    /**
                     * 设置Name of the database where the target table is located
                     * @param _copyToDb Name of the database where the target table is located
                     * 
                     */
                    void SetCopyToDb(const std::string& _copyToDb);

                    /**
                     * 判断参数 CopyToDb 是否已赋值
                     * @return CopyToDb 是否已赋值
                     * 
                     */
                    bool CopyToDbHasBeenSet() const;

                    /**
                     * 获取Target table name. If the table already exists, the structure of the source table and target table should be the same.
                     * @return CopyToTable Target table name. If the table already exists, the structure of the source table and target table should be the same.
                     * 
                     */
                    std::string GetCopyToTable() const;

                    /**
                     * 设置Target table name. If the table already exists, the structure of the source table and target table should be the same.
                     * @param _copyToTable Target table name. If the table already exists, the structure of the source table and target table should be the same.
                     * 
                     */
                    void SetCopyToTable(const std::string& _copyToTable);

                    /**
                     * 判断参数 CopyToTable 是否已赋值
                     * @return CopyToTable 是否已赋值
                     * 
                     */
                    bool CopyToTableHasBeenSet() const;

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

                    /**
                     * 获取Whether the data in the target table is overwritten. The default value is False.
                     * @return IsDataOverwrite Whether the data in the target table is overwritten. The default value is False.
                     * 
                     */
                    bool GetIsDataOverwrite() const;

                    /**
                     * 设置Whether the data in the target table is overwritten. The default value is False.
                     * @param _isDataOverwrite Whether the data in the target table is overwritten. The default value is False.
                     * 
                     */
                    void SetIsDataOverwrite(const bool& _isDataOverwrite);

                    /**
                     * 判断参数 IsDataOverwrite 是否已赋值
                     * @return IsDataOverwrite 是否已赋值
                     * 
                     */
                    bool IsDataOverwriteHasBeenSet() const;

                private:

                    /**
                     * Resource ID, which is the TCHouse-D resource ID used for table creation.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Name of the database where the source table is located.
                     */
                    std::string m_copiedFromDb;
                    bool m_copiedFromDbHasBeenSet;

                    /**
                     * Source table name
                     */
                    std::string m_copiedFromTable;
                    bool m_copiedFromTableHasBeenSet;

                    /**
                     * Name of the database where the target table is located
                     */
                    std::string m_copyToDb;
                    bool m_copyToDbHasBeenSet;

                    /**
                     * Target table name. If the table already exists, the structure of the source table and target table should be the same.
                     */
                    std::string m_copyToTable;
                    bool m_copyToTableHasBeenSet;

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

                    /**
                     * Whether the data in the target table is overwritten. The default value is False.
                     */
                    bool m_isDataOverwrite;
                    bool m_isDataOverwriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COPYTABLEDATASREQUEST_H_
