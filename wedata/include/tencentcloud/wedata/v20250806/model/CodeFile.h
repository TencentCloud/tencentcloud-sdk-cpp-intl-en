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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEFILE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Explore data script business processing entity.
                */
                class CodeFile : public AbstractModel
                {
                public:
                    CodeFile();
                    ~CodeFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Script ID


                     * @return CodeFileId Script ID


                     * 
                     */
                    std::string GetCodeFileId() const;

                    /**
                     * 设置Script ID


                     * @param _codeFileId Script ID


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
                     * 获取Script name.

                     * @return CodeFileName Script name.

                     * 
                     */
                    std::string GetCodeFileName() const;

                    /**
                     * 设置Script name.

                     * @param _codeFileName Script name.

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
                     * 获取Specifies the script owner uin.

                     * @return OwnerUin Specifies the script owner uin.

                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Specifies the script owner uin.

                     * @param _ownerUin Specifies the script owner uin.

                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Specifies the script configuration.

                     * @return CodeFileConfig Specifies the script configuration.

                     * 
                     */
                    CodeFileConfig GetCodeFileConfig() const;

                    /**
                     * 设置Specifies the script configuration.

                     * @param _codeFileConfig Specifies the script configuration.

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
                     * 获取Specifies the script content.

                     * @return CodeFileContent Specifies the script content.

                     * 
                     */
                    std::string GetCodeFileContent() const;

                    /**
                     * 设置Specifies the script content.

                     * @param _codeFileContent Specifies the script content.

                     * 
                     */
                    void SetCodeFileContent(const std::string& _codeFileContent);

                    /**
                     * 判断参数 CodeFileContent 是否已赋值
                     * @return CodeFileContent 是否已赋值
                     * 
                     */
                    bool CodeFileContentHasBeenSet() const;

                    /**
                     * 获取Latest operator.

                     * @return UpdateUserUin Latest operator.

                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置Latest operator.

                     * @param _updateUserUin Latest operator.

                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

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
                     * 获取Update time. format: yyyy-MM-dd hh:MM:ss.
Note: This field may return null, indicating that no valid 
                     * @return UpdateTime Update time. format: yyyy-MM-dd hh:MM:ss.
Note: This field may return null, indicating that no valid 
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time. format: yyyy-MM-dd hh:MM:ss.
Note: This field may return null, indicating that no valid 
                     * @param _updateTime Update time. format: yyyy-MM-dd hh:MM:ss.
Note: This field may return null, indicating that no valid 
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time. format: yyyy-MM-dd hh:MM:ss.

                     * @return CreateTime Creation time. format: yyyy-MM-dd hh:MM:ss.

                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. format: yyyy-MM-dd hh:MM:ss.

                     * @param _createTime Creation time. format: yyyy-MM-dd hh:MM:ss.

                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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

                    /**
                     * 获取Full path of the node, /aaa/bbb/ccc.ipynb, consists of the name of each node.

                     * @return Path Full path of the node, /aaa/bbb/ccc.ipynb, consists of the name of each node.

                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Full path of the node, /aaa/bbb/ccc.ipynb, consists of the name of each node.

                     * @param _path Full path of the node, /aaa/bbb/ccc.ipynb, consists of the name of each node.

                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * Script ID


                     */
                    std::string m_codeFileId;
                    bool m_codeFileIdHasBeenSet;

                    /**
                     * Script name.

                     */
                    std::string m_codeFileName;
                    bool m_codeFileNameHasBeenSet;

                    /**
                     * Specifies the script owner uin.

                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Specifies the script configuration.

                     */
                    CodeFileConfig m_codeFileConfig;
                    bool m_codeFileConfigHasBeenSet;

                    /**
                     * Specifies the script content.

                     */
                    std::string m_codeFileContent;
                    bool m_codeFileContentHasBeenSet;

                    /**
                     * Latest operator.

                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * Project ID.


                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Update time. format: yyyy-MM-dd hh:MM:ss.
Note: This field may return null, indicating that no valid 
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creation time. format: yyyy-MM-dd hh:MM:ss.

                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Access permission: SHARED, PRIVATE.

                     */
                    std::string m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * Full path of the node, /aaa/bbb/ccc.ipynb, consists of the name of each node.

                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEFILE_H_
