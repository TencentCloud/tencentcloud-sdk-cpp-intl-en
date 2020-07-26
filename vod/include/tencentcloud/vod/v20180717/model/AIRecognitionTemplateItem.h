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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Video content recognition template details
                */
                class AIRecognitionTemplateItem : public AbstractModel
                {
                public:
                    AIRecognitionTemplateItem();
                    ~AIRecognitionTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of video content recognition template.
                     * @return Definition Unique ID of video content recognition template.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of video content recognition template.
                     * @param Definition Unique ID of video content recognition template.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Video content recognition template name.
                     * @return Name Video content recognition template name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Video content recognition template name.
                     * @param Name Video content recognition template name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Video content recognition template description.
                     * @return Comment Video content recognition template description.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Video content recognition template description.
                     * @param Comment Video content recognition template description.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Control parameter of opening and closing credits recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HeadTailConfigure Control parameter of opening and closing credits recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    HeadTailConfigureInfo GetHeadTailConfigure() const;

                    /**
                     * 设置Control parameter of opening and closing credits recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HeadTailConfigure Control parameter of opening and closing credits recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeadTailConfigure(const HeadTailConfigureInfo& _headTailConfigure);

                    /**
                     * 判断参数 HeadTailConfigure 是否已赋值
                     * @return HeadTailConfigure 是否已赋值
                     */
                    bool HeadTailConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of splitting recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SegmentConfigure Control parameter of splitting recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SegmentConfigureInfo GetSegmentConfigure() const;

                    /**
                     * 设置Control parameter of splitting recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SegmentConfigure Control parameter of splitting recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSegmentConfigure(const SegmentConfigureInfo& _segmentConfigure);

                    /**
                     * 判断参数 SegmentConfigure 是否已赋值
                     * @return SegmentConfigure 是否已赋值
                     */
                    bool SegmentConfigureHasBeenSet() const;

                    /**
                     * 获取Face recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaceConfigure Face recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FaceConfigureInfo GetFaceConfigure() const;

                    /**
                     * 设置Face recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FaceConfigure Face recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFaceConfigure(const FaceConfigureInfo& _faceConfigure);

                    /**
                     * 判断参数 FaceConfigure 是否已赋值
                     * @return FaceConfigure 是否已赋值
                     */
                    bool FaceConfigureHasBeenSet() const;

                    /**
                     * 获取Full text recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OcrFullTextConfigure Full text recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OcrFullTextConfigureInfo GetOcrFullTextConfigure() const;

                    /**
                     * 设置Full text recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OcrFullTextConfigure Full text recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOcrFullTextConfigure(const OcrFullTextConfigureInfo& _ocrFullTextConfigure);

                    /**
                     * 判断参数 OcrFullTextConfigure 是否已赋值
                     * @return OcrFullTextConfigure 是否已赋值
                     */
                    bool OcrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Text keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OcrWordsConfigure Text keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OcrWordsConfigureInfo GetOcrWordsConfigure() const;

                    /**
                     * 设置Text keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OcrWordsConfigure Text keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOcrWordsConfigure(const OcrWordsConfigureInfo& _ocrWordsConfigure);

                    /**
                     * 判断参数 OcrWordsConfigure 是否已赋值
                     * @return OcrWordsConfigure 是否已赋值
                     */
                    bool OcrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Full speech recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AsrFullTextConfigure Full speech recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AsrFullTextConfigureInfo GetAsrFullTextConfigure() const;

                    /**
                     * 设置Full speech recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AsrFullTextConfigure Full speech recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAsrFullTextConfigure(const AsrFullTextConfigureInfo& _asrFullTextConfigure);

                    /**
                     * 判断参数 AsrFullTextConfigure 是否已赋值
                     * @return AsrFullTextConfigure 是否已赋值
                     */
                    bool AsrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Speech keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AsrWordsConfigure Speech keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AsrWordsConfigureInfo GetAsrWordsConfigure() const;

                    /**
                     * 设置Speech keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AsrWordsConfigure Speech keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfo& _asrWordsConfigure);

                    /**
                     * 判断参数 AsrWordsConfigure 是否已赋值
                     * @return AsrWordsConfigure 是否已赋值
                     */
                    bool AsrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of object recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ObjectConfigure Control parameter of object recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ObjectConfigureInfo GetObjectConfigure() const;

                    /**
                     * 设置Control parameter of object recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ObjectConfigure Control parameter of object recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetObjectConfigure(const ObjectConfigureInfo& _objectConfigure);

                    /**
                     * 判断参数 ObjectConfigure 是否已赋值
                     * @return ObjectConfigure 是否已赋值
                     */
                    bool ObjectConfigureHasBeenSet() const;

                    /**
                     * 获取Screencapturing interval in seconds.
                     * @return ScreenshotInterval Screencapturing interval in seconds.
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Screencapturing interval in seconds.
                     * @param ScreenshotInterval Screencapturing interval in seconds.
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return CreateTime Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param CreateTime Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return UpdateTime Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param UpdateTime Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of video content recognition template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Video content recognition template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Video content recognition template description.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Control parameter of opening and closing credits recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    HeadTailConfigureInfo m_headTailConfigure;
                    bool m_headTailConfigureHasBeenSet;

                    /**
                     * Control parameter of splitting recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SegmentConfigureInfo m_segmentConfigure;
                    bool m_segmentConfigureHasBeenSet;

                    /**
                     * Face recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FaceConfigureInfo m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * Full text recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OcrFullTextConfigureInfo m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * Text keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OcrWordsConfigureInfo m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * Full speech recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AsrFullTextConfigureInfo m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * Speech keyword recognition control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AsrWordsConfigureInfo m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * Control parameter of object recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ObjectConfigureInfo m_objectConfigure;
                    bool m_objectConfigureHasBeenSet;

                    /**
                     * Screencapturing interval in seconds.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTEMPLATEITEM_H_
