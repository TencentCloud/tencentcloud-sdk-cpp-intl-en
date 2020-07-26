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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETASK2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETASK2017_H_

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
                * Image sprite generating task. This structure is only used for tasks initiated by the [CreateImageSprite](https://cloud.tencent.com/document/product/266/8101) API in v2017.
                */
                class CreateImageSpriteTask2017 : public AbstractModel
                {
                public:
                    CreateImageSpriteTask2017();
                    ~CreateImageSpriteTask2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image sprite generating task ID.
                     * @return TaskId Image sprite generating task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Image sprite generating task ID.
                     * @param TaskId Image sprite generating task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取ID of generated image sprite file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileId ID of generated image sprite file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置ID of generated image sprite file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FileId ID of generated image sprite file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Image sprite specification. For more information, please see [Image Sprite Generating Template](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Definition Image sprite specification. For more information, please see [Image Sprite Generating Template](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Image sprite specification. For more information, please see [Image Sprite Generating Template](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Definition Image sprite specification. For more information, please see [Image Sprite Generating Template](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Total number of subimages in image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of subimages in image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of subimages in image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TotalCount Total number of subimages in image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Address of output image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageSpriteUrlSet Address of output image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetImageSpriteUrlSet() const;

                    /**
                     * 设置Address of output image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ImageSpriteUrlSet Address of output image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetImageSpriteUrlSet(const std::vector<std::string>& _imageSpriteUrlSet);

                    /**
                     * 判断参数 ImageSpriteUrlSet 是否已赋值
                     * @return ImageSpriteUrlSet 是否已赋值
                     */
                    bool ImageSpriteUrlSetHasBeenSet() const;

                    /**
                     * 获取Address of WebVtt file for the position-time relationship among subimages in an image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WebVttUrl Address of WebVtt file for the position-time relationship among subimages in an image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetWebVttUrl() const;

                    /**
                     * 设置Address of WebVtt file for the position-time relationship among subimages in an image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param WebVttUrl Address of WebVtt file for the position-time relationship among subimages in an image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWebVttUrl(const std::string& _webVttUrl);

                    /**
                     * 判断参数 WebVttUrl 是否已赋值
                     * @return WebVttUrl 是否已赋值
                     */
                    bool WebVttUrlHasBeenSet() const;

                private:

                    /**
                     * Image sprite generating task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * ID of generated image sprite file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Image sprite specification. For more information, please see [Image Sprite Generating Template](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Total number of subimages in image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Address of output image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_imageSpriteUrlSet;
                    bool m_imageSpriteUrlSetHasBeenSet;

                    /**
                     * Address of WebVtt file for the position-time relationship among subimages in an image sprite.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_webVttUrl;
                    bool m_webVttUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETASK2017_H_
