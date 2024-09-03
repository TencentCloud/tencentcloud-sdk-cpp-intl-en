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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECREATETABLESDDLREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECREATETABLESDDLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DbTablesInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeCreateTablesDDL request structure.
                */
                class DescribeCreateTablesDDLRequest : public AbstractModel
                {
                public:
                    DescribeCreateTablesDDLRequest();
                    ~DescribeCreateTablesDDLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource ID, TCHouse-D resource ID.
                     * @return InstanceId Resource ID, TCHouse-D resource ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Resource ID, TCHouse-D resource ID.
                     * @param _instanceId Resource ID, TCHouse-D resource ID.
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
                     * 获取Require the database and table for the table creation DDL.
                     * @return DbTablesInfos Require the database and table for the table creation DDL.
                     * 
                     */
                    std::vector<DbTablesInfo> GetDbTablesInfos() const;

                    /**
                     * 设置Require the database and table for the table creation DDL.
                     * @param _dbTablesInfos Require the database and table for the table creation DDL.
                     * 
                     */
                    void SetDbTablesInfos(const std::vector<DbTablesInfo>& _dbTablesInfos);

                    /**
                     * 判断参数 DbTablesInfos 是否已赋值
                     * @return DbTablesInfos 是否已赋值
                     * 
                     */
                    bool DbTablesInfosHasBeenSet() const;

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
                     * 获取Whether to hide partition information
                     * @return IsBrief Whether to hide partition information
                     * 
                     */
                    bool GetIsBrief() const;

                    /**
                     * 设置Whether to hide partition information
                     * @param _isBrief Whether to hide partition information
                     * 
                     */
                    void SetIsBrief(const bool& _isBrief);

                    /**
                     * 判断参数 IsBrief 是否已赋值
                     * @return IsBrief 是否已赋值
                     * 
                     */
                    bool IsBriefHasBeenSet() const;

                private:

                    /**
                     * Resource ID, TCHouse-D resource ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Require the database and table for the table creation DDL.
                     */
                    std::vector<DbTablesInfo> m_dbTablesInfos;
                    bool m_dbTablesInfosHasBeenSet;

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
                     * Whether to hide partition information
                     */
                    bool m_isBrief;
                    bool m_isBriefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECREATETABLESDDLREQUEST_H_
