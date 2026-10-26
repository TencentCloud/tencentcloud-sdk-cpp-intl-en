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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEMODIFY_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Modify the video cloud template data structure
                */
                class UpdateRecordBackupTemplateModify : public AbstractModel
                {
                public:
                    UpdateRecordBackupTemplateModify();
                    ~UpdateRecordBackupTemplateModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template name (not required if you do not rename)
                     * @return TemplateName Template name (not required if you do not rename)
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name (not required if you do not rename)
                     * @param _templateName Template name (not required if you do not rename)
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
                     * 获取Cloud upload time period (settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes)
                     * @return TimeSections Cloud upload time period (settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes)
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetTimeSections() const;

                    /**
                     * 设置Cloud upload time period (settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes)
                     * @param _timeSections Cloud upload time period (settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes)
                     * 
                     */
                    void SetTimeSections(const std::vector<RecordTemplateTimeSections>& _timeSections);

                    /**
                     * 判断参数 TimeSections 是否已赋值
                     * @return TimeSections 是否已赋值
                     * 
                     */
                    bool TimeSectionsHasBeenSet() const;

                    /**
                     * 获取Recording time period (set by week. Multiple time periods can be set each day, each not less than 10 minutes)
                     * @return DevTimeSections Recording time period (set by week. Multiple time periods can be set each day, each not less than 10 minutes)
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetDevTimeSections() const;

                    /**
                     * 设置Recording time period (set by week. Multiple time periods can be set each day, each not less than 10 minutes)
                     * @param _devTimeSections Recording time period (set by week. Multiple time periods can be set each day, each not less than 10 minutes)
                     * 
                     */
                    void SetDevTimeSections(const std::vector<RecordTemplateTimeSections>& _devTimeSections);

                    /**
                     * 判断参数 DevTimeSections 是否已赋值
                     * @return DevTimeSections 是否已赋值
                     * 
                     */
                    bool DevTimeSectionsHasBeenSet() const;

                    /**
                     * 获取Cloud speed multiplication (supports 1x, 2x, and 4x).
                     * @return Scale Cloud speed multiplication (supports 1x, 2x, and 4x).
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置Cloud speed multiplication (supports 1x, 2x, and 4x).
                     * @param _scale Cloud speed multiplication (supports 1x, 2x, and 4x).
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                private:

                    /**
                     * Template name (not required if you do not rename)
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Cloud upload time period (settings can be done by week. Multiple time periods can be set for each day, with each time period not less than 10 minutes)
                     */
                    std::vector<RecordTemplateTimeSections> m_timeSections;
                    bool m_timeSectionsHasBeenSet;

                    /**
                     * Recording time period (set by week. Multiple time periods can be set each day, each not less than 10 minutes)
                     */
                    std::vector<RecordTemplateTimeSections> m_devTimeSections;
                    bool m_devTimeSectionsHasBeenSet;

                    /**
                     * Cloud speed multiplication (supports 1x, 2x, and 4x).
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEMODIFY_H_
