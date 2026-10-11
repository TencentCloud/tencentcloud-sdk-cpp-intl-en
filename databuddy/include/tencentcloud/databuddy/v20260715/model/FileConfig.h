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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILECONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileOutputConf.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * File operation configuration.
                */
                class FileConfig : public AbstractModel
                {
                public:
                    FileConfig();
                    ~FileConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Advanced running parameter, used for variable replacement, map-json String,String</p>
                     * @return Params <p>Advanced running parameter, used for variable replacement, map-json String,String</p>
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置<p>Advanced running parameter, used for variable replacement, map-json String,String</p>
                     * @param _params <p>Advanced running parameter, used for variable replacement, map-json String,String</p>
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取<p>Execution resource ID. Source: ResourceId returned by the ListComputeResources API</p>
                     * @return ResourceId <p>Execution resource ID. Source: ResourceId returned by the ListComputeResources API</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Execution resource ID. Source: ResourceId returned by the ListComputeResources API</p>
                     * @param _resourceId <p>Execution resource ID. Source: ResourceId returned by the ListComputeResources API</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Default catalog</p>
                     * @return DefaultCatalog <p>Default catalog</p>
                     * 
                     */
                    std::string GetDefaultCatalog() const;

                    /**
                     * 设置<p>Default catalog</p>
                     * @param _defaultCatalog <p>Default catalog</p>
                     * 
                     */
                    void SetDefaultCatalog(const std::string& _defaultCatalog);

                    /**
                     * 判断参数 DefaultCatalog 是否已赋值
                     * @return DefaultCatalog 是否已赋值
                     * 
                     */
                    bool DefaultCatalogHasBeenSet() const;

                    /**
                     * 获取<p>Default schema</p>
                     * @return DefaultSchema <p>Default schema</p>
                     * 
                     */
                    std::string GetDefaultSchema() const;

                    /**
                     * 设置<p>Default schema</p>
                     * @param _defaultSchema <p>Default schema</p>
                     * 
                     */
                    void SetDefaultSchema(const std::string& _defaultSchema);

                    /**
                     * 判断参数 DefaultSchema 是否已赋值
                     * @return DefaultSchema 是否已赋值
                     * 
                     */
                    bool DefaultSchemaHasBeenSet() const;

                    /**
                     * 获取<p>Advanced configuration, JSON string</p>
                     * @return AdvanceConfig <p>Advanced configuration, JSON string</p>
                     * 
                     */
                    std::string GetAdvanceConfig() const;

                    /**
                     * 设置<p>Advanced configuration, JSON string</p>
                     * @param _advanceConfig <p>Advanced configuration, JSON string</p>
                     * 
                     */
                    void SetAdvanceConfig(const std::string& _advanceConfig);

                    /**
                     * 判断参数 AdvanceConfig 是否已赋值
                     * @return AdvanceConfig 是否已赋值
                     * 
                     */
                    bool AdvanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameter, JSON string</p>
                     * @return ExtraParams <p>Extended parameter, JSON string</p>
                     * 
                     */
                    std::string GetExtraParams() const;

                    /**
                     * 设置<p>Extended parameter, JSON string</p>
                     * @param _extraParams <p>Extended parameter, JSON string</p>
                     * 
                     */
                    void SetExtraParams(const std::string& _extraParams);

                    /**
                     * 判断参数 ExtraParams 是否已赋值
                     * @return ExtraParams 是否已赋值
                     * 
                     */
                    bool ExtraParamsHasBeenSet() const;

                    /**
                     * 获取<p>Notebook interactive control definition, JSON string</p>
                     * @return Widgets <p>Notebook interactive control definition, JSON string</p>
                     * 
                     */
                    std::string GetWidgets() const;

                    /**
                     * 设置<p>Notebook interactive control definition, JSON string</p>
                     * @param _widgets <p>Notebook interactive control definition, JSON string</p>
                     * 
                     */
                    void SetWidgets(const std::string& _widgets);

                    /**
                     * 判断参数 Widgets 是否已赋值
                     * @return Widgets 是否已赋值
                     * 
                     */
                    bool WidgetsHasBeenSet() const;

                    /**
                     * 获取<p>Output configuration of each cell. Returned only in Get output parameters; input parameters are ignored.</p>
                     * @return OutputConf <p>Output configuration of each cell. Returned only in Get output parameters; input parameters are ignored.</p>
                     * 
                     */
                    std::vector<FileOutputConf> GetOutputConf() const;

                    /**
                     * 设置<p>Output configuration of each cell. Returned only in Get output parameters; input parameters are ignored.</p>
                     * @param _outputConf <p>Output configuration of each cell. Returned only in Get output parameters; input parameters are ignored.</p>
                     * 
                     */
                    void SetOutputConf(const std::vector<FileOutputConf>& _outputConf);

                    /**
                     * 判断参数 OutputConf 是否已赋值
                     * @return OutputConf 是否已赋值
                     * 
                     */
                    bool OutputConfHasBeenSet() const;

                    /**
                     * 获取<p>SQL script grammar tag</p>
                     * @return SqlSyntax <p>SQL script grammar tag</p>
                     * 
                     */
                    std::string GetSqlSyntax() const;

                    /**
                     * 设置<p>SQL script grammar tag</p>
                     * @param _sqlSyntax <p>SQL script grammar tag</p>
                     * 
                     */
                    void SetSqlSyntax(const std::string& _sqlSyntax);

                    /**
                     * 判断参数 SqlSyntax 是否已赋值
                     * @return SqlSyntax 是否已赋值
                     * 
                     */
                    bool SqlSyntaxHasBeenSet() const;

                    /**
                     * 获取<p>Platform cluster id</p>
                     * @return ClusterId <p>Platform cluster id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Platform cluster id</p>
                     * @param _clusterId <p>Platform cluster id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>The source type of the default Catalog, used to identify which Catalog system the default Catalog belongs to. Selectable. Maximum length: 32. Values: METALAKE - TC Catalog (metadata lake Catalog); SETATS - Setats Catalog. If the value is empty or illegal, the backend falls back to METALAKE.</p>
                     * @return DefaultCatalogSource <p>The source type of the default Catalog, used to identify which Catalog system the default Catalog belongs to. Selectable. Maximum length: 32. Values: METALAKE - TC Catalog (metadata lake Catalog); SETATS - Setats Catalog. If the value is empty or illegal, the backend falls back to METALAKE.</p>
                     * 
                     */
                    std::string GetDefaultCatalogSource() const;

                    /**
                     * 设置<p>The source type of the default Catalog, used to identify which Catalog system the default Catalog belongs to. Selectable. Maximum length: 32. Values: METALAKE - TC Catalog (metadata lake Catalog); SETATS - Setats Catalog. If the value is empty or illegal, the backend falls back to METALAKE.</p>
                     * @param _defaultCatalogSource <p>The source type of the default Catalog, used to identify which Catalog system the default Catalog belongs to. Selectable. Maximum length: 32. Values: METALAKE - TC Catalog (metadata lake Catalog); SETATS - Setats Catalog. If the value is empty or illegal, the backend falls back to METALAKE.</p>
                     * 
                     */
                    void SetDefaultCatalogSource(const std::string& _defaultCatalogSource);

                    /**
                     * 判断参数 DefaultCatalogSource 是否已赋值
                     * @return DefaultCatalogSource 是否已赋值
                     * 
                     */
                    bool DefaultCatalogSourceHasBeenSet() const;

                private:

                    /**
                     * <p>Advanced running parameter, used for variable replacement, map-json String,String</p>
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * <p>Execution resource ID. Source: ResourceId returned by the ListComputeResources API</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Default catalog</p>
                     */
                    std::string m_defaultCatalog;
                    bool m_defaultCatalogHasBeenSet;

                    /**
                     * <p>Default schema</p>
                     */
                    std::string m_defaultSchema;
                    bool m_defaultSchemaHasBeenSet;

                    /**
                     * <p>Advanced configuration, JSON string</p>
                     */
                    std::string m_advanceConfig;
                    bool m_advanceConfigHasBeenSet;

                    /**
                     * <p>Extended parameter, JSON string</p>
                     */
                    std::string m_extraParams;
                    bool m_extraParamsHasBeenSet;

                    /**
                     * <p>Notebook interactive control definition, JSON string</p>
                     */
                    std::string m_widgets;
                    bool m_widgetsHasBeenSet;

                    /**
                     * <p>Output configuration of each cell. Returned only in Get output parameters; input parameters are ignored.</p>
                     */
                    std::vector<FileOutputConf> m_outputConf;
                    bool m_outputConfHasBeenSet;

                    /**
                     * <p>SQL script grammar tag</p>
                     */
                    std::string m_sqlSyntax;
                    bool m_sqlSyntaxHasBeenSet;

                    /**
                     * <p>Platform cluster id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>The source type of the default Catalog, used to identify which Catalog system the default Catalog belongs to. Selectable. Maximum length: 32. Values: METALAKE - TC Catalog (metadata lake Catalog); SETATS - Setats Catalog. If the value is empty or illegal, the backend falls back to METALAKE.</p>
                     */
                    std::string m_defaultCatalogSource;
                    bool m_defaultCatalogSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILECONFIG_H_
