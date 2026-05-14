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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>
#include <tencentcloud/apm/v20210622/model/Selectors.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTopologyNew request structure.
                */
                class DescribeTopologyNewRequest : public AbstractModel
                {
                public:
                    DescribeTopologyNewRequest();
                    ~DescribeTopologyNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business system ID
                     * @return InstanceId Business system ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system ID
                     * @param _instanceId Business system ID
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
                     * 获取Querying start time.
                     * @return StartTime Querying start time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Querying start time.
                     * @param _startTime Querying start time.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time
                     * @return EndTime Query end time
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Query end time
                     * @param _endTime Query end time
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Application name
                     * @return ServiceName Application name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Application name
                     * @param _serviceName Application name
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
                     * 获取Upstream level.
                     * @return UpLevel Upstream level.
                     * 
                     */
                    int64_t GetUpLevel() const;

                    /**
                     * 设置Upstream level.
                     * @param _upLevel Upstream level.
                     * 
                     */
                    void SetUpLevel(const int64_t& _upLevel);

                    /**
                     * 判断参数 UpLevel 是否已赋值
                     * @return UpLevel 是否已赋值
                     * 
                     */
                    bool UpLevelHasBeenSet() const;

                    /**
                     * 获取Application instance information.
                     * @return ServiceInstance Application instance information.
                     * 
                     */
                    std::string GetServiceInstance() const;

                    /**
                     * 设置Application instance information.
                     * @param _serviceInstance Application instance information.
                     * 
                     */
                    void SetServiceInstance(const std::string& _serviceInstance);

                    /**
                     * 判断参数 ServiceInstance 是否已赋值
                     * @return ServiceInstance 是否已赋值
                     * 
                     */
                    bool ServiceInstanceHasBeenSet() const;

                    /**
                     * 获取downstream hierarchy
                     * @return DownLevel downstream hierarchy
                     * 
                     */
                    int64_t GetDownLevel() const;

                    /**
                     * 设置downstream hierarchy
                     * @param _downLevel downstream hierarchy
                     * 
                     */
                    void SetDownLevel(const int64_t& _downLevel);

                    /**
                     * 判断参数 DownLevel 是否已赋值
                     * @return DownLevel 是否已赋值
                     * 
                     */
                    bool DownLevelHasBeenSet() const;

                    /**
                     * 获取perspective
                     * @return View perspective
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置perspective
                     * @param _view perspective
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                    /**
                     * 获取Filter.
                     * @return Filters Filter.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter.
                     * @param _filters Filter.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Represents topic (for MQ topology)
                     * @return Topic Represents topic (for MQ topology)
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Represents topic (for MQ topology)
                     * @param _topic Represents topic (for MQ topology)
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取View filtering list.
                     * @return Selectors View filtering list.
                     * 
                     */
                    Selectors GetSelectors() const;

                    /**
                     * 设置View filtering list.
                     * @param _selectors View filtering list.
                     * 
                     */
                    void SetSelectors(const Selectors& _selectors);

                    /**
                     * 判断参数 Selectors 是否已赋值
                     * @return Selectors 是否已赋值
                     * 
                     */
                    bool SelectorsHasBeenSet() const;

                    /**
                     * 获取View ID
                     * @return Id View ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置View ID
                     * @param _id View ID
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
                     * 获取TraceID
                     * @return TraceID TraceID
                     * 
                     */
                    std::string GetTraceID() const;

                    /**
                     * 设置TraceID
                     * @param _traceID TraceID
                     * 
                     */
                    void SetTraceID(const std::string& _traceID);

                    /**
                     * 判断参数 TraceID 是否已赋值
                     * @return TraceID 是否已赋值
                     * 
                     */
                    bool TraceIDHasBeenSet() const;

                    /**
                     * 获取Specifies the top 5 slow response nodes query.
                     * @return IsSlowTopFive Specifies the top 5 slow response nodes query.
                     * 
                     */
                    bool GetIsSlowTopFive() const;

                    /**
                     * 设置Specifies the top 5 slow response nodes query.
                     * @param _isSlowTopFive Specifies the top 5 slow response nodes query.
                     * 
                     */
                    void SetIsSlowTopFive(const bool& _isSlowTopFive);

                    /**
                     * 判断参数 IsSlowTopFive 是否已赋值
                     * @return IsSlowTopFive 是否已赋值
                     * 
                     */
                    bool IsSlowTopFiveHasBeenSet() const;

                    /**
                     * 获取Whether the resource layer information is obtained.
                     * @return GetResource Whether the resource layer information is obtained.
                     * 
                     */
                    bool GetGetResource() const;

                    /**
                     * 设置Whether the resource layer information is obtained.
                     * @param _getResource Whether the resource layer information is obtained.
                     * 
                     */
                    void SetGetResource(const bool& _getResource);

                    /**
                     * 判断参数 GetResource 是否已赋值
                     * @return GetResource 是否已赋值
                     * 
                     */
                    bool GetResourceHasBeenSet() const;

                    /**
                     * 获取Filters by application tag.
                     * @return Tags Filters by application tag.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Filters by application tag.
                     * @param _tags Filters by application tag.
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Node type not displayed.
                     * @return Hidden Node type not displayed.
                     * 
                     */
                    Selectors GetHidden() const;

                    /**
                     * 设置Node type not displayed.
                     * @param _hidden Node type not displayed.
                     * 
                     */
                    void SetHidden(const Selectors& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                private:

                    /**
                     * Business system ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Querying start time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Application name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Upstream level.
                     */
                    int64_t m_upLevel;
                    bool m_upLevelHasBeenSet;

                    /**
                     * Application instance information.
                     */
                    std::string m_serviceInstance;
                    bool m_serviceInstanceHasBeenSet;

                    /**
                     * downstream hierarchy
                     */
                    int64_t m_downLevel;
                    bool m_downLevelHasBeenSet;

                    /**
                     * perspective
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * Filter.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Represents topic (for MQ topology)
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * View filtering list.
                     */
                    Selectors m_selectors;
                    bool m_selectorsHasBeenSet;

                    /**
                     * View ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * TraceID
                     */
                    std::string m_traceID;
                    bool m_traceIDHasBeenSet;

                    /**
                     * Specifies the top 5 slow response nodes query.
                     */
                    bool m_isSlowTopFive;
                    bool m_isSlowTopFiveHasBeenSet;

                    /**
                     * Whether the resource layer information is obtained.
                     */
                    bool m_getResource;
                    bool m_getResourceHasBeenSet;

                    /**
                     * Filters by application tag.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Node type not displayed.
                     */
                    Selectors m_hidden;
                    bool m_hiddenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWREQUEST_H_
