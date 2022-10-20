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
                     * 获取The mode. Values:
<li>`sup_loose`: Super loose</li>
<li>`loose`: Loose</li>
<li>`emergency`: Emergency</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`close`: Off</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mode The mode. Values:
<li>`sup_loose`: Super loose</li>
<li>`loose`: Loose</li>
<li>`emergency`: Emergency</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`close`: Off</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The mode. Values:
<li>`sup_loose`: Super loose</li>
<li>`loose`: Loose</li>
<li>`emergency`: Emergency</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`close`: Off</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Mode The mode. Values:
<li>`sup_loose`: Super loose</li>
<li>`loose`: Loose</li>
<li>`emergency`: Emergency</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`close`: Off</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取The unique ID.
                     * @return ID The unique ID.
                     */
                    int64_t GetID() const;

                    /**
                     * 设置The unique ID.
                     * @param ID The unique ID.
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取The action, which will be triggered when the specified threshold reaches.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Action The action, which will be triggered when the specified threshold reaches.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The action, which will be triggered when the specified threshold reaches.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Action The action, which will be triggered when the specified threshold reaches.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The amount of time taken to perform the action. Value range: 0-172800 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PunishTime The amount of time taken to perform the action. Value range: 0-172800 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置The amount of time taken to perform the action. Value range: 0-172800 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PunishTime The amount of time taken to perform the action. Value range: 0-172800 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取The request threshold. Value range: 0-4294967294.
                     * @return Threshold The request threshold. Value range: 0-4294967294.
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置The request threshold. Value range: 0-4294967294.
                     * @param Threshold The request threshold. Value range: 0-4294967294.
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取The statistical period. Value range: 0-120 seconds.
                     * @return Period The statistical period. Value range: 0-120 seconds.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置The statistical period. Value range: 0-120 seconds.
                     * @param Period The statistical period. Value range: 0-120 seconds.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * The mode. Values:
<li>`sup_loose`: Super loose</li>
<li>`loose`: Loose</li>
<li>`emergency`: Emergency</li>
<li>`normal`: Moderate</li>
<li>`strict`: Strict</li>
<li>`close`: Off</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * The unique ID.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * The action, which will be triggered when the specified threshold reaches.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The amount of time taken to perform the action. Value range: 0-172800 seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * The request threshold. Value range: 0-4294967294.
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * The statistical period. Value range: 0-120 seconds.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATEDETAIL_H_
