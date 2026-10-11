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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILENODE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileMeta.h>
#include <tencentcloud/databuddy/v20260715/model/UserInfo.h>
#include <tencentcloud/databuddy/v20260715/model/GitRepoConfig.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * File node
                */
                class FileNode : public AbstractModel
                {
                public:
                    FileNode();
                    ~FileNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Current node</p>
                     * @return Node <p>Current node</p>
                     * 
                     */
                    FileMeta GetNode() const;

                    /**
                     * 设置<p>Current node</p>
                     * @param _node <p>Current node</p>
                     * 
                     */
                    void SetNode(const FileMeta& _node);

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取<p>Parent node</p>
                     * @return Parent <p>Parent node</p>
                     * 
                     */
                    FileMeta GetParent() const;

                    /**
                     * 设置<p>Parent node</p>
                     * @param _parent <p>Parent node</p>
                     * 
                     */
                    void SetParent(const FileMeta& _parent);

                    /**
                     * 判断参数 Parent 是否已赋值
                     * @return Parent 是否已赋值
                     * 
                     */
                    bool ParentHasBeenSet() const;

                    /**
                     * 获取<p>Creator</p>
                     * @return Creator <p>Creator</p>
                     * 
                     */
                    UserInfo GetCreator() const;

                    /**
                     * 设置<p>Creator</p>
                     * @param _creator <p>Creator</p>
                     * 
                     */
                    void SetCreator(const UserInfo& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>Owner</p>
                     * @return Owner <p>Owner</p>
                     * 
                     */
                    UserInfo GetOwner() const;

                    /**
                     * 设置<p>Owner</p>
                     * @param _owner <p>Owner</p>
                     * 
                     */
                    void SetOwner(const UserInfo& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取<p>Node type.</p>
                     * @return NodeType <p>Node type.</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Node type.</p>
                     * @param _nodeType <p>Node type.</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Original path</p>
                     * @return OriginPath <p>Original path</p>
                     * 
                     */
                    std::string GetOriginPath() const;

                    /**
                     * 设置<p>Original path</p>
                     * @param _originPath <p>Original path</p>
                     * 
                     */
                    void SetOriginPath(const std::string& _originPath);

                    /**
                     * 判断参数 OriginPath 是否已赋值
                     * @return OriginPath 是否已赋值
                     * 
                     */
                    bool OriginPathHasBeenSet() const;

                    /**
                     * 获取<p>Recycle time</p>
                     * @return DeleteTime <p>Recycle time</p>
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置<p>Recycle time</p>
                     * @param _deleteTime <p>Recycle time</p>
                     * 
                     */
                    void SetDeleteTime(const std::string& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>File git configuration.</p>
                     * @return GitConfig <p>File git configuration.</p>
                     * 
                     */
                    GitRepoConfig GetGitConfig() const;

                    /**
                     * 设置<p>File git configuration.</p>
                     * @param _gitConfig <p>File git configuration.</p>
                     * 
                     */
                    void SetGitConfig(const GitRepoConfig& _gitConfig);

                    /**
                     * 判断参数 GitConfig 是否已赋值
                     * @return GitConfig 是否已赋值
                     * 
                     */
                    bool GitConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Current node</p>
                     */
                    FileMeta m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * <p>Parent node</p>
                     */
                    FileMeta m_parent;
                    bool m_parentHasBeenSet;

                    /**
                     * <p>Creator</p>
                     */
                    UserInfo m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>Owner</p>
                     */
                    UserInfo m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>Node type.</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Original path</p>
                     */
                    std::string m_originPath;
                    bool m_originPathHasBeenSet;

                    /**
                     * <p>Recycle time</p>
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <p>File git configuration.</p>
                     */
                    GitRepoConfig m_gitConfig;
                    bool m_gitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILENODE_H_
