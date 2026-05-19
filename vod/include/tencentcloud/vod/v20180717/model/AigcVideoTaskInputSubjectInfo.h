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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTSUBJECTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTSUBJECTINFO_H_

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
                * Input information of the AIGC subject.
                */
                class AigcVideoTaskInputSubjectInfo : public AbstractModel
                {
                public:
                    AigcVideoTaskInputSubjectInfo();
                    ~AigcVideoTaskInputSubjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Fixed subject Id.</p><ul><li>Kling subject <strong>required</strong>;</li><li>Vidu subject selectable.</li></ul>
                     * @return Id <p>Fixed subject Id.</p><ul><li>Kling subject <strong>required</strong>;</li><li>Vidu subject selectable.</li></ul>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Fixed subject Id.</p><ul><li>Kling subject <strong>required</strong>;</li><li>Vidu subject selectable.</li></ul>
                     * @param _id <p>Fixed subject Id.</p><ul><li>Kling subject <strong>required</strong>;</li><li>Vidu subject selectable.</li></ul>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Fixed name.</p><ul><li>Vidu subject is <strong>required</strong>, can be used by adding [@name] in prompt. For example, when name is Xiao Ming, describe it as [@Xiao Ming] in prompt.</li><li>Kling subject is selectable.</li></ul>
                     * @return Name <p>Fixed name.</p><ul><li>Vidu subject is <strong>required</strong>, can be used by adding [@name] in prompt. For example, when name is Xiao Ming, describe it as [@Xiao Ming] in prompt.</li><li>Kling subject is selectable.</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Fixed name.</p><ul><li>Vidu subject is <strong>required</strong>, can be used by adding [@name] in prompt. For example, when name is Xiao Ming, describe it as [@Xiao Ming] in prompt.</li><li>Kling subject is selectable.</li></ul>
                     * @param _name <p>Fixed name.</p><ul><li>Vidu subject is <strong>required</strong>, can be used by adding [@name] in prompt. For example, when name is Xiao Ming, describe it as [@Xiao Ming] in prompt.</li><li>Kling subject is selectable.</li></ul>
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
                     * 获取<p><strong>Valid only for Vidu.</strong> Voice type ID is used to determine the sound timbre in the video. If left empty, the system will automatically recommend one.</p>
                     * @return VoiceId <p><strong>Valid only for Vidu.</strong> Voice type ID is used to determine the sound timbre in the video. If left empty, the system will automatically recommend one.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p><strong>Valid only for Vidu.</strong> Voice type ID is used to determine the sound timbre in the video. If left empty, the system will automatically recommend one.</p>
                     * @param _voiceId <p><strong>Valid only for Vidu.</strong> Voice type ID is used to determine the sound timbre in the video. If left empty, the system will automatically recommend one.</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p><strong>Valid for Vidu only.</strong> Temporary subject images, up to 3 images<br>Note 1: Support passing image URL (ensure it is accessible);<br>Note 2: Images support png, jpeg, jpg, webp format;<br>Note 3: Image pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     * @return ImageUrls <p><strong>Valid for Vidu only.</strong> Temporary subject images, up to 3 images<br>Note 1: Support passing image URL (ensure it is accessible);<br>Note 2: Images support png, jpeg, jpg, webp format;<br>Note 3: Image pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrls() const;

                    /**
                     * 设置<p><strong>Valid for Vidu only.</strong> Temporary subject images, up to 3 images<br>Note 1: Support passing image URL (ensure it is accessible);<br>Note 2: Images support png, jpeg, jpg, webp format;<br>Note 3: Image pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     * @param _imageUrls <p><strong>Valid for Vidu only.</strong> Temporary subject images, up to 3 images<br>Note 1: Support passing image URL (ensure it is accessible);<br>Note 2: Images support png, jpeg, jpg, webp format;<br>Note 3: Image pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     * 
                     */
                    void SetImageUrls(const std::vector<std::string>& _imageUrls);

                    /**
                     * 判断参数 ImageUrls 是否已赋值
                     * @return ImageUrls 是否已赋值
                     * 
                     */
                    bool ImageUrlsHasBeenSet() const;

                    /**
                     * 获取<p><strong>Valid for Vidu only.</strong> Temporary subject video, a maximum of one 5-second video. Note 1: Only the viduq2-pro model supports the use of video subject; Note 2: Supports up to one 5-second video upload; Note 3: Video supports mp4, avi, mov format; Note 4: Video pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     * @return VideoUrls <p><strong>Valid for Vidu only.</strong> Temporary subject video, a maximum of one 5-second video. Note 1: Only the viduq2-pro model supports the use of video subject; Note 2: Supports up to one 5-second video upload; Note 3: Video supports mp4, avi, mov format; Note 4: Video pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     * 
                     */
                    std::vector<std::string> GetVideoUrls() const;

                    /**
                     * 设置<p><strong>Valid for Vidu only.</strong> Temporary subject video, a maximum of one 5-second video. Note 1: Only the viduq2-pro model supports the use of video subject; Note 2: Supports up to one 5-second video upload; Note 3: Video supports mp4, avi, mov format; Note 4: Video pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     * @param _videoUrls <p><strong>Valid for Vidu only.</strong> Temporary subject video, a maximum of one 5-second video. Note 1: Only the viduq2-pro model supports the use of video subject; Note 2: Supports up to one 5-second video upload; Note 3: Video supports mp4, avi, mov format; Note 4: Video pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     * 
                     */
                    void SetVideoUrls(const std::vector<std::string>& _videoUrls);

                    /**
                     * 判断参数 VideoUrls 是否已赋值
                     * @return VideoUrls 是否已赋值
                     * 
                     */
                    bool VideoUrlsHasBeenSet() const;

                private:

                    /**
                     * <p>Fixed subject Id.</p><ul><li>Kling subject <strong>required</strong>;</li><li>Vidu subject selectable.</li></ul>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Fixed name.</p><ul><li>Vidu subject is <strong>required</strong>, can be used by adding [@name] in prompt. For example, when name is Xiao Ming, describe it as [@Xiao Ming] in prompt.</li><li>Kling subject is selectable.</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p><strong>Valid only for Vidu.</strong> Voice type ID is used to determine the sound timbre in the video. If left empty, the system will automatically recommend one.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p><strong>Valid for Vidu only.</strong> Temporary subject images, up to 3 images<br>Note 1: Support passing image URL (ensure it is accessible);<br>Note 2: Images support png, jpeg, jpg, webp format;<br>Note 3: Image pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     */
                    std::vector<std::string> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                    /**
                     * <p><strong>Valid for Vidu only.</strong> Temporary subject video, a maximum of one 5-second video. Note 1: Only the viduq2-pro model supports the use of video subject; Note 2: Supports up to one 5-second video upload; Note 3: Video supports mp4, avi, mov format; Note 4: Video pixel cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1.</p>
                     */
                    std::vector<std::string> m_videoUrls;
                    bool m_videoUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTSUBJECTINFO_H_
