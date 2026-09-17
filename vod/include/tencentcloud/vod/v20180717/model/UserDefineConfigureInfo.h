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
                * 
                */
                class UserDefineConfigureInfo : public AbstractModel
                {
                public:
                    UserDefineConfigureInfo();
                    ~UserDefineConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return FaceReviewInfo 
                     * 
                     */
                    UserDefineFaceReviewTemplateInfo GetFaceReviewInfo() const;

                    /**
                     * 设置
                     * @param _faceReviewInfo 
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
                     * 获取
                     * @return AsrReviewInfo 
                     * 
                     */
                    UserDefineAsrTextReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置
                     * @param _asrReviewInfo 
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
                     * 获取
                     * @return OcrReviewInfo 
                     * 
                     */
                    UserDefineOcrTextReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置
                     * @param _ocrReviewInfo 
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
                     * 
                     */
                    UserDefineFaceReviewTemplateInfo m_faceReviewInfo;
                    bool m_faceReviewInfoHasBeenSet;

                    /**
                     * 
                     */
                    UserDefineAsrTextReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * 
                     */
                    UserDefineOcrTextReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFO_H_
