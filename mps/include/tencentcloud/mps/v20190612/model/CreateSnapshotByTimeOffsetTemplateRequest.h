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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_

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
                * CreateSnapshotByTimeOffsetTemplate request structure.
                */
                class CreateSnapshotByTimeOffsetTemplateRequest : public AbstractModel
                {
                public:
                    CreateSnapshotByTimeOffsetTemplateRequest();
                    ~CreateSnapshotByTimeOffsetTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of a time point screencapturing template. Length limit: 64 characters.
                     * @return Name Name of a time point screencapturing template. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a time point screencapturing template. Length limit: 64 characters.
                     * @param Name Name of a time point screencapturing template. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Image width in px. Value range: [128, 4,096].
                     * @return Width Image width in px. Value range: [128, 4,096].
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Image width in px. Value range: [128, 4,096].
                     * @param Width Image width in px. Value range: [128, 4,096].
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Image height in px. Value range: [128, 4,096].
                     * @return Height Image height in px. Value range: [128, 4,096].
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Image height in px. Value range: [128, 4,096].
                     * @param Height Image height in px. Value range: [128, 4,096].
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
                     * 获取Image format. Valid values: jpg; png. Default value: jpg.
                     * @return Format Image format. Valid values: jpg; png. Default value: jpg.
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Image format. Valid values: jpg; png. Default value: jpg.
                     * @param Format Image format. Valid values: jpg; png. Default value: jpg.
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param Comment Template description. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

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

                private:

                    /**
                     * Name of a time point screencapturing template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Image width in px. Value range: [128, 4,096].
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Image height in px. Value range: [128, 4,096].
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * Image format. Valid values: jpg; png. Default value: jpg.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_
