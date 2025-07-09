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
                * Serverless HBase prepaid settings
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Period Time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Period GetPeriod() const;

                    /**
                     * 设置Time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _period Time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Auto-renewal flag. 0: notify before expiration but do not auto-renew; 1: notify before expiration and auto-renew; and 2: do not notify before expiration and do not auto-renew.
                     * @return AutoRenewFlag Auto-renewal flag. 0: notify before expiration but do not auto-renew; 1: notify before expiration and auto-renew; and 2: do not notify before expiration and do not auto-renew.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. 0: notify before expiration but do not auto-renew; 1: notify before expiration and auto-renew; and 2: do not notify before expiration and do not auto-renew.
                     * @param _autoRenewFlag Auto-renewal flag. 0: notify before expiration but do not auto-renew; 1: notify before expiration and auto-renew; and 2: do not notify before expiration and do not auto-renew.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Period m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Auto-renewal flag. 0: notify before expiration but do not auto-renew; 1: notify before expiration and auto-renew; and 2: do not notify before expiration and do not auto-renew.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PREPAYSETTING_H_
