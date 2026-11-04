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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CHECKRESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CHECKRESULT_H_

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
                * Common check results
                */
                class CheckResult : public AbstractModel
                {
                public:
                    CheckResult();
                    ~CheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the verification passed.
                     * @return Passed Whether the verification passed.
                     * 
                     */
                    bool GetPassed() const;

                    /**
                     * 设置Whether the verification passed.
                     * @param _passed Whether the verification passed.
                     * 
                     */
                    void SetPassed(const bool& _passed);

                    /**
                     * 判断参数 Passed 是否已赋值
                     * @return Passed 是否已赋值
                     * 
                     */
                    bool PassedHasBeenSet() const;

                    /**
                     * 获取Failure reason (filled when passed=false)
                     * @return Reason Failure reason (filled when passed=false)
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Failure reason (filled when passed=false)
                     * @param _reason Failure reason (filled when passed=false)
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Whether the verification passed.
                     */
                    bool m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * Failure reason (filled when passed=false)
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CHECKRESULT_H_
