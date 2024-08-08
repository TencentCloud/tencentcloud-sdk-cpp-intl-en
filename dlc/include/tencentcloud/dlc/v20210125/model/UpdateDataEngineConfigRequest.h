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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAENGINECONFIGREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAENGINECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateDataEngineConfig request structure.
                */
                class UpdateDataEngineConfigRequest : public AbstractModel
                {
                public:
                    UpdateDataEngineConfigRequest();
                    ~UpdateDataEngineConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine ID
                     * @return DataEngineIds Engine ID
                     * 
                     */
                    std::vector<std::string> GetDataEngineIds() const;

                    /**
                     * 设置Engine ID
                     * @param _dataEngineIds Engine ID
                     * 
                     */
                    void SetDataEngineIds(const std::vector<std::string>& _dataEngineIds);

                    /**
                     * 判断参数 DataEngineIds 是否已赋值
                     * @return DataEngineIds 是否已赋值
                     * 
                     */
                    bool DataEngineIdsHasBeenSet() const;

                    /**
                     * 获取Commands of engine configuration. UpdateSparkSQLLakefsPath (updates the configuration of the native table) and UpdateSparkSQLResultPath (updates the configuration of the result path) are supported.
                     * @return DataEngineConfigCommand Commands of engine configuration. UpdateSparkSQLLakefsPath (updates the configuration of the native table) and UpdateSparkSQLResultPath (updates the configuration of the result path) are supported.
                     * 
                     */
                    std::string GetDataEngineConfigCommand() const;

                    /**
                     * 设置Commands of engine configuration. UpdateSparkSQLLakefsPath (updates the configuration of the native table) and UpdateSparkSQLResultPath (updates the configuration of the result path) are supported.
                     * @param _dataEngineConfigCommand Commands of engine configuration. UpdateSparkSQLLakefsPath (updates the configuration of the native table) and UpdateSparkSQLResultPath (updates the configuration of the result path) are supported.
                     * 
                     */
                    void SetDataEngineConfigCommand(const std::string& _dataEngineConfigCommand);

                    /**
                     * 判断参数 DataEngineConfigCommand 是否已赋值
                     * @return DataEngineConfigCommand 是否已赋值
                     * 
                     */
                    bool DataEngineConfigCommandHasBeenSet() const;

                    /**
                     * 获取Whether to use lakeFS as result storage
                     * @return UseLakeFs Whether to use lakeFS as result storage
                     * 
                     */
                    bool GetUseLakeFs() const;

                    /**
                     * 设置Whether to use lakeFS as result storage
                     * @param _useLakeFs Whether to use lakeFS as result storage
                     * 
                     */
                    void SetUseLakeFs(const bool& _useLakeFs);

                    /**
                     * 判断参数 UseLakeFs 是否已赋值
                     * @return UseLakeFs 是否已赋值
                     * 
                     */
                    bool UseLakeFsHasBeenSet() const;

                    /**
                     * 获取User-defined result path
                     * @return CustomResultPath User-defined result path
                     * 
                     */
                    std::string GetCustomResultPath() const;

                    /**
                     * 设置User-defined result path
                     * @param _customResultPath User-defined result path
                     * 
                     */
                    void SetCustomResultPath(const std::string& _customResultPath);

                    /**
                     * 判断参数 CustomResultPath 是否已赋值
                     * @return CustomResultPath 是否已赋值
                     * 
                     */
                    bool CustomResultPathHasBeenSet() const;

                private:

                    /**
                     * Engine ID
                     */
                    std::vector<std::string> m_dataEngineIds;
                    bool m_dataEngineIdsHasBeenSet;

                    /**
                     * Commands of engine configuration. UpdateSparkSQLLakefsPath (updates the configuration of the native table) and UpdateSparkSQLResultPath (updates the configuration of the result path) are supported.
                     */
                    std::string m_dataEngineConfigCommand;
                    bool m_dataEngineConfigCommandHasBeenSet;

                    /**
                     * Whether to use lakeFS as result storage
                     */
                    bool m_useLakeFs;
                    bool m_useLakeFsHasBeenSet;

                    /**
                     * User-defined result path
                     */
                    std::string m_customResultPath;
                    bool m_customResultPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAENGINECONFIGREQUEST_H_
