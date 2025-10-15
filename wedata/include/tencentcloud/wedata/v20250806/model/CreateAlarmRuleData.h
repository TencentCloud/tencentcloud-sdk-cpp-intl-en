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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEALARMRULEDATA_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEALARMRULEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Describes the response result of creating an Alarm rule.
                */
                class CreateAlarmRuleData : public AbstractModel
                {
                public:
                    CreateAlarmRuleData();
                    ~CreateAlarmRuleData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the unique id of the Alarm rule.
                     * @return AlarmRuleId Specifies the unique id of the Alarm rule.
                     * 
                     */
                    std::string GetAlarmRuleId() const;

                    /**
                     * 设置Specifies the unique id of the Alarm rule.
                     * @param _alarmRuleId Specifies the unique id of the Alarm rule.
                     * 
                     */
                    void SetAlarmRuleId(const std::string& _alarmRuleId);

                    /**
                     * 判断参数 AlarmRuleId 是否已赋值
                     * @return AlarmRuleId 是否已赋值
                     * 
                     */
                    bool AlarmRuleIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique id of the Alarm rule.
                     */
                    std::string m_alarmRuleId;
                    bool m_alarmRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEALARMRULEDATA_H_
