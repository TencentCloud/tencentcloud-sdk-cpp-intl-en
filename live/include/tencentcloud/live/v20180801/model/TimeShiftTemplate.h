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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTTEMPLATE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * The information of a time shifting template.
                */
                class TimeShiftTemplate : public AbstractModel
                {
                public:
                    TimeShiftTemplate();
                    ~TimeShiftTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The template name.
                     * @return TemplateName The template name.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置The template name.
                     * @param _templateName The template name.
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
                     * 获取The time shifting duration.
Unit: second
                     * @return Duration The time shifting duration.
Unit: second
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置The time shifting duration.
Unit: second
                     * @param _duration The time shifting duration.
Unit: second
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The segment size.
Value range: 3-10.
Unit: Second.
Default value: 5
                     * @return ItemDuration The segment size.
Value range: 3-10.
Unit: Second.
Default value: 5
                     * 
                     */
                    uint64_t GetItemDuration() const;

                    /**
                     * 设置The segment size.
Value range: 3-10.
Unit: Second.
Default value: 5
                     * @param _itemDuration The segment size.
Value range: 3-10.
Unit: Second.
Default value: 5
                     * 
                     */
                    void SetItemDuration(const uint64_t& _itemDuration);

                    /**
                     * 判断参数 ItemDuration 是否已赋值
                     * @return ItemDuration 是否已赋值
                     * 
                     */
                    bool ItemDurationHasBeenSet() const;

                    /**
                     * 获取The template ID.
                     * @return TemplateId The template ID.
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置The template ID.
                     * @param _templateId The template ID.
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取The template description.
                     * @return Description The template description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The template description.
                     * @param _description The template description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The region. Valid values:
`Mainland`: The Chinese mainland.
`Overseas`: Outside the Chinese mainland.
Default value: `Mainland`.
                     * @return Area The region. Valid values:
`Mainland`: The Chinese mainland.
`Overseas`: Outside the Chinese mainland.
Default value: `Mainland`.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置The region. Valid values:
`Mainland`: The Chinese mainland.
`Overseas`: Outside the Chinese mainland.
Default value: `Mainland`.
                     * @param _area The region. Valid values:
`Mainland`: The Chinese mainland.
`Overseas`: Outside the Chinese mainland.
Default value: `Mainland`.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Whether to remove watermarks.
If you pass in `true`, the original stream will be recorded.
Default value: `false`.
                     * @return RemoveWatermark Whether to remove watermarks.
If you pass in `true`, the original stream will be recorded.
Default value: `false`.
                     * 
                     */
                    bool GetRemoveWatermark() const;

                    /**
                     * 设置Whether to remove watermarks.
If you pass in `true`, the original stream will be recorded.
Default value: `false`.
                     * @param _removeWatermark Whether to remove watermarks.
If you pass in `true`, the original stream will be recorded.
Default value: `false`.
                     * 
                     */
                    void SetRemoveWatermark(const bool& _removeWatermark);

                    /**
                     * 判断参数 RemoveWatermark 是否已赋值
                     * @return RemoveWatermark 是否已赋值
                     * 
                     */
                    bool RemoveWatermarkHasBeenSet() const;

                    /**
                     * 获取The transcoding template IDs.
This API works only if `RemoveWatermark` is `false`.
                     * @return TranscodeTemplateIds The transcoding template IDs.
This API works only if `RemoveWatermark` is `false`.
                     * 
                     */
                    std::vector<uint64_t> GetTranscodeTemplateIds() const;

                    /**
                     * 设置The transcoding template IDs.
This API works only if `RemoveWatermark` is `false`.
                     * @param _transcodeTemplateIds The transcoding template IDs.
This API works only if `RemoveWatermark` is `false`.
                     * 
                     */
                    void SetTranscodeTemplateIds(const std::vector<uint64_t>& _transcodeTemplateIds);

                    /**
                     * 判断参数 TranscodeTemplateIds 是否已赋值
                     * @return TranscodeTemplateIds 是否已赋值
                     * 
                     */
                    bool TranscodeTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * The template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * The time shifting duration.
Unit: second
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The segment size.
Value range: 3-10.
Unit: Second.
Default value: 5
                     */
                    uint64_t m_itemDuration;
                    bool m_itemDurationHasBeenSet;

                    /**
                     * The template ID.
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * The template description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The region. Valid values:
`Mainland`: The Chinese mainland.
`Overseas`: Outside the Chinese mainland.
Default value: `Mainland`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Whether to remove watermarks.
If you pass in `true`, the original stream will be recorded.
Default value: `false`.
                     */
                    bool m_removeWatermark;
                    bool m_removeWatermarkHasBeenSet;

                    /**
                     * The transcoding template IDs.
This API works only if `RemoveWatermark` is `false`.
                     */
                    std::vector<uint64_t> m_transcodeTemplateIds;
                    bool m_transcodeTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTTEMPLATE_H_
