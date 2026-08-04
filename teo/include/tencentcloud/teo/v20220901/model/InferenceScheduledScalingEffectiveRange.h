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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGEFFECTIVERANGE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGEFFECTIVERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Edge reasoning scheduled scaling validity period range configuration.
                */
                class InferenceScheduledScalingEffectiveRange : public AbstractModel
                {
                public:
                    InferenceScheduledScalingEffectiveRange();
                    ~InferenceScheduledScalingEffectiveRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Validity period type. Valid values: <li>LongTerm: Permanently valid;</li><li>Custom: Custom start and end date.</li></p>
                     * @return EffectiveType <p>Validity period type. Valid values: <li>LongTerm: Permanently valid;</li><li>Custom: Custom start and end date.</li></p>
                     * 
                     */
                    std::string GetEffectiveType() const;

                    /**
                     * 设置<p>Validity period type. Valid values: <li>LongTerm: Permanently valid;</li><li>Custom: Custom start and end date.</li></p>
                     * @param _effectiveType <p>Validity period type. Valid values: <li>LongTerm: Permanently valid;</li><li>Custom: Custom start and end date.</li></p>
                     * 
                     */
                    void SetEffectiveType(const std::string& _effectiveType);

                    /**
                     * 判断参数 EffectiveType 是否已赋值
                     * @return EffectiveType 是否已赋值
                     * 
                     */
                    bool EffectiveTypeHasBeenSet() const;

                    /**
                     * 获取<p>Start date of the valid period. Required when EffectiveType is Custom. Do not pass this field when EffectiveType is LongTerm.</p>
                     * @return StartDate <p>Start date of the valid period. Required when EffectiveType is Custom. Do not pass this field when EffectiveType is LongTerm.</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>Start date of the valid period. Required when EffectiveType is Custom. Do not pass this field when EffectiveType is LongTerm.</p>
                     * @param _startDate <p>Start date of the valid period. Required when EffectiveType is Custom. Do not pass this field when EffectiveType is LongTerm.</p>
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取<p>Termination date of the valid period. Required when EffectiveType is Custom, and cannot be earlier than StartDate. Do not pass this field when EffectiveType is LongTerm.</p>
                     * @return EndDate <p>Termination date of the valid period. Required when EffectiveType is Custom, and cannot be earlier than StartDate. Do not pass this field when EffectiveType is LongTerm.</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>Termination date of the valid period. Required when EffectiveType is Custom, and cannot be earlier than StartDate. Do not pass this field when EffectiveType is LongTerm.</p>
                     * @param _endDate <p>Termination date of the valid period. Required when EffectiveType is Custom, and cannot be earlier than StartDate. Do not pass this field when EffectiveType is LongTerm.</p>
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * <p>Validity period type. Valid values: <li>LongTerm: Permanently valid;</li><li>Custom: Custom start and end date.</li></p>
                     */
                    std::string m_effectiveType;
                    bool m_effectiveTypeHasBeenSet;

                    /**
                     * <p>Start date of the valid period. Required when EffectiveType is Custom. Do not pass this field when EffectiveType is LongTerm.</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>Termination date of the valid period. Required when EffectiveType is Custom, and cannot be earlier than StartDate. Do not pass this field when EffectiveType is LongTerm.</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGEFFECTIVERANGE_H_
