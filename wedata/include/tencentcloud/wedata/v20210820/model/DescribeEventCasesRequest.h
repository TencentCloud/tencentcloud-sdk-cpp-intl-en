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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEVENTCASESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEVENTCASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeEventCases request structure.
                */
                class DescribeEventCasesRequest : public AbstractModel
                {
                public:
                    DescribeEventCasesRequest();
                    ~DescribeEventCasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Event Instance Catalog, Example Value:
- Expired: expired
- Not Expired: consuming
- All: all

                     * @return Category Event Instance Catalog, Example Value:
- Expired: expired
- Not Expired: consuming
- All: all

                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Event Instance Catalog, Example Value:
- Expired: expired
- Not Expired: consuming
- All: all

                     * @param _category Event Instance Catalog, Example Value:
- Expired: expired
- Not Expired: consuming
- All: all

                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Page Number
                     * @return PageNumber Page Number
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page Number
                     * @param _pageNumber Page Number
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of items per page
                     * @return PageSize Number of items per page
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page
                     * @param _pageSize Number of items per page
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Event name
                     * @return EventName Event name
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event name
                     * @param _eventName Event name
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Event type
                     * @return EventType Event type
                     * @deprecated
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type
                     * @param _eventType Event type
                     * @deprecated
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * @deprecated
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Event Segmentation Type
                     * @return EventSubType Event Segmentation Type
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置Event Segmentation Type
                     * @param _eventSubType Event Segmentation Type
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                    /**
                     * 获取Event Broadcast Type
                     * @return EventBroadcastType Event Broadcast Type
                     * @deprecated
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置Event Broadcast Type
                     * @param _eventBroadcastType Event Broadcast Type
                     * @deprecated
                     */
                    void SetEventBroadcastType(const std::string& _eventBroadcastType);

                    /**
                     * 判断参数 EventBroadcastType 是否已赋值
                     * @return EventBroadcastType 是否已赋值
                     * @deprecated
                     */
                    bool EventBroadcastTypeHasBeenSet() const;

                    /**
                     * 获取Event Instance Status, Example Value:
- Consumed: COMSUMED
- Expired: EXPIRED
- Pending Consumption: ACTIVE
- Consuming: CONSUMING
                     * @return Status Event Instance Status, Example Value:
- Consumed: COMSUMED
- Expired: EXPIRED
- Pending Consumption: ACTIVE
- Consuming: CONSUMING
                     * @deprecated
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Event Instance Status, Example Value:
- Consumed: COMSUMED
- Expired: EXPIRED
- Pending Consumption: ACTIVE
- Consuming: CONSUMING
                     * @param _status Event Instance Status, Example Value:
- Consumed: COMSUMED
- Expired: EXPIRED
- Pending Consumption: ACTIVE
- Consuming: CONSUMING
                     * @deprecated
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * @deprecated
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Minimum Creation Time of Event Instance
                     * @return CreationTimeStart Minimum Creation Time of Event Instance
                     * 
                     */
                    std::string GetCreationTimeStart() const;

                    /**
                     * 设置Minimum Creation Time of Event Instance
                     * @param _creationTimeStart Minimum Creation Time of Event Instance
                     * 
                     */
                    void SetCreationTimeStart(const std::string& _creationTimeStart);

                    /**
                     * 判断参数 CreationTimeStart 是否已赋值
                     * @return CreationTimeStart 是否已赋值
                     * 
                     */
                    bool CreationTimeStartHasBeenSet() const;

                    /**
                     * 获取Maximum Creation Time of Event Instance
                     * @return CreationTimeEnd Maximum Creation Time of Event Instance
                     * 
                     */
                    std::string GetCreationTimeEnd() const;

                    /**
                     * 设置Maximum Creation Time of Event Instance
                     * @param _creationTimeEnd Maximum Creation Time of Event Instance
                     * 
                     */
                    void SetCreationTimeEnd(const std::string& _creationTimeEnd);

                    /**
                     * 判断参数 CreationTimeEnd 是否已赋值
                     * @return CreationTimeEnd 是否已赋值
                     * 
                     */
                    bool CreationTimeEndHasBeenSet() const;

                    /**
                     * 获取Minimum Trigger Time of Event Instance
                     * @return EventTriggeredTimeStart Minimum Trigger Time of Event Instance
                     * 
                     */
                    std::string GetEventTriggeredTimeStart() const;

                    /**
                     * 设置Minimum Trigger Time of Event Instance
                     * @param _eventTriggeredTimeStart Minimum Trigger Time of Event Instance
                     * 
                     */
                    void SetEventTriggeredTimeStart(const std::string& _eventTriggeredTimeStart);

                    /**
                     * 判断参数 EventTriggeredTimeStart 是否已赋值
                     * @return EventTriggeredTimeStart 是否已赋值
                     * 
                     */
                    bool EventTriggeredTimeStartHasBeenSet() const;

                    /**
                     * 获取Maximum Trigger Time of Event Instance
                     * @return EventTriggeredTimeEnd Maximum Trigger Time of Event Instance
                     * 
                     */
                    std::string GetEventTriggeredTimeEnd() const;

                    /**
                     * 设置Maximum Trigger Time of Event Instance
                     * @param _eventTriggeredTimeEnd Maximum Trigger Time of Event Instance
                     * 
                     */
                    void SetEventTriggeredTimeEnd(const std::string& _eventTriggeredTimeEnd);

                    /**
                     * 判断参数 EventTriggeredTimeEnd 是否已赋值
                     * @return EventTriggeredTimeEnd 是否已赋值
                     * 
                     */
                    bool EventTriggeredTimeEndHasBeenSet() const;

                    /**
                     * 获取Minimum Consumption Time of Event Instance
                     * @return LogTimeStart Minimum Consumption Time of Event Instance
                     * 
                     */
                    std::string GetLogTimeStart() const;

                    /**
                     * 设置Minimum Consumption Time of Event Instance
                     * @param _logTimeStart Minimum Consumption Time of Event Instance
                     * 
                     */
                    void SetLogTimeStart(const std::string& _logTimeStart);

                    /**
                     * 判断参数 LogTimeStart 是否已赋值
                     * @return LogTimeStart 是否已赋值
                     * 
                     */
                    bool LogTimeStartHasBeenSet() const;

                    /**
                     * 获取Maximum Consumption Time of Event Instance
                     * @return LogTimeEnd Maximum Consumption Time of Event Instance
                     * 
                     */
                    std::string GetLogTimeEnd() const;

                    /**
                     * 设置Maximum Consumption Time of Event Instance
                     * @param _logTimeEnd Maximum Consumption Time of Event Instance
                     * 
                     */
                    void SetLogTimeEnd(const std::string& _logTimeEnd);

                    /**
                     * 判断参数 LogTimeEnd 是否已赋值
                     * @return LogTimeEnd 是否已赋值
                     * 
                     */
                    bool LogTimeEndHasBeenSet() const;

                    /**
                     * 获取Event Instance Data Timestamp
                     * @return Dimension Event Instance Data Timestamp
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置Event Instance Data Timestamp
                     * @param _dimension Event Instance Data Timestamp
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取Event Instance Validity Period
                     * @return TimeToLive Event Instance Validity Period
                     * 
                     */
                    std::string GetTimeToLive() const;

                    /**
                     * 设置Event Instance Validity Period
                     * @param _timeToLive Event Instance Validity Period
                     * 
                     */
                    void SetTimeToLive(const std::string& _timeToLive);

                    /**
                     * 判断参数 TimeToLive 是否已赋值
                     * @return TimeToLive 是否已赋值
                     * 
                     */
                    bool TimeToLiveHasBeenSet() const;

                    /**
                     * 获取Sort Fields
                     * @return SortItem Sort Fields
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置Sort Fields
                     * @param _sortItem Sort Fields
                     * 
                     */
                    void SetSortItem(const std::string& _sortItem);

                    /**
                     * 判断参数 SortItem 是否已赋值
                     * @return SortItem 是否已赋值
                     * 
                     */
                    bool SortItemHasBeenSet() const;

                    /**
                     * 获取Sorting Order
                     * @return SortType Sorting Order
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Sorting Order
                     * @param _sortType Sorting Order
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Event Instance Catalog, Example Value:
- Expired: expired
- Not Expired: consuming
- All: all

                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Page Number
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Event name
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Event type
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Event Segmentation Type
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * Event Broadcast Type
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * Event Instance Status, Example Value:
- Consumed: COMSUMED
- Expired: EXPIRED
- Pending Consumption: ACTIVE
- Consuming: CONSUMING
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Minimum Creation Time of Event Instance
                     */
                    std::string m_creationTimeStart;
                    bool m_creationTimeStartHasBeenSet;

                    /**
                     * Maximum Creation Time of Event Instance
                     */
                    std::string m_creationTimeEnd;
                    bool m_creationTimeEndHasBeenSet;

                    /**
                     * Minimum Trigger Time of Event Instance
                     */
                    std::string m_eventTriggeredTimeStart;
                    bool m_eventTriggeredTimeStartHasBeenSet;

                    /**
                     * Maximum Trigger Time of Event Instance
                     */
                    std::string m_eventTriggeredTimeEnd;
                    bool m_eventTriggeredTimeEndHasBeenSet;

                    /**
                     * Minimum Consumption Time of Event Instance
                     */
                    std::string m_logTimeStart;
                    bool m_logTimeStartHasBeenSet;

                    /**
                     * Maximum Consumption Time of Event Instance
                     */
                    std::string m_logTimeEnd;
                    bool m_logTimeEndHasBeenSet;

                    /**
                     * Event Instance Data Timestamp
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * Event Instance Validity Period
                     */
                    std::string m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * Sort Fields
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * Sorting Order
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEVENTCASESREQUEST_H_
