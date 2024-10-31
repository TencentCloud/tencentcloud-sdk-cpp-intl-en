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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HeadTailConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/SegmentConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/FaceConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/OcrFullTextConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/OcrWordsConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/AsrFullTextConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/AsrWordsConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/AsrTranslateConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/ObjectConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyAIRecognitionTemplate request structure.
                */
                class ModifyAIRecognitionTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAIRecognitionTemplateRequest();
                    ~ModifyAIRecognitionTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of video content recognition template.
                     * @return Definition Unique ID of video content recognition template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of video content recognition template.
                     * @param _definition Unique ID of video content recognition template.
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
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Video content recognition template name. Length limit: 64 characters.
                     * @return Name Video content recognition template name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Video content recognition template name. Length limit: 64 characters.
                     * @param _name Video content recognition template name. Length limit: 64 characters.
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
                     * 获取Description of video content recognition template. Length limit: 256 characters.
                     * @return Comment Description of video content recognition template. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of video content recognition template. Length limit: 256 characters.
                     * @param _comment Description of video content recognition template. Length limit: 256 characters.
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
                     * 获取Control parameter of video opening and ending credits recognition.
                     * @return HeadTailConfigure Control parameter of video opening and ending credits recognition.
                     * 
                     */
                    HeadTailConfigureInfoForUpdate GetHeadTailConfigure() const;

                    /**
                     * 设置Control parameter of video opening and ending credits recognition.
                     * @param _headTailConfigure Control parameter of video opening and ending credits recognition.
                     * 
                     */
                    void SetHeadTailConfigure(const HeadTailConfigureInfoForUpdate& _headTailConfigure);

                    /**
                     * 判断参数 HeadTailConfigure 是否已赋值
                     * @return HeadTailConfigure 是否已赋值
                     * 
                     */
                    bool HeadTailConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of video splitting recognition.
                     * @return SegmentConfigure Control parameter of video splitting recognition.
                     * 
                     */
                    SegmentConfigureInfoForUpdate GetSegmentConfigure() const;

                    /**
                     * 设置Control parameter of video splitting recognition.
                     * @param _segmentConfigure Control parameter of video splitting recognition.
                     * 
                     */
                    void SetSegmentConfigure(const SegmentConfigureInfoForUpdate& _segmentConfigure);

                    /**
                     * 判断参数 SegmentConfigure 是否已赋值
                     * @return SegmentConfigure 是否已赋值
                     * 
                     */
                    bool SegmentConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of face recognition.
                     * @return FaceConfigure Control parameter of face recognition.
                     * 
                     */
                    FaceConfigureInfoForUpdate GetFaceConfigure() const;

                    /**
                     * 设置Control parameter of face recognition.
                     * @param _faceConfigure Control parameter of face recognition.
                     * 
                     */
                    void SetFaceConfigure(const FaceConfigureInfoForUpdate& _faceConfigure);

                    /**
                     * 判断参数 FaceConfigure 是否已赋值
                     * @return FaceConfigure 是否已赋值
                     * 
                     */
                    bool FaceConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of full text recognition.
                     * @return OcrFullTextConfigure Control parameter of full text recognition.
                     * 
                     */
                    OcrFullTextConfigureInfoForUpdate GetOcrFullTextConfigure() const;

                    /**
                     * 设置Control parameter of full text recognition.
                     * @param _ocrFullTextConfigure Control parameter of full text recognition.
                     * 
                     */
                    void SetOcrFullTextConfigure(const OcrFullTextConfigureInfoForUpdate& _ocrFullTextConfigure);

                    /**
                     * 判断参数 OcrFullTextConfigure 是否已赋值
                     * @return OcrFullTextConfigure 是否已赋值
                     * 
                     */
                    bool OcrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of text keyword recognition.
                     * @return OcrWordsConfigure Control parameter of text keyword recognition.
                     * 
                     */
                    OcrWordsConfigureInfoForUpdate GetOcrWordsConfigure() const;

                    /**
                     * 设置Control parameter of text keyword recognition.
                     * @param _ocrWordsConfigure Control parameter of text keyword recognition.
                     * 
                     */
                    void SetOcrWordsConfigure(const OcrWordsConfigureInfoForUpdate& _ocrWordsConfigure);

                    /**
                     * 判断参数 OcrWordsConfigure 是否已赋值
                     * @return OcrWordsConfigure 是否已赋值
                     * 
                     */
                    bool OcrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of full speech recognition.
                     * @return AsrFullTextConfigure Control parameter of full speech recognition.
                     * 
                     */
                    AsrFullTextConfigureInfoForUpdate GetAsrFullTextConfigure() const;

                    /**
                     * 设置Control parameter of full speech recognition.
                     * @param _asrFullTextConfigure Control parameter of full speech recognition.
                     * 
                     */
                    void SetAsrFullTextConfigure(const AsrFullTextConfigureInfoForUpdate& _asrFullTextConfigure);

                    /**
                     * 判断参数 AsrFullTextConfigure 是否已赋值
                     * @return AsrFullTextConfigure 是否已赋值
                     * 
                     */
                    bool AsrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of speech keyword recognition.
                     * @return AsrWordsConfigure Control parameter of speech keyword recognition.
                     * 
                     */
                    AsrWordsConfigureInfoForUpdate GetAsrWordsConfigure() const;

                    /**
                     * 设置Control parameter of speech keyword recognition.
                     * @param _asrWordsConfigure Control parameter of speech keyword recognition.
                     * 
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfoForUpdate& _asrWordsConfigure);

                    /**
                     * 判断参数 AsrWordsConfigure 是否已赋值
                     * @return AsrWordsConfigure 是否已赋值
                     * 
                     */
                    bool AsrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of voice translation.
                     * @return AsrTranslateConfigure Control parameter of voice translation.
                     * 
                     */
                    AsrTranslateConfigureInfoForUpdate GetAsrTranslateConfigure() const;

                    /**
                     * 设置Control parameter of voice translation.
                     * @param _asrTranslateConfigure Control parameter of voice translation.
                     * 
                     */
                    void SetAsrTranslateConfigure(const AsrTranslateConfigureInfoForUpdate& _asrTranslateConfigure);

                    /**
                     * 判断参数 AsrTranslateConfigure 是否已赋值
                     * @return AsrTranslateConfigure 是否已赋值
                     * 
                     */
                    bool AsrTranslateConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of object recognition.
                     * @return ObjectConfigure Control parameter of object recognition.
                     * 
                     */
                    ObjectConfigureInfoForUpdate GetObjectConfigure() const;

                    /**
                     * 设置Control parameter of object recognition.
                     * @param _objectConfigure Control parameter of object recognition.
                     * 
                     */
                    void SetObjectConfigure(const ObjectConfigureInfoForUpdate& _objectConfigure);

                    /**
                     * 判断参数 ObjectConfigure 是否已赋值
                     * @return ObjectConfigure 是否已赋值
                     * 
                     */
                    bool ObjectConfigureHasBeenSet() const;

                    /**
                     * 获取Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     * @return ScreenshotInterval Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     * @param _screenshotInterval Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     * 
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     * 
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                private:

                    /**
                     * Unique ID of video content recognition template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
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
                    HeadTailConfigureInfoForUpdate m_headTailConfigure;
                    bool m_headTailConfigureHasBeenSet;

                    /**
                     * Control parameter of video splitting recognition.
                     */
                    SegmentConfigureInfoForUpdate m_segmentConfigure;
                    bool m_segmentConfigureHasBeenSet;

                    /**
                     * Control parameter of face recognition.
                     */
                    FaceConfigureInfoForUpdate m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * Control parameter of full text recognition.
                     */
                    OcrFullTextConfigureInfoForUpdate m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * Control parameter of text keyword recognition.
                     */
                    OcrWordsConfigureInfoForUpdate m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * Control parameter of full speech recognition.
                     */
                    AsrFullTextConfigureInfoForUpdate m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * Control parameter of speech keyword recognition.
                     */
                    AsrWordsConfigureInfoForUpdate m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * Control parameter of voice translation.
                     */
                    AsrTranslateConfigureInfoForUpdate m_asrTranslateConfigure;
                    bool m_asrTranslateConfigureHasBeenSet;

                    /**
                     * Control parameter of object recognition.
                     */
                    ObjectConfigureInfoForUpdate m_objectConfigure;
                    bool m_objectConfigureHasBeenSet;

                    /**
                     * Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_
