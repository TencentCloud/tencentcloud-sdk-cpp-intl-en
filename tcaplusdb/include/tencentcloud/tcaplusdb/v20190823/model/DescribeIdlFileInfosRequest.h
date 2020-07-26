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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSREQUEST_H_

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
                * DescribeIdlFileInfos request structure.
                */
                class DescribeIdlFileInfosRequest : public AbstractModel
                {
                public:
                    DescribeIdlFileInfosRequest();
                    ~DescribeIdlFileInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster where a file resides
                     * @return ClusterId ID of the cluster where a file resides
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where a file resides
                     * @param ClusterId ID of the cluster where a file resides
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取ID of the table group where a file resides
                     * @return TableGroupIds ID of the table group where a file resides
                     */
                    std::vector<std::string> GetTableGroupIds() const;

                    /**
                     * 设置ID of the table group where a file resides
                     * @param TableGroupIds ID of the table group where a file resides
                     */
                    void SetTableGroupIds(const std::vector<std::string>& _tableGroupIds);

                    /**
                     * 判断参数 TableGroupIds 是否已赋值
                     * @return TableGroupIds 是否已赋值
                     */
                    bool TableGroupIdsHasBeenSet() const;

                    /**
                     * 获取File ID list
                     * @return IdlFileIds File ID list
                     */
                    std::vector<std::string> GetIdlFileIds() const;

                    /**
                     * 设置File ID list
                     * @param IdlFileIds File ID list
                     */
                    void SetIdlFileIds(const std::vector<std::string>& _idlFileIds);

                    /**
                     * 判断参数 IdlFileIds 是否已赋值
                     * @return IdlFileIds 是否已赋值
                     */
                    bool IdlFileIdsHasBeenSet() const;

                    /**
                     * 获取Query list offset
                     * @return Offset Query list offset
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Query list offset
                     * @param Offset Query list offset
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results in query list
                     * @return Limit Number of returned results in query list
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results in query list
                     * @param Limit Number of returned results in query list
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster where a file resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ID of the table group where a file resides
                     */
                    std::vector<std::string> m_tableGroupIds;
                    bool m_tableGroupIdsHasBeenSet;

                    /**
                     * File ID list
                     */
                    std::vector<std::string> m_idlFileIds;
                    bool m_idlFileIdsHasBeenSet;

                    /**
                     * Query list offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results in query list
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSREQUEST_H_
