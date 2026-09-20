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
                     * 获取Unique identification ID of a person.
                     * @return Id Unique identification ID of a person.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique identification ID of a person.
                     * @param _id Unique identification ID of a person.
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
                     * 获取Library type of the figure, which indicates which figure library the recognized figure comes from:
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
                     * @return Type Library type of the figure, which indicates which figure library the recognized figure comes from:
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Library type of the figure, which indicates which figure library the recognized figure comes from:
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
                     * @param _type Library type of the figure, which indicates which figure library the recognized figure comes from:
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
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
                     * 获取Result set of segments where the person appears.
                     * @return SegmentSet Result set of segments where the person appears.
                     * 
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Result set of segments where the person appears.
                     * @param _segmentSet Result set of segments where the person appears.
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
                     * Unique identification ID of a person.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Library type of the figure, which indicates which figure library the recognized figure comes from:
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Figure name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Result set of segments where the person appears.
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
