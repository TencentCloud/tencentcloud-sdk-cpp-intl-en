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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATECODEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATECODEFILEREQUEST_H_

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
                * CreateCodeFile request structure.
                */
                class CreateCodeFileRequest : public AbstractModel
                {
                public:
                    CreateCodeFileRequest();
                    ~CreateCodeFileRequest() = default;
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
                     * 获取Filename of the code file.
                     * @return CodeFileName Filename of the code file.
                     * 
                     */
                    std::string GetCodeFileName() const;

                    /**
                     * 设置Filename of the code file.
                     * @param _codeFileName Filename of the code file.
                     * 
                     */
                    void SetCodeFileName(const std::string& _codeFileName);

                    /**
                     * 判断参数 CodeFileName 是否已赋值
                     * @return CodeFileName 是否已赋值
                     * 
                     */
                    bool CodeFileNameHasBeenSet() const;

                    /**
                     * 获取Parent folder path, such as /aaa/bbb/ccc. the path must start with a slash. use / for the root directory.
                     * @return ParentFolderPath Parent folder path, such as /aaa/bbb/ccc. the path must start with a slash. use / for the root directory.
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Parent folder path, such as /aaa/bbb/ccc. the path must start with a slash. use / for the root directory.
                     * @param _parentFolderPath Parent folder path, such as /aaa/bbb/ccc. the path must start with a slash. use / for the root directory.
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
                     * 获取Specifies the code file content.
                     * @return CodeFileContent Specifies the code file content.
                     * 
                     */
                    std::string GetCodeFileContent() const;

                    /**
                     * 设置Specifies the code file content.
                     * @param _codeFileContent Specifies the code file content.
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
                     * Filename of the code file.
                     */
                    std::string m_codeFileName;
                    bool m_codeFileNameHasBeenSet;

                    /**
                     * Parent folder path, such as /aaa/bbb/ccc. the path must start with a slash. use / for the root directory.
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Specifies the code file configuration.
                     */
                    CodeFileConfig m_codeFileConfig;
                    bool m_codeFileConfigHasBeenSet;

                    /**
                     * Specifies the code file content.
                     */
                    std::string m_codeFileContent;
                    bool m_codeFileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATECODEFILEREQUEST_H_
