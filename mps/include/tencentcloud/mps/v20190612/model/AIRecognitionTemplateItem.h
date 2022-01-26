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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTEMPLATEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FaceConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/OcrFullTextConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/OcrWordsConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/AsrFullTextConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/AsrWordsConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Details of a video content recognition template
                */
                class AIRecognitionTemplateItem : public AbstractModel
                {
                public:
                    AIRecognitionTemplateItem();
                    ~AIRecognitionTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of a video content recognition template.
                     * @return Definition Unique ID of a video content recognition template.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of a video content recognition template.
                     * @param Definition Unique ID of a video content recognition template.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Name of a video content recognition template.
                     * @return Name Name of a video content recognition template.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a video content recognition template.
                     * @param Name Name of a video content recognition template.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of a video content recognition template.
                     * @return Comment Description of a video content recognition template.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of a video content recognition template.
                     * @param Comment Description of a video content recognition template.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Face recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FaceConfigure Face recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FaceConfigureInfo GetFaceConfigure() const;

                    /**
                     * 设置Face recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FaceConfigure Face recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFaceConfigure(const FaceConfigureInfo& _faceConfigure);

                    /**
                     * 判断参数 FaceConfigure 是否已赋值
                     * @return FaceConfigure 是否已赋值
                     */
                    bool FaceConfigureHasBeenSet() const;

                    /**
                     * 获取Full text recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OcrFullTextConfigure Full text recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OcrFullTextConfigureInfo GetOcrFullTextConfigure() const;

                    /**
                     * 设置Full text recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OcrFullTextConfigure Full text recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOcrFullTextConfigure(const OcrFullTextConfigureInfo& _ocrFullTextConfigure);

                    /**
                     * 判断参数 OcrFullTextConfigure 是否已赋值
                     * @return OcrFullTextConfigure 是否已赋值
                     */
                    bool OcrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Text keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OcrWordsConfigure Text keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OcrWordsConfigureInfo GetOcrWordsConfigure() const;

                    /**
                     * 设置Text keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OcrWordsConfigure Text keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOcrWordsConfigure(const OcrWordsConfigureInfo& _ocrWordsConfigure);

                    /**
                     * 判断参数 OcrWordsConfigure 是否已赋值
                     * @return OcrWordsConfigure 是否已赋值
                     */
                    bool OcrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Full speech recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrFullTextConfigure Full speech recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AsrFullTextConfigureInfo GetAsrFullTextConfigure() const;

                    /**
                     * 设置Full speech recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AsrFullTextConfigure Full speech recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAsrFullTextConfigure(const AsrFullTextConfigureInfo& _asrFullTextConfigure);

                    /**
                     * 判断参数 AsrFullTextConfigure 是否已赋值
                     * @return AsrFullTextConfigure 是否已赋值
                     */
                    bool AsrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Speech keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrWordsConfigure Speech keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AsrWordsConfigureInfo GetAsrWordsConfigure() const;

                    /**
                     * 设置Speech keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AsrWordsConfigure Speech keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfo& _asrWordsConfigure);

                    /**
                     * 判断参数 AsrWordsConfigure 是否已赋值
                     * @return AsrWordsConfigure 是否已赋值
                     */
                    bool AsrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return CreateTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param CreateTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return UpdateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param UpdateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a video content recognition template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Name of a video content recognition template.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of a video content recognition template.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Face recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FaceConfigureInfo m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * Full text recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OcrFullTextConfigureInfo m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * Text keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OcrWordsConfigureInfo m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * Full speech recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AsrFullTextConfigureInfo m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * Speech keyword recognition control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AsrWordsConfigureInfo m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTEMPLATEITEM_H_
