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
                     * 获取Number of entries per page.
                     * @return Limit Number of entries per page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page.
                     * @param _limit Number of entries per page.
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
                     * 获取Searching field.
                     * @return SearchText Searching field.
                     * 
                     */
                    std::string GetSearchText() const;

                    /**
                     * 设置Searching field.
                     * @param _searchText Searching field.
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
                     * 获取'Configuration status. Valid values: -2 (configuration failed), -1 (configuration expired), 1 (synchronized)', and -99 '(all)'.
                     * @return ConfStatus 'Configuration status. Valid values: -2 (configuration failed), -1 (configuration expired), 1 (synchronized)', and -99 '(all)'.
                     * 
                     */
                    int64_t GetConfStatus() const;

                    /**
                     * 设置'Configuration status. Valid values: -2 (configuration failed), -1 (configuration expired), 1 (synchronized)', and -99 '(all)'.
                     * @param _confStatus 'Configuration status. Valid values: -2 (configuration failed), -1 (configuration expired), 1 (synchronized)', and -99 '(all)'.
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
                     * 获取Filter criterion, which specifies the maintenance status. Valid values:
0: all statuses
1: normal mode
2: maintenance mode

                     * @return MaintainStateId Filter criterion, which specifies the maintenance status. Valid values:
0: all statuses
1: normal mode
2: maintenance mode

                     * 
                     */
                    int64_t GetMaintainStateId() const;

                    /**
                     * 设置Filter criterion, which specifies the maintenance status. Valid values:
0: all statuses
1: normal mode
2: maintenance mode

                     * @param _maintainStateId Filter criterion, which specifies the maintenance status. Valid values:
0: all statuses
1: normal mode
2: maintenance mode

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
                     * 获取Filter criterion, which specifies the operation status. Valid values:
0: all statuses
1: started
2: stopped.
                     * @return OperatorStateId Filter criterion, which specifies the operation status. Valid values:
0: all statuses
1: started
2: stopped.
                     * 
                     */
                    int64_t GetOperatorStateId() const;

                    /**
                     * 设置Filter criterion, which specifies the operation status. Valid values:
0: all statuses
1: started
2: stopped.
                     * @param _operatorStateId Filter criterion, which specifies the operation status. Valid values:
0: all statuses
1: started
2: stopped.
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
                     * 获取Filter criterion, which specifies the health status. Valid values:
"0": unavailable
"1": good
-2: unknown
-99: all statuses
-3: potential risk
-4: undetected
                     * @return HealthStateId Filter criterion, which specifies the health status. Valid values:
"0": unavailable
"1": good
-2: unknown
-99: all statuses
-3: potential risk
-4: undetected
                     * 
                     */
                    std::string GetHealthStateId() const;

                    /**
                     * 设置Filter criterion, which specifies the health status. Valid values:
"0": unavailable
"1": good
-2: unknown
-99: all statuses
-3: potential risk
-4: undetected
                     * @param _healthStateId Filter criterion, which specifies the health status. Valid values:
"0": unavailable
"1": good
-2: unknown
-99: all statuses
-3: potential risk
-4: undetected
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
                     * 获取Service component name, which must be specified by using uppercase letters (for example, YARN). Select either the service component name or ServiceGroupType in an API call and ensure that the selected item is required.
                     * @return ServiceName Service component name, which must be specified by using uppercase letters (for example, YARN). Select either the service component name or ServiceGroupType in an API call and ensure that the selected item is required.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service component name, which must be specified by using uppercase letters (for example, YARN). Select either the service component name or ServiceGroupType in an API call and ensure that the selected item is required.
                     * @param _serviceName Service component name, which must be specified by using uppercase letters (for example, YARN). Select either the service component name or ServiceGroupType in an API call and ensure that the selected item is required.
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
                     * 获取Node name. Valid values: master, core, task, common, and router.
                     * @return NodeTypeName Node name. Valid values: master, core, task, common, and router.
                     * 
                     */
                    std::string GetNodeTypeName() const;

                    /**
                     * 设置Node name. Valid values: master, core, task, common, and router.
                     * @param _nodeTypeName Node name. Valid values: master, core, task, common, and router.
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
                     * 获取Filter criterion, which specifies whether the data node is in maintenance. Valid values:
0: all statuses
1: maintenance status
                     * @return DataNodeMaintenanceId Filter criterion, which specifies whether the data node is in maintenance. Valid values:
0: all statuses
1: maintenance status
                     * 
                     */
                    int64_t GetDataNodeMaintenanceId() const;

                    /**
                     * 设置Filter criterion, which specifies whether the data node is in maintenance. Valid values:
0: all statuses
1: maintenance status
                     * @param _dataNodeMaintenanceId Filter criterion, which specifies whether the data node is in maintenance. Valid values:
0: all statuses
1: maintenance status
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
                     * 获取Searchable fields (Currently, SearchType: ipv4 is supported).
                     * @return SearchFields Searchable fields (Currently, SearchType: ipv4 is supported).
                     * 
                     */
                    std::vector<SearchItem> GetSearchFields() const;

                    /**
                     * 设置Searchable fields (Currently, SearchType: ipv4 is supported).
                     * @param _searchFields Searchable fields (Currently, SearchType: ipv4 is supported).
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
                     * Number of entries per page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Searching field.
                     */
                    std::string m_searchText;
                    bool m_searchTextHasBeenSet;

                    /**
                     * 'Configuration status. Valid values: -2 (configuration failed), -1 (configuration expired), 1 (synchronized)', and -99 '(all)'.
                     */
                    int64_t m_confStatus;
                    bool m_confStatusHasBeenSet;

                    /**
                     * Filter criterion, which specifies the maintenance status. Valid values:
0: all statuses
1: normal mode
2: maintenance mode

                     */
                    int64_t m_maintainStateId;
                    bool m_maintainStateIdHasBeenSet;

                    /**
                     * Filter criterion, which specifies the operation status. Valid values:
0: all statuses
1: started
2: stopped.
                     */
                    int64_t m_operatorStateId;
                    bool m_operatorStateIdHasBeenSet;

                    /**
                     * Filter criterion, which specifies the health status. Valid values:
"0": unavailable
"1": good
-2: unknown
-99: all statuses
-3: potential risk
-4: undetected
                     */
                    std::string m_healthStateId;
                    bool m_healthStateIdHasBeenSet;

                    /**
                     * Service component name, which must be specified by using uppercase letters (for example, YARN). Select either the service component name or ServiceGroupType in an API call and ensure that the selected item is required.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Node name. Valid values: master, core, task, common, and router.
                     */
                    std::string m_nodeTypeName;
                    bool m_nodeTypeNameHasBeenSet;

                    /**
                     * Filter criterion, which specifies whether the data node is in maintenance. Valid values:
0: all statuses
1: maintenance status
                     */
                    int64_t m_dataNodeMaintenanceId;
                    bool m_dataNodeMaintenanceIdHasBeenSet;

                    /**
                     * Searchable fields (Currently, SearchType: ipv4 is supported).
                     */
                    std::vector<SearchItem> m_searchFields;
                    bool m_searchFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSREQUEST_H_
