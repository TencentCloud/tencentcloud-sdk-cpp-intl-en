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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEREQUEST_H_

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
                * DescribeDatabase request structure.
                */
                class DescribeDatabaseRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseRequest();
                    ~DescribeDatabaseRequest() = default;
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
                     * 获取Query the data source where the database is located. If it is not filled in, the internal data source (internal) will be used by default.
                     * @return CatalogName Query the data source where the database is located. If it is not filled in, the internal data source (internal) will be used by default.
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置Query the data source where the database is located. If it is not filled in, the internal data source (internal) will be used by default.
                     * @param _catalogName Query the data source where the database is located. If it is not filled in, the internal data source (internal) will be used by default.
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取The database information to be queried. If this parameter and FilterDbName are not filled in, all database information of the current data source will be queried by default.
                     * @return DbNames The database information to be queried. If this parameter and FilterDbName are not filled in, all database information of the current data source will be queried by default.
                     * 
                     */
                    std::vector<std::string> GetDbNames() const;

                    /**
                     * 设置The database information to be queried. If this parameter and FilterDbName are not filled in, all database information of the current data source will be queried by default.
                     * @param _dbNames The database information to be queried. If this parameter and FilterDbName are not filled in, all database information of the current data source will be queried by default.
                     * 
                     */
                    void SetDbNames(const std::vector<std::string>& _dbNames);

                    /**
                     * 判断参数 DbNames 是否已赋值
                     * @return DbNames 是否已赋值
                     * 
                     */
                    bool DbNamesHasBeenSet() const;

                    /**
                     * 获取Display the filtered database information. For example, %infor indicates database names ending with infor. This parameter only supports scenarios where CatalogName is internal.
                     * @return FilterDbName Display the filtered database information. For example, %infor indicates database names ending with infor. This parameter only supports scenarios where CatalogName is internal.
                     * 
                     */
                    std::string GetFilterDbName() const;

                    /**
                     * 设置Display the filtered database information. For example, %infor indicates database names ending with infor. This parameter only supports scenarios where CatalogName is internal.
                     * @param _filterDbName Display the filtered database information. For example, %infor indicates database names ending with infor. This parameter only supports scenarios where CatalogName is internal.
                     * 
                     */
                    void SetFilterDbName(const std::string& _filterDbName);

                    /**
                     * 判断参数 FilterDbName 是否已赋值
                     * @return FilterDbName 是否已赋值
                     * 
                     */
                    bool FilterDbNameHasBeenSet() const;

                private:

                    /**
                     * Resource ID, which is the TCHouse-D resource ID used for table creation.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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
                     * Query the data source where the database is located. If it is not filled in, the internal data source (internal) will be used by default.
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * The database information to be queried. If this parameter and FilterDbName are not filled in, all database information of the current data source will be queried by default.
                     */
                    std::vector<std::string> m_dbNames;
                    bool m_dbNamesHasBeenSet;

                    /**
                     * Display the filtered database information. For example, %infor indicates database names ending with infor. This parameter only supports scenarios where CatalogName is internal.
                     */
                    std::string m_filterDbName;
                    bool m_filterDbNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEREQUEST_H_
