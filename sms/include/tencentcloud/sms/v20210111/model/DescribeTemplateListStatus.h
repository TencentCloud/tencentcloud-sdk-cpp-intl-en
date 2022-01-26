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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBETEMPLATELISTSTATUS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBETEMPLATELISTSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * Response for getting SMS template information
                */
                class DescribeTemplateListStatus : public AbstractModel
                {
                public:
                    DescribeTemplateListStatus();
                    ~DescribeTemplateListStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template ID.
                     * @return TemplateId Template ID.
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置Template ID.
                     * @param TemplateId Template ID.
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Whether it is Global SMS. 0: Mainland China SMS; 1: Global SMS.
                     * @return International Whether it is Global SMS. 0: Mainland China SMS; 1: Global SMS.
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置Whether it is Global SMS. 0: Mainland China SMS; 1: Global SMS.
                     * @param International Whether it is Global SMS. 0: Mainland China SMS; 1: Global SMS.
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取Template application status. Valid values: 0: approved; 1: under review; -1: application rejected or failed.
                     * @return StatusCode Template application status. Valid values: 0: approved; 1: under review; -1: application rejected or failed.
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置Template application status. Valid values: 0: approved; 1: under review; -1: application rejected or failed.
                     * @param StatusCode Template application status. Valid values: 0: approved; 1: under review; -1: application rejected or failed.
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     * @return ReviewReply Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     */
                    std::string GetReviewReply() const;

                    /**
                     * 设置Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     * @param ReviewReply Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     */
                    void SetReviewReply(const std::string& _reviewReply);

                    /**
                     * 判断参数 ReviewReply 是否已赋值
                     * @return ReviewReply 是否已赋值
                     */
                    bool ReviewReplyHasBeenSet() const;

                    /**
                     * 获取Template name.
                     * @return TemplateName Template name.
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name.
                     * @param TemplateName Template name.
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Application submission time in the format of UNIX timestamp in seconds.
                     * @return CreateTime Application submission time in the format of UNIX timestamp in seconds.
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Application submission time in the format of UNIX timestamp in seconds.
                     * @param CreateTime Application submission time in the format of UNIX timestamp in seconds.
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Template content.
                     * @return TemplateContent Template content.
                     */
                    std::string GetTemplateContent() const;

                    /**
                     * 设置Template content.
                     * @param TemplateContent Template content.
                     */
                    void SetTemplateContent(const std::string& _templateContent);

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     */
                    bool TemplateContentHasBeenSet() const;

                private:

                    /**
                     * Template ID.
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Whether it is Global SMS. 0: Mainland China SMS; 1: Global SMS.
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * Template application status. Valid values: 0: approved; 1: under review; -1: application rejected or failed.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     */
                    std::string m_reviewReply;
                    bool m_reviewReplyHasBeenSet;

                    /**
                     * Template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Application submission time in the format of UNIX timestamp in seconds.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Template content.
                     */
                    std::string m_templateContent;
                    bool m_templateContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBETEMPLATELISTSTATUS_H_
