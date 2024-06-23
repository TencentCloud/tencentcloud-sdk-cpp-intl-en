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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITSQLTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITSQLTASKREQUEST_H_

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
                * SubmitSqlTask request structure.
                */
                class SubmitSqlTaskRequest : public AbstractModel
                {
                public:
                    SubmitSqlTaskRequest();
                    ~SubmitSqlTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database Type
                     * @return DatabaseType Database Type
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置Database Type
                     * @param _databaseType Database Type
                     * 
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Data Source ID
                     * @return DatasourceId Data Source ID
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置Data Source ID
                     * @param _datasourceId Data Source ID
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Resource Group ID
                     * @return GroupId Resource Group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Resource Group ID
                     * @param _groupId Resource Group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Script File ID
                     * @return ScriptId Script File ID
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置Script File ID
                     * @param _scriptId Script File ID
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Execution Engine Instance ID
                     * @return EngineId Execution Engine Instance ID
                     * 
                     */
                    std::string GetEngineId() const;

                    /**
                     * 设置Execution Engine Instance ID
                     * @param _engineId Execution Engine Instance ID
                     * 
                     */
                    void SetEngineId(const std::string& _engineId);

                    /**
                     * 判断参数 EngineId 是否已赋值
                     * @return EngineId 是否已赋值
                     * 
                     */
                    bool EngineIdHasBeenSet() const;

                    /**
                     * 获取Script Content
                     * @return ScriptContent Script Content
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Script Content
                     * @param _scriptContent Script Content
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取Resource Queue
                     * @return ResourceQueue Resource Queue
                     * 
                     */
                    std::string GetResourceQueue() const;

                    /**
                     * 设置Resource Queue
                     * @param _resourceQueue Resource Queue
                     * 
                     */
                    void SetResourceQueue(const std::string& _resourceQueue);

                    /**
                     * 判断参数 ResourceQueue 是否已赋值
                     * @return ResourceQueue 是否已赋值
                     * 
                     */
                    bool ResourceQueueHasBeenSet() const;

                    /**
                     * 获取Database Type
                     * @return DatasourceType Database Type
                     * 
                     */
                    std::string GetDatasourceType() const;

                    /**
                     * 设置Database Type
                     * @param _datasourceType Database Type
                     * 
                     */
                    void SetDatasourceType(const std::string& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取Compute Resource Name
                     * @return ComputeResource Compute Resource Name
                     * 
                     */
                    std::string GetComputeResource() const;

                    /**
                     * 设置Compute Resource Name
                     * @param _computeResource Compute Resource Name
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
                     * 获取Advanced Running Parameters
                     * @return RunParams Advanced Running Parameters
                     * 
                     */
                    std::string GetRunParams() const;

                    /**
                     * 设置Advanced Running Parameters
                     * @param _runParams Advanced Running Parameters
                     * 
                     */
                    void SetRunParams(const std::string& _runParams);

                    /**
                     * 判断参数 RunParams 是否已赋值
                     * @return RunParams 是否已赋值
                     * 
                     */
                    bool RunParamsHasBeenSet() const;

                    /**
                     * 获取Advanced Settings
                     * @return ConfParams Advanced Settings
                     * 
                     */
                    std::string GetConfParams() const;

                    /**
                     * 设置Advanced Settings
                     * @param _confParams Advanced Settings
                     * 
                     */
                    void SetConfParams(const std::string& _confParams);

                    /**
                     * 判断参数 ConfParams 是否已赋值
                     * @return ConfParams 是否已赋值
                     * 
                     */
                    bool ConfParamsHasBeenSet() const;

                    /**
                     * 获取Whether the script content is Base64 encrypted
                     * @return ScriptEncryption Whether the script content is Base64 encrypted
                     * 
                     */
                    bool GetScriptEncryption() const;

                    /**
                     * 设置Whether the script content is Base64 encrypted
                     * @param _scriptEncryption Whether the script content is Base64 encrypted
                     * 
                     */
                    void SetScriptEncryption(const bool& _scriptEncryption);

                    /**
                     * 判断参数 ScriptEncryption 是否已赋值
                     * @return ScriptEncryption 是否已赋值
                     * 
                     */
                    bool ScriptEncryptionHasBeenSet() const;

                private:

                    /**
                     * Database Type
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * Data Source ID
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Resource Group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Script File ID
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Execution Engine Instance ID
                     */
                    std::string m_engineId;
                    bool m_engineIdHasBeenSet;

                    /**
                     * Script Content
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * Resource Queue
                     */
                    std::string m_resourceQueue;
                    bool m_resourceQueueHasBeenSet;

                    /**
                     * Database Type
                     */
                    std::string m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * Compute Resource Name
                     */
                    std::string m_computeResource;
                    bool m_computeResourceHasBeenSet;

                    /**
                     * Advanced Running Parameters
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * Advanced Settings
                     */
                    std::string m_confParams;
                    bool m_confParamsHasBeenSet;

                    /**
                     * Whether the script content is Base64 encrypted
                     */
                    bool m_scriptEncryption;
                    bool m_scriptEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITSQLTASKREQUEST_H_
