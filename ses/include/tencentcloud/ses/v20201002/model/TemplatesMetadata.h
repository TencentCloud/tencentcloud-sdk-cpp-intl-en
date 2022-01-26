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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_TEMPLATESMETADATA_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_TEMPLATESMETADATA_H_

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
                * Template list structure.
                */
                class TemplatesMetadata : public AbstractModel
                {
                public:
                    TemplatesMetadata();
                    ~TemplatesMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation time.
                     * @return CreatedTimestamp Creation time.
                     */
                    uint64_t GetCreatedTimestamp() const;

                    /**
                     * 设置Creation time.
                     * @param CreatedTimestamp Creation time.
                     */
                    void SetCreatedTimestamp(const uint64_t& _createdTimestamp);

                    /**
                     * 判断参数 CreatedTimestamp 是否已赋值
                     * @return CreatedTimestamp 是否已赋值
                     */
                    bool CreatedTimestampHasBeenSet() const;

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
                     * 获取Template status. 1: under review; 0: approved; 2: rejected; other values: unavailable.
                     * @return TemplateStatus Template status. 1: under review; 0: approved; 2: rejected; other values: unavailable.
                     */
                    int64_t GetTemplateStatus() const;

                    /**
                     * 设置Template status. 1: under review; 0: approved; 2: rejected; other values: unavailable.
                     * @param TemplateStatus Template status. 1: under review; 0: approved; 2: rejected; other values: unavailable.
                     */
                    void SetTemplateStatus(const int64_t& _templateStatus);

                    /**
                     * 判断参数 TemplateStatus 是否已赋值
                     * @return TemplateStatus 是否已赋值
                     */
                    bool TemplateStatusHasBeenSet() const;

                    /**
                     * 获取Template ID.
                     * @return TemplateID Template ID.
                     */
                    uint64_t GetTemplateID() const;

                    /**
                     * 设置Template ID.
                     * @param TemplateID Template ID.
                     */
                    void SetTemplateID(const uint64_t& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     */
                    bool TemplateIDHasBeenSet() const;

                    /**
                     * 获取Review reply
                     * @return ReviewReason Review reply
                     */
                    std::string GetReviewReason() const;

                    /**
                     * 设置Review reply
                     * @param ReviewReason Review reply
                     */
                    void SetReviewReason(const std::string& _reviewReason);

                    /**
                     * 判断参数 ReviewReason 是否已赋值
                     * @return ReviewReason 是否已赋值
                     */
                    bool ReviewReasonHasBeenSet() const;

                private:

                    /**
                     * Creation time.
                     */
                    uint64_t m_createdTimestamp;
                    bool m_createdTimestampHasBeenSet;

                    /**
                     * Template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Template status. 1: under review; 0: approved; 2: rejected; other values: unavailable.
                     */
                    int64_t m_templateStatus;
                    bool m_templateStatusHasBeenSet;

                    /**
                     * Template ID.
                     */
                    uint64_t m_templateID;
                    bool m_templateIDHasBeenSet;

                    /**
                     * Review reply
                     */
                    std::string m_reviewReason;
                    bool m_reviewReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_TEMPLATESMETADATA_H_
