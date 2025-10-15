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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATESQLSCRIPTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATESQLSCRIPTREQUEST_H_

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
                * UpdateSQLScript request structure.
                */
                class UpdateSQLScriptRequest : public AbstractModel
                {
                public:
                    UpdateSQLScriptRequest();
                    ~UpdateSQLScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Script Id.
                     * @return ScriptId Script Id.
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置Script Id.
                     * @param _scriptId Script Id.
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
                     * 获取Specifies the script content, needs to be Base64 encoded.
                     * @return ScriptContent Specifies the script content, needs to be Base64 encoded.
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Specifies the script content, needs to be Base64 encoded.
                     * @param _scriptContent Specifies the script content, needs to be Base64 encoded.
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                private:

                    /**
                     * Script Id.
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Specifies the script configuration for data exploration.
                     */
                    SQLScriptConfig m_scriptConfig;
                    bool m_scriptConfigHasBeenSet;

                    /**
                     * Specifies the script content, needs to be Base64 encoded.
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATESQLSCRIPTREQUEST_H_
