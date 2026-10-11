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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LABELBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LABELBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Tag information
                */
                class LabelBrief : public AbstractModel
                {
                public:
                    LabelBrief();
                    ~LabelBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag name.
                     * @return LabelKey Tag name.
                     * 
                     */
                    std::string GetLabelKey() const;

                    /**
                     * 设置Tag name.
                     * @param _labelKey Tag name.
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
                     * 获取Tag value.
                     * @return LabelValue Tag value.
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置Tag value.
                     * @param _labelValue Tag value.
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
                     * 获取Tag name ID, obtainable through tag-related APIs
                     * @return LabelKeyId Tag name ID, obtainable through tag-related APIs
                     * 
                     */
                    std::string GetLabelKeyId() const;

                    /**
                     * 设置Tag name ID, obtainable through tag-related APIs
                     * @param _labelKeyId Tag name ID, obtainable through tag-related APIs
                     * 
                     */
                    void SetLabelKeyId(const std::string& _labelKeyId);

                    /**
                     * 判断参数 LabelKeyId 是否已赋值
                     * @return LabelKeyId 是否已赋值
                     * 
                     */
                    bool LabelKeyIdHasBeenSet() const;

                    /**
                     * 获取Tag value ID, which can be obtained through tag relevant APIs.
                     * @return LabelValueId Tag value ID, which can be obtained through tag relevant APIs.
                     * 
                     */
                    std::string GetLabelValueId() const;

                    /**
                     * 设置Tag value ID, which can be obtained through tag relevant APIs.
                     * @param _labelValueId Tag value ID, which can be obtained through tag relevant APIs.
                     * 
                     */
                    void SetLabelValueId(const std::string& _labelValueId);

                    /**
                     * 判断参数 LabelValueId 是否已赋值
                     * @return LabelValueId 是否已赋值
                     * 
                     */
                    bool LabelValueIdHasBeenSet() const;

                private:

                    /**
                     * Tag name.
                     */
                    std::string m_labelKey;
                    bool m_labelKeyHasBeenSet;

                    /**
                     * Tag value.
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * Tag name ID, obtainable through tag-related APIs
                     */
                    std::string m_labelKeyId;
                    bool m_labelKeyIdHasBeenSet;

                    /**
                     * Tag value ID, which can be obtained through tag relevant APIs.
                     */
                    std::string m_labelValueId;
                    bool m_labelValueIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LABELBRIEF_H_
