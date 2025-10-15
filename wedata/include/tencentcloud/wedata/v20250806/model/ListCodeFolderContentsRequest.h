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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEFOLDERCONTENTSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEFOLDERCONTENTSREQUEST_H_

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
                * ListCodeFolderContents request structure.
                */
                class ListCodeFolderContentsRequest : public AbstractModel
                {
                public:
                    ListCodeFolderContentsRequest();
                    ~ListCodeFolderContentsRequest() = default;
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
                     * 获取Parent folder path, such as /aaa/bbb/ccc. path header must include a slash. pass / for the root directory.
                     * @return ParentFolderPath Parent folder path, such as /aaa/bbb/ccc. path header must include a slash. pass / for the root directory.
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Parent folder path, such as /aaa/bbb/ccc. path header must include a slash. pass / for the root directory.
                     * @param _parentFolderPath Parent folder path, such as /aaa/bbb/ccc. path header must include a slash. pass / for the root directory.
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
                     * 获取Folder name or code file name.
                     * @return Keyword Folder name or code file name.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Folder name or code file name.
                     * @param _keyword Folder name or code file name.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Queries folder only.
                     * @return OnlyFolderNode Queries folder only.
                     * 
                     */
                    bool GetOnlyFolderNode() const;

                    /**
                     * 设置Queries folder only.
                     * @param _onlyFolderNode Queries folder only.
                     * 
                     */
                    void SetOnlyFolderNode(const bool& _onlyFolderNode);

                    /**
                     * 判断参数 OnlyFolderNode 是否已赋值
                     * @return OnlyFolderNode 是否已赋值
                     * 
                     */
                    bool OnlyFolderNodeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to query only code script created by user themselves.
                     * @return OnlyUserSelfScript Specifies whether to query only code script created by user themselves.
                     * 
                     */
                    bool GetOnlyUserSelfScript() const;

                    /**
                     * 设置Specifies whether to query only code script created by user themselves.
                     * @param _onlyUserSelfScript Specifies whether to query only code script created by user themselves.
                     * 
                     */
                    void SetOnlyUserSelfScript(const bool& _onlyUserSelfScript);

                    /**
                     * 判断参数 OnlyUserSelfScript 是否已赋值
                     * @return OnlyUserSelfScript 是否已赋值
                     * 
                     */
                    bool OnlyUserSelfScriptHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Parent folder path, such as /aaa/bbb/ccc. path header must include a slash. pass / for the root directory.
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Folder name or code file name.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Queries folder only.
                     */
                    bool m_onlyFolderNode;
                    bool m_onlyFolderNodeHasBeenSet;

                    /**
                     * Specifies whether to query only code script created by user themselves.
                     */
                    bool m_onlyUserSelfScript;
                    bool m_onlyUserSelfScriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEFOLDERCONTENTSREQUEST_H_
