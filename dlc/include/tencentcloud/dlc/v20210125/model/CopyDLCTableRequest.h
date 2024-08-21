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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COPYDLCTABLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COPYDLCTABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DMSSourceDatabaseInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CopyDLCTable request structure.
                */
                class CopyDLCTableRequest : public AbstractModel
                {
                public:
                    CopyDLCTableRequest();
                    ~CopyDLCTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Description of the source data table name
                     * @return SourceData Description of the source data table name
                     * 
                     */
                    std::vector<DMSSourceDatabaseInfo> GetSourceData() const;

                    /**
                     * 设置Description of the source data table name
                     * @param _sourceData Description of the source data table name
                     * 
                     */
                    void SetSourceData(const std::vector<DMSSourceDatabaseInfo>& _sourceData);

                    /**
                     * 判断参数 SourceData 是否已赋值
                     * @return SourceData 是否已赋值
                     * 
                     */
                    bool SourceDataHasBeenSet() const;

                    /**
                     * 获取Target database name
                     * @return DestinationDatabaseName Target database name
                     * 
                     */
                    std::string GetDestinationDatabaseName() const;

                    /**
                     * 设置Target database name
                     * @param _destinationDatabaseName Target database name
                     * 
                     */
                    void SetDestinationDatabaseName(const std::string& _destinationDatabaseName);

                    /**
                     * 判断参数 DestinationDatabaseName 是否已赋值
                     * @return DestinationDatabaseName 是否已赋值
                     * 
                     */
                    bool DestinationDatabaseNameHasBeenSet() const;

                    /**
                     * 获取Target data table name
                     * @return DestinationTableName Target data table name
                     * 
                     */
                    std::string GetDestinationTableName() const;

                    /**
                     * 设置Target data table name
                     * @param _destinationTableName Target data table name
                     * 
                     */
                    void SetDestinationTableName(const std::string& _destinationTableName);

                    /**
                     * 判断参数 DestinationTableName 是否已赋值
                     * @return DestinationTableName 是否已赋值
                     * 
                     */
                    bool DestinationTableNameHasBeenSet() const;

                    /**
                     * 获取Engine name
                     * @return DataEngineName Engine name
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置Engine name
                     * @param _dataEngineName Engine name
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Whether to create a new table
                     * @return IsCreateTable Whether to create a new table
                     * 
                     */
                    bool GetIsCreateTable() const;

                    /**
                     * 设置Whether to create a new table
                     * @param _isCreateTable Whether to create a new table
                     * 
                     */
                    void SetIsCreateTable(const bool& _isCreateTable);

                    /**
                     * 判断参数 IsCreateTable 是否已赋值
                     * @return IsCreateTable 是否已赋值
                     * 
                     */
                    bool IsCreateTableHasBeenSet() const;

                    /**
                     * 获取Catalog name
                     * @return Catalog Catalog name
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog name
                     * @param _catalog Catalog name
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取Resource group name
                     * @return ResourceGroupName Resource group name
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置Resource group name
                     * @param _resourceGroupName Resource group name
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                private:

                    /**
                     * Description of the source data table name
                     */
                    std::vector<DMSSourceDatabaseInfo> m_sourceData;
                    bool m_sourceDataHasBeenSet;

                    /**
                     * Target database name
                     */
                    std::string m_destinationDatabaseName;
                    bool m_destinationDatabaseNameHasBeenSet;

                    /**
                     * Target data table name
                     */
                    std::string m_destinationTableName;
                    bool m_destinationTableNameHasBeenSet;

                    /**
                     * Engine name
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Whether to create a new table
                     */
                    bool m_isCreateTable;
                    bool m_isCreateTableHasBeenSet;

                    /**
                     * Catalog name
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Resource group name
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COPYDLCTABLEREQUEST_H_
