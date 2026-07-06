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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOSUBTITLEAREAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOSUBTITLEAREAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DetectVideoSubtitleArea request structure.
                */
                class DetectVideoSubtitleAreaRequest : public AbstractModel
                {
                public:
                    DetectVideoSubtitleAreaRequest();
                    ~DetectVideoSubtitleAreaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Input information, which supports only URL and COS.</p>
                     * @return InputInfo <p>Input information, which supports only URL and COS.</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>Input information, which supports only URL and COS.</p>
                     * @param _inputInfo <p>Input information, which supports only URL and COS.</p>
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取<p>Video language. If you know the language of the video, you can specify this parameter to improve the recognition accuracy.</p><p>Enumeration values:</p><ul><li>zh_en: Chinese and English</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li></ul>
                     * @return VideoLanguage <p>Video language. If you know the language of the video, you can specify this parameter to improve the recognition accuracy.</p><p>Enumeration values:</p><ul><li>zh_en: Chinese and English</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li></ul>
                     * 
                     */
                    std::string GetVideoLanguage() const;

                    /**
                     * 设置<p>Video language. If you know the language of the video, you can specify this parameter to improve the recognition accuracy.</p><p>Enumeration values:</p><ul><li>zh_en: Chinese and English</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li></ul>
                     * @param _videoLanguage <p>Video language. If you know the language of the video, you can specify this parameter to improve the recognition accuracy.</p><p>Enumeration values:</p><ul><li>zh_en: Chinese and English</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li></ul>
                     * 
                     */
                    void SetVideoLanguage(const std::string& _videoLanguage);

                    /**
                     * 判断参数 VideoLanguage 是否已赋值
                     * @return VideoLanguage 是否已赋值
                     * 
                     */
                    bool VideoLanguageHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameter. This is left empty by default.</p>
                     * @return UserExtPara <p>Extended parameter. This is left empty by default.</p>
                     * 
                     */
                    std::string GetUserExtPara() const;

                    /**
                     * 设置<p>Extended parameter. This is left empty by default.</p>
                     * @param _userExtPara <p>Extended parameter. This is left empty by default.</p>
                     * 
                     */
                    void SetUserExtPara(const std::string& _userExtPara);

                    /**
                     * 判断参数 UserExtPara 是否已赋值
                     * @return UserExtPara 是否已赋值
                     * 
                     */
                    bool UserExtParaHasBeenSet() const;

                private:

                    /**
                     * <p>Input information, which supports only URL and COS.</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>Video language. If you know the language of the video, you can specify this parameter to improve the recognition accuracy.</p><p>Enumeration values:</p><ul><li>zh_en: Chinese and English</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li></ul>
                     */
                    std::string m_videoLanguage;
                    bool m_videoLanguageHasBeenSet;

                    /**
                     * <p>Extended parameter. This is left empty by default.</p>
                     */
                    std::string m_userExtPara;
                    bool m_userExtParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOSUBTITLEAREAREQUEST_H_
