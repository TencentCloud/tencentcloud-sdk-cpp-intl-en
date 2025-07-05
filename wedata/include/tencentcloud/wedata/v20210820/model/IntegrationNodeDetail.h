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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeSchema.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeMapping.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Integration Node Details
                */
                class IntegrationNodeDetail : public AbstractModel
                {
                public:
                    IntegrationNodeDetail();
                    ~IntegrationNodeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Integration Node Name
                     * @return Name Integration Node Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Integration Node Name
                     * @param _name Integration Node Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Integration Node Type
                     * @return NodeType Integration Node Type
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Integration Node Type
                     * @param _nodeType Integration Node Type
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node Data Source Type
                     * @return DataSourceType Node Data Source Type
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置Node Data Source Type
                     * @param _dataSourceType Node Data Source Type
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取Node Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Node Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Node Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Node Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Config Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetConfig() const;

                    /**
                     * 设置Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _config Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConfig(const std::vector<RecordField>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtConfig Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extConfig Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtConfig(const std::vector<RecordField>& _extConfig);

                    /**
                     * 判断参数 ExtConfig 是否已赋值
                     * @return ExtConfig 是否已赋值
                     * 
                     */
                    bool ExtConfigHasBeenSet() const;

                    /**
                     * 获取Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Schema Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IntegrationNodeSchema> GetSchema() const;

                    /**
                     * 设置Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schema Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchema(const std::vector<IntegrationNodeSchema>& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeMapping Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    IntegrationNodeMapping GetNodeMapping() const;

                    /**
                     * 设置Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeMapping Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeMapping(const IntegrationNodeMapping& _nodeMapping);

                    /**
                     * 判断参数 NodeMapping 是否已赋值
                     * @return NodeMapping 是否已赋值
                     * 
                     */
                    bool NodeMappingHasBeenSet() const;

                    /**
                     * 获取owner uin
                     * @return OwnerUin owner uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置owner uin
                     * @param _ownerUin owner uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * Integration Node Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Integration Node Type
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node Data Source Type
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * Node Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Node Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Node Extension Configuration Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IntegrationNodeSchema> m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    IntegrationNodeMapping m_nodeMapping;
                    bool m_nodeMappingHasBeenSet;

                    /**
                     * owner uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEDETAIL_H_
