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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PREPAYSETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PREPAYSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Period.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Serverless HBase prepaid settings.
                */
                class PrePaySetting : public AbstractModel
                {
                public:
                    PrePaySetting();
                    ~PrePaySetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time.
                     * @return Period Time.
                     * 
                     */
                    Period GetPeriod() const;

                    /**
                     * 设置Time.
                     * @param _period Time.
                     * 
                     */
                    void SetPeriod(const Period& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. Valid values: 0 (notifies before expiration but does not trigger auto-renewal), 1 (notifies before expiration and triggers auto-renewal), and 2 (does not notify before expiration and does not trigger auto-renewal).
                     * @return AutoRenewFlag Auto-renewal flag. Valid values: 0 (notifies before expiration but does not trigger auto-renewal), 1 (notifies before expiration and triggers auto-renewal), and 2 (does not notify before expiration and does not trigger auto-renewal).
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values: 0 (notifies before expiration but does not trigger auto-renewal), 1 (notifies before expiration and triggers auto-renewal), and 2 (does not notify before expiration and does not trigger auto-renewal).
                     * @param _autoRenewFlag Auto-renewal flag. Valid values: 0 (notifies before expiration but does not trigger auto-renewal), 1 (notifies before expiration and triggers auto-renewal), and 2 (does not notify before expiration and does not trigger auto-renewal).
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * Time.
                     */
                    Period m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values: 0 (notifies before expiration but does not trigger auto-renewal), 1 (notifies before expiration and triggers auto-renewal), and 2 (does not notify before expiration and does not trigger auto-renewal).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PREPAYSETTING_H_
