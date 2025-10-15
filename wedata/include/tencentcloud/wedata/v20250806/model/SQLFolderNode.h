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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLFOLDERNODE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLFOLDERNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/SQLFolderNode.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * SQL script file tree node.
                */
                class SQLFolderNode : public AbstractModel
                {
                public:
                    SQLFolderNode();
                    ~SQLFolderNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier


                     * @return Id Unique identifier


                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique identifier


                     * @param _id Unique identifier


                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Name

                     * @return Name Name

                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name

                     * @param _name Name

                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取folder type, script type.

                     * @return Type folder type, script type.

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置folder type, script type.

                     * @param _type folder type, script type.

                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

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
                     * 获取Whether it is a leaf node.


                     * @return IsLeaf Whether it is a leaf node.


                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置Whether it is a leaf node.


                     * @param _isLeaf Whether it is a leaf node.


                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取Business parameters	

                     * @return Params Business parameters	

                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Business parameters	

                     * @param _params Business parameters	

                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Permission scope: SHARED, PRIVATE.

                     * @return AccessScope Permission scope: SHARED, PRIVATE.

                     * 
                     */
                    std::string GetAccessScope() const;

                    /**
                     * 设置Permission scope: SHARED, PRIVATE.

                     * @param _accessScope Permission scope: SHARED, PRIVATE.

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
                     * 获取Node path.

                     * @return Path Node path.

                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Node path.

                     * @param _path Node path.

                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Creator

                     * @return CreateUserUin Creator

                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator

                     * @param _createUserUin Creator

                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Specifies the permission of the current user for nodes.	

                     * @return NodePermission Specifies the permission of the current user for nodes.	

                     * 
                     */
                    std::string GetNodePermission() const;

                    /**
                     * 设置Specifies the permission of the current user for nodes.	

                     * @param _nodePermission Specifies the permission of the current user for nodes.	

                     * 
                     */
                    void SetNodePermission(const std::string& _nodePermission);

                    /**
                     * 判断参数 NodePermission 是否已赋值
                     * @return NodePermission 是否已赋值
                     * 
                     */
                    bool NodePermissionHasBeenSet() const;

                    /**
                     * 获取Sub-node list

                     * @return Children Sub-node list

                     * 
                     */
                    std::vector<SQLFolderNode> GetChildren() const;

                    /**
                     * 设置Sub-node list

                     * @param _children Sub-node list

                     * 
                     */
                    void SetChildren(const std::vector<SQLFolderNode>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取Owner of the file.

                     * @return OwnerUin Owner of the file.

                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner of the file.

                     * @param _ownerUin Owner of the file.

                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * Unique identifier


                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Name

                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * folder type, script type.

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Parent folder path, such as /aaa/bbb/ccc. the path must start with a slash. use / for the root directory.

                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Whether it is a leaf node.


                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * Business parameters	

                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Permission scope: SHARED, PRIVATE.

                     */
                    std::string m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * Node path.

                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Creator

                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Specifies the permission of the current user for nodes.	

                     */
                    std::string m_nodePermission;
                    bool m_nodePermissionHasBeenSet;

                    /**
                     * Sub-node list

                     */
                    std::vector<SQLFolderNode> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * Owner of the file.

                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLFOLDERNODE_H_
