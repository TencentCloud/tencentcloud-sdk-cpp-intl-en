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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDBACKUPTEMPLATEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDBACKUPTEMPLATEDATA_H_

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
                * data for creating a video cloud template
                */
                class AddRecordBackupTemplateData : public AbstractModel
                {
                public:
                    AddRecordBackupTemplateData();
                    ~AddRecordBackupTemplateData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Template ID</p>
                     * @return TemplateId <p>Template ID</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>Template ID</p>
                     * @param _templateId <p>Template ID</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Template name</p>
                     * @return TemplateName <p>Template name</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>Template name</p>
                     * @param _templateName <p>Template name</p>
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
                     * 获取<p>Cloud Upload Time Period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
                     * @return TimeSections <p>Cloud Upload Time Period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetTimeSections() const;

                    /**
                     * 设置<p>Cloud Upload Time Period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
                     * @param _timeSections <p>Cloud Upload Time Period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
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
                     * 获取<p>Recording time period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
                     * @return DevTimeSections <p>Recording time period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
                     * 
                     */
                    std::vector<RecordTemplateTimeSections> GetDevTimeSections() const;

                    /**
                     * 设置<p>Recording time period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
                     * @param _devTimeSections <p>Recording time period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
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
                     * 获取<p>Speed multiplication for cloud migration (supports 1x, 2x, and 4x)</p>
                     * @return Scale <p>Speed multiplication for cloud migration (supports 1x, 2x, and 4x)</p>
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置<p>Speed multiplication for cloud migration (supports 1x, 2x, and 4x)</p>
                     * @param _scale <p>Speed multiplication for cloud migration (supports 1x, 2x, and 4x)</p>
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateAt <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createAt <p>Creation time.</p>
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateAt <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateAt <p>Update time.</p>
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                    /**
                     * 获取<p>Cycle offset. Default value: 1, which means to pull yesterday's video recording from the device. 0 means to pull today's video recording from the device. 3 means to pull the video recording from the device from the day before yesterday.</p><p>Default value: 1</p>
                     * @return DayOffset <p>Cycle offset. Default value: 1, which means to pull yesterday's video recording from the device. 0 means to pull today's video recording from the device. 3 means to pull the video recording from the device from the day before yesterday.</p><p>Default value: 1</p>
                     * 
                     */
                    int64_t GetDayOffset() const;

                    /**
                     * 设置<p>Cycle offset. Default value: 1, which means to pull yesterday's video recording from the device. 0 means to pull today's video recording from the device. 3 means to pull the video recording from the device from the day before yesterday.</p><p>Default value: 1</p>
                     * @param _dayOffset <p>Cycle offset. Default value: 1, which means to pull yesterday's video recording from the device. 0 means to pull today's video recording from the device. 3 means to pull the video recording from the device from the day before yesterday.</p><p>Default value: 1</p>
                     * 
                     */
                    void SetDayOffset(const int64_t& _dayOffset);

                    /**
                     * 判断参数 DayOffset 是否已赋值
                     * @return DayOffset 是否已赋值
                     * 
                     */
                    bool DayOffsetHasBeenSet() const;

                private:

                    /**
                     * <p>Template ID</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Template name</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>Cloud Upload Time Period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
                     */
                    std::vector<RecordTemplateTimeSections> m_timeSections;
                    bool m_timeSectionsHasBeenSet;

                    /**
                     * <p>Recording time period (set by week, supports setting multiple time periods per day, each time period not less than 10 minutes)</p>
                     */
                    std::vector<RecordTemplateTimeSections> m_devTimeSections;
                    bool m_devTimeSectionsHasBeenSet;

                    /**
                     * <p>Speed multiplication for cloud migration (supports 1x, 2x, and 4x)</p>
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                    /**
                     * <p>Cycle offset. Default value: 1, which means to pull yesterday's video recording from the device. 0 means to pull today's video recording from the device. 3 means to pull the video recording from the device from the day before yesterday.</p><p>Default value: 1</p>
                     */
                    int64_t m_dayOffset;
                    bool m_dayOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDBACKUPTEMPLATEDATA_H_
