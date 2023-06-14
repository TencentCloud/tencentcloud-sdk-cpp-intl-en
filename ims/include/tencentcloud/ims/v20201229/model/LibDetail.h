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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_LIBDETAIL_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_LIBDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Returns the details of the custom library/blocklist/allowlist
                */
                class LibDetail : public AbstractModel
                {
                public:
                    LibDetail();
                    ~LibDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the ID of the recognized object for easier recognition and distinction.
                     * @return Id This field is used to return the ID of the recognized object for easier recognition and distinction.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置This field is used to return the ID of the recognized object for easier recognition and distinction.
                     * @param _id This field is used to return the ID of the recognized object for easier recognition and distinction.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     * @return LibId This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     * @param _libId This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LibName This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _libName This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取This field is used to return the ID of the recognized image object for easier file management.
                     * @return ImageId This field is used to return the ID of the recognized image object for easier file management.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置This field is used to return the ID of the recognized image object for easier file management.
                     * @param _imageId This field is used to return the ID of the recognized image object for easier file management.
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * @return Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * @param _label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This field is used to return other custom tags to meet the needs in your customized scenarios. It can be skipped if you have no custom needs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tag This field is used to return other custom tags to meet the needs in your customized scenarios. It can be skipped if you have no custom needs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置This field is used to return other custom tags to meet the needs in your customized scenarios. It can be skipped if you have no custom needs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tag This field is used to return other custom tags to meet the needs in your customized scenarios. It can be skipped if you have no custom needs.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取This field is used to return the hit score of the model. Value range: **0–100**; for example, *Porn 99* indicates that the hit score of the porn tag for the recognized content is 99.
                     * @return Score This field is used to return the hit score of the model. Value range: **0–100**; for example, *Porn 99* indicates that the hit score of the porn tag for the recognized content is 99.
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置This field is used to return the hit score of the model. Value range: **0–100**; for example, *Porn 99* indicates that the hit score of the porn tag for the recognized content is 99.
                     * @param _score This field is used to return the hit score of the model. Value range: **0–100**; for example, *Porn 99* indicates that the hit score of the porn tag for the recognized content is 99.
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the ID of the recognized object for easier recognition and distinction.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * This field is used to return the ID of the recognized image object for easier file management.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field is used to return other custom tags to meet the needs in your customized scenarios. It can be skipped if you have no custom needs.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * This field is used to return the hit score of the model. Value range: **0–100**; for example, *Porn 99* indicates that the hit score of the porn tag for the recognized content is 99.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_LIBDETAIL_H_
