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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_RECOGNITIONRESULT_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_RECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/Tag.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Information of the category label
                */
                class RecognitionResult : public AbstractModel
                {
                public:
                    RecognitionResult();
                    ~RecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Values: `Teenager`, `Gender`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Label Values: `Teenager`, `Gender`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Values: `Teenager`, `Gender`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _label Values: `Teenager`, `Gender`
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Tags List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _tags List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Values: `Teenager`, `Gender`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * List of recognized category labels
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_RECOGNITIONRESULT_H_
