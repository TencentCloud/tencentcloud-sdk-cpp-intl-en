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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewImagePornResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewImageTerrorismResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewImagePoliticalResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewVoicePornResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Result of AI-based live stream audit
                */
                class LiveStreamAiReviewResultItem : public AbstractModel
                {
                public:
                    LiveStreamAiReviewResultItem();
                    ~LiveStreamAiReviewResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The type of moderation result. Valid values:
<li>ImagePorn</li>
<li>ImageTerrorism</li>
<li>ImagePolitical</li>
<li>VoicePorn</li>
                     * @return Type The type of moderation result. Valid values:
<li>ImagePorn</li>
<li>ImageTerrorism</li>
<li>ImagePolitical</li>
<li>VoicePorn</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The type of moderation result. Valid values:
<li>ImagePorn</li>
<li>ImageTerrorism</li>
<li>ImagePolitical</li>
<li>VoicePorn</li>
                     * @param Type The type of moderation result. Valid values:
<li>ImagePorn</li>
<li>ImageTerrorism</li>
<li>ImagePolitical</li>
<li>VoicePorn</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Result of porn information detection in image, which is valid when `Type` is `ImagePorn`.
                     * @return ImagePornResultSet Result of porn information detection in image, which is valid when `Type` is `ImagePorn`.
                     */
                    std::vector<LiveStreamAiReviewImagePornResult> GetImagePornResultSet() const;

                    /**
                     * 设置Result of porn information detection in image, which is valid when `Type` is `ImagePorn`.
                     * @param ImagePornResultSet Result of porn information detection in image, which is valid when `Type` is `ImagePorn`.
                     */
                    void SetImagePornResultSet(const std::vector<LiveStreamAiReviewImagePornResult>& _imagePornResultSet);

                    /**
                     * 判断参数 ImagePornResultSet 是否已赋值
                     * @return ImagePornResultSet 是否已赋值
                     */
                    bool ImagePornResultSetHasBeenSet() const;

                    /**
                     * 获取The result of detecting sensitive information in images, which is valid if `Type` is `ImageTerrorism`.
                     * @return ImageTerrorismResultSet The result of detecting sensitive information in images, which is valid if `Type` is `ImageTerrorism`.
                     */
                    std::vector<LiveStreamAiReviewImageTerrorismResult> GetImageTerrorismResultSet() const;

                    /**
                     * 设置The result of detecting sensitive information in images, which is valid if `Type` is `ImageTerrorism`.
                     * @param ImageTerrorismResultSet The result of detecting sensitive information in images, which is valid if `Type` is `ImageTerrorism`.
                     */
                    void SetImageTerrorismResultSet(const std::vector<LiveStreamAiReviewImageTerrorismResult>& _imageTerrorismResultSet);

                    /**
                     * 判断参数 ImageTerrorismResultSet 是否已赋值
                     * @return ImageTerrorismResultSet 是否已赋值
                     */
                    bool ImageTerrorismResultSetHasBeenSet() const;

                    /**
                     * 获取The result of detecting sensitive information in images, which is valid if `Type` is `ImagePolitical`.
                     * @return ImagePoliticalResultSet The result of detecting sensitive information in images, which is valid if `Type` is `ImagePolitical`.
                     */
                    std::vector<LiveStreamAiReviewImagePoliticalResult> GetImagePoliticalResultSet() const;

                    /**
                     * 设置The result of detecting sensitive information in images, which is valid if `Type` is `ImagePolitical`.
                     * @param ImagePoliticalResultSet The result of detecting sensitive information in images, which is valid if `Type` is `ImagePolitical`.
                     */
                    void SetImagePoliticalResultSet(const std::vector<LiveStreamAiReviewImagePoliticalResult>& _imagePoliticalResultSet);

                    /**
                     * 判断参数 ImagePoliticalResultSet 是否已赋值
                     * @return ImagePoliticalResultSet 是否已赋值
                     */
                    bool ImagePoliticalResultSetHasBeenSet() const;

                    /**
                     * 获取The result for moderation of pornographic content in audio. This parameter is valid if `Type` is `VoicePorn`.
                     * @return VoicePornResultSet The result for moderation of pornographic content in audio. This parameter is valid if `Type` is `VoicePorn`.
                     */
                    std::vector<LiveStreamAiReviewVoicePornResult> GetVoicePornResultSet() const;

                    /**
                     * 设置The result for moderation of pornographic content in audio. This parameter is valid if `Type` is `VoicePorn`.
                     * @param VoicePornResultSet The result for moderation of pornographic content in audio. This parameter is valid if `Type` is `VoicePorn`.
                     */
                    void SetVoicePornResultSet(const std::vector<LiveStreamAiReviewVoicePornResult>& _voicePornResultSet);

                    /**
                     * 判断参数 VoicePornResultSet 是否已赋值
                     * @return VoicePornResultSet 是否已赋值
                     */
                    bool VoicePornResultSetHasBeenSet() const;

                private:

                    /**
                     * The type of moderation result. Valid values:
<li>ImagePorn</li>
<li>ImageTerrorism</li>
<li>ImagePolitical</li>
<li>VoicePorn</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Result of porn information detection in image, which is valid when `Type` is `ImagePorn`.
                     */
                    std::vector<LiveStreamAiReviewImagePornResult> m_imagePornResultSet;
                    bool m_imagePornResultSetHasBeenSet;

                    /**
                     * The result of detecting sensitive information in images, which is valid if `Type` is `ImageTerrorism`.
                     */
                    std::vector<LiveStreamAiReviewImageTerrorismResult> m_imageTerrorismResultSet;
                    bool m_imageTerrorismResultSetHasBeenSet;

                    /**
                     * The result of detecting sensitive information in images, which is valid if `Type` is `ImagePolitical`.
                     */
                    std::vector<LiveStreamAiReviewImagePoliticalResult> m_imagePoliticalResultSet;
                    bool m_imagePoliticalResultSetHasBeenSet;

                    /**
                     * The result for moderation of pornographic content in audio. This parameter is valid if `Type` is `VoicePorn`.
                     */
                    std::vector<LiveStreamAiReviewVoicePornResult> m_voicePornResultSet;
                    bool m_voicePornResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWRESULTITEM_H_
