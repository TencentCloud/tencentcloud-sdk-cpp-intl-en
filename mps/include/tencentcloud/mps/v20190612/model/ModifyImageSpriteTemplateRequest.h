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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYIMAGESPRITETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYIMAGESPRITETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyImageSpriteTemplate request structure.
                */
                class ModifyImageSpriteTemplateRequest : public AbstractModel
                {
                public:
                    ModifyImageSpriteTemplateRequest();
                    ~ModifyImageSpriteTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of an image sprite generating template.
                     * @return Definition Unique ID of an image sprite generating template.
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of an image sprite generating template.
                     * @param Definition Unique ID of an image sprite generating template.
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Name of an image sprite generating template. Length limit: 64 characters.
                     * @return Name Name of an image sprite generating template. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an image sprite generating template. Length limit: 64 characters.
                     * @param Name Name of an image sprite generating template. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Subimage width of an image sprite in px. Value range: [128, 4,096].
                     * @return Width Subimage width of an image sprite in px. Value range: [128, 4,096].
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Subimage width of an image sprite in px. Value range: [128, 4,096].
                     * @param Width Subimage width of an image sprite in px. Value range: [128, 4,096].
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Subimage height of an image sprite in px. Value range: [128, 4,096].
                     * @return Height Subimage height of an image sprite in px. Value range: [128, 4,096].
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Subimage height of an image sprite in px. Value range: [128, 4,096].
                     * @param Height Subimage height of an image sprite in px. Value range: [128, 4,096].
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取
                     * @return ResolutionAdaptive 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置
                     * @param ResolutionAdaptive 
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取Sampling type. Valid values:
<li>Percent: By percent.</li>
<li>Time: By time interval.</li>
                     * @return SampleType Sampling type. Valid values:
<li>Percent: By percent.</li>
<li>Time: By time interval.</li>
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置Sampling type. Valid values:
<li>Percent: By percent.</li>
<li>Time: By time interval.</li>
                     * @param SampleType Sampling type. Valid values:
<li>Percent: By percent.</li>
<li>Time: By time interval.</li>
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取Sampling interval.
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
                     * @return SampleInterval Sampling interval.
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
                     */
                    uint64_t GetSampleInterval() const;

                    /**
                     * 设置Sampling interval.
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
                     * @param SampleInterval Sampling interval.
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
                     */
                    void SetSampleInterval(const uint64_t& _sampleInterval);

                    /**
                     * 判断参数 SampleInterval 是否已赋值
                     * @return SampleInterval 是否已赋值
                     */
                    bool SampleIntervalHasBeenSet() const;

                    /**
                     * 获取Subimage row count of an image sprite.
                     * @return RowCount Subimage row count of an image sprite.
                     */
                    uint64_t GetRowCount() const;

                    /**
                     * 设置Subimage row count of an image sprite.
                     * @param RowCount Subimage row count of an image sprite.
                     */
                    void SetRowCount(const uint64_t& _rowCount);

                    /**
                     * 判断参数 RowCount 是否已赋值
                     * @return RowCount 是否已赋值
                     */
                    bool RowCountHasBeenSet() const;

                    /**
                     * 获取Subimage column count of an image sprite.
                     * @return ColumnCount Subimage column count of an image sprite.
                     */
                    uint64_t GetColumnCount() const;

                    /**
                     * 设置Subimage column count of an image sprite.
                     * @param ColumnCount Subimage column count of an image sprite.
                     */
                    void SetColumnCount(const uint64_t& _columnCount);

                    /**
                     * 判断参数 ColumnCount 是否已赋值
                     * @return ColumnCount 是否已赋值
                     */
                    bool ColumnCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return FillType 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置
                     * @param FillType 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Comment 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置
                     * @param Comment 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Unique ID of an image sprite generating template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Name of an image sprite generating template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subimage width of an image sprite in px. Value range: [128, 4,096].
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Subimage height of an image sprite in px. Value range: [128, 4,096].
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * Sampling type. Valid values:
<li>Percent: By percent.</li>
<li>Time: By time interval.</li>
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * Sampling interval.
<li>If `SampleType` is `Percent`, sampling will be performed at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, sampling will be performed at the specified time interval in seconds.</li>
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
                     * 
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYIMAGESPRITETEMPLATEREQUEST_H_
