/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLEGROUPREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TagInfoUnit.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateTableGroup request structure.
                */
                class CreateTableGroupRequest : public AbstractModel
                {
                public:
                    CreateTableGroupRequest();
                    ~CreateTableGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster where a table group resides
                     * @return ClusterId ID of the cluster where a table group resides
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where a table group resides
                     * @param ClusterId ID of the cluster where a table group resides
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Table group name, which can contain up to 32 letters and digits
                     * @return TableGroupName Table group name, which can contain up to 32 letters and digits
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置Table group name, which can contain up to 32 letters and digits
                     * @param TableGroupName Table group name, which can contain up to 32 letters and digits
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     */
                    bool TableGroupNameHasBeenSet() const;

                    /**
                     * 获取Table group ID, which can be customized but must be unique in one cluster. If it is not specified, the auto-increment mode will be used.
                     * @return TableGroupId Table group ID, which can be customized but must be unique in one cluster. If it is not specified, the auto-increment mode will be used.
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置Table group ID, which can be customized but must be unique in one cluster. If it is not specified, the auto-increment mode will be used.
                     * @param TableGroupId Table group ID, which can be customized but must be unique in one cluster. If it is not specified, the auto-increment mode will be used.
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ResourceTags 
                     */
                    std::vector<TagInfoUnit> GetResourceTags() const;

                    /**
                     * 设置
                     * @param ResourceTags 
                     */
                    void SetResourceTags(const std::vector<TagInfoUnit>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster where a table group resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Table group name, which can contain up to 32 letters and digits
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                    /**
                     * Table group ID, which can be customized but must be unique in one cluster. If it is not specified, the auto-increment mode will be used.
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<TagInfoUnit> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLEGROUPREQUEST_H_
