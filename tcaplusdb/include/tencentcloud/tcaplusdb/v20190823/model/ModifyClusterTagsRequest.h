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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERTAGSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERTAGSREQUEST_H_

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
                * ModifyClusterTags request structure.
                */
                class ModifyClusterTagsRequest : public AbstractModel
                {
                public:
                    ModifyClusterTagsRequest();
                    ~ModifyClusterTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the cluster whose tags need to be modified
                     * @return ClusterId The ID of the cluster whose tags need to be modified
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The ID of the cluster whose tags need to be modified
                     * @param ClusterId The ID of the cluster whose tags need to be modified
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The list of tags to add or modify
                     * @return ReplaceTags The list of tags to add or modify
                     */
                    std::vector<TagInfoUnit> GetReplaceTags() const;

                    /**
                     * 设置The list of tags to add or modify
                     * @param ReplaceTags The list of tags to add or modify
                     */
                    void SetReplaceTags(const std::vector<TagInfoUnit>& _replaceTags);

                    /**
                     * 判断参数 ReplaceTags 是否已赋值
                     * @return ReplaceTags 是否已赋值
                     */
                    bool ReplaceTagsHasBeenSet() const;

                    /**
                     * 获取Tags to delete
                     * @return DeleteTags Tags to delete
                     */
                    std::vector<TagInfoUnit> GetDeleteTags() const;

                    /**
                     * 设置Tags to delete
                     * @param DeleteTags Tags to delete
                     */
                    void SetDeleteTags(const std::vector<TagInfoUnit>& _deleteTags);

                    /**
                     * 判断参数 DeleteTags 是否已赋值
                     * @return DeleteTags 是否已赋值
                     */
                    bool DeleteTagsHasBeenSet() const;

                private:

                    /**
                     * The ID of the cluster whose tags need to be modified
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The list of tags to add or modify
                     */
                    std::vector<TagInfoUnit> m_replaceTags;
                    bool m_replaceTagsHasBeenSet;

                    /**
                     * Tags to delete
                     */
                    std::vector<TagInfoUnit> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERTAGSREQUEST_H_
