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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/RecordTemplateTimeSections.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddRecordTemplate request structure.
                */
                class AddRecordTemplateRequest : public AbstractModel
                {
                public:
                    AddRecordTemplateRequest();
                    ~AddRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name. It can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-), with a length not exceeding 32 characters. The template name must be globally unique and cannot be empty or duplicated.
                     * @return TemplateName Template name. It can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-), with a length not exceeding 32 characters. The template name must be globally unique and cannot be empty or duplicated.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name. It can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-), with a length not exceeding 32 characters. The template name must be globally unique and cannot be empty or duplicated.
                     * @param _templateName Template name. It can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-), with a length not exceeding 32 characters. The template name must be globally unique and cannot be empty or duplicated.
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Cloud upload time period. Settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes.
                     * @return TimeSections Cloud upload time period. Settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes.
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetTimeSections() const;

                    /**
                     * 设置Cloud upload time period. Settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes.
                     * @param _timeSections Cloud upload time period. Settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes.
                     * 
                     */
                    void SetTimeSections(const std::vector<RecordTemplateTimeSections>& _timeSections);

                    /**
                     * 判断参数 TimeSections 是否已赋值
                     * @return TimeSections 是否已赋值
                     * 
                     */
                    bool TimeSectionsHasBeenSet() const;

                private:

                    /**
                     * Template name. It can contain only Chinese characters, letters, digits, underscores (_), and hyphens (-), with a length not exceeding 32 characters. The template name must be globally unique and cannot be empty or duplicated.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Cloud upload time period. Settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes.
                     */
                    std::vector<RecordTemplateTimeSections> m_timeSections;
                    bool m_timeSectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDTEMPLATEREQUEST_H_
