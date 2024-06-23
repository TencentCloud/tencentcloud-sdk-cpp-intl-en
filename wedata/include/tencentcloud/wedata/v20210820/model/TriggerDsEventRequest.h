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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERDSEVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERDSEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventCaseDTO.h>
#include <tencentcloud/wedata/v20210820/model/EventBatchCaseDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TriggerDsEvent request structure.
                */
                class TriggerDsEventRequest : public AbstractModel
                {
                public:
                    TriggerDsEventRequest();
                    ~TriggerDsEventRequest() = default;
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
                     * 获取Event Instance Information
                     * @return EventCaseList Event Instance Information
                     * 
                     */
                    std::vector<EventCaseDTO> GetEventCaseList() const;

                    /**
                     * 设置Event Instance Information
                     * @param _eventCaseList Event Instance Information
                     * 
                     */
                    void SetEventCaseList(const std::vector<EventCaseDTO>& _eventCaseList);

                    /**
                     * 判断参数 EventCaseList 是否已赋值
                     * @return EventCaseList 是否已赋值
                     * 
                     */
                    bool EventCaseListHasBeenSet() const;

                    /**
                     * 获取Event Instance Information (Continuous Time)
                     * @return EventBatchCaseList Event Instance Information (Continuous Time)
                     * 
                     */
                    std::vector<EventBatchCaseDTO> GetEventBatchCaseList() const;

                    /**
                     * 设置Event Instance Information (Continuous Time)
                     * @param _eventBatchCaseList Event Instance Information (Continuous Time)
                     * 
                     */
                    void SetEventBatchCaseList(const std::vector<EventBatchCaseDTO>& _eventBatchCaseList);

                    /**
                     * 判断参数 EventBatchCaseList 是否已赋值
                     * @return EventBatchCaseList 是否已赋值
                     * 
                     */
                    bool EventBatchCaseListHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Event Instance Information
                     */
                    std::vector<EventCaseDTO> m_eventCaseList;
                    bool m_eventCaseListHasBeenSet;

                    /**
                     * Event Instance Information (Continuous Time)
                     */
                    std::vector<EventBatchCaseDTO> m_eventBatchCaseList;
                    bool m_eventBatchCaseListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERDSEVENTREQUEST_H_
