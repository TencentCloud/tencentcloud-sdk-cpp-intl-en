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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_RESULT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_RESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Event result
                */
                class Result : public AbstractModel
                {
                public:
                    Result();
                    ~Result() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Actual completion status</p><p>Enumeration values:</p><ul><li>success: Success,</li><li>failure: Failure.</li></ul>
                     * @return Status <p>Actual completion status</p><p>Enumeration values:</p><ul><li>success: Success,</li><li>failure: Failure.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Actual completion status</p><p>Enumeration values:</p><ul><li>success: Success,</li><li>failure: Failure.</li></ul>
                     * @param _status <p>Actual completion status</p><p>Enumeration values:</p><ul><li>success: Success,</li><li>failure: Failure.</li></ul>
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
                     * 获取<p>Failure reason</p>
                     * @return FailureReason <p>Failure reason</p>
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置<p>Failure reason</p>
                     * @param _failureReason <p>Failure reason</p>
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                private:

                    /**
                     * <p>Actual completion status</p><p>Enumeration values:</p><ul><li>success: Success,</li><li>failure: Failure.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Failure reason</p>
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_RESULT_H_
