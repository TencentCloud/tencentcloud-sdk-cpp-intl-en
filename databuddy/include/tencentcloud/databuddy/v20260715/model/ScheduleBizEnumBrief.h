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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEBIZENUMBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEBIZENUMBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Enumeration item statistics (such as quantity distribution of running states and error codes)
                */
                class ScheduleBizEnumBrief : public AbstractModel
                {
                public:
                    ScheduleBizEnumBrief();
                    ~ScheduleBizEnumBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enumerate tag keys
                     * @return LabelKey Enumerate tag keys
                     * 
                     */
                    std::string GetLabelKey() const;

                    /**
                     * 设置Enumerate tag keys
                     * @param _labelKey Enumerate tag keys
                     * 
                     */
                    void SetLabelKey(const std::string& _labelKey);

                    /**
                     * 判断参数 LabelKey 是否已赋值
                     * @return LabelKey 是否已赋值
                     * 
                     */
                    bool LabelKeyHasBeenSet() const;

                    /**
                     * 获取Enumerate tag values.
                     * @return LabelValue Enumerate tag values.
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置Enumerate tag values.
                     * @param _labelValue Enumerate tag values.
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                    /**
                     * 获取Statistical quantity of enumeration items
                     * @return Count Statistical quantity of enumeration items
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Statistical quantity of enumeration items
                     * @param _count Statistical quantity of enumeration items
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Enumerate tag keys
                     */
                    std::string m_labelKey;
                    bool m_labelKeyHasBeenSet;

                    /**
                     * Enumerate tag values.
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * Statistical quantity of enumeration items
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEBIZENUMBRIEF_H_
