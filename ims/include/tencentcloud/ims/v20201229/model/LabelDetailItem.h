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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_LABELDETAILITEM_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_LABELDETAILITEM_H_

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
                * Returns the details of the subtag hit by the categorization model
                */
                class LabelDetailItem : public AbstractModel
                {
                public:
                    LabelDetailItem();
                    ~LabelDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the ID of the recognized object for easier recognition and distinction.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Id This field is used to return the ID of the recognized object for easier recognition and distinction.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置This field is used to return the ID of the recognized object for easier recognition and distinction.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _id This field is used to return the ID of the recognized object for easier recognition and distinction.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field is used to return the hit subtag name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Name This field is used to return the hit subtag name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置This field is used to return the hit subtag name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _name This field is used to return the hit subtag name.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field is used to return the hit score of the subtag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Score This field is used to return the hit score of the subtag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置This field is used to return the hit score of the subtag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _score This field is used to return the hit score of the subtag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the ID of the recognized object for easier recognition and distinction.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * This field is used to return the hit subtag name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * This field is used to return the hit score of the subtag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_LABELDETAILITEM_H_
