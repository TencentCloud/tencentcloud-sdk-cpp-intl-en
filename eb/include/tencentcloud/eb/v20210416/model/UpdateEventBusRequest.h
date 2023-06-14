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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_UPDATEEVENTBUSREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_UPDATEEVENTBUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * UpdateEventBus request structure.
                */
                class UpdateEventBusRequest : public AbstractModel
                {
                public:
                    UpdateEventBusRequest();
                    ~UpdateEventBusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Event bus ID
                     * @return EventBusId Event bus ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置Event bus ID
                     * @param _eventBusId Event bus ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取Event bus description, which can contain up to 200 characters of any type.
                     * @return Description Event bus description, which can contain up to 200 characters of any type.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event bus description, which can contain up to 200 characters of any type.
                     * @param _description Event bus description, which can contain up to 200 characters of any type.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Event bus name: it can contain 2-60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter.
                     * @return EventBusName Event bus name: it can contain 2-60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter.
                     * 
                     */
                    std::string GetEventBusName() const;

                    /**
                     * 设置Event bus name: it can contain 2-60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter.
                     * @param _eventBusName Event bus name: it can contain 2-60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter.
                     * 
                     */
                    void SetEventBusName(const std::string& _eventBusName);

                    /**
                     * 判断参数 EventBusName 是否已赋值
                     * @return EventBusName 是否已赋值
                     * 
                     */
                    bool EventBusNameHasBeenSet() const;

                    /**
                     * 获取Log retention period
                     * @return SaveDays Log retention period
                     * 
                     */
                    int64_t GetSaveDays() const;

                    /**
                     * 设置Log retention period
                     * @param _saveDays Log retention period
                     * 
                     */
                    void SetSaveDays(const int64_t& _saveDays);

                    /**
                     * 判断参数 SaveDays 是否已赋值
                     * @return SaveDays 是否已赋值
                     * 
                     */
                    bool SaveDaysHasBeenSet() const;

                    /**
                     * 获取EventBridge log topic ID
                     * @return LogTopicId EventBridge log topic ID
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置EventBridge log topic ID
                     * @param _logTopicId EventBridge log topic ID
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable log retention
                     * @return EnableStore Whether to enable log retention
                     * 
                     */
                    bool GetEnableStore() const;

                    /**
                     * 设置Whether to enable log retention
                     * @param _enableStore Whether to enable log retention
                     * 
                     */
                    void SetEnableStore(const bool& _enableStore);

                    /**
                     * 判断参数 EnableStore 是否已赋值
                     * @return EnableStore 是否已赋值
                     * 
                     */
                    bool EnableStoreHasBeenSet() const;

                private:

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Event bus description, which can contain up to 200 characters of any type.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Event bus name: it can contain 2-60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter.
                     */
                    std::string m_eventBusName;
                    bool m_eventBusNameHasBeenSet;

                    /**
                     * Log retention period
                     */
                    int64_t m_saveDays;
                    bool m_saveDaysHasBeenSet;

                    /**
                     * EventBridge log topic ID
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * Whether to enable log retention
                     */
                    bool m_enableStore;
                    bool m_enableStoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_UPDATEEVENTBUSREQUEST_H_
