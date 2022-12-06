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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SCANDETAIL_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SCANDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Voice detection details
                */
                class ScanDetail : public AbstractModel
                {
                public:
                    ScanDetail();
                    ~ScanDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Violation scenario. For more information, please see the definition of <a href="https://intl.cloud.tencent.com/document/product/607/37622?from_cn_redirect=1#Label_Value">Label</a>.
                     * @return Label Violation scenario. For more information, please see the definition of <a href="https://intl.cloud.tencent.com/document/product/607/37622?from_cn_redirect=1#Label_Value">Label</a>.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Violation scenario. For more information, please see the definition of <a href="https://intl.cloud.tencent.com/document/product/607/37622?from_cn_redirect=1#Label_Value">Label</a>.
                     * @param Label Violation scenario. For more information, please see the definition of <a href="https://intl.cloud.tencent.com/document/product/607/37622?from_cn_redirect=1#Label_Value">Label</a>.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Confidence score in scenario. Value range: [0.00,100.00]. The higher the score, the more likely the content is non-compliant.
                     * @return Rate Confidence score in scenario. Value range: [0.00,100.00]. The higher the score, the more likely the content is non-compliant.
                     */
                    std::string GetRate() const;

                    /**
                     * 设置Confidence score in scenario. Value range: [0.00,100.00]. The higher the score, the more likely the content is non-compliant.
                     * @param Rate Confidence score in scenario. Value range: [0.00,100.00]. The higher the score, the more likely the content is non-compliant.
                     */
                    void SetRate(const std::string& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取Non-compliant keyword
                     * @return KeyWord Non-compliant keyword
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置Non-compliant keyword
                     * @param KeyWord Non-compliant keyword
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取Start time offset of keyword from 0 in audio (in milliseconds)
                     * @return StartTime Start time offset of keyword from 0 in audio (in milliseconds)
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time offset of keyword from 0 in audio (in milliseconds)
                     * @param StartTime Start time offset of keyword from 0 in audio (in milliseconds)
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time offset of keyword from 0 in audio (in milliseconds)
                     * @return EndTime End time offset of keyword from 0 in audio (in milliseconds)
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time offset of keyword from 0 in audio (in milliseconds)
                     * @param EndTime End time offset of keyword from 0 in audio (in milliseconds)
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Violation scenario. For more information, please see the definition of <a href="https://intl.cloud.tencent.com/document/product/607/37622?from_cn_redirect=1#Label_Value">Label</a>.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Confidence score in scenario. Value range: [0.00,100.00]. The higher the score, the more likely the content is non-compliant.
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * Non-compliant keyword
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * Start time offset of keyword from 0 in audio (in milliseconds)
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time offset of keyword from 0 in audio (in milliseconds)
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SCANDETAIL_H_
