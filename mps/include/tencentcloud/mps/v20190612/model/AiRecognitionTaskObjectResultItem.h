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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKOBJECTRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKOBJECTRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskObjectSeqmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Single object recognition result.
                */
                class AiRecognitionTaskObjectResultItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskObjectResultItem();
                    ~AiRecognitionTaskObjectResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of a recognized object.
                     * @return Name Name of a recognized object.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a recognized object.
                     * @param _name Name of a recognized object.
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
                     * 获取List of segments that contain the object.
                     * @return SegmentSet List of segments that contain the object.
                     * 
                     */
                    std::vector<AiRecognitionTaskObjectSeqmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of segments that contain the object.
                     * @param _segmentSet List of segments that contain the object.
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskObjectSeqmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * Name of a recognized object.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of segments that contain the object.
                     */
                    std::vector<AiRecognitionTaskObjectSeqmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKOBJECTRESULTITEM_H_
