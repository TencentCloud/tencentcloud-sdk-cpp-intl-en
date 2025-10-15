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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATECODEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATECODEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/CodeFileConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateCodeFile request structure.
                */
                class UpdateCodeFileRequest : public AbstractModel
                {
                public:
                    UpdateCodeFileRequest();
                    ~UpdateCodeFileRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Code file ID. the parameter value comes from the CreateCodeFile API response.
                     * @return CodeFileId Code file ID. the parameter value comes from the CreateCodeFile API response.
                     * 
                     */
                    std::string GetCodeFileId() const;

                    /**
                     * 设置Code file ID. the parameter value comes from the CreateCodeFile API response.
                     * @param _codeFileId Code file ID. the parameter value comes from the CreateCodeFile API response.
                     * 
                     */
                    void SetCodeFileId(const std::string& _codeFileId);

                    /**
                     * 判断参数 CodeFileId 是否已赋值
                     * @return CodeFileId 是否已赋值
                     * 
                     */
                    bool CodeFileIdHasBeenSet() const;

                    /**
                     * 获取Specifies the code file configuration.
                     * @return CodeFileConfig Specifies the code file configuration.
                     * 
                     */
                    CodeFileConfig GetCodeFileConfig() const;

                    /**
                     * 设置Specifies the code file configuration.
                     * @param _codeFileConfig Specifies the code file configuration.
                     * 
                     */
                    void SetCodeFileConfig(const CodeFileConfig& _codeFileConfig);

                    /**
                     * 判断参数 CodeFileConfig 是否已赋值
                     * @return CodeFileConfig 是否已赋值
                     * 
                     */
                    bool CodeFileConfigHasBeenSet() const;

                    /**
                     * 获取Specifies the content of the code file.
                     * @return CodeFileContent Specifies the content of the code file.
                     * 
                     */
                    std::string GetCodeFileContent() const;

                    /**
                     * 设置Specifies the content of the code file.
                     * @param _codeFileContent Specifies the content of the code file.
                     * 
                     */
                    void SetCodeFileContent(const std::string& _codeFileContent);

                    /**
                     * 判断参数 CodeFileContent 是否已赋值
                     * @return CodeFileContent 是否已赋值
                     * 
                     */
                    bool CodeFileContentHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Code file ID. the parameter value comes from the CreateCodeFile API response.
                     */
                    std::string m_codeFileId;
                    bool m_codeFileIdHasBeenSet;

                    /**
                     * Specifies the code file configuration.
                     */
                    CodeFileConfig m_codeFileConfig;
                    bool m_codeFileConfigHasBeenSet;

                    /**
                     * Specifies the content of the code file.
                     */
                    std::string m_codeFileContent;
                    bool m_codeFileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATECODEFILEREQUEST_H_
