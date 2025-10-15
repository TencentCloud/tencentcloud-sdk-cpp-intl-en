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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETCODEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETCODEFILEREQUEST_H_

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
                * GetCodeFile request structure.
                */
                class GetCodeFileRequest : public AbstractModel
                {
                public:
                    GetCodeFileRequest();
                    ~GetCodeFileRequest() = default;
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
                     * 获取true: return file content and configuration. false: only return configuration message. default false.
                     * @return IncludeContent true: return file content and configuration. false: only return configuration message. default false.
                     * 
                     */
                    bool GetIncludeContent() const;

                    /**
                     * 设置true: return file content and configuration. false: only return configuration message. default false.
                     * @param _includeContent true: return file content and configuration. false: only return configuration message. default false.
                     * 
                     */
                    void SetIncludeContent(const bool& _includeContent);

                    /**
                     * 判断参数 IncludeContent 是否已赋值
                     * @return IncludeContent 是否已赋值
                     * 
                     */
                    bool IncludeContentHasBeenSet() const;

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
                     * true: return file content and configuration. false: only return configuration message. default false.
                     */
                    bool m_includeContent;
                    bool m_includeContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETCODEFILEREQUEST_H_
