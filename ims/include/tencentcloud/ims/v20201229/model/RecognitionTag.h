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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_RECOGNITIONTAG_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_RECOGNITIONTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/Location.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Recognition tag information
                */
                class RecognitionTag : public AbstractModel
                {
                public:
                    RecognitionTag();
                    ~RecognitionTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Name Tag name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Tag name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Name Tag name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Score Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Score Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Location information. It returns 0 if there is not location information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Location Location information. It returns 0 if there is not location information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    Location GetLocation() const;

                    /**
                     * 设置Location information. It returns 0 if there is not location information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Location Location information. It returns 0 if there is not location information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * Tag name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Location information. It returns 0 if there is not location information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_RECOGNITIONTAG_H_
