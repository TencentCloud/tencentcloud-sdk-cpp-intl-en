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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBECHECKSTEPTIP_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBECHECKSTEPTIP_H_

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
                * Prompts for subscription check tasks
                */
                class SubscribeCheckStepTip : public AbstractModel
                {
                public:
                    SubscribeCheckStepTip();
                    ~SubscribeCheckStepTip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error or warning detailsNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Error or warning detailsNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error or warning detailsNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Error or warning detailsNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Help documentation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HelpDoc Help documentation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHelpDoc() const;

                    /**
                     * 设置Help documentation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _helpDoc Help documentation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHelpDoc(const std::string& _helpDoc);

                    /**
                     * 判断参数 HelpDoc 是否已赋值
                     * @return HelpDoc 是否已赋值
                     * 
                     */
                    bool HelpDocHasBeenSet() const;

                private:

                    /**
                     * Error or warning detailsNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Help documentation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_helpDoc;
                    bool m_helpDocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBECHECKSTEPTIP_H_
