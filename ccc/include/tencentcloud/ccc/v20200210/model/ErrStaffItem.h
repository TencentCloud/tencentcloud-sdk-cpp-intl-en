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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_ERRSTAFFITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_ERRSTAFFITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * When adding customer service personnel in batches, information of the customer service personnel with an error is returned.
                */
                class ErrStaffItem : public AbstractModel
                {
                public:
                    ErrStaffItem();
                    ~ErrStaffItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent email address.
                     * @return StaffEmail Agent email address.
                     * 
                     */
                    std::string GetStaffEmail() const;

                    /**
                     * 设置Agent email address.
                     * @param _staffEmail Agent email address.
                     * 
                     */
                    void SetStaffEmail(const std::string& _staffEmail);

                    /**
                     * 判断参数 StaffEmail 是否已赋值
                     * @return StaffEmail 是否已赋值
                     * 
                     */
                    bool StaffEmailHasBeenSet() const;

                    /**
                     * 获取Error code.
                     * @return Code Error code.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Error code.
                     * @param _code Error code.
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Error description.
                     * @return Message Error description.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error description.
                     * @param _message Error description.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Agent email address.
                     */
                    std::string m_staffEmail;
                    bool m_staffEmailHasBeenSet;

                    /**
                     * Error code.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Error description.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_ERRSTAFFITEM_H_
