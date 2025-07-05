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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_EVENTBUS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_EVENTBUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/ConnectionBrief.h>
#include <tencentcloud/eb/v20210416/model/TargetBrief.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Event bus information
                */
                class EventBus : public AbstractModel
                {
                public:
                    EventBus();
                    ~EventBus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Update time
                     * @return ModTime Update time
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置Update time
                     * @param _modTime Update time
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Event bus description, which can contain up to 200 characters of any type
                     * @return Description Event bus description, which can contain up to 200 characters of any type
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event bus description, which can contain up to 200 characters of any type
                     * @param _description Event bus description, which can contain up to 200 characters of any type
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
                     * 获取Creation time
                     * @return AddTime Creation time
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time
                     * @param _addTime Creation time
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Event bus name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
                     * @return EventBusName Event bus name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
                     * 
                     */
                    std::string GetEventBusName() const;

                    /**
                     * 设置Event bus name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
                     * @param _eventBusName Event bus name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
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
                     * 获取Event bus type
                     * @return Type Event bus type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Event bus type
                     * @param _type Event bus type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Billing Mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PayMode Billing Mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing Mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _payMode Billing Mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Connector basic information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ConnectionBriefs Connector basic information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ConnectionBrief> GetConnectionBriefs() const;

                    /**
                     * 设置Connector basic information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _connectionBriefs Connector basic information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConnectionBriefs(const std::vector<ConnectionBrief>& _connectionBriefs);

                    /**
                     * 判断参数 ConnectionBriefs 是否已赋值
                     * @return ConnectionBriefs 是否已赋值
                     * 
                     */
                    bool ConnectionBriefsHasBeenSet() const;

                    /**
                     * 获取Target information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetBriefs Target information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TargetBrief> GetTargetBriefs() const;

                    /**
                     * 设置Target information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _targetBriefs Target information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetBriefs(const std::vector<TargetBrief>& _targetBriefs);

                    /**
                     * 判断参数 TargetBriefs 是否已赋值
                     * @return TargetBriefs 是否已赋值
                     * 
                     */
                    bool TargetBriefsHasBeenSet() const;

                private:

                    /**
                     * Update time
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Event bus description, which can contain up to 200 characters of any type
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Event bus name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
                     */
                    std::string m_eventBusName;
                    bool m_eventBusNameHasBeenSet;

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Event bus type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Billing Mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Connector basic information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ConnectionBrief> m_connectionBriefs;
                    bool m_connectionBriefsHasBeenSet;

                    /**
                     * Target information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TargetBrief> m_targetBriefs;
                    bool m_targetBriefsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_EVENTBUS_H_
