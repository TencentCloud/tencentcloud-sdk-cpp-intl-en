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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYLOGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyLog request structure.
                */
                class ModifyLogRequest : public AbstractModel
                {
                public:
                    ModifyLogRequest();
                    ~ModifyLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @return LogType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @param _logType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write command.</li><li>read: Read command.</li><li>all: All commands.</li></ul>
                     * @return LogSubType <p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write command.</li><li>read: Read command.</li><li>all: All commands.</li></ul>
                     * 
                     */
                    std::string GetLogSubType() const;

                    /**
                     * 设置<p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write command.</li><li>read: Read command.</li><li>all: All commands.</li></ul>
                     * @param _logSubType <p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write command.</li><li>read: Read command.</li><li>all: All commands.</li></ul>
                     * 
                     */
                    void SetLogSubType(const std::string& _logSubType);

                    /**
                     * 判断参数 LogSubType 是否已赋值
                     * @return LogSubType 是否已赋值
                     * 
                     */
                    bool LogSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>Log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li></ul>
                     * @return LogExpireDay <p>Log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li></ul>
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>Log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li></ul>
                     * @param _logExpireDay <p>Log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li></ul>
                     * 
                     */
                    void SetLogExpireDay(const int64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>High-frequency log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li></ul><p>Default value: 7</p>
                     * @return HighLogExpireDay <p>High-frequency log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li></ul><p>Default value: 7</p>
                     * 
                     */
                    int64_t GetHighLogExpireDay() const;

                    /**
                     * 设置<p>High-frequency log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li></ul><p>Default value: 7</p>
                     * @param _highLogExpireDay <p>High-frequency log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li></ul><p>Default value: 7</p>
                     * 
                     */
                    void SetHighLogExpireDay(const int64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>Downgrade policy, unit: ms. When the instance P99 reaches the downgrade policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms.</p><p>Value ranges from 300 to 1000.</p>
                     * @return DegradeStrategy <p>Downgrade policy, unit: ms. When the instance P99 reaches the downgrade policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms.</p><p>Value ranges from 300 to 1000.</p>
                     * 
                     */
                    int64_t GetDegradeStrategy() const;

                    /**
                     * 设置<p>Downgrade policy, unit: ms. When the instance P99 reaches the downgrade policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms.</p><p>Value ranges from 300 to 1000.</p>
                     * @param _degradeStrategy <p>Downgrade policy, unit: ms. When the instance P99 reaches the downgrade policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms.</p><p>Value ranges from 300 to 1000.</p>
                     * 
                     */
                    void SetDegradeStrategy(const int64_t& _degradeStrategy);

                    /**
                     * 判断参数 DegradeStrategy 是否已赋值
                     * @return DegradeStrategy 是否已赋值
                     * 
                     */
                    bool DegradeStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>Specify the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write command.</li><li>read: Read command.</li><li>all: All commands.</li></ul>
                     */
                    std::string m_logSubType;
                    bool m_logSubTypeHasBeenSet;

                    /**
                     * <p>Log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li></ul>
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>High-frequency log expiration time, unit: day.</p><p>Enumeration value:</p><ul><li>7: 7 days</li></ul><p>Default value: 7</p>
                     */
                    int64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * <p>Downgrade policy, unit: ms. When the instance P99 reaches the downgrade policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms.</p><p>Value ranges from 300 to 1000.</p>
                     */
                    int64_t m_degradeStrategy;
                    bool m_degradeStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYLOGREQUEST_H_
