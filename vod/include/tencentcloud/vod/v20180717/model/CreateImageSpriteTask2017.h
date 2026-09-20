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
                * Video sprite capture task. This structure is only used for tasks initiated by the 2017 version of the capture CSS sprites API (https://www.tencentcloud.com/document/product/266/8101?from_cn_redirect=1).
                */
                class CreateImageSpriteTask2017 : public AbstractModel
                {
                public:
                    CreateImageSpriteTask2017();
                    ~CreateImageSpriteTask2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Screenshot sprite task ID.</p>
                     * @return TaskId <p>Screenshot sprite task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Screenshot sprite task ID.</p>
                     * @param _taskId <p>Screenshot sprite task ID.</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Error code</p><li>0: Successful;</li><li>Other values: Failed.</li>
                     * @return ErrCode <p>Error code</p><li>0: Successful;</li><li>Other values: Failed.</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>Error code</p><li>0: Successful;</li><li>Other values: Failed.</li>
                     * @param _errCode <p>Error code</p><li>0: Successful;</li><li>Other values: Failed.</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>Error message.</p>
                     * @return Message <p>Error message.</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>Error message.</p>
                     * @param _message <p>Error message.</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>Capture the CSS sprite file ID.</p>
                     * @return FileId <p>Capture the CSS sprite file ID.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Capture the CSS sprite file ID.</p>
                     * @param _fileId <p>Capture the CSS sprite file ID.</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>Sprite sheet specification. See <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">image sprite screenshot template</a>.</p>
                     * @return Definition <p>Sprite sheet specification. See <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">image sprite screenshot template</a>.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Sprite sheet specification. See <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">image sprite screenshot template</a>.</p>
                     * @param _definition <p>Sprite sheet specification. See <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">image sprite screenshot template</a>.</p>
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
                     * 获取<p>Total number of small images in the sprite sheet.</p>
                     * @return TotalCount <p>Total number of small images in the sprite sheet.</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total number of small images in the sprite sheet.</p>
                     * @param _totalCount <p>Total number of small images in the sprite sheet.</p>
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Addresses for capturing CSS sprites output.</p>
                     * @return ImageSpriteUrlSet <p>Addresses for capturing CSS sprites output.</p>
                     * 
                     */
                    std::vector<std::string> GetImageSpriteUrlSet() const;

                    /**
                     * 设置<p>Addresses for capturing CSS sprites output.</p>
                     * @param _imageSpriteUrlSet <p>Addresses for capturing CSS sprites output.</p>
                     * 
                     */
                    void SetImageSpriteUrlSet(const std::vector<std::string>& _imageSpriteUrlSet);

                    /**
                     * 判断参数 ImageSpriteUrlSet 是否已赋值
                     * @return ImageSpriteUrlSet 是否已赋值
                     * 
                     */
                    bool ImageSpriteUrlSetHasBeenSet() const;

                    /**
                     * 获取<p>Sprite sheet sub-image position and temporal relationship WebVtt file address.</p>
                     * @return WebVttUrl <p>Sprite sheet sub-image position and temporal relationship WebVtt file address.</p>
                     * 
                     */
                    std::string GetWebVttUrl() const;

                    /**
                     * 设置<p>Sprite sheet sub-image position and temporal relationship WebVtt file address.</p>
                     * @param _webVttUrl <p>Sprite sheet sub-image position and temporal relationship WebVtt file address.</p>
                     * 
                     */
                    void SetWebVttUrl(const std::string& _webVttUrl);

                    /**
                     * 判断参数 WebVttUrl 是否已赋值
                     * @return WebVttUrl 是否已赋值
                     * 
                     */
                    bool WebVttUrlHasBeenSet() const;

                private:

                    /**
                     * <p>Screenshot sprite task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Error code</p><li>0: Successful;</li><li>Other values: Failed.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Error message.</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Capture the CSS sprite file ID.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Sprite sheet specification. See <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">image sprite screenshot template</a>.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Total number of small images in the sprite sheet.</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Addresses for capturing CSS sprites output.</p>
                     */
                    std::vector<std::string> m_imageSpriteUrlSet;
                    bool m_imageSpriteUrlSetHasBeenSet;

                    /**
                     * <p>Sprite sheet sub-image position and temporal relationship WebVtt file address.</p>
                     */
                    std::string m_webVttUrl;
                    bool m_webVttUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETASK2017_H_
