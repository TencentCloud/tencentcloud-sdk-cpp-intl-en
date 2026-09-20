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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/UserDefineFaceReviewTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/UserDefineAsrTextReviewTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/UserDefineOcrTextReviewTemplateInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * User-customized control parameters for audio/video moderation tasks
                */
                class UserDefineConfigureInfo : public AbstractModel
                {
                public:
                    UserDefineConfigureInfo();
                    ~UserDefineConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Control parameter for user-defined character audio/video moderation.
                     * @return FaceReviewInfo Control parameter for user-defined character audio/video moderation.
                     * 
                     */
                    UserDefineFaceReviewTemplateInfo GetFaceReviewInfo() const;

                    /**
                     * 设置Control parameter for user-defined character audio/video moderation.
                     * @param _faceReviewInfo Control parameter for user-defined character audio/video moderation.
                     * 
                     */
                    void SetFaceReviewInfo(const UserDefineFaceReviewTemplateInfo& _faceReviewInfo);

                    /**
                     * 判断参数 FaceReviewInfo 是否已赋值
                     * @return FaceReviewInfo 是否已赋值
                     * 
                     */
                    bool FaceReviewInfoHasBeenSet() const;

                    /**
                     * 获取User-customized voice audio and video review control parameter.
                     * @return AsrReviewInfo User-customized voice audio and video review control parameter.
                     * 
                     */
                    UserDefineAsrTextReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置User-customized voice audio and video review control parameter.
                     * @param _asrReviewInfo User-customized voice audio and video review control parameter.
                     * 
                     */
                    void SetAsrReviewInfo(const UserDefineAsrTextReviewTemplateInfo& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取User-customized text, audio, and video moderation control parameters.
                     * @return OcrReviewInfo User-customized text, audio, and video moderation control parameters.
                     * 
                     */
                    UserDefineOcrTextReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置User-customized text, audio, and video moderation control parameters.
                     * @param _ocrReviewInfo User-customized text, audio, and video moderation control parameters.
                     * 
                     */
                    void SetOcrReviewInfo(const UserDefineOcrTextReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * Control parameter for user-defined character audio/video moderation.
                     */
                    UserDefineFaceReviewTemplateInfo m_faceReviewInfo;
                    bool m_faceReviewInfoHasBeenSet;

                    /**
                     * User-customized voice audio and video review control parameter.
                     */
                    UserDefineAsrTextReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * User-customized text, audio, and video moderation control parameters.
                     */
                    UserDefineOcrTextReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFO_H_
