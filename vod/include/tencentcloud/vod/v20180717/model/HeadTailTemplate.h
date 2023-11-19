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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HEADTAILTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HEADTAILTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Head Tail Template Details
                */
                class HeadTailTemplate : public AbstractModel
                {
                public:
                    HeadTailTemplate();
                    ~HeadTailTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Head Tail Template Number.
                     * @return Definition Head Tail Template Number.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Head Tail Template Number.
                     * @param _definition Head Tail Template Number.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Template name, supports up to 64 characters.
                     * @return Name Template name, supports up to 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name, supports up to 64 characters.
                     * @param _name Template name, supports up to 64 characters.
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
                     * 获取Template description, up to 256 characters.
                     * @return Comment Template description, up to 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, up to 256 characters.
                     * @param _comment Template description, up to 256 characters.
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
                     * 获取Title candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     * @return HeadCandidateSet Title candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     * 
                     */
                    std::vector<std::string> GetHeadCandidateSet() const;

                    /**
                     * 设置Title candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     * @param _headCandidateSet Title candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     * 
                     */
                    void SetHeadCandidateSet(const std::vector<std::string>& _headCandidateSet);

                    /**
                     * 判断参数 HeadCandidateSet 是否已赋值
                     * @return HeadCandidateSet 是否已赋值
                     * 
                     */
                    bool HeadCandidateSetHasBeenSet() const;

                    /**
                     * 获取Ending candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     * @return TailCandidateSet Ending candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     * 
                     */
                    std::vector<std::string> GetTailCandidateSet() const;

                    /**
                     * 设置Ending candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     * @param _tailCandidateSet Ending candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     * 
                     */
                    void SetTailCandidateSet(const std::vector<std::string>& _tailCandidateSet);

                    /**
                     * 判断参数 TailCandidateSet 是否已赋值
                     * @return TailCandidateSet 是否已赋值
                     * 
                     */
                    bool TailCandidateSetHasBeenSet() const;

                    /**
                     * 获取Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
Default value: stretch.
                     * @return FillType Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
Default value: stretch.
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
Default value: stretch.
                     * @param _fillType Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
Default value: stretch.
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
                     * 获取Template creation time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @return CreateTime Template creation time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @param _createTime Template creation time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
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
                     * 获取The last modification time of the template, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @return UpdateTime The last modification time of the template, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last modification time of the template, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @param _updateTime The last modification time of the template, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Head Tail Template Number.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Template name, supports up to 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description, up to 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Title candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     */
                    std::vector<std::string> m_headCandidateSet;
                    bool m_headCandidateSetHasBeenSet;

                    /**
                     * Ending candidate list. When using it, the one closest to the resolution of the feature film will be selected. When the same candidate exists, the first one will be selected. A maximum of 5 are supported.
                     */
                    std::vector<std::string> m_tailCandidateSet;
                    bool m_tailCandidateSetHasBeenSet;

                    /**
                     * Padding method. When the video stream configuration width and height parameters are inconsistent with the aspect ratio of the original video, the transcoding processing method is "padding". Optional filling method:
<li> stretch: stretch, stretch each frame to fill the entire screen, which may cause the transcoded video to be "squashed" or "stretched";</li> 
<li> gauss: Gaussian blur, keep the video aspect ratio unchanged, use Gaussian blur for the remaining edges; </li>
<li> white: leave blank, keep the video aspect ratio unchanged, use the remaining edges for the edge Use white filling; </li>
<li> black: Leave black, keep the video aspect ratio unchanged, and fill the remaining edges with black. </li>
Default value: stretch.
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * Template creation time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The last modification time of the template, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HEADTAILTEMPLATE_H_
