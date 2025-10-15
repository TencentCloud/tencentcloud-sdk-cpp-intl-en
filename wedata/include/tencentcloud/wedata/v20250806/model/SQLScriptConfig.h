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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLSCRIPTCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLSCRIPTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Data exploration script configuration.
                */
                class SQLScriptConfig : public AbstractModel
                {
                public:
                    SQLScriptConfig();
                    ~SQLScriptConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data source Id.

                     * @return DatasourceId Data source Id.

                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data source Id.

                     * @param _datasourceId Data source Id.

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
                     * 获取Specifies the data source environment.

                     * @return DatasourceEnv Specifies the data source environment.

                     * 
                     */
                    std::string GetDatasourceEnv() const;

                    /**
                     * 设置Specifies the data source environment.

                     * @param _datasourceEnv Specifies the data source environment.

                     * 
                     */
                    void SetDatasourceEnv(const std::string& _datasourceEnv);

                    /**
                     * 判断参数 DatasourceEnv 是否已赋值
                     * @return DatasourceEnv 是否已赋值
                     * 
                     */
                    bool DatasourceEnvHasBeenSet() const;

                    /**
                     * 获取Computational resource.

                     * @return ComputeResource Computational resource.

                     * 
                     */
                    std::string GetComputeResource() const;

                    /**
                     * 设置Computational resource.

                     * @param _computeResource Computational resource.

                     * 
                     */
                    void SetComputeResource(const std::string& _computeResource);

                    /**
                     * 判断参数 ComputeResource 是否已赋值
                     * @return ComputeResource 是否已赋值
                     * 
                     */
                    bool ComputeResourceHasBeenSet() const;

                    /**
                     * 获取Specifies the execution resource group.

                     * @return ExecutorGroupId Specifies the execution resource group.

                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Specifies the execution resource group.

                     * @param _executorGroupId Specifies the execution resource group.

                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取Advanced running parameter variable replacement map-json String,String.

                     * @return Params Advanced running parameter variable replacement map-json String,String.

                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Advanced running parameter variable replacement map-json String,String.

                     * @param _params Advanced running parameter variable replacement map-json String,String.

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
                     * 获取Advanced setting. executes configuration parameters. map-json String,String. use Base64 encode.

                     * @return AdvanceConfig Advanced setting. executes configuration parameters. map-json String,String. use Base64 encode.

                     * 
                     */
                    std::string GetAdvanceConfig() const;

                    /**
                     * 设置Advanced setting. executes configuration parameters. map-json String,String. use Base64 encode.

                     * @param _advanceConfig Advanced setting. executes configuration parameters. map-json String,String. use Base64 encode.

                     * 
                     */
                    void SetAdvanceConfig(const std::string& _advanceConfig);

                    /**
                     * 判断参数 AdvanceConfig 是否已赋值
                     * @return AdvanceConfig 是否已赋值
                     * 
                     */
                    bool AdvanceConfigHasBeenSet() const;

                private:

                    /**
                     * Data source Id.

                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Specifies the data source environment.

                     */
                    std::string m_datasourceEnv;
                    bool m_datasourceEnvHasBeenSet;

                    /**
                     * Computational resource.

                     */
                    std::string m_computeResource;
                    bool m_computeResourceHasBeenSet;

                    /**
                     * Specifies the execution resource group.

                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * Advanced running parameter variable replacement map-json String,String.

                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Advanced setting. executes configuration parameters. map-json String,String. use Base64 encode.

                     */
                    std::string m_advanceConfig;
                    bool m_advanceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLSCRIPTCONFIG_H_
