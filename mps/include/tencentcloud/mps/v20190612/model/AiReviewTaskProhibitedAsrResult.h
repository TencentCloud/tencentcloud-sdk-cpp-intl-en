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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWTASKPROHIBITEDASRRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWTASKPROHIBITEDASRRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiReviewProhibitedAsrTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiReviewProhibitedAsrTaskOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Result type of ASR-based prohibited information detection in speech task in content audit
                */
                class AiReviewTaskProhibitedAsrResult : public AbstractModel
                {
                public:
                    AiReviewTaskProhibitedAsrResult();
                    ~AiReviewTaskProhibitedAsrResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * @return Status Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * @param Status Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error code. An empty string indicates the task is successful; otherwise it is failed. For details about the values, see [Error Code List](https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @return ErrCodeExt Error code. An empty string indicates the task is successful; otherwise it is failed. For details about the values, see [Error Code List](https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates the task is successful; otherwise it is failed. For details about the values, see [Error Code List](https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @param ErrCodeExt Error code. An empty string indicates the task is successful; otherwise it is failed. For details about the values, see [Error Code List](https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     * @return ErrCode Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     * @param ErrCode Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param Message Error message.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Input of ASR-based prohibited information detection in speech task in content audit
                     * @return Input Input of ASR-based prohibited information detection in speech task in content audit
                     */
                    AiReviewProhibitedAsrTaskInput GetInput() const;

                    /**
                     * 设置Input of ASR-based prohibited information detection in speech task in content audit
                     * @param Input Input of ASR-based prohibited information detection in speech task in content audit
                     */
                    void SetInput(const AiReviewProhibitedAsrTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of ASR-based prohibited information detection in speech task in content audit
                     * @return Output Output of ASR-based prohibited information detection in speech task in content audit
                     */
                    AiReviewProhibitedAsrTaskOutput GetOutput() const;

                    /**
                     * 设置Output of ASR-based prohibited information detection in speech task in content audit
                     * @param Output Output of ASR-based prohibited information detection in speech task in content audit
                     */
                    void SetOutput(const AiReviewProhibitedAsrTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. An empty string indicates the task is successful; otherwise it is failed. For details about the values, see [Error Code List](https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Input of ASR-based prohibited information detection in speech task in content audit
                     */
                    AiReviewProhibitedAsrTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of ASR-based prohibited information detection in speech task in content audit
                     */
                    AiReviewProhibitedAsrTaskOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWTASKPROHIBITEDASRRESULT_H_
