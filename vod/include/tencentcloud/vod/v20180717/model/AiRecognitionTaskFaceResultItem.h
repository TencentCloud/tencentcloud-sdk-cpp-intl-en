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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskFaceSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Face recognition result
                */
                class AiRecognitionTaskFaceResultItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskFaceResultItem();
                    ~AiRecognitionTaskFaceResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of figure.
                     * @return Id Unique ID of figure.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique ID of figure.
                     * @param _id Unique ID of figure.
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
                     * 获取Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
                     * @return Type Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
                     * @param _type Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
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
                     * 获取Figure name.
                     * @return Name Figure name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Figure name.
                     * @param _name Figure name.
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
                     * 获取Result set of segments that contain a figure.
                     * @return SegmentSet Result set of segments that contain a figure.
                     * 
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Result set of segments that contain a figure.
                     * @param _segmentSet Result set of segments that contain a figure.
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskFaceSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * Unique ID of figure.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: default figure library;</li>
<li>UserDefine: custom figure library.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Figure name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Result set of segments that contain a figure.
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
