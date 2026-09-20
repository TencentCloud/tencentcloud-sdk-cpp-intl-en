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
                     * 获取Audio and video content recognition template unique identifier.
                     * @return Definition Audio and video content recognition template unique identifier.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Audio and video content recognition template unique identifier.
                     * @param _definition Audio and video content recognition template unique identifier.
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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
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
                     * 获取Description of the audio/video content recognition template, with a length limit of 256 characters.
                     * @return Comment Description of the audio/video content recognition template, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of the audio/video content recognition template, with a length limit of 256 characters.
                     * @param _comment Description of the audio/video content recognition template, with a length limit of 256 characters.
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
                     * 获取Control parameters for video opening and closing recognition.
                     * @return HeadTailConfigure Control parameters for video opening and closing recognition.
                     * 
                     */
                    HeadTailConfigureInfoForUpdate GetHeadTailConfigure() const;

                    /**
                     * 设置Control parameters for video opening and closing recognition.
                     * @param _headTailConfigure Control parameters for video opening and closing recognition.
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
                     * 获取Video split recognition control parameters.
                     * @return SegmentConfigure Video split recognition control parameters.
                     * 
                     */
                    SegmentConfigureInfoForUpdate GetSegmentConfigure() const;

                    /**
                     * 设置Video split recognition control parameters.
                     * @param _segmentConfigure Video split recognition control parameters.
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
                     * 获取Control parameters for face recognition.
                     * @return FaceConfigure Control parameters for face recognition.
                     * 
                     */
                    FaceConfigureInfoForUpdate GetFaceConfigure() const;

                    /**
                     * 设置Control parameters for face recognition.
                     * @param _faceConfigure Control parameters for face recognition.
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
                     * 获取Text Full-text Recognition Control Parameters.
                     * @return OcrFullTextConfigure Text Full-text Recognition Control Parameters.
                     * 
                     */
                    OcrFullTextConfigureInfoForUpdate GetOcrFullTextConfigure() const;

                    /**
                     * 设置Text Full-text Recognition Control Parameters.
                     * @param _ocrFullTextConfigure Text Full-text Recognition Control Parameters.
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
                     * 获取Text keyword recognition control parameters.
                     * @return OcrWordsConfigure Text keyword recognition control parameters.
                     * 
                     */
                    OcrWordsConfigureInfoForUpdate GetOcrWordsConfigure() const;

                    /**
                     * 设置Text keyword recognition control parameters.
                     * @param _ocrWordsConfigure Text keyword recognition control parameters.
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
                     * 获取Voice full-text recognition control parameters.
<font color=red>Note: This parameter is no longer maintained. It is recommended to use the AsrTranslateConfigure parameter to initiate speech translation recognition (when DstLanguage is not filled in or is an empty string, no translation is performed, and the billing item is the same as full speech recognition).</font>
                     * @return AsrFullTextConfigure Voice full-text recognition control parameters.
<font color=red>Note: This parameter is no longer maintained. It is recommended to use the AsrTranslateConfigure parameter to initiate speech translation recognition (when DstLanguage is not filled in or is an empty string, no translation is performed, and the billing item is the same as full speech recognition).</font>
                     * 
                     */
                    AsrFullTextConfigureInfoForUpdate GetAsrFullTextConfigure() const;

                    /**
                     * 设置Voice full-text recognition control parameters.
<font color=red>Note: This parameter is no longer maintained. It is recommended to use the AsrTranslateConfigure parameter to initiate speech translation recognition (when DstLanguage is not filled in or is an empty string, no translation is performed, and the billing item is the same as full speech recognition).</font>
                     * @param _asrFullTextConfigure Voice full-text recognition control parameters.
<font color=red>Note: This parameter is no longer maintained. It is recommended to use the AsrTranslateConfigure parameter to initiate speech translation recognition (when DstLanguage is not filled in or is an empty string, no translation is performed, and the billing item is the same as full speech recognition).</font>
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
                     * 获取Voice keyword recognition control parameters.
                     * @return AsrWordsConfigure Voice keyword recognition control parameters.
                     * 
                     */
                    AsrWordsConfigureInfoForUpdate GetAsrWordsConfigure() const;

                    /**
                     * 设置Voice keyword recognition control parameters.
                     * @param _asrWordsConfigure Voice keyword recognition control parameters.
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
                     * 获取Voice translation recognition control parameters.
                     * @return AsrTranslateConfigure Voice translation recognition control parameters.
                     * 
                     */
                    AsrTranslateConfigureInfoForUpdate GetAsrTranslateConfigure() const;

                    /**
                     * 设置Voice translation recognition control parameters.
                     * @param _asrTranslateConfigure Voice translation recognition control parameters.
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
                     * 获取Object recognition control parameter.
                     * @return ObjectConfigure Object recognition control parameter.
                     * 
                     */
                    ObjectConfigureInfoForUpdate GetObjectConfigure() const;

                    /**
                     * 设置Object recognition control parameter.
                     * @param _objectConfigure Object recognition control parameter.
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
                     * 获取Frame interception interval in seconds. Minimum value: 0.5 seconds.
                     * @return ScreenshotInterval Frame interception interval in seconds. Minimum value: 0.5 seconds.
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Frame interception interval in seconds. Minimum value: 0.5 seconds.
                     * @param _screenshotInterval Frame interception interval in seconds. Minimum value: 0.5 seconds.
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
                     * Audio and video content recognition template unique identifier.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Video content recognition template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of the audio/video content recognition template, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Control parameters for video opening and closing recognition.
                     */
                    HeadTailConfigureInfoForUpdate m_headTailConfigure;
                    bool m_headTailConfigureHasBeenSet;

                    /**
                     * Video split recognition control parameters.
                     */
                    SegmentConfigureInfoForUpdate m_segmentConfigure;
                    bool m_segmentConfigureHasBeenSet;

                    /**
                     * Control parameters for face recognition.
                     */
                    FaceConfigureInfoForUpdate m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * Text Full-text Recognition Control Parameters.
                     */
                    OcrFullTextConfigureInfoForUpdate m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * Text keyword recognition control parameters.
                     */
                    OcrWordsConfigureInfoForUpdate m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * Voice full-text recognition control parameters.
<font color=red>Note: This parameter is no longer maintained. It is recommended to use the AsrTranslateConfigure parameter to initiate speech translation recognition (when DstLanguage is not filled in or is an empty string, no translation is performed, and the billing item is the same as full speech recognition).</font>
                     */
                    AsrFullTextConfigureInfoForUpdate m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * Voice keyword recognition control parameters.
                     */
                    AsrWordsConfigureInfoForUpdate m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * Voice translation recognition control parameters.
                     */
                    AsrTranslateConfigureInfoForUpdate m_asrTranslateConfigure;
                    bool m_asrTranslateConfigureHasBeenSet;

                    /**
                     * Object recognition control parameter.
                     */
                    ObjectConfigureInfoForUpdate m_objectConfigure;
                    bool m_objectConfigureHasBeenSet;

                    /**
                     * Frame interception interval in seconds. Minimum value: 0.5 seconds.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_
