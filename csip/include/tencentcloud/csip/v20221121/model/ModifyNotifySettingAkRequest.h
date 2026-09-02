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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNOTIFYSETTINGAKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNOTIFYSETTINGAKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LevelOption.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyNotifySettingAk request structure.
                */
                class ModifyNotifySettingAkRequest : public AbstractModel
                {
                public:
                    ModifyNotifySettingAkRequest();
                    ~ModifyNotifySettingAkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Alarm type/severity (Type: AbnBehavior - exception behavior, LeakDetect - leakage detection; Severity: 1 - notification, 2 - low risk, 3 - medium risk, 4 - high risk, 5 - critical)</p>
                     * @return Alert <p>Alarm type/severity (Type: AbnBehavior - exception behavior, LeakDetect - leakage detection; Severity: 1 - notification, 2 - low risk, 3 - medium risk, 4 - high risk, 5 - critical)</p>
                     * 
                     */
                    std::vector<LevelOption> GetAlert() const;

                    /**
                     * 设置<p>Alarm type/severity (Type: AbnBehavior - exception behavior, LeakDetect - leakage detection; Severity: 1 - notification, 2 - low risk, 3 - medium risk, 4 - high risk, 5 - critical)</p>
                     * @param _alert <p>Alarm type/severity (Type: AbnBehavior - exception behavior, LeakDetect - leakage detection; Severity: 1 - notification, 2 - low risk, 3 - medium risk, 4 - high risk, 5 - critical)</p>
                     * 
                     */
                    void SetAlert(const std::vector<LevelOption>& _alert);

                    /**
                     * 判断参数 Alert 是否已赋值
                     * @return Alert 是否已赋值
                     * 
                     */
                    bool AlertHasBeenSet() const;

                    /**
                     * 获取<p>Alarm notification granularity</p><p>Enumeration values:</p><ul><li>0: Push by alert aggregation</li><li>1: Push by invocation record</li></ul>
                     * @return AlertGranularity <p>Alarm notification granularity</p><p>Enumeration values:</p><ul><li>0: Push by alert aggregation</li><li>1: Push by invocation record</li></ul>
                     * 
                     */
                    int64_t GetAlertGranularity() const;

                    /**
                     * 设置<p>Alarm notification granularity</p><p>Enumeration values:</p><ul><li>0: Push by alert aggregation</li><li>1: Push by invocation record</li></ul>
                     * @param _alertGranularity <p>Alarm notification granularity</p><p>Enumeration values:</p><ul><li>0: Push by alert aggregation</li><li>1: Push by invocation record</li></ul>
                     * 
                     */
                    void SetAlertGranularity(const int64_t& _alertGranularity);

                    /**
                     * 判断参数 AlertGranularity 是否已赋值
                     * @return AlertGranularity 是否已赋值
                     * 
                     */
                    bool AlertGranularityHasBeenSet() const;

                    /**
                     * 获取<p>Asset event</p><p>Enumeration values:</p><ul><li>NewAk: newly-added AK</li></ul>
                     * @return Asset <p>Asset event</p><p>Enumeration values:</p><ul><li>NewAk: newly-added AK</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAsset() const;

                    /**
                     * 设置<p>Asset event</p><p>Enumeration values:</p><ul><li>NewAk: newly-added AK</li></ul>
                     * @param _asset <p>Asset event</p><p>Enumeration values:</p><ul><li>NewAk: newly-added AK</li></ul>
                     * 
                     */
                    void SetAsset(const std::vector<std::string>& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取<p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     * @return BeginTime <p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     * @param _beginTime <p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     * @return EndTime <p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     * @param _endTime <p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Alarm type/severity (Type: AbnBehavior - exception behavior, LeakDetect - leakage detection; Severity: 1 - notification, 2 - low risk, 3 - medium risk, 4 - high risk, 5 - critical)</p>
                     */
                    std::vector<LevelOption> m_alert;
                    bool m_alertHasBeenSet;

                    /**
                     * <p>Alarm notification granularity</p><p>Enumeration values:</p><ul><li>0: Push by alert aggregation</li><li>1: Push by invocation record</li></ul>
                     */
                    int64_t m_alertGranularity;
                    bool m_alertGranularityHasBeenSet;

                    /**
                     * <p>Asset event</p><p>Enumeration values:</p><ul><li>NewAk: newly-added AK</li></ul>
                     */
                    std::vector<std::string> m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * <p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNOTIFYSETTINGAKREQUEST_H_
