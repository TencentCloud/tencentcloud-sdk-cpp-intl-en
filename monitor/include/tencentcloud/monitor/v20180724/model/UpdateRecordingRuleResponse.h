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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATERECORDINGRULERESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATERECORDINGRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdateRecordingRule response structure.
                */
                class UpdateRecordingRuleResponse : public AbstractModel
                {
                public:
                    UpdateRecordingRuleResponse();
                    ~UpdateRecordingRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATERECORDINGRULERESPONSE_H_
