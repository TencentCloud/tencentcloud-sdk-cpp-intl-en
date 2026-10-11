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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SearchItem.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeClusterNodes request structure.
                */
                class DescribeClusterNodesRequest : public AbstractModel
                {
                public:
                    DescribeClusterNodesRequest();
                    ~DescribeClusterNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID, such as emr-xxxxxxxx.
                     * @return InstanceId Cluster ID, such as emr-xxxxxxxx.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID, such as emr-xxxxxxxx.
                     * @param _instanceId Cluster ID, such as emr-xxxxxxxx.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Node identifier. Valid values:
<li>all: indicates retrieving all types of nodes, except CDB information.</li>
<li>master: indicates retrieving Master node information.</li>
<li>core: indicates retrieving Core node information.</li>
<li>task: indicates retrieving Task node information.</li>
<li>common: indicates retrieving Common node information.</li>
<li>router: indicates retrieving Router node information.</li>
<li>db: indicates retrieving CDB information in the normal status.</li>
<li>recyle: indicates retrieving information of nodes isolated in the recycle bin, including CDB information.</li>
<li>renew: indicates retrieving information of all nodes pending renewal, including CDB information. Auto-renewed nodes will not be returned.</li>
Note: Only the values above are supported currently. Entering other values will result in an error.
                     * @return NodeFlag Node identifier. Valid values:
<li>all: indicates retrieving all types of nodes, except CDB information.</li>
<li>master: indicates retrieving Master node information.</li>
<li>core: indicates retrieving Core node information.</li>
<li>task: indicates retrieving Task node information.</li>
<li>common: indicates retrieving Common node information.</li>
<li>router: indicates retrieving Router node information.</li>
<li>db: indicates retrieving CDB information in the normal status.</li>
<li>recyle: indicates retrieving information of nodes isolated in the recycle bin, including CDB information.</li>
<li>renew: indicates retrieving information of all nodes pending renewal, including CDB information. Auto-renewed nodes will not be returned.</li>
Note: Only the values above are supported currently. Entering other values will result in an error.
                     * 
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置Node identifier. Valid values:
<li>all: indicates retrieving all types of nodes, except CDB information.</li>
<li>master: indicates retrieving Master node information.</li>
<li>core: indicates retrieving Core node information.</li>
<li>task: indicates retrieving Task node information.</li>
<li>common: indicates retrieving Common node information.</li>
<li>router: indicates retrieving Router node information.</li>
<li>db: indicates retrieving CDB information in the normal status.</li>
<li>recyle: indicates retrieving information of nodes isolated in the recycle bin, including CDB information.</li>
<li>renew: indicates retrieving information of all nodes pending renewal, including CDB information. Auto-renewed nodes will not be returned.</li>
Note: Only the values above are supported currently. Entering other values will result in an error.
                     * @param _nodeFlag Node identifier. Valid values:
<li>all: indicates retrieving all types of nodes, except CDB information.</li>
<li>master: indicates retrieving Master node information.</li>
<li>core: indicates retrieving Core node information.</li>
<li>task: indicates retrieving Task node information.</li>
<li>common: indicates retrieving Common node information.</li>
<li>router: indicates retrieving Router node information.</li>
<li>db: indicates retrieving CDB information in the normal status.</li>
<li>recyle: indicates retrieving information of nodes isolated in the recycle bin, including CDB information.</li>
<li>renew: indicates retrieving information of all nodes pending renewal, including CDB information. Auto-renewed nodes will not be returned.</li>
Note: Only the values above are supported currently. Entering other values will result in an error.
                     * 
                     */
                    void SetNodeFlag(const std::string& _nodeFlag);

                    /**
                     * 判断参数 NodeFlag 是否已赋值
                     * @return NodeFlag 是否已赋值
                     * 
                     */
                    bool NodeFlagHasBeenSet() const;

                    /**
                     * 获取Whether to carry CDB information when all node information is exported in CSV format.
                     * @return ExportDb Whether to carry CDB information when all node information is exported in CSV format.
                     * 
                     */
                    bool GetExportDb() const;

                    /**
                     * 设置Whether to carry CDB information when all node information is exported in CSV format.
                     * @param _exportDb Whether to carry CDB information when all node information is exported in CSV format.
                     * 
                     */
                    void SetExportDb(const bool& _exportDb);

                    /**
                     * 判断参数 ExportDb 是否已赋值
                     * @return ExportDb 是否已赋值
                     * 
                     */
                    bool ExportDbHasBeenSet() const;

                    /**
                     * 获取Page number. The default value is 0, indicating the first page.
                     * @return Offset Page number. The default value is 0, indicating the first page.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. The default value is 0, indicating the first page.
                     * @param _offset Page number. The default value is 0, indicating the first page.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of items returned per page. Default value: 100. Maximum value: 100.
If both offset and limit are not set, or both are set to 0, all data will be returned.
                     * @return Limit Number of items returned per page. Default value: 100. Maximum value: 100.
If both offset and limit are not set, or both are set to 0, all data will be returned.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items returned per page. Default value: 100. Maximum value: 100.
If both offset and limit are not set, or both are set to 0, all data will be returned.
                     * @param _limit Number of items returned per page. Default value: 100. Maximum value: 100.
If both offset and limit are not set, or both are set to 0, all data will be returned.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Resource type. Valid values: all (default), host, and pod.
                     * @return HardwareResourceType Resource type. Valid values: all (default), host, and pod.
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置Resource type. Valid values: all (default), host, and pod.
                     * @param _hardwareResourceType Resource type. Valid values: all (default), host, and pod.
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                    /**
                     * 获取Searchable fields.
                     * @return SearchFields Searchable fields.
                     * 
                     */
                    std::vector<SearchItem> GetSearchFields() const;

                    /**
                     * 设置Searchable fields.
                     * @param _searchFields Searchable fields.
                     * 
                     */
                    void SetSearchFields(const std::vector<SearchItem>& _searchFields);

                    /**
                     * 判断参数 SearchFields 是否已赋值
                     * @return SearchFields 是否已赋值
                     * 
                     */
                    bool SearchFieldsHasBeenSet() const;

                    /**
                     * 获取Sorting field.
                     * @return OrderField Sorting field.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field.
                     * @param _orderField Sorting field.
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     * @return Asc Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     * 
                     */
                    int64_t GetAsc() const;

                    /**
                     * 设置Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     * @param _asc Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     * 
                     */
                    void SetAsc(const int64_t& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                private:

                    /**
                     * Cluster ID, such as emr-xxxxxxxx.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node identifier. Valid values:
<li>all: indicates retrieving all types of nodes, except CDB information.</li>
<li>master: indicates retrieving Master node information.</li>
<li>core: indicates retrieving Core node information.</li>
<li>task: indicates retrieving Task node information.</li>
<li>common: indicates retrieving Common node information.</li>
<li>router: indicates retrieving Router node information.</li>
<li>db: indicates retrieving CDB information in the normal status.</li>
<li>recyle: indicates retrieving information of nodes isolated in the recycle bin, including CDB information.</li>
<li>renew: indicates retrieving information of all nodes pending renewal, including CDB information. Auto-renewed nodes will not be returned.</li>
Note: Only the values above are supported currently. Entering other values will result in an error.
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * Whether to carry CDB information when all node information is exported in CSV format.
                     */
                    bool m_exportDb;
                    bool m_exportDbHasBeenSet;

                    /**
                     * Page number. The default value is 0, indicating the first page.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items returned per page. Default value: 100. Maximum value: 100.
If both offset and limit are not set, or both are set to 0, all data will be returned.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Resource type. Valid values: all (default), host, and pod.
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * Searchable fields.
                     */
                    std::vector<SearchItem> m_searchFields;
                    bool m_searchFieldsHasBeenSet;

                    /**
                     * Sorting field.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Whether to sort data in ascending order. Valid values: 1 (yes) and 0 (no).
                     */
                    int64_t m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESREQUEST_H_
