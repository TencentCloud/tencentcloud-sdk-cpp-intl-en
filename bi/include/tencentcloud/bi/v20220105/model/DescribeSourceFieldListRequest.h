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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBESOURCEFIELDLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBESOURCEFIELDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ParamCreateDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeSourceFieldList request structure.
                */
                class DescribeSourceFieldListRequest : public AbstractModel
                {
                public:
                    DescribeSourceFieldListRequest();
                    ~DescribeSourceFieldListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取data source Id
                     * @return DataSourceId data source Id
                     * 
                     */
                    int64_t GetDataSourceId() const;

                    /**
                     * 设置data source Id
                     * @param _dataSourceId data source Id
                     * 
                     */
                    void SetDataSourceId(const int64_t& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return TableName Table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param _tableName Table name
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
                     * 获取sql content
                     * @return Sql sql content
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置sql content
                     * @param _sql sql content
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取whether
                     * @return AsyncRequest whether
                     * 
                     */
                    bool GetAsyncRequest() const;

                    /**
                     * 设置whether
                     * @param _asyncRequest whether
                     * 
                     */
                    void SetAsyncRequest(const bool& _asyncRequest);

                    /**
                     * 判断参数 AsyncRequest 是否已赋值
                     * @return AsyncRequest 是否已赋值
                     * 
                     */
                    bool AsyncRequestHasBeenSet() const;

                    /**
                     * 获取async transaction id
                     * @return TranId async transaction id
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置async transaction id
                     * @param _tranId async transaction id
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取11
                     * @return ParamList 11
                     * 
                     */
                    std::vector<ParamCreateDTO> GetParamList() const;

                    /**
                     * 设置11
                     * @param _paramList 11
                     * 
                     */
                    void SetParamList(const std::vector<ParamCreateDTO>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取DLC extension parameter
                     * @return DlcExtInfo DLC extension parameter
                     * 
                     */
                    std::string GetDlcExtInfo() const;

                    /**
                     * 设置DLC extension parameter
                     * @param _dlcExtInfo DLC extension parameter
                     * 
                     */
                    void SetDlcExtInfo(const std::string& _dlcExtInfo);

                    /**
                     * 判断参数 DlcExtInfo 是否已赋值
                     * @return DlcExtInfo 是否已赋值
                     * 
                     */
                    bool DlcExtInfoHasBeenSet() const;

                    /**
                     * 获取Query database required or not
                     * @return QueryDbData Query database required or not
                     * 
                     */
                    std::string GetQueryDbData() const;

                    /**
                     * 设置Query database required or not
                     * @param _queryDbData Query database required or not
                     * 
                     */
                    void SetQueryDbData(const std::string& _queryDbData);

                    /**
                     * 判断参数 QueryDbData 是否已赋值
                     * @return QueryDbData 是否已赋值
                     * 
                     */
                    bool QueryDbDataHasBeenSet() const;

                    /**
                     * 获取Data table Id
                     * @return TableId Data table Id
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Data table Id
                     * @param _tableId Data table Id
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     * @return TableType The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     * 
                     */
                    uint64_t GetTableType() const;

                    /**
                     * 设置The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     * @param _tableType The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     * 
                     */
                    void SetTableType(const uint64_t& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                private:

                    /**
                     * data source Id
                     */
                    int64_t m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * sql content
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * Project ID.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * whether
                     */
                    bool m_asyncRequest;
                    bool m_asyncRequestHasBeenSet;

                    /**
                     * async transaction id
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * 11
                     */
                    std::vector<ParamCreateDTO> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * DLC extension parameter
                     */
                    std::string m_dlcExtInfo;
                    bool m_dlcExtInfoHasBeenSet;

                    /**
                     * Query database required or not
                     */
                    std::string m_queryDbData;
                    bool m_queryDbDataHasBeenSet;

                    /**
                     * Data table Id
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     */
                    uint64_t m_tableType;
                    bool m_tableTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBESOURCEFIELDLISTREQUEST_H_
