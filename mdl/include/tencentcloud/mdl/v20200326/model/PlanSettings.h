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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_PLANSETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_PLANSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/TimedRecordSettings.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Event settings
                */
                class PlanSettings : public AbstractModel
                {
                public:
                    PlanSettings();
                    ~PlanSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timed recording settings
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TimedRecordSettings Timed recording settings
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    TimedRecordSettings GetTimedRecordSettings() const;

                    /**
                     * 设置Timed recording settings
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _timedRecordSettings Timed recording settings
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetTimedRecordSettings(const TimedRecordSettings& _timedRecordSettings);

                    /**
                     * 判断参数 TimedRecordSettings 是否已赋值
                     * @return TimedRecordSettings 是否已赋值
                     * 
                     */
                    bool TimedRecordSettingsHasBeenSet() const;

                private:

                    /**
                     * Timed recording settings
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    TimedRecordSettings m_timedRecordSettings;
                    bool m_timedRecordSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_PLANSETTINGS_H_
