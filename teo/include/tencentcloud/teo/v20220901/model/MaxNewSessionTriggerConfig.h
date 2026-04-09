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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MAXNEWSESSIONTRIGGERCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MAXNEWSESSIONTRIGGERCONFIG_H_

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
                * Trigger threshold for verification in Bot management.
                */
                class MaxNewSessionTriggerConfig : public AbstractModel
                {
                public:
                    MaxNewSessionTriggerConfig();
                    ~MaxNewSessionTriggerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
                     * @return MaxNewSessionCountInterval Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
                     * 
                     */
                    std::string GetMaxNewSessionCountInterval() const;

                    /**
                     * 设置Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
                     * @param _maxNewSessionCountInterval Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
                     * 
                     */
                    void SetMaxNewSessionCountInterval(const std::string& _maxNewSessionCountInterval);

                    /**
                     * 判断参数 MaxNewSessionCountInterval 是否已赋值
                     * @return MaxNewSessionCountInterval 是否已赋值
                     * 
                     */
                    bool MaxNewSessionCountIntervalHasBeenSet() const;

                    /**
                     * 获取Trigger threshold cumulative count. value range: 1-100000000.
                     * @return MaxNewSessionCountThreshold Trigger threshold cumulative count. value range: 1-100000000.
                     * 
                     */
                    int64_t GetMaxNewSessionCountThreshold() const;

                    /**
                     * 设置Trigger threshold cumulative count. value range: 1-100000000.
                     * @param _maxNewSessionCountThreshold Trigger threshold cumulative count. value range: 1-100000000.
                     * 
                     */
                    void SetMaxNewSessionCountThreshold(const int64_t& _maxNewSessionCountThreshold);

                    /**
                     * 判断参数 MaxNewSessionCountThreshold 是否已赋值
                     * @return MaxNewSessionCountThreshold 是否已赋值
                     * 
                     */
                    bool MaxNewSessionCountThresholdHasBeenSet() const;

                private:

                    /**
                     * Time window for trigger threshold statistics. valid values: <li>5s: within 5 seconds;</li><li>10s: within 10 seconds;</li><li>15s: within 15 seconds;</li><li>30s: within 30 seconds;</li><li>60s: within 60 seconds;</li><li>5m: within 5 minutes;</li><li>10m: within 10 minutes;</li><li>30m: within 30 minutes;</li><li>60m: within 60 minutes.</li>.
                     */
                    std::string m_maxNewSessionCountInterval;
                    bool m_maxNewSessionCountIntervalHasBeenSet;

                    /**
                     * Trigger threshold cumulative count. value range: 1-100000000.
                     */
                    int64_t m_maxNewSessionCountThreshold;
                    bool m_maxNewSessionCountThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MAXNEWSESSIONTRIGGERCONFIG_H_
