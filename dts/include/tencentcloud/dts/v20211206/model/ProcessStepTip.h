/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_PROCESSSTEPTIP_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_PROCESSSTEPTIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Object of the error or warning information
                */
                class ProcessStepTip : public AbstractModel
                {
                public:
                    ProcessStepTip();
                    ~ProcessStepTip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Message Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Solution Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Solution Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HelpDoc Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHelpDoc() const;

                    /**
                     * 设置Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HelpDoc Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHelpDoc(const std::string& _helpDoc);

                    /**
                     * 判断参数 HelpDoc 是否已赋值
                     * @return HelpDoc 是否已赋值
                     */
                    bool HelpDocHasBeenSet() const;

                private:

                    /**
                     * Prompt message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Help document
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_helpDoc;
                    bool m_helpDocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_PROCESSSTEPTIP_H_
