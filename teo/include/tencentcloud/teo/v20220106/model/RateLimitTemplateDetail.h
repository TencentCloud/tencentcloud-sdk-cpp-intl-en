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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITTEMPLATEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITTEMPLATEDETAIL_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Rate limit template configuration
                */
                class RateLimitTemplateDetail : public AbstractModel
                {
                public:
                    RateLimitTemplateDetail();
                    ~RateLimitTemplateDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Mode Template name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Template name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _mode Template name
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Unique ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ID Unique ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Unique ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _iD Unique ID
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Action
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Action Action
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _action Action
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Time it takes to perform the action
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PunishTime Time it takes to perform the action
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置Time it takes to perform the action
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _punishTime Time it takes to perform the action
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Request rate threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Threshold Request rate threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置Request rate threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _threshold Request rate threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Statistical period
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Period Statistical period
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Statistical period
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _period Statistical period
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * Template name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Unique ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Action
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Time it takes to perform the action
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * Request rate threshold
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Statistical period
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITTEMPLATEDETAIL_H_
