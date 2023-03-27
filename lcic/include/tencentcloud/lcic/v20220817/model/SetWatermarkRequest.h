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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_SETWATERMARKREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_SETWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * SetWatermark request structure.
                */
                class SetWatermarkRequest : public AbstractModel
                {
                public:
                    SetWatermarkRequest();
                    ~SetWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SDKAppID assigned by LCIC.
                     * @return SdkAppId The SDKAppID assigned by LCIC.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.
                     * @param SdkAppId The SDKAppID assigned by LCIC.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The URL of the watermark for the teacher’s video. If you pass in an empty string, the teacher’s video will not have a watermark.
                     * @return TeacherUrl The URL of the watermark for the teacher’s video. If you pass in an empty string, the teacher’s video will not have a watermark.
                     */
                    std::string GetTeacherUrl() const;

                    /**
                     * 设置The URL of the watermark for the teacher’s video. If you pass in an empty string, the teacher’s video will not have a watermark.
                     * @param TeacherUrl The URL of the watermark for the teacher’s video. If you pass in an empty string, the teacher’s video will not have a watermark.
                     */
                    void SetTeacherUrl(const std::string& _teacherUrl);

                    /**
                     * 判断参数 TeacherUrl 是否已赋值
                     * @return TeacherUrl 是否已赋值
                     */
                    bool TeacherUrlHasBeenSet() const;

                    /**
                     * 获取The URL of the watermark for the whiteboard. If you pass in an empty string, the whiteboard video will not have a watermark.
                     * @return BoardUrl The URL of the watermark for the whiteboard. If you pass in an empty string, the whiteboard video will not have a watermark.
                     */
                    std::string GetBoardUrl() const;

                    /**
                     * 设置The URL of the watermark for the whiteboard. If you pass in an empty string, the whiteboard video will not have a watermark.
                     * @param BoardUrl The URL of the watermark for the whiteboard. If you pass in an empty string, the whiteboard video will not have a watermark.
                     */
                    void SetBoardUrl(const std::string& _boardUrl);

                    /**
                     * 判断参数 BoardUrl 是否已赋值
                     * @return BoardUrl 是否已赋值
                     */
                    bool BoardUrlHasBeenSet() const;

                    /**
                     * 获取The image displayed when there is no video. If you pass in an empty string, no images will be displayed.
                     * @return VideoUrl The image displayed when there is no video. If you pass in an empty string, no images will be displayed.
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置The image displayed when there is no video. If you pass in an empty string, no images will be displayed.
                     * @param VideoUrl The image displayed when there is no video. If you pass in an empty string, no images will be displayed.
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取The width of the whiteboard’s watermark, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     * @return BoardW The width of the whiteboard’s watermark, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     */
                    double GetBoardW() const;

                    /**
                     * 设置The width of the whiteboard’s watermark, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     * @param BoardW The width of the whiteboard’s watermark, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     */
                    void SetBoardW(const double& _boardW);

                    /**
                     * 判断参数 BoardW 是否已赋值
                     * @return BoardW 是否已赋值
                     */
                    bool BoardWHasBeenSet() const;

                    /**
                     * 获取The height of the whiteboard’s watermark, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     * @return BoardH The height of the whiteboard’s watermark, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     */
                    double GetBoardH() const;

                    /**
                     * 设置The height of the whiteboard’s watermark, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     * @param BoardH The height of the whiteboard’s watermark, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     */
                    void SetBoardH(const double& _boardH);

                    /**
                     * 判断参数 BoardH 是否已赋值
                     * @return BoardH 是否已赋值
                     */
                    bool BoardHHasBeenSet() const;

                    /**
                     * 获取The horizontal offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     * @return BoardX The horizontal offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     */
                    double GetBoardX() const;

                    /**
                     * 设置The horizontal offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     * @param BoardX The horizontal offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     */
                    void SetBoardX(const double& _boardX);

                    /**
                     * 判断参数 BoardX 是否已赋值
                     * @return BoardX 是否已赋值
                     */
                    bool BoardXHasBeenSet() const;

                    /**
                     * 获取The vertical offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     * @return BoardY The vertical offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     */
                    double GetBoardY() const;

                    /**
                     * 设置The vertical offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     * @param BoardY The vertical offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     */
                    void SetBoardY(const double& _boardY);

                    /**
                     * 判断参数 BoardY 是否已赋值
                     * @return BoardY 是否已赋值
                     */
                    bool BoardYHasBeenSet() const;

                    /**
                     * 获取The width of the watermark for the teacher’s video, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     * @return TeacherW The width of the watermark for the teacher’s video, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     */
                    double GetTeacherW() const;

                    /**
                     * 设置The width of the watermark for the teacher’s video, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     * @param TeacherW The width of the watermark for the teacher’s video, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     */
                    void SetTeacherW(const double& _teacherW);

                    /**
                     * 判断参数 TeacherW 是否已赋值
                     * @return TeacherW 是否已赋值
                     */
                    bool TeacherWHasBeenSet() const;

                    /**
                     * 获取The height of the watermark for the teacher’s video, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     * @return TeacherH The height of the watermark for the teacher’s video, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     */
                    double GetTeacherH() const;

                    /**
                     * 设置The height of the watermark for the teacher’s video, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     * @param TeacherH The height of the watermark for the teacher’s video, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     */
                    void SetTeacherH(const double& _teacherH);

                    /**
                     * 判断参数 TeacherH 是否已赋值
                     * @return TeacherH 是否已赋值
                     */
                    bool TeacherHHasBeenSet() const;

                    /**
                     * 获取The horizontal offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     * @return TeacherX The horizontal offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     */
                    double GetTeacherX() const;

                    /**
                     * 设置The horizontal offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     * @param TeacherX The horizontal offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     */
                    void SetTeacherX(const double& _teacherX);

                    /**
                     * 判断参数 TeacherX 是否已赋值
                     * @return TeacherX 是否已赋值
                     */
                    bool TeacherXHasBeenSet() const;

                    /**
                     * 获取The vertical offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     * @return TeacherY The vertical offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     */
                    double GetTeacherY() const;

                    /**
                     * 设置The vertical offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     * @param TeacherY The vertical offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     */
                    void SetTeacherY(const double& _teacherY);

                    /**
                     * 判断参数 TeacherY 是否已赋值
                     * @return TeacherY 是否已赋值
                     */
                    bool TeacherYHasBeenSet() const;

                    /**
                     * 获取The watermark text. If you pass in an empty string, there will be no text.
                     * @return Text The watermark text. If you pass in an empty string, there will be no text.
                     */
                    std::string GetText() const;

                    /**
                     * 设置The watermark text. If you pass in an empty string, there will be no text.
                     * @param Text The watermark text. If you pass in an empty string, there will be no text.
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取The watermark text color.
                     * @return TextColor The watermark text color.
                     */
                    std::string GetTextColor() const;

                    /**
                     * 设置The watermark text color.
                     * @param TextColor The watermark text color.
                     */
                    void SetTextColor(const std::string& _textColor);

                    /**
                     * 判断参数 TextColor 是否已赋值
                     * @return TextColor 是否已赋值
                     */
                    bool TextColorHasBeenSet() const;

                private:

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The URL of the watermark for the teacher’s video. If you pass in an empty string, the teacher’s video will not have a watermark.
                     */
                    std::string m_teacherUrl;
                    bool m_teacherUrlHasBeenSet;

                    /**
                     * The URL of the watermark for the whiteboard. If you pass in an empty string, the whiteboard video will not have a watermark.
                     */
                    std::string m_boardUrl;
                    bool m_boardUrlHasBeenSet;

                    /**
                     * The image displayed when there is no video. If you pass in an empty string, no images will be displayed.
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * The width of the whiteboard’s watermark, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     */
                    double m_boardW;
                    bool m_boardWHasBeenSet;

                    /**
                     * The height of the whiteboard’s watermark, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     */
                    double m_boardH;
                    bool m_boardHHasBeenSet;

                    /**
                     * The horizontal offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     */
                    double m_boardX;
                    bool m_boardXHasBeenSet;

                    /**
                     * The vertical offset of the whiteboard’s watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     */
                    double m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * The width of the watermark for the teacher’s video, which is expressed as a percentage of the video width. The value range is 0-100, and the default value is 0.
                     */
                    double m_teacherW;
                    bool m_teacherWHasBeenSet;

                    /**
                     * The height of the watermark for the teacher’s video, which is expressed as a percentage of the video height. The value range is 0-100, and the default value is 0.
                     */
                    double m_teacherH;
                    bool m_teacherHHasBeenSet;

                    /**
                     * The horizontal offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100.
                     */
                    double m_teacherX;
                    bool m_teacherXHasBeenSet;

                    /**
                     * The vertical offset of the watermark for the teacher’s video, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100.
                     */
                    double m_teacherY;
                    bool m_teacherYHasBeenSet;

                    /**
                     * The watermark text. If you pass in an empty string, there will be no text.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The watermark text color.
                     */
                    std::string m_textColor;
                    bool m_textColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_SETWATERMARKREQUEST_H_
