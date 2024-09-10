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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSERTDATASTOTABLEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSERTDATASTOTABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/Rows.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * InsertDatasToTable request structure.
                */
                class InsertDatasToTableRequest : public AbstractModel
                {
                public:
                    InsertDatasToTableRequest();
                    ~InsertDatasToTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database name
                     * @return Database Database name
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
                     * @param _database Database name
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return Table Table name
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name
                     * @param _table Table name
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Whether to use the strict mode
                     * @return Strict Whether to use the strict mode
                     * 
                     */
                    bool GetStrict() const;

                    /**
                     * 设置Whether to use the strict mode
                     * @param _strict Whether to use the strict mode
                     * 
                     */
                    void SetStrict(const bool& _strict);

                    /**
                     * 判断参数 Strict 是否已赋值
                     * @return Strict 是否已赋值
                     * 
                     */
                    bool StrictHasBeenSet() const;

                    /**
                     * 获取Maximum filtration ratio, ranging from 0 to 1.0
                     * @return MaxFilterRatio Maximum filtration ratio, ranging from 0 to 1.0
                     * 
                     */
                    double GetMaxFilterRatio() const;

                    /**
                     * 设置Maximum filtration ratio, ranging from 0 to 1.0
                     * @param _maxFilterRatio Maximum filtration ratio, ranging from 0 to 1.0
                     * 
                     */
                    void SetMaxFilterRatio(const double& _maxFilterRatio);

                    /**
                     * 判断参数 MaxFilterRatio 是否已赋值
                     * @return MaxFilterRatio 是否已赋值
                     * 
                     */
                    bool MaxFilterRatioHasBeenSet() const;

                    /**
                     * 获取Array of column names
                     * @return Columns Array of column names
                     * 
                     */
                    std::vector<std::string> GetColumns() const;

                    /**
                     * 设置Array of column names
                     * @param _columns Array of column names
                     * 
                     */
                    void SetColumns(const std::vector<std::string>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Data line
                     * @return Rows Data line
                     * 
                     */
                    std::vector<Rows> GetRows() const;

                    /**
                     * 设置Data line
                     * @param _rows Data line
                     * 
                     */
                    void SetRows(const std::vector<Rows>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取Tags for inserting data
                     * @return Label Tags for inserting data
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tags for inserting data
                     * @param _label Tags for inserting data
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

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
                     * 获取Column type, this field has been deprecated, please use Types
                     * @return ColumnTypes Column type, this field has been deprecated, please use Types
                     * @deprecated
                     */
                    std::string GetColumnTypes() const;

                    /**
                     * 设置Column type, this field has been deprecated, please use Types
                     * @param _columnTypes Column type, this field has been deprecated, please use Types
                     * @deprecated
                     */
                    void SetColumnTypes(const std::string& _columnTypes);

                    /**
                     * 判断参数 ColumnTypes 是否已赋值
                     * @return ColumnTypes 是否已赋值
                     * @deprecated
                     */
                    bool ColumnTypesHasBeenSet() const;

                    /**
                     * 获取Array of column types

                     * @return Types Array of column types

                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置Array of column types

                     * @param _types Array of column types

                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取Catalog name, defaults to 'internal' if not specified.
                     * @return CatalogName Catalog name, defaults to 'internal' if not specified.
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置Catalog name, defaults to 'internal' if not specified.
                     * @param _catalogName Catalog name, defaults to 'internal' if not specified.
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
                     * 获取InstanceId
                     * @return InstanceId InstanceId
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置InstanceId
                     * @param _instanceId InstanceId
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Whether to use the strict mode
                     */
                    bool m_strict;
                    bool m_strictHasBeenSet;

                    /**
                     * Maximum filtration ratio, ranging from 0 to 1.0
                     */
                    double m_maxFilterRatio;
                    bool m_maxFilterRatioHasBeenSet;

                    /**
                     * Array of column names
                     */
                    std::vector<std::string> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Data line
                     */
                    std::vector<Rows> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * Tags for inserting data
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

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
                     * Column type, this field has been deprecated, please use Types
                     */
                    std::string m_columnTypes;
                    bool m_columnTypesHasBeenSet;

                    /**
                     * Array of column types

                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * Catalog name, defaults to 'internal' if not specified.
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * InstanceId
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSERTDATASTOTABLEREQUEST_H_
