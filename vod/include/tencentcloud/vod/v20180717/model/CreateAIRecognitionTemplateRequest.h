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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIRECOGNITIONTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIRECOGNITIONTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HeadTailConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/SegmentConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/FaceConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/OcrFullTextConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/OcrWordsConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/AsrFullTextConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/AsrWordsConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/ObjectConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAIRecognitionTemplate request structure.
                */
                class CreateAIRecognitionTemplateRequest : public AbstractModel
                {
                public:
                    CreateAIRecognitionTemplateRequest();
                    ~CreateAIRecognitionTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Video content recognition template name. Length limit: 64 characters.
                     * @return Name Video content recognition template name. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Video content recognition template name. Length limit: 64 characters.
                     * @param Name Video content recognition template name. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of video content recognition template. Length limit: 256 characters.
                     * @return Comment Description of video content recognition template. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of video content recognition template. Length limit: 256 characters.
                     * @param Comment Description of video content recognition template. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Control parameter of video opening and ending credits recognition.
                     * @return HeadTailConfigure Control parameter of video opening and ending credits recognition.
                     */
                    HeadTailConfigureInfo GetHeadTailConfigure() const;

                    /**
                     * 设置Control parameter of video opening and ending credits recognition.
                     * @param HeadTailConfigure Control parameter of video opening and ending credits recognition.
                     */
                    void SetHeadTailConfigure(const HeadTailConfigureInfo& _headTailConfigure);

                    /**
                     * 判断参数 HeadTailConfigure 是否已赋值
                     * @return HeadTailConfigure 是否已赋值
                     */
                    bool HeadTailConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of video splitting recognition.
                     * @return SegmentConfigure Control parameter of video splitting recognition.
                     */
                    SegmentConfigureInfo GetSegmentConfigure() const;

                    /**
                     * 设置Control parameter of video splitting recognition.
                     * @param SegmentConfigure Control parameter of video splitting recognition.
                     */
                    void SetSegmentConfigure(const SegmentConfigureInfo& _segmentConfigure);

                    /**
                     * 判断参数 SegmentConfigure 是否已赋值
                     * @return SegmentConfigure 是否已赋值
                     */
                    bool SegmentConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of face recognition.
                     * @return FaceConfigure Control parameter of face recognition.
                     */
                    FaceConfigureInfo GetFaceConfigure() const;

                    /**
                     * 设置Control parameter of face recognition.
                     * @param FaceConfigure Control parameter of face recognition.
                     */
                    void SetFaceConfigure(const FaceConfigureInfo& _faceConfigure);

                    /**
                     * 判断参数 FaceConfigure 是否已赋值
                     * @return FaceConfigure 是否已赋值
                     */
                    bool FaceConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of full text recognition.
                     * @return OcrFullTextConfigure Control parameter of full text recognition.
                     */
                    OcrFullTextConfigureInfo GetOcrFullTextConfigure() const;

                    /**
                     * 设置Control parameter of full text recognition.
                     * @param OcrFullTextConfigure Control parameter of full text recognition.
                     */
                    void SetOcrFullTextConfigure(const OcrFullTextConfigureInfo& _ocrFullTextConfigure);

                    /**
                     * 判断参数 OcrFullTextConfigure 是否已赋值
                     * @return OcrFullTextConfigure 是否已赋值
                     */
                    bool OcrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of text keyword recognition.
                     * @return OcrWordsConfigure Control parameter of text keyword recognition.
                     */
                    OcrWordsConfigureInfo GetOcrWordsConfigure() const;

                    /**
                     * 设置Control parameter of text keyword recognition.
                     * @param OcrWordsConfigure Control parameter of text keyword recognition.
                     */
                    void SetOcrWordsConfigure(const OcrWordsConfigureInfo& _ocrWordsConfigure);

                    /**
                     * 判断参数 OcrWordsConfigure 是否已赋值
                     * @return OcrWordsConfigure 是否已赋值
                     */
                    bool OcrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of full speech recognition.
                     * @return AsrFullTextConfigure Control parameter of full speech recognition.
                     */
                    AsrFullTextConfigureInfo GetAsrFullTextConfigure() const;

                    /**
                     * 设置Control parameter of full speech recognition.
                     * @param AsrFullTextConfigure Control parameter of full speech recognition.
                     */
                    void SetAsrFullTextConfigure(const AsrFullTextConfigureInfo& _asrFullTextConfigure);

                    /**
                     * 判断参数 AsrFullTextConfigure 是否已赋值
                     * @return AsrFullTextConfigure 是否已赋值
                     */
                    bool AsrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of speech keyword recognition.
                     * @return AsrWordsConfigure Control parameter of speech keyword recognition.
                     */
                    AsrWordsConfigureInfo GetAsrWordsConfigure() const;

                    /**
                     * 设置Control parameter of speech keyword recognition.
                     * @param AsrWordsConfigure Control parameter of speech keyword recognition.
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfo& _asrWordsConfigure);

                    /**
                     * 判断参数 AsrWordsConfigure 是否已赋值
                     * @return AsrWordsConfigure 是否已赋值
                     */
                    bool AsrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of object recognition.
                     * @return ObjectConfigure Control parameter of object recognition.
                     */
                    ObjectConfigureInfo GetObjectConfigure() const;

                    /**
                     * 设置Control parameter of object recognition.
                     * @param ObjectConfigure Control parameter of object recognition.
                     */
                    void SetObjectConfigure(const ObjectConfigureInfo& _objectConfigure);

                    /**
                     * 判断参数 ObjectConfigure 是否已赋值
                     * @return ObjectConfigure 是否已赋值
                     */
                    bool ObjectConfigureHasBeenSet() const;

                    /**
                     * 获取Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     * @return ScreenshotInterval Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     * @param ScreenshotInterval Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                private:

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Video content recognition template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of video content recognition template. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Control parameter of video opening and ending credits recognition.
                     */
                    HeadTailConfigureInfo m_headTailConfigure;
                    bool m_headTailConfigureHasBeenSet;

                    /**
                     * Control parameter of video splitting recognition.
                     */
                    SegmentConfigureInfo m_segmentConfigure;
                    bool m_segmentConfigureHasBeenSet;

                    /**
                     * Control parameter of face recognition.
                     */
                    FaceConfigureInfo m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * Control parameter of full text recognition.
                     */
                    OcrFullTextConfigureInfo m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * Control parameter of text keyword recognition.
                     */
                    OcrWordsConfigureInfo m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * Control parameter of full speech recognition.
                     */
                    AsrFullTextConfigureInfo m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * Control parameter of speech keyword recognition.
                     */
                    AsrWordsConfigureInfo m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * Control parameter of object recognition.
                     */
                    ObjectConfigureInfo m_objectConfigure;
                    bool m_objectConfigureHasBeenSet;

                    /**
                     * Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIRECOGNITIONTEMPLATEREQUEST_H_
