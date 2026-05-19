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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_

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
                * Image file info for AIGC video task input.
                */
                class AigcVideoTaskInputFileInfo : public AbstractModel
                {
                public:
                    AigcVideoTaskInputFileInfo();
                    ~AigcVideoTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
                     * @return Type <p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
                     * @param _type <p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>File category. Value is:</p><ul><li>Image: image. <strong>Note that the Usage field defines the image type.</strong></li><li>Video: video.</li></ul>
                     * @return Category <p>File category. Value is:</p><ul><li>Image: image. <strong>Note that the Usage field defines the image type.</strong></li><li>Video: video.</li></ul>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>File category. Value is:</p><ul><li>Image: image. <strong>Note that the Usage field defines the image type.</strong></li><li>Video: video.</li></ul>
                     * @param _category <p>File category. Value is:</p><ul><li>Image: image. <strong>Note that the Usage field defines the image type.</strong></li><li>Video: video.</li></ul>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description:</p><ol><li>Images less than 10M are recommended;</li><li>Image format values: jpeg, jpg, png.</li></ol>
                     * @return FileId <p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description:</p><ol><li>Images less than 10M are recommended;</li><li>Image format values: jpeg, jpg, png.</li></ol>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description:</p><ol><li>Images less than 10M are recommended;</li><li>Image format values: jpeg, jpg, png.</li></ol>
                     * @param _fileId <p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description:</p><ol><li>Images less than 10M are recommended;</li><li>Image format values: jpeg, jpg, png.</li></ol>
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
                     * 获取<p>Accessible file URL. This parameter is valid when the Type value is URL.<br>Description:</p><ol><li>Images less than 10M are recommended.</li><li>Image format values: jpeg, jpg, png.</li></ol>
                     * @return Url <p>Accessible file URL. This parameter is valid when the Type value is URL.<br>Description:</p><ol><li>Images less than 10M are recommended.</li><li>Image format values: jpeg, jpg, png.</li></ol>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Accessible file URL. This parameter is valid when the Type value is URL.<br>Description:</p><ol><li>Images less than 10M are recommended.</li><li>Image format values: jpeg, jpg, png.</li></ol>
                     * @param _url <p>Accessible file URL. This parameter is valid when the Type value is URL.<br>Description:</p><ol><li>Images less than 10M are recommended.</li><li>Image format values: jpeg, jpg, png.</li></ol>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>Reference Type, applicable to GV, Kling, and PixVerse models.<br>Note:<br>When using the GV model, it can be used as a reference method, available values: asset means material, style means style;<br>When using the Kling model and Category is Video, distinct reference video types can be identified, feature means feature reference video, base means video to be edited;<br>When using the PixVerse model, applicable to multi-image (subject) reference generation mode, available values: subject means subject, background means background;</p>
                     * @return ReferenceType <p>Reference Type, applicable to GV, Kling, and PixVerse models.<br>Note:<br>When using the GV model, it can be used as a reference method, available values: asset means material, style means style;<br>When using the Kling model and Category is Video, distinct reference video types can be identified, feature means feature reference video, base means video to be edited;<br>When using the PixVerse model, applicable to multi-image (subject) reference generation mode, available values: subject means subject, background means background;</p>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p>Reference Type, applicable to GV, Kling, and PixVerse models.<br>Note:<br>When using the GV model, it can be used as a reference method, available values: asset means material, style means style;<br>When using the Kling model and Category is Video, distinct reference video types can be identified, feature means feature reference video, base means video to be edited;<br>When using the PixVerse model, applicable to multi-image (subject) reference generation mode, available values: subject means subject, background means background;</p>
                     * @param _referenceType <p>Reference Type, applicable to GV, Kling, and PixVerse models.<br>Note:<br>When using the GV model, it can be used as a reference method, available values: asset means material, style means style;<br>When using the Kling model and Category is Video, distinct reference video types can be identified, feature means feature reference video, base means video to be edited;<br>When using the PixVerse model, applicable to multi-image (subject) reference generation mode, available values: subject means subject, background means background;</p>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Usage: Vidu subject Id.<br>Vidu subject Id: prompt can be used via @subject Id. Valid at that time when Category is Image.</p>
                     * @return ObjectId <p>Usage: Vidu subject Id.<br>Vidu subject Id: prompt can be used via @subject Id. Valid at that time when Category is Image.</p>
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置<p>Usage: Vidu subject Id.<br>Vidu subject Id: prompt can be used via @subject Id. Valid at that time when Category is Image.</p>
                     * @param _objectId <p>Usage: Vidu subject Id.<br>Vidu subject Id: prompt can be used via @subject Id. Valid at that time when Category is Image.</p>
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Suitable for the Vidu-q2 model.<br>When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Supported timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
                     * @return VoiceId <p>Suitable for the Vidu-q2 model.<br>When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Supported timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Suitable for the Vidu-q2 model.<br>When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Supported timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
                     * @param _voiceId <p>Suitable for the Vidu-q2 model.<br>When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Supported timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
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
                     * 获取<p>Whether to retain the original sound of the video. Valid when Category is Video. Values are as follows:</p><li>Enabled: Retain</li><li>Disabled: Not retain</li>
                     * @return KeepOriginalSound <p>Whether to retain the original sound of the video. Valid when Category is Video. Values are as follows:</p><li>Enabled: Retain</li><li>Disabled: Not retain</li>
                     * 
                     */
                    std::string GetKeepOriginalSound() const;

                    /**
                     * 设置<p>Whether to retain the original sound of the video. Valid when Category is Video. Values are as follows:</p><li>Enabled: Retain</li><li>Disabled: Not retain</li>
                     * @param _keepOriginalSound <p>Whether to retain the original sound of the video. Valid when Category is Video. Values are as follows:</p><li>Enabled: Retain</li><li>Disabled: Not retain</li>
                     * 
                     */
                    void SetKeepOriginalSound(const std::string& _keepOriginalSound);

                    /**
                     * 判断参数 KeepOriginalSound 是否已赋值
                     * @return KeepOriginalSound 是否已赋值
                     * 
                     */
                    bool KeepOriginalSoundHasBeenSet() const;

                    /**
                     * 获取<p>Used to distinguish whether the input image is for <strong>first (last) frame to video</strong>, <strong>image to video</strong>, or <strong>reference to video</strong>. Available values:</p><ul><li>FirstFrame: For first (last) frame to video or image to video;</li><li>Reference: For reference to video;</li></ul><p><strong>Note: FirstFrame is selected by default</strong></p>
                     * @return Usage <p>Used to distinguish whether the input image is for <strong>first (last) frame to video</strong>, <strong>image to video</strong>, or <strong>reference to video</strong>. Available values:</p><ul><li>FirstFrame: For first (last) frame to video or image to video;</li><li>Reference: For reference to video;</li></ul><p><strong>Note: FirstFrame is selected by default</strong></p>
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置<p>Used to distinguish whether the input image is for <strong>first (last) frame to video</strong>, <strong>image to video</strong>, or <strong>reference to video</strong>. Available values:</p><ul><li>FirstFrame: For first (last) frame to video or image to video;</li><li>Reference: For reference to video;</li></ul><p><strong>Note: FirstFrame is selected by default</strong></p>
                     * @param _usage <p>Used to distinguish whether the input image is for <strong>first (last) frame to video</strong>, <strong>image to video</strong>, or <strong>reference to video</strong>. Available values:</p><ul><li>FirstFrame: For first (last) frame to video or image to video;</li><li>Reference: For reference to video;</li></ul><p><strong>Note: FirstFrame is selected by default</strong></p>
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取<p><strong>Only the multi-image (subject) reference mode of the PixVerse model takes effect</strong>. Specify a name for the image to achieve more precise results. Usage: When the field value is "kitten", use @kitten in the Prompt to accurately describe the scenario. There must be a space after @Text, for example, @kitten run. The name referenced in the Prompt must be the same as the field value.</p>
                     * @return Text <p><strong>Only the multi-image (subject) reference mode of the PixVerse model takes effect</strong>. Specify a name for the image to achieve more precise results. Usage: When the field value is "kitten", use @kitten in the Prompt to accurately describe the scenario. There must be a space after @Text, for example, @kitten run. The name referenced in the Prompt must be the same as the field value.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p><strong>Only the multi-image (subject) reference mode of the PixVerse model takes effect</strong>. Specify a name for the image to achieve more precise results. Usage: When the field value is "kitten", use @kitten in the Prompt to accurately describe the scenario. There must be a space after @Text, for example, @kitten run. The name referenced in the Prompt must be the same as the field value.</p>
                     * @param _text <p><strong>Only the multi-image (subject) reference mode of the PixVerse model takes effect</strong>. Specify a name for the image to achieve more precise results. Usage: When the field value is "kitten", use @kitten in the Prompt to accurately describe the scenario. There must be a space after @Text, for example, @kitten run. The name referenced in the Prompt must be the same as the field value.</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * <p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>File category. Value is:</p><ul><li>Image: image. <strong>Note that the Usage field defines the image type.</strong></li><li>Video: video.</li></ul>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description:</p><ol><li>Images less than 10M are recommended;</li><li>Image format values: jpeg, jpg, png.</li></ol>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Accessible file URL. This parameter is valid when the Type value is URL.<br>Description:</p><ol><li>Images less than 10M are recommended.</li><li>Image format values: jpeg, jpg, png.</li></ol>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Reference Type, applicable to GV, Kling, and PixVerse models.<br>Note:<br>When using the GV model, it can be used as a reference method, available values: asset means material, style means style;<br>When using the Kling model and Category is Video, distinct reference video types can be identified, feature means feature reference video, base means video to be edited;<br>When using the PixVerse model, applicable to multi-image (subject) reference generation mode, available values: subject means subject, background means background;</p>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>Usage: Vidu subject Id.<br>Vidu subject Id: prompt can be used via @subject Id. Valid at that time when Category is Image.</p>
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>Suitable for the Vidu-q2 model.<br>When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Supported timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Whether to retain the original sound of the video. Valid when Category is Video. Values are as follows:</p><li>Enabled: Retain</li><li>Disabled: Not retain</li>
                     */
                    std::string m_keepOriginalSound;
                    bool m_keepOriginalSoundHasBeenSet;

                    /**
                     * <p>Used to distinguish whether the input image is for <strong>first (last) frame to video</strong>, <strong>image to video</strong>, or <strong>reference to video</strong>. Available values:</p><ul><li>FirstFrame: For first (last) frame to video or image to video;</li><li>Reference: For reference to video;</li></ul><p><strong>Note: FirstFrame is selected by default</strong></p>
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * <p><strong>Only the multi-image (subject) reference mode of the PixVerse model takes effect</strong>. Specify a name for the image to achieve more precise results. Usage: When the field value is "kitten", use @kitten in the Prompt to accurately describe the scenario. There must be a space after @Text, for example, @kitten run. The name referenced in the Prompt must be the same as the field value.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
