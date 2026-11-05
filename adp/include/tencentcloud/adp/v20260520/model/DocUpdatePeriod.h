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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCUPDATEPERIOD_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCUPDATEPERIOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Document update cycle configuration
                */
                class DocUpdatePeriod : public AbstractModel
                {
                public:
                    DocUpdatePeriod();
                    ~DocUpdatePeriod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether periodic update is enabled</p>
                     * @return Enabled <p>Whether periodic update is enabled</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether periodic update is enabled</p>
                     * @param _enabled <p>Whether periodic update is enabled</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Update interval (hr)</p>
                     * @return PeriodHour <p>Update interval (hr)</p>
                     * 
                     */
                    uint64_t GetPeriodHour() const;

                    /**
                     * 设置<p>Update interval (hr)</p>
                     * @param _periodHour <p>Update interval (hr)</p>
                     * 
                     */
                    void SetPeriodHour(const uint64_t& _periodHour);

                    /**
                     * 判断参数 PeriodHour 是否已赋值
                     * @return PeriodHour 是否已赋值
                     * 
                     */
                    bool PeriodHourHasBeenSet() const;

                private:

                    /**
                     * <p>Whether periodic update is enabled</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Update interval (hr)</p>
                     */
                    uint64_t m_periodHour;
                    bool m_periodHourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCUPDATEPERIOD_H_
