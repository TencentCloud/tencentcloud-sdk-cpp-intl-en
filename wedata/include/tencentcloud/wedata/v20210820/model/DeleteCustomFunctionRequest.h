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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETECUSTOMFUNCTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETECUSTOMFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DeleteCustomFunction request structure.
                */
                class DeleteCustomFunctionRequest : public AbstractModel
                {
                public:
                    DeleteCustomFunctionRequest();
                    ~DeleteCustomFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster Instance ID
                     * @return ClusterIdentifier Cluster Instance ID
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置Cluster Instance ID
                     * @param _clusterIdentifier Cluster Instance ID
                     * 
                     */
                    void SetClusterIdentifier(const std::string& _clusterIdentifier);

                    /**
                     * 判断参数 ClusterIdentifier 是否已赋值
                     * @return ClusterIdentifier 是否已赋值
                     * 
                     */
                    bool ClusterIdentifierHasBeenSet() const;

                    /**
                     * 获取Function ID
                     * @return FunctionId Function ID
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID
                     * @param _functionId Function ID
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Project ID, required
                     * @return ProjectId Project ID, required
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID, required
                     * @param _projectId Project ID, required
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Function Name
                     * @return FunctionName Function Name
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function Name
                     * @param _functionName Function Name
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Function Type, HIVE, SPARK, DLC, CDW_POSTGRESQL
                     * @return FunctionType Function Type, HIVE, SPARK, DLC, CDW_POSTGRESQL
                     * 
                     */
                    std::string GetFunctionType() const;

                    /**
                     * 设置Function Type, HIVE, SPARK, DLC, CDW_POSTGRESQL
                     * @param _functionType Function Type, HIVE, SPARK, DLC, CDW_POSTGRESQL
                     * 
                     */
                    void SetFunctionType(const std::string& _functionType);

                    /**
                     * 判断参数 FunctionType 是否已赋值
                     * @return FunctionType 是否已赋值
                     * 
                     */
                    bool FunctionTypeHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return DatabaseName Database name
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name
                     * @param _databaseName Database name
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Pattern name
                     * @return SchemaName Pattern name
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Pattern name
                     * @param _schemaName Pattern name
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Function Command Format
                     * @return CommandFormat Function Command Format
                     * 
                     */
                    std::string GetCommandFormat() const;

                    /**
                     * 设置Function Command Format
                     * @param _commandFormat Function Command Format
                     * 
                     */
                    void SetCommandFormat(const std::string& _commandFormat);

                    /**
                     * 判断参数 CommandFormat 是否已赋值
                     * @return CommandFormat 是否已赋值
                     * 
                     */
                    bool CommandFormatHasBeenSet() const;

                private:

                    /**
                     * Cluster Instance ID
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * Function ID
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Project ID, required
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Function Name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function Type, HIVE, SPARK, DLC, CDW_POSTGRESQL
                     */
                    std::string m_functionType;
                    bool m_functionTypeHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Pattern name
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Function Command Format
                     */
                    std::string m_commandFormat;
                    bool m_commandFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETECUSTOMFUNCTIONREQUEST_H_
