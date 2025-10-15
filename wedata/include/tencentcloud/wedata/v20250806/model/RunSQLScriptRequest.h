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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RUNSQLSCRIPTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RUNSQLSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RunSQLScript request structure.
                */
                class RunSQLScriptRequest : public AbstractModel
                {
                public:
                    RunSQLScriptRequest();
                    ~RunSQLScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Script id.
                     * @return ScriptId Script id.
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置Script id.
                     * @param _scriptId Script id.
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
                     * 获取Script content. executed by default if not transmitted. requires Base64 encoding if transmitted.
                     * @return ScriptContent Script content. executed by default if not transmitted. requires Base64 encoding if transmitted.
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Script content. executed by default if not transmitted. requires Base64 encoding if transmitted.
                     * @param _scriptContent Script content. executed by default if not transmitted. requires Base64 encoding if transmitted.
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
                     * 获取Advanced running parameter, JSON format base64 encode.
                     * @return Params Advanced running parameter, JSON format base64 encode.
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Advanced running parameter, JSON format base64 encode.
                     * @param _params Advanced running parameter, JSON format base64 encode.
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * Script id.
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Script content. executed by default if not transmitted. requires Base64 encoding if transmitted.
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * Advanced running parameter, JSON format base64 encode.
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RUNSQLSCRIPTREQUEST_H_
