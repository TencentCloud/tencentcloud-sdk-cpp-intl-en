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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATEDETAIL_H_

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
                * The settings of the rate limiting template
                */
                class RateLimitTemplateDetail : public AbstractModel
                {
                public:
                    RateLimitTemplateDetail();
                    ~RateLimitTemplateDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: normal;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return Mode Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: normal;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: normal;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _mode Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: normal;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Unique ID.
                     * @return ID Unique ID.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Unique ID.
                     * @param _iD Unique ID.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observation.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return Action Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observation.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observation.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _action Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observation.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Penalty duration, in seconds. Value range: 0-2 days.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return PunishTime Penalty duration, in seconds. Value range: 0-2 days.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置Penalty duration, in seconds. Value range: 0-2 days.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _punishTime Penalty duration, in seconds. Value range: 0-2 days.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     * 
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取Statistical threshold, in times. Value range: 0-4294967294.
                     * @return Threshold Statistical threshold, in times. Value range: 0-4294967294.
                     * 
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置Statistical threshold, in times. Value range: 0-4294967294.
                     * @param _threshold Statistical threshold, in times. Value range: 0-4294967294.
                     * 
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Statistical cycle. Value range: 0-120 seconds.
                     * @return Period Statistical cycle. Value range: 0-120 seconds.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Statistical cycle. Value range: 0-120 seconds.
                     * @param _period Statistical cycle. Value range: 0-120 seconds.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: normal;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Unique ID.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observation.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Penalty duration, in seconds. Value range: 0-2 days.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * Statistical threshold, in times. Value range: 0-4294967294.
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Statistical cycle. Value range: 0-120 seconds.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATEDETAIL_H_
