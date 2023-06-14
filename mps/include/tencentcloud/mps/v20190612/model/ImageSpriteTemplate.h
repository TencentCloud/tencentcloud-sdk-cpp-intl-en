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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGESPRITETEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGESPRITETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Details of an image sprite generating template
                */
                class ImageSpriteTemplate : public AbstractModel
                {
                public:
                    ImageSpriteTemplate();
                    ~ImageSpriteTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of an image sprite generating template.
                     * @return Definition Unique ID of an image sprite generating template.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of an image sprite generating template.
                     * @param _definition Unique ID of an image sprite generating template.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * @return Type Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * @param _type Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Name of an image sprite generating template.
                     * @return Name Name of an image sprite generating template.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an image sprite generating template.
                     * @param _name Name of an image sprite generating template.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Subimage width of an image sprite.
                     * @return Width Subimage width of an image sprite.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Subimage width of an image sprite.
                     * @param _width Subimage width of an image sprite.
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Subimage height of an image sprite.
                     * @return Height Subimage height of an image sprite.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Subimage height of an image sprite.
                     * @param _height Subimage height of an image sprite.
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * @return ResolutionAdaptive Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * @param _resolutionAdaptive Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     * 
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     * 
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取Sampling type.
                     * @return SampleType Sampling type.
                     * 
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置Sampling type.
                     * @param _sampleType Sampling type.
                     * 
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     * 
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取Sampling interval.
                     * @return SampleInterval Sampling interval.
                     * 
                     */
                    uint64_t GetSampleInterval() const;

                    /**
                     * 设置Sampling interval.
                     * @param _sampleInterval Sampling interval.
                     * 
                     */
                    void SetSampleInterval(const uint64_t& _sampleInterval);

                    /**
                     * 判断参数 SampleInterval 是否已赋值
                     * @return SampleInterval 是否已赋值
                     * 
                     */
                    bool SampleIntervalHasBeenSet() const;

                    /**
                     * 获取Subimage row count of an image sprite.
                     * @return RowCount Subimage row count of an image sprite.
                     * 
                     */
                    uint64_t GetRowCount() const;

                    /**
                     * 设置Subimage row count of an image sprite.
                     * @param _rowCount Subimage row count of an image sprite.
                     * 
                     */
                    void SetRowCount(const uint64_t& _rowCount);

                    /**
                     * 判断参数 RowCount 是否已赋值
                     * @return RowCount 是否已赋值
                     * 
                     */
                    bool RowCountHasBeenSet() const;

                    /**
                     * 获取Subimage column count of an image sprite.
                     * @return ColumnCount Subimage column count of an image sprite.
                     * 
                     */
                    uint64_t GetColumnCount() const;

                    /**
                     * 设置Subimage column count of an image sprite.
                     * @param _columnCount Subimage column count of an image sprite.
                     * 
                     */
                    void SetColumnCount(const uint64_t& _columnCount);

                    /**
                     * 判断参数 ColumnCount 是否已赋值
                     * @return ColumnCount 是否已赋值
                     * 
                     */
                    bool ColumnCountHasBeenSet() const;

                    /**
                     * 获取Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return CreateTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _createTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
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
                     * 获取Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return UpdateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _updateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: Stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: Fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
Default value: black.
                     * @return FillType Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: Stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: Fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
Default value: black.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: Stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: Fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
Default value: black.
                     * @param _fillType Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: Stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: Fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
Default value: black.
                     * 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取Template description.
                     * @return Comment Template description.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description.
                     * @param _comment Template description.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取The image format.
                     * @return Format The image format.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置The image format.
                     * @param _format The image format.
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * Unique ID of an image sprite generating template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Name of an image sprite generating template.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subimage width of an image sprite.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Subimage height of an image sprite.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Resolution adaption. Valid values:
<li>open: enabled. In this case, `Width` represents the long side of a video, while `Height` the short side;</li>
<li>close: disabled. In this case, `Width` represents the width of a video, while `Height` the height.</li>
Default value: open.
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * Sampling type.
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * Sampling interval.
                     */
                    uint64_t m_sampleInterval;
                    bool m_sampleIntervalHasBeenSet;

                    /**
                     * Subimage row count of an image sprite.
                     */
                    uint64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * Subimage column count of an image sprite.
                     */
                    uint64_t m_columnCount;
                    bool m_columnCountHasBeenSet;

                    /**
                     * Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Fill type. "Fill" refers to the way of processing a screenshot when its aspect ratio is different from that of the source video. The following fill types are supported:
<li> stretch: Stretch. The screenshot will be stretched frame by frame to match the aspect ratio of the source video, which may make the screenshot "shorter" or "longer";</li>
<li>black: Fill with black. This option retains the aspect ratio of the source video for the screenshot and fills the unmatched area with black color blocks.</li>
Default value: black.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * Template description.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * The image format.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGESPRITETEMPLATE_H_
