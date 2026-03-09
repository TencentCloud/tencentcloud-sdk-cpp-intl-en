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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_BIZSTATEENUMINFOBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_BIZSTATEENUMINFOBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Workflow execution business enumeration info.
                */
                class BizStateEnumInfoBrief : public AbstractModel
                {
                public:
                    BizStateEnumInfoBrief();
                    ~BizStateEnumInfoBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelKey Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabelKey() const;

                    /**
                     * 设置Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelKey Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelKey(const std::string& _labelKey);

                    /**
                     * 判断参数 LabelKey 是否已赋值
                     * @return LabelKey 是否已赋值
                     * 
                     */
                    bool LabelKeyHasBeenSet() const;

                    /**
                     * 获取Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelValue Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelValue Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                    /**
                     * 获取Total number of tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Total number of tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Total number of tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _count Total number of tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_labelKey;
                    bool m_labelKeyHasBeenSet;

                    /**
                     * Tag value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * Total number of tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_BIZSTATEENUMINFOBRIEF_H_
