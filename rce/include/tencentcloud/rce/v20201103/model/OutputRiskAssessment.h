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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTRISKASSESSMENT_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTRISKASSESSMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/OutputRiskAssessmentInfo.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * Query output parameters of risk assessment results.
                */
                class OutputRiskAssessment : public AbstractModel
                {
                public:
                    OutputRiskAssessment();
                    ~OutputRiskAssessment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Return code.
Note: This field may return null, indicating that no valid value is found.
                     * @return Code Return code.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Return code.
Note: This field may return null, indicating that no valid value is found.
                     * @param _code Return code.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Returned information

Note: This field may return null, indicating that no valid value is found.
                     * @return Message Returned information

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Returned information

Note: This field may return null, indicating that no valid value is found.
                     * @param _message Returned information

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
                     * 获取Business details.
Note: This field may return null, indicating that no valid value is found.
                     * @return Value Business details.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    OutputRiskAssessmentInfo GetValue() const;

                    /**
                     * 设置Business details.
Note: This field may return null, indicating that no valid value is found.
                     * @param _value Business details.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetValue(const OutputRiskAssessmentInfo& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Request ID.
Note: This field may return null, indicating that no valid value is found.
                     * @return UUid Request ID.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUUid() const;

                    /**
                     * 设置Request ID.
Note: This field may return null, indicating that no valid value is found.
                     * @param _uUid Request ID.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetUUid(const std::string& _uUid);

                    /**
                     * 判断参数 UUid 是否已赋值
                     * @return UUid 是否已赋值
                     * 
                     */
                    bool UUidHasBeenSet() const;

                private:

                    /**
                     * Return code.
Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Returned information

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Business details.
Note: This field may return null, indicating that no valid value is found.
                     */
                    OutputRiskAssessmentInfo m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Request ID.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_uUid;
                    bool m_uUidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTRISKASSESSMENT_H_
