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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDLCTABLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDLCTABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TableBaseInfo.h>
#include <tencentcloud/dlc/v20210125/model/TColumn.h>
#include <tencentcloud/dlc/v20210125/model/TPartition.h>
#include <tencentcloud/dlc/v20210125/model/Property.h>
#include <tencentcloud/dlc/v20210125/model/ExternalDataConfiguration.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateDLCTable request structure.
                */
                class CreateDLCTableRequest : public AbstractModel
                {
                public:
                    CreateDLCTableRequest();
                    ~CreateDLCTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data table configuration information
                     * @return TableBaseInfo Data table configuration information
                     * 
                     */
                    TableBaseInfo GetTableBaseInfo() const;

                    /**
                     * 设置Data table configuration information
                     * @param _tableBaseInfo Data table configuration information
                     * 
                     */
                    void SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo);

                    /**
                     * 判断参数 TableBaseInfo 是否已赋值
                     * @return TableBaseInfo 是否已赋值
                     * 
                     */
                    bool TableBaseInfoHasBeenSet() const;

                    /**
                     * 获取Table type
                     * @return TableType Table type
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table type
                     * @param _tableType Table type
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取Data table column information
                     * @return Columns Data table column information
                     * 
                     */
                    std::vector<TColumn> GetColumns() const;

                    /**
                     * 设置Data table column information
                     * @param _columns Data table column information
                     * 
                     */
                    void SetColumns(const std::vector<TColumn>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Data table partition information
                     * @return Partitions Data table partition information
                     * 
                     */
                    std::vector<TPartition> GetPartitions() const;

                    /**
                     * 设置Data table partition information
                     * @param _partitions Data table partition information
                     * 
                     */
                    void SetPartitions(const std::vector<TPartition>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Data table attribute information
                     * @return Properties Data table attribute information
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置Data table attribute information
                     * @param _properties Data table attribute information
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取External table configuration information
                     * @return ExternalDataConfiguration External table configuration information
                     * 
                     */
                    ExternalDataConfiguration GetExternalDataConfiguration() const;

                    /**
                     * 设置External table configuration information
                     * @param _externalDataConfiguration External table configuration information
                     * 
                     */
                    void SetExternalDataConfiguration(const ExternalDataConfiguration& _externalDataConfiguration);

                    /**
                     * 判断参数 ExternalDataConfiguration 是否已赋值
                     * @return ExternalDataConfiguration 是否已赋值
                     * 
                     */
                    bool ExternalDataConfigurationHasBeenSet() const;

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
                     * 获取Resource group name
                     * @return ResourceGroupname Resource group name
                     * 
                     */
                    std::string GetResourceGroupname() const;

                    /**
                     * 设置Resource group name
                     * @param _resourceGroupname Resource group name
                     * 
                     */
                    void SetResourceGroupname(const std::string& _resourceGroupname);

                    /**
                     * 判断参数 ResourceGroupname 是否已赋值
                     * @return ResourceGroupname 是否已赋值
                     * 
                     */
                    bool ResourceGroupnameHasBeenSet() const;

                private:

                    /**
                     * Data table configuration information
                     */
                    TableBaseInfo m_tableBaseInfo;
                    bool m_tableBaseInfoHasBeenSet;

                    /**
                     * Table type
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * Data table column information
                     */
                    std::vector<TColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Data table partition information
                     */
                    std::vector<TPartition> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Data table attribute information
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * External table configuration information
                     */
                    ExternalDataConfiguration m_externalDataConfiguration;
                    bool m_externalDataConfigurationHasBeenSet;

                    /**
                     * Engine name
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Resource group name
                     */
                    std::string m_resourceGroupname;
                    bool m_resourceGroupnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDLCTABLEREQUEST_H_
