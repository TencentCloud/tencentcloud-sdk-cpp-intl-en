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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHIERARCHICALVALUE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHIERARCHICALVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * The configuration of alarm level threshold
                */
                class AlarmHierarchicalValue : public AbstractModel
                {
                public:
                    AlarmHierarchicalValue();
                    ~AlarmHierarchicalValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Threshold for the `Remind` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remind Threshold for the `Remind` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemind() const;

                    /**
                     * 设置Threshold for the `Remind` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remind Threshold for the `Remind` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemind(const std::string& _remind);

                    /**
                     * 判断参数 Remind 是否已赋值
                     * @return Remind 是否已赋值
                     * 
                     */
                    bool RemindHasBeenSet() const;

                    /**
                     * 获取Threshold for the `Warn` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Warn Threshold for the `Warn` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWarn() const;

                    /**
                     * 设置Threshold for the `Warn` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _warn Threshold for the `Warn` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWarn(const std::string& _warn);

                    /**
                     * 判断参数 Warn 是否已赋值
                     * @return Warn 是否已赋值
                     * 
                     */
                    bool WarnHasBeenSet() const;

                    /**
                     * 获取Threshold for the `Serious` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Serious Threshold for the `Serious` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSerious() const;

                    /**
                     * 设置Threshold for the `Serious` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serious Threshold for the `Serious` level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSerious(const std::string& _serious);

                    /**
                     * 判断参数 Serious 是否已赋值
                     * @return Serious 是否已赋值
                     * 
                     */
                    bool SeriousHasBeenSet() const;

                private:

                    /**
                     * Threshold for the `Remind` level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remind;
                    bool m_remindHasBeenSet;

                    /**
                     * Threshold for the `Warn` level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_warn;
                    bool m_warnHasBeenSet;

                    /**
                     * Threshold for the `Serious` level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serious;
                    bool m_seriousHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHIERARCHICALVALUE_H_
