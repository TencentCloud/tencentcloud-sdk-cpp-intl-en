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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGERESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * PreviewKafkaRecharge response structure.
                */
                class PreviewKafkaRechargeResponse : public AbstractModel
                {
                public:
                    PreviewKafkaRechargeResponse();
                    ~PreviewKafkaRechargeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Log sample, which is returned when `PreviewType` is set to `2`
                     * @return LogSample Log sample, which is returned when `PreviewType` is set to `2`
                     * 
                     */
                    std::string GetLogSample() const;

                    /**
                     * 判断参数 LogSample 是否已赋值
                     * @return LogSample 是否已赋值
                     * 
                     */
                    bool LogSampleHasBeenSet() const;

                    /**
                     * 获取Log preview result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogData Log preview result
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogData() const;

                    /**
                     * 判断参数 LogData 是否已赋值
                     * @return LogData 是否已赋值
                     * 
                     */
                    bool LogDataHasBeenSet() const;

                private:

                    /**
                     * Log sample, which is returned when `PreviewType` is set to `2`
                     */
                    std::string m_logSample;
                    bool m_logSampleHasBeenSet;

                    /**
                     * Log preview result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logData;
                    bool m_logDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGERESPONSE_H_
