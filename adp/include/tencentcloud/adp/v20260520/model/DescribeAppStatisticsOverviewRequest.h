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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/TimeRange.h>
#include <tencentcloud/adp/v20260520/model/ViewScope.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAppStatisticsOverview request structure.
                */
                class DescribeAppStatisticsOverviewRequest : public AbstractModel
                {
                public:
                    DescribeAppStatisticsOverviewRequest();
                    ~DescribeAppStatisticsOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application type. Available values: APP_TYPE_RAG (RAG), APP_TYPE_WORKFLOW (Workflow), APP_TYPE_CLAW (Claw), APP_TYPE_MULTIAGENT (MultiAgent). In the current period, only APP_TYPE_RAG takes effect. The rest are reserved values. Importing them will return InvalidParameter.</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not import in requests)</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG (uniquely supported in the current period)</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent (reserved, not currently supported)</td></tr></tbody></table>
                     * @return AppType <p>Application type. Available values: APP_TYPE_RAG (RAG), APP_TYPE_WORKFLOW (Workflow), APP_TYPE_CLAW (Claw), APP_TYPE_MULTIAGENT (MultiAgent). In the current period, only APP_TYPE_RAG takes effect. The rest are reserved values. Importing them will return InvalidParameter.</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not import in requests)</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG (uniquely supported in the current period)</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent (reserved, not currently supported)</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetAppType() const;

                    /**
                     * 设置<p>Application type. Available values: APP_TYPE_RAG (RAG), APP_TYPE_WORKFLOW (Workflow), APP_TYPE_CLAW (Claw), APP_TYPE_MULTIAGENT (MultiAgent). In the current period, only APP_TYPE_RAG takes effect. The rest are reserved values. Importing them will return InvalidParameter.</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not import in requests)</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG (uniquely supported in the current period)</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent (reserved, not currently supported)</td></tr></tbody></table>
                     * @param _appType <p>Application type. Available values: APP_TYPE_RAG (RAG), APP_TYPE_WORKFLOW (Workflow), APP_TYPE_CLAW (Claw), APP_TYPE_MULTIAGENT (MultiAgent). In the current period, only APP_TYPE_RAG takes effect. The rest are reserved values. Importing them will return InvalidParameter.</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not import in requests)</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG (uniquely supported in the current period)</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent (reserved, not currently supported)</td></tr></tbody></table>
                     * 
                     */
                    void SetAppType(const int64_t& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取<p>Query time range (Unix seconds)</p>
                     * @return TimeRange <p>Query time range (Unix seconds)</p>
                     * 
                     */
                    TimeRange GetTimeRange() const;

                    /**
                     * 设置<p>Query time range (Unix seconds)</p>
                     * @param _timeRange <p>Query time range (Unix seconds)</p>
                     * 
                     */
                    void SetTimeRange(const TimeRange& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取<p>View scope: application view (VIEW_TYPE_APP). For scope_id, enter the app ID (decimal string of the uint64 snowflake ID)</p>
                     * @return ViewScope <p>View scope: application view (VIEW_TYPE_APP). For scope_id, enter the app ID (decimal string of the uint64 snowflake ID)</p>
                     * 
                     */
                    ViewScope GetViewScope() const;

                    /**
                     * 设置<p>View scope: application view (VIEW_TYPE_APP). For scope_id, enter the app ID (decimal string of the uint64 snowflake ID)</p>
                     * @param _viewScope <p>View scope: application view (VIEW_TYPE_APP). For scope_id, enter the app ID (decimal string of the uint64 snowflake ID)</p>
                     * 
                     */
                    void SetViewScope(const ViewScope& _viewScope);

                    /**
                     * 判断参数 ViewScope 是否已赋值
                     * @return ViewScope 是否已赋值
                     * 
                     */
                    bool ViewScopeHasBeenSet() const;

                    /**
                     * 获取<p>Space ID</p><p>Parameter format: <p>Space ID</p></p><p>Default value: default_space</p>
                     * @return SpaceId <p>Space ID</p><p>Parameter format: <p>Space ID</p></p><p>Default value: default_space</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Space ID</p><p>Parameter format: <p>Space ID</p></p><p>Default value: default_space</p>
                     * @param _spaceId <p>Space ID</p><p>Parameter format: <p>Space ID</p></p><p>Default value: default_space</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Application ID</p><p>Parameter format:</p><p>Application ID</p><p></p><p>Reference value: 2099767969573745984</p>
                     * @return AppId <p>Application ID</p><p>Parameter format:</p><p>Application ID</p><p></p><p>Reference value: 2099767969573745984</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID</p><p>Parameter format:</p><p>Application ID</p><p></p><p>Reference value: 2099767969573745984</p>
                     * @param _appId <p>Application ID</p><p>Parameter format:</p><p>Application ID</p><p></p><p>Reference value: 2099767969573745984</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Extended filtering. Filter combination rule: multiple items use AND, and value_list under the same item uses OR. Supported Name: space_id (Space ID), channel_type (calling method/channel type; for values, see the trpc.adp.common.v2.ChannelType Enumeration Name). If channel_type is not specified, aggregation is performed by all channels.</p>
                     * @return FilterList <p>Extended filtering. Filter combination rule: multiple items use AND, and value_list under the same item uses OR. Supported Name: space_id (Space ID), channel_type (calling method/channel type; for values, see the trpc.adp.common.v2.ChannelType Enumeration Name). If channel_type is not specified, aggregation is performed by all channels.</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Extended filtering. Filter combination rule: multiple items use AND, and value_list under the same item uses OR. Supported Name: space_id (Space ID), channel_type (calling method/channel type; for values, see the trpc.adp.common.v2.ChannelType Enumeration Name). If channel_type is not specified, aggregation is performed by all channels.</p>
                     * @param _filterList <p>Extended filtering. Filter combination rule: multiple items use AND, and value_list under the same item uses OR. Supported Name: space_id (Space ID), channel_type (calling method/channel type; for values, see the trpc.adp.common.v2.ChannelType Enumeration Name). If channel_type is not specified, aggregation is performed by all channels.</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                private:

                    /**
                     * <p>Application type. Available values: APP_TYPE_RAG (RAG), APP_TYPE_WORKFLOW (Workflow), APP_TYPE_CLAW (Claw), APP_TYPE_MULTIAGENT (MultiAgent). In the current period, only APP_TYPE_RAG takes effect. The rest are reserved values. Importing them will return InvalidParameter.</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not import in requests)</td></tr><tr><td>APP_TYPE_RAG</td><td>1</td><td>RAG (uniquely supported in the current period)</td></tr><tr><td>APP_TYPE_WORKFLOW</td><td>2</td><td>Workflow (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_CLAW</td><td>3</td><td>Claw (reserved, not currently supported)</td></tr><tr><td>APP_TYPE_MULTIAGENT</td><td>4</td><td>MultiAgent (reserved, not currently supported)</td></tr></tbody></table>
                     */
                    int64_t m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * <p>Query time range (Unix seconds)</p>
                     */
                    TimeRange m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>View scope: application view (VIEW_TYPE_APP). For scope_id, enter the app ID (decimal string of the uint64 snowflake ID)</p>
                     */
                    ViewScope m_viewScope;
                    bool m_viewScopeHasBeenSet;

                    /**
                     * <p>Space ID</p><p>Parameter format: <p>Space ID</p></p><p>Default value: default_space</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Application ID</p><p>Parameter format:</p><p>Application ID</p><p></p><p>Reference value: 2099767969573745984</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Extended filtering. Filter combination rule: multiple items use AND, and value_list under the same item uses OR. Supported Name: space_id (Space ID), channel_type (calling method/channel type; for values, see the trpc.adp.common.v2.ChannelType Enumeration Name). If channel_type is not specified, aggregation is performed by all channels.</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWREQUEST_H_
