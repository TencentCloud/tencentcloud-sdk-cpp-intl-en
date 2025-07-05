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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ERRORSUMMARY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ERRORSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Error Summary.
                */
                class ErrorSummary : public AbstractModel
                {
                public:
                    ErrorSummary();
                    ~ErrorSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status code.

Note: This field may return null, indicating that no valid value is found.
                     * @return Status Status code.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status code.

Note: This field may return null, indicating that no valid value is found.
                     * @param _status Status code.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Result code.

Note: This field may return null, indicating that no valid value is found.
                     * @return Result Result code.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Result code.

Note: This field may return null, indicating that no valid value is found.
                     * @param _result Result code.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Number of error occurrences.

Note: This field may return null, indicating that no valid value is found.
                     * @return Count Number of error occurrences.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of error occurrences.

Note: This field may return null, indicating that no valid value is found.
                     * @param _count Number of error occurrences.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Error rate.

Note: This field may return null, indicating that no valid value is found.
                     * @return Rate Error rate.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetRate() const;

                    /**
                     * 设置Error rate.

Note: This field may return null, indicating that no valid value is found.
                     * @param _rate Error rate.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRate(const double& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取Error message.

Note: This field may return null, indicating that no valid value is found.
                     * @return Message Error message.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.

Note: This field may return null, indicating that no valid value is found.
                     * @param _message Error message.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Request protocol type.

Note: This field may return null, indicating that no valid value is found.
                     * @return Proto Request protocol type.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置Request protocol type.

Note: This field may return null, indicating that no valid value is found.
                     * @param _proto Request protocol type.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                private:

                    /**
                     * Status code.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Result code.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Number of error occurrences.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Error rate.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * Error message.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Request protocol type.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ERRORSUMMARY_H_
