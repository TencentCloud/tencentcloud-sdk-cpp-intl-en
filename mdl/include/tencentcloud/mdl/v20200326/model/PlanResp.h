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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_PLANRESP_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_PLANRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/TimingSettingsResp.h>
#include <tencentcloud/mdl/v20200326/model/EventSettingsResp.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Event configuration information
                */
                class PlanResp : public AbstractModel
                {
                public:
                    PlanResp();
                    ~PlanResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event name
                     * @return EventName Event name
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event name
                     * @param EventName Event name
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Event trigger time settings
                     * @return TimingSettings Event trigger time settings
                     */
                    TimingSettingsResp GetTimingSettings() const;

                    /**
                     * 设置Event trigger time settings
                     * @param TimingSettings Event trigger time settings
                     */
                    void SetTimingSettings(const TimingSettingsResp& _timingSettings);

                    /**
                     * 判断参数 TimingSettings 是否已赋值
                     * @return TimingSettings 是否已赋值
                     */
                    bool TimingSettingsHasBeenSet() const;

                    /**
                     * 获取Event configuration
                     * @return EventSettings Event configuration
                     */
                    EventSettingsResp GetEventSettings() const;

                    /**
                     * 设置Event configuration
                     * @param EventSettings Event configuration
                     */
                    void SetEventSettings(const EventSettingsResp& _eventSettings);

                    /**
                     * 判断参数 EventSettings 是否已赋值
                     * @return EventSettings 是否已赋值
                     */
                    bool EventSettingsHasBeenSet() const;

                private:

                    /**
                     * Event name
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Event trigger time settings
                     */
                    TimingSettingsResp m_timingSettings;
                    bool m_timingSettingsHasBeenSet;

                    /**
                     * Event configuration
                     */
                    EventSettingsResp m_eventSettings;
                    bool m_eventSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_PLANRESP_H_
