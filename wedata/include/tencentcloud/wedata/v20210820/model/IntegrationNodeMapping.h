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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEMAPPING_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeSchema.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeSchemaMapping.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Integrated Node Mapping
                */
                class IntegrationNodeMapping : public AbstractModel
                {
                public:
                    IntegrationNodeMapping();
                    ~IntegrationNodeMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source Node ID
                     * @return SourceId Source Node ID
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置Source Node ID
                     * @param _sourceId Source Node ID
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取Target Node ID
                     * @return SinkId Target Node ID
                     * 
                     */
                    std::string GetSinkId() const;

                    /**
                     * 设置Target Node ID
                     * @param _sinkId Target Node ID
                     * 
                     */
                    void SetSinkId(const std::string& _sinkId);

                    /**
                     * 判断参数 SinkId 是否已赋值
                     * @return SinkId 是否已赋值
                     * 
                     */
                    bool SinkIdHasBeenSet() const;

                    /**
                     * 获取Source Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceSchema Source Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IntegrationNodeSchema> GetSourceSchema() const;

                    /**
                     * 设置Source Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceSchema Source Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceSchema(const std::vector<IntegrationNodeSchema>& _sourceSchema);

                    /**
                     * 判断参数 SourceSchema 是否已赋值
                     * @return SourceSchema 是否已赋值
                     * 
                     */
                    bool SourceSchemaHasBeenSet() const;

                    /**
                     * 获取Node Schema Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SchemaMappings Node Schema Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IntegrationNodeSchemaMapping> GetSchemaMappings() const;

                    /**
                     * 设置Node Schema Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schemaMappings Node Schema Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchemaMappings(const std::vector<IntegrationNodeSchemaMapping>& _schemaMappings);

                    /**
                     * 判断参数 SchemaMappings 是否已赋值
                     * @return SchemaMappings 是否已赋值
                     * 
                     */
                    bool SchemaMappingsHasBeenSet() const;

                    /**
                     * 获取Node Mapping Extended Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtConfig Node Mapping Extended Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置Node Mapping Extended Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extConfig Node Mapping Extended Information
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

                private:

                    /**
                     * Source Node ID
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * Target Node ID
                     */
                    std::string m_sinkId;
                    bool m_sinkIdHasBeenSet;

                    /**
                     * Source Node Schema
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IntegrationNodeSchema> m_sourceSchema;
                    bool m_sourceSchemaHasBeenSet;

                    /**
                     * Node Schema Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IntegrationNodeSchemaMapping> m_schemaMappings;
                    bool m_schemaMappingsHasBeenSet;

                    /**
                     * Node Mapping Extended Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODEMAPPING_H_
