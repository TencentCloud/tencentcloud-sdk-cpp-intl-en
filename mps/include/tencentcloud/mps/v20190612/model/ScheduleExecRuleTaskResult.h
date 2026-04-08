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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULEEXECRULETASKRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULEEXECRULETASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ExecRulesTask.h>
#include <tencentcloud/mps/v20190612/model/ExecRuleTaskData.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Result type of the media quality inspection task.
                */
                class ScheduleExecRuleTaskResult : public AbstractModel
                {
                public:
                    ScheduleExecRuleTaskResult();
                    ~ScheduleExecRuleTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status, which can be PROCESSING, SUCCESS, or FAIL.
                     * @return Status Task status, which can be PROCESSING, SUCCESS, or FAIL.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status, which can be PROCESSING, SUCCESS, or FAIL.
                     * @param _status Task status, which can be PROCESSING, SUCCESS, or FAIL.
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
                     * 获取Error code. An empty string indicates success, while other values indicate failure. For specific values, see the list of MPS error codes at https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81.
                     * @return ErrCodeExt Error code. An empty string indicates success, while other values indicate failure. For specific values, see the list of MPS error codes at https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81.
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates success, while other values indicate failure. For specific values, see the list of MPS error codes at https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81.
                     * @param _errCodeExt Error code. An empty string indicates success, while other values indicate failure. For specific values, see the list of MPS error codes at https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81.
                     * 
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     * 
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param _message Error message.
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
                     * 获取Input of the conditional judgment task.
                     * @return Input Input of the conditional judgment task.
                     * 
                     */
                    ExecRulesTask GetInput() const;

                    /**
                     * 设置Input of the conditional judgment task.
                     * @param _input Input of the conditional judgment task.
                     * 
                     */
                    void SetInput(const ExecRulesTask& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of the conditional judgment task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Output Output of the conditional judgment task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ExecRuleTaskData GetOutput() const;

                    /**
                     * 设置Output of the conditional judgment task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _output Output of the conditional judgment task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOutput(const ExecRuleTaskData& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Task status, which can be PROCESSING, SUCCESS, or FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. An empty string indicates success, while other values indicate failure. For specific values, see the list of MPS error codes at https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81.
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Input of the conditional judgment task.
                     */
                    ExecRulesTask m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of the conditional judgment task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ExecRuleTaskData m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULEEXECRULETASKRESULT_H_
