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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDETAIL_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Recipient list details.
                */
                class ReceiverDetail : public AbstractModel
                {
                public:
                    ReceiverDetail();
                    ~ReceiverDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recipient's address.
                     * @return Email Recipient's address.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Recipient's address.
                     * @param _email Recipient's address.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Creation time.


                     * @return CreateTime Creation time.


                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.


                     * @param _createTime Creation time.


                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Template parameter.
                     * @return TemplateData Template parameter.
                     * 
                     */
                    std::string GetTemplateData() const;

                    /**
                     * 设置Template parameter.
                     * @param _templateData Template parameter.
                     * 
                     */
                    void SetTemplateData(const std::string& _templateData);

                    /**
                     * 判断参数 TemplateData 是否已赋值
                     * @return TemplateData 是否已赋值
                     * 
                     */
                    bool TemplateDataHasBeenSet() const;

                    /**
                     * 获取Invalid reason.
                     * @return Reason Invalid reason.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Invalid reason.
                     * @param _reason Invalid reason.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取1: valid; 2: invalid.
                     * @return Status 1: valid; 2: invalid.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1: valid; 2: invalid.
                     * @param _status 1: valid; 2: invalid.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Recipient address id.
                     * @return EmailId Recipient address id.
                     * 
                     */
                    uint64_t GetEmailId() const;

                    /**
                     * 设置Recipient address id.
                     * @param _emailId Recipient address id.
                     * 
                     */
                    void SetEmailId(const uint64_t& _emailId);

                    /**
                     * 判断参数 EmailId 是否已赋值
                     * @return EmailId 是否已赋值
                     * 
                     */
                    bool EmailIdHasBeenSet() const;

                private:

                    /**
                     * Recipient's address.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Creation time.


                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Template parameter.
                     */
                    std::string m_templateData;
                    bool m_templateDataHasBeenSet;

                    /**
                     * Invalid reason.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 1: valid; 2: invalid.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Recipient address id.
                     */
                    uint64_t m_emailId;
                    bool m_emailIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDETAIL_H_
