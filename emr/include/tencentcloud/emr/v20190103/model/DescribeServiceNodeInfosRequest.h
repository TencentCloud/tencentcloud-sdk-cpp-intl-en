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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSREQUEST_H_

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
                * DescribeServiceNodeInfos request structure.
                */
                class DescribeServiceNodeInfosRequest : public AbstractModel
                {
                public:
                    DescribeServiceNodeInfosRequest();
                    ~DescribeServiceNodeInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Page number.
                     * @return Offset Page number.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number.
                     * @param _offset Page number.
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
                     * 获取Page size.
                     * @return Limit Page size.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page size.
                     * @param _limit Page size.
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
                     * 获取Searching fields.
                     * @return SearchText Searching fields.
                     * 
                     */
                    std::string GetSearchText() const;

                    /**
                     * 设置Searching fields.
                     * @param _searchText Searching fields.
                     * 
                     */
                    void SetSearchText(const std::string& _searchText);

                    /**
                     * 判断参数 SearchText 是否已赋值
                     * @return SearchText 是否已赋值
                     * 
                     */
                    bool SearchTextHasBeenSet() const;

                    /**
                     * 获取Configuration status. -2: configuration failed; -1: configuration expired; 1: synchronized; -99: all.
                     * @return ConfStatus Configuration status. -2: configuration failed; -1: configuration expired; 1: synchronized; -99: all.
                     * 
                     */
                    int64_t GetConfStatus() const;

                    /**
                     * 设置Configuration status. -2: configuration failed; -1: configuration expired; 1: synchronized; -99: all.
                     * @param _confStatus Configuration status. -2: configuration failed; -1: configuration expired; 1: synchronized; -99: all.
                     * 
                     */
                    void SetConfStatus(const int64_t& _confStatus);

                    /**
                     * 判断参数 ConfStatus 是否已赋值
                     * @return ConfStatus 是否已赋值
                     * 
                     */
                    bool ConfStatusHasBeenSet() const;

                    /**
                     * 获取Filter criteria: Maintenance status

0 indicates all statuses.
1 indicates normal.
2 indicates the maintenance status.

                     * @return MaintainStateId Filter criteria: Maintenance status

0 indicates all statuses.
1 indicates normal.
2 indicates the maintenance status.

                     * 
                     */
                    int64_t GetMaintainStateId() const;

                    /**
                     * 设置Filter criteria: Maintenance status

0 indicates all statuses.
1 indicates normal.
2 indicates the maintenance status.

                     * @param _maintainStateId Filter criteria: Maintenance status

0 indicates all statuses.
1 indicates normal.
2 indicates the maintenance status.

                     * 
                     */
                    void SetMaintainStateId(const int64_t& _maintainStateId);

                    /**
                     * 判断参数 MaintainStateId 是否已赋值
                     * @return MaintainStateId 是否已赋值
                     * 
                     */
                    bool MaintainStateIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria: Operation status

0 indicates all statuses.
1 indicates started.
2 indicates stopped.
                     * @return OperatorStateId Filter criteria: Operation status

0 indicates all statuses.
1 indicates started.
2 indicates stopped.
                     * 
                     */
                    int64_t GetOperatorStateId() const;

                    /**
                     * 设置Filter criteria: Operation status

0 indicates all statuses.
1 indicates started.
2 indicates stopped.
                     * @param _operatorStateId Filter criteria: Operation status

0 indicates all statuses.
1 indicates started.
2 indicates stopped.
                     * 
                     */
                    void SetOperatorStateId(const int64_t& _operatorStateId);

                    /**
                     * 判断参数 OperatorStateId 是否已赋值
                     * @return OperatorStateId 是否已赋值
                     * 
                     */
                    bool OperatorStateIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria: health status.
0 indicates unavailable.
1 indicates good.
-2 indicates unknown.
-99 indicates all.
-3 indicates potential risks.
-4 indicates undetected.
                     * @return HealthStateId Filter criteria: health status.
0 indicates unavailable.
1 indicates good.
-2 indicates unknown.
-99 indicates all.
-3 indicates potential risks.
-4 indicates undetected.
                     * 
                     */
                    std::string GetHealthStateId() const;

                    /**
                     * 设置Filter criteria: health status.
0 indicates unavailable.
1 indicates good.
-2 indicates unknown.
-99 indicates all.
-3 indicates potential risks.
-4 indicates undetected.
                     * @param _healthStateId Filter criteria: health status.
0 indicates unavailable.
1 indicates good.
-2 indicates unknown.
-99 indicates all.
-3 indicates potential risks.
-4 indicates undetected.
                     * 
                     */
                    void SetHealthStateId(const std::string& _healthStateId);

                    /**
                     * 判断参数 HealthStateId 是否已赋值
                     * @return HealthStateId 是否已赋值
                     * 
                     */
                    bool HealthStateIdHasBeenSet() const;

                    /**
                     * 获取Service component names (in all caps, for example, YARN).
                     * @return ServiceName Service component names (in all caps, for example, YARN).
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service component names (in all caps, for example, YARN).
                     * @param _serviceName Service component names (in all caps, for example, YARN).
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Node names: master, core, task, common, and router.
                     * @return NodeTypeName Node names: master, core, task, common, and router.
                     * 
                     */
                    std::string GetNodeTypeName() const;

                    /**
                     * 设置Node names: master, core, task, common, and router.
                     * @param _nodeTypeName Node names: master, core, task, common, and router.
                     * 
                     */
                    void SetNodeTypeName(const std::string& _nodeTypeName);

                    /**
                     * 判断参数 NodeTypeName 是否已赋值
                     * @return NodeTypeName 是否已赋值
                     * 
                     */
                    bool NodeTypeNameHasBeenSet() const;

                    /**
                     * 获取Filter criteria: whether DN is in the maintenance status.
0 indicates all statuses.
1 indicates the maintenance status.
                     * @return DataNodeMaintenanceId Filter criteria: whether DN is in the maintenance status.
0 indicates all statuses.
1 indicates the maintenance status.
                     * 
                     */
                    int64_t GetDataNodeMaintenanceId() const;

                    /**
                     * 设置Filter criteria: whether DN is in the maintenance status.
0 indicates all statuses.
1 indicates the maintenance status.
                     * @param _dataNodeMaintenanceId Filter criteria: whether DN is in the maintenance status.
0 indicates all statuses.
1 indicates the maintenance status.
                     * 
                     */
                    void SetDataNodeMaintenanceId(const int64_t& _dataNodeMaintenanceId);

                    /**
                     * 判断参数 DataNodeMaintenanceId 是否已赋值
                     * @return DataNodeMaintenanceId 是否已赋值
                     * 
                     */
                    bool DataNodeMaintenanceIdHasBeenSet() const;

                    /**
                     * 获取Searchable fields (currently supported SearchType: ipv4).
                     * @return SearchFields Searchable fields (currently supported SearchType: ipv4).
                     * 
                     */
                    std::vector<SearchItem> GetSearchFields() const;

                    /**
                     * 设置Searchable fields (currently supported SearchType: ipv4).
                     * @param _searchFields Searchable fields (currently supported SearchType: ipv4).
                     * 
                     */
                    void SetSearchFields(const std::vector<SearchItem>& _searchFields);

                    /**
                     * 判断参数 SearchFields 是否已赋值
                     * @return SearchFields 是否已赋值
                     * 
                     */
                    bool SearchFieldsHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Page number.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Searching fields.
                     */
                    std::string m_searchText;
                    bool m_searchTextHasBeenSet;

                    /**
                     * Configuration status. -2: configuration failed; -1: configuration expired; 1: synchronized; -99: all.
                     */
                    int64_t m_confStatus;
                    bool m_confStatusHasBeenSet;

                    /**
                     * Filter criteria: Maintenance status

0 indicates all statuses.
1 indicates normal.
2 indicates the maintenance status.

                     */
                    int64_t m_maintainStateId;
                    bool m_maintainStateIdHasBeenSet;

                    /**
                     * Filter criteria: Operation status

0 indicates all statuses.
1 indicates started.
2 indicates stopped.
                     */
                    int64_t m_operatorStateId;
                    bool m_operatorStateIdHasBeenSet;

                    /**
                     * Filter criteria: health status.
0 indicates unavailable.
1 indicates good.
-2 indicates unknown.
-99 indicates all.
-3 indicates potential risks.
-4 indicates undetected.
                     */
                    std::string m_healthStateId;
                    bool m_healthStateIdHasBeenSet;

                    /**
                     * Service component names (in all caps, for example, YARN).
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Node names: master, core, task, common, and router.
                     */
                    std::string m_nodeTypeName;
                    bool m_nodeTypeNameHasBeenSet;

                    /**
                     * Filter criteria: whether DN is in the maintenance status.
0 indicates all statuses.
1 indicates the maintenance status.
                     */
                    int64_t m_dataNodeMaintenanceId;
                    bool m_dataNodeMaintenanceIdHasBeenSet;

                    /**
                     * Searchable fields (currently supported SearchType: ipv4).
                     */
                    std::vector<SearchItem> m_searchFields;
                    bool m_searchFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSREQUEST_H_
