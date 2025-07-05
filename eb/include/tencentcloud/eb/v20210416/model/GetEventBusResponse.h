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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_GETEVENTBUSRESPONSE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_GETEVENTBUSRESPONSE_H_

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
                * GetEventBus response structure.
                */
                class GetEventBusResponse : public AbstractModel
                {
                public:
                    GetEventBusResponse();
                    ~GetEventBusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Update time
                     * @return ModTime Update time
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Event bus description
                     * @return Description Event bus description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Log topic ID
                     * @return ClsTopicId Log topic ID
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return AddTime Creation time.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return ClsLogsetId Logset ID
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     * 
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取Event bus name
                     * @return EventBusName Event bus name
                     * 
                     */
                    std::string GetEventBusName() const;

                    /**
                     * 判断参数 EventBusName 是否已赋值
                     * @return EventBusName 是否已赋值
                     * 
                     */
                    bool EventBusNameHasBeenSet() const;

                    /**
                     * 获取Event bus ID
                     * @return EventBusId Event bus ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取(Disused) Event bus type
                     * @return Type (Disused) Event bus type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Billing mode
                     * @return PayMode Billing mode
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取EventBridge log storage period
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SaveDays EventBridge log storage period
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSaveDays() const;

                    /**
                     * 判断参数 SaveDays 是否已赋值
                     * @return SaveDays 是否已赋值
                     * 
                     */
                    bool SaveDaysHasBeenSet() const;

                    /**
                     * 获取EventBridge log topic ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LogTopicId EventBridge log topic ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable log storage
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnableStore Whether to enable log storage
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableStore() const;

                    /**
                     * 判断参数 EnableStore 是否已赋值
                     * @return EnableStore 是否已赋值
                     * 
                     */
                    bool EnableStoreHasBeenSet() const;

                    /**
                     * 获取Whether to sort the message
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LinkMode Whether to sort the message
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLinkMode() const;

                    /**
                     * 判断参数 LinkMode 是否已赋值
                     * @return LinkMode 是否已赋值
                     * 
                     */
                    bool LinkModeHasBeenSet() const;

                private:

                    /**
                     * Update time
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Event bus description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * Event bus name
                     */
                    std::string m_eventBusName;
                    bool m_eventBusNameHasBeenSet;

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * (Disused) Event bus type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Billing mode
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * EventBridge log storage period
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_saveDays;
                    bool m_saveDaysHasBeenSet;

                    /**
                     * EventBridge log topic ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * Whether to enable log storage
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_enableStore;
                    bool m_enableStoreHasBeenSet;

                    /**
                     * Whether to sort the message
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_linkMode;
                    bool m_linkModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_GETEVENTBUSRESPONSE_H_
