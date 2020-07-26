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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLEGROUPTAGSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLEGROUPTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeTableGroupTags request structure.
                */
                class DescribeTableGroupTagsRequest : public AbstractModel
                {
                public:
                    DescribeTableGroupTagsRequest();
                    ~DescribeTableGroupTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the cluster where table group tags need to be queried
                     * @return ClusterId The ID of the cluster where table group tags need to be queried
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The ID of the cluster where table group tags need to be queried
                     * @param ClusterId The ID of the cluster where table group tags need to be queried
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The list of IDs of the table groups whose tags need to be queried
                     * @return TableGroupIds The list of IDs of the table groups whose tags need to be queried
                     */
                    std::vector<std::string> GetTableGroupIds() const;

                    /**
                     * 设置The list of IDs of the table groups whose tags need to be queried
                     * @param TableGroupIds The list of IDs of the table groups whose tags need to be queried
                     */
                    void SetTableGroupIds(const std::vector<std::string>& _tableGroupIds);

                    /**
                     * 判断参数 TableGroupIds 是否已赋值
                     * @return TableGroupIds 是否已赋值
                     */
                    bool TableGroupIdsHasBeenSet() const;

                private:

                    /**
                     * The ID of the cluster where table group tags need to be queried
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The list of IDs of the table groups whose tags need to be queried
                     */
                    std::vector<std::string> m_tableGroupIds;
                    bool m_tableGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETABLEGROUPTAGSREQUEST_H_
