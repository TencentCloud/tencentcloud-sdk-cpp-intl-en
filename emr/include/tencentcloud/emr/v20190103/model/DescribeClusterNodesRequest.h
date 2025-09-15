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
                     * 获取Cluster instance ID in the format of emr-xxxxxxxx
                     * @return InstanceId Cluster instance ID in the format of emr-xxxxxxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID in the format of emr-xxxxxxxx
                     * @param _instanceId Cluster instance ID in the format of emr-xxxxxxxx
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
                     * 获取Node flag. Valid values:
<li>all: gets the information of nodes in all types except TencentDB information.</li>
<li>master: gets master node information.</li>
<li>core: gets core node information.</li>
<li>task: gets task node information.</li>
<li>common: gets common node information.</li>
<li>router: gets router node information.</li>
<li>db: gets TencentDB information in normal status.</li>
Note: only the above values are supported for the time being. Entering other values will cause errors.
                     * @return NodeFlag Node flag. Valid values:
<li>all: gets the information of nodes in all types except TencentDB information.</li>
<li>master: gets master node information.</li>
<li>core: gets core node information.</li>
<li>task: gets task node information.</li>
<li>common: gets common node information.</li>
<li>router: gets router node information.</li>
<li>db: gets TencentDB information in normal status.</li>
Note: only the above values are supported for the time being. Entering other values will cause errors.
                     * 
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置Node flag. Valid values:
<li>all: gets the information of nodes in all types except TencentDB information.</li>
<li>master: gets master node information.</li>
<li>core: gets core node information.</li>
<li>task: gets task node information.</li>
<li>common: gets common node information.</li>
<li>router: gets router node information.</li>
<li>db: gets TencentDB information in normal status.</li>
Note: only the above values are supported for the time being. Entering other values will cause errors.
                     * @param _nodeFlag Node flag. Valid values:
<li>all: gets the information of nodes in all types except TencentDB information.</li>
<li>master: gets master node information.</li>
<li>core: gets core node information.</li>
<li>task: gets task node information.</li>
<li>common: gets common node information.</li>
<li>router: gets router node information.</li>
<li>db: gets TencentDB information in normal status.</li>
Note: only the above values are supported for the time being. Entering other values will cause errors.
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
                     * 获取Page number. Default value: 0, indicating the first page.
                     * @return Offset Page number. Default value: 0, indicating the first page.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: 0, indicating the first page.
                     * @param _offset Page number. Default value: 0, indicating the first page.
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
                     * 获取Number of records to be returned per page. The default value is 100, and the maximum value is 100.
If both offset and limit are not set, or both are set to 0, all data will be returned.
                     * @return Limit Number of records to be returned per page. The default value is 100, and the maximum value is 100.
If both offset and limit are not set, or both are set to 0, all data will be returned.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of records to be returned per page. The default value is 100, and the maximum value is 100.
If both offset and limit are not set, or both are set to 0, all data will be returned.
                     * @param _limit Number of records to be returned per page. The default value is 100, and the maximum value is 100.
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
                     * 获取Resource type. Valid values: all, host, pod. Default value: all
                     * @return HardwareResourceType Resource type. Valid values: all, host, pod. Default value: all
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置Resource type. Valid values: all, host, pod. Default value: all
                     * @param _hardwareResourceType Resource type. Valid values: all, host, pod. Default value: all
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
                     * 获取Searchable field
                     * @return SearchFields Searchable field
                     * 
                     */
                    std::vector<SearchItem> GetSearchFields() const;

                    /**
                     * 设置Searchable field
                     * @param _searchFields Searchable field
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
                     * 获取Order field.
                     * @return OrderField Order field.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Order field.
                     * @param _orderField Order field.
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
                     * 获取Ascending or not. 1: ascending; 0: descending.
                     * @return Asc Ascending or not. 1: ascending; 0: descending.
                     * 
                     */
                    int64_t GetAsc() const;

                    /**
                     * 设置Ascending or not. 1: ascending; 0: descending.
                     * @param _asc Ascending or not. 1: ascending; 0: descending.
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
                     * Cluster instance ID in the format of emr-xxxxxxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node flag. Valid values:
<li>all: gets the information of nodes in all types except TencentDB information.</li>
<li>master: gets master node information.</li>
<li>core: gets core node information.</li>
<li>task: gets task node information.</li>
<li>common: gets common node information.</li>
<li>router: gets router node information.</li>
<li>db: gets TencentDB information in normal status.</li>
Note: only the above values are supported for the time being. Entering other values will cause errors.
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * Whether to carry CDB information when all node information is exported in CSV format.
                     */
                    bool m_exportDb;
                    bool m_exportDbHasBeenSet;

                    /**
                     * Page number. Default value: 0, indicating the first page.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of records to be returned per page. The default value is 100, and the maximum value is 100.
If both offset and limit are not set, or both are set to 0, all data will be returned.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Resource type. Valid values: all, host, pod. Default value: all
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * Searchable field
                     */
                    std::vector<SearchItem> m_searchFields;
                    bool m_searchFieldsHasBeenSet;

                    /**
                     * Order field.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Ascending or not. 1: ascending; 0: descending.
                     */
                    int64_t m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERNODESREQUEST_H_
