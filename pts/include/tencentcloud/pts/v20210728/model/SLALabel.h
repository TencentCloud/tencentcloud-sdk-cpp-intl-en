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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SLALABEL_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SLALABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * SLA label.
                */
                class SLALabel : public AbstractModel
                {
                public:
                    SLALabel();
                    ~SLALabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Label name.

Note: This field may return null, indicating that no valid value is found.
                     * @return LabelName Label name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置Label name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _labelName Label name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取Label value.

Note: This field may return null, indicating that no valid value is found.
                     * @return LabelValue Label value.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置Label value.

Note: This field may return null, indicating that no valid value is found.
                     * @param _labelValue Label value.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                private:

                    /**
                     * Label name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * Label value.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SLALABEL_H_
