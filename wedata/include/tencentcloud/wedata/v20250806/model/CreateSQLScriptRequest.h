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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATESQLSCRIPTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATESQLSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/SQLScriptConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateSQLScript request structure.
                */
                class CreateSQLScriptRequest : public AbstractModel
                {
                public:
                    CreateSQLScriptRequest();
                    ~CreateSQLScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Script name.
                     * @return ScriptName Script name.
                     * 
                     */
                    std::string GetScriptName() const;

                    /**
                     * 设置Script name.
                     * @param _scriptName Script name.
                     * 
                     */
                    void SetScriptName(const std::string& _scriptName);

                    /**
                     * 判断参数 ScriptName 是否已赋值
                     * @return ScriptName 是否已赋值
                     * 
                     */
                    bool ScriptNameHasBeenSet() const;

                    /**
                     * 获取Project ID.

                     * @return ProjectId Project ID.

                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

                     * @param _projectId Project ID.

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
                     * 获取Parent folder path, /aaa/bbb/ccc. root directory is empty string or /.
                     * @return ParentFolderPath Parent folder path, /aaa/bbb/ccc. root directory is empty string or /.
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Parent folder path, /aaa/bbb/ccc. root directory is empty string or /.
                     * @param _parentFolderPath Parent folder path, /aaa/bbb/ccc. root directory is empty string or /.
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取Specifies the script configuration for data exploration.
                     * @return ScriptConfig Specifies the script configuration for data exploration.
                     * 
                     */
                    SQLScriptConfig GetScriptConfig() const;

                    /**
                     * 设置Specifies the script configuration for data exploration.
                     * @param _scriptConfig Specifies the script configuration for data exploration.
                     * 
                     */
                    void SetScriptConfig(const SQLScriptConfig& _scriptConfig);

                    /**
                     * 判断参数 ScriptConfig 是否已赋值
                     * @return ScriptConfig 是否已赋值
                     * 
                     */
                    bool ScriptConfigHasBeenSet() const;

                    /**
                     * 获取Specifies the script content, if any, needs to be base64 encoded.
                     * @return ScriptContent Specifies the script content, if any, needs to be base64 encoded.
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Specifies the script content, if any, needs to be base64 encoded.
                     * @param _scriptContent Specifies the script content, if any, needs to be base64 encoded.
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
                     * 获取Access permission: SHARED, PRIVATE.
                     * @return AccessScope Access permission: SHARED, PRIVATE.
                     * 
                     */
                    std::string GetAccessScope() const;

                    /**
                     * 设置Access permission: SHARED, PRIVATE.
                     * @param _accessScope Access permission: SHARED, PRIVATE.
                     * 
                     */
                    void SetAccessScope(const std::string& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                private:

                    /**
                     * Script name.
                     */
                    std::string m_scriptName;
                    bool m_scriptNameHasBeenSet;

                    /**
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Parent folder path, /aaa/bbb/ccc. root directory is empty string or /.
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Specifies the script configuration for data exploration.
                     */
                    SQLScriptConfig m_scriptConfig;
                    bool m_scriptConfigHasBeenSet;

                    /**
                     * Specifies the script content, if any, needs to be base64 encoded.
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * Access permission: SHARED, PRIVATE.
                     */
                    std::string m_accessScope;
                    bool m_accessScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATESQLSCRIPTREQUEST_H_
