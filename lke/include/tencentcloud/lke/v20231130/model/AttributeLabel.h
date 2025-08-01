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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ATTRIBUTELABEL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ATTRIBUTELABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Label value.
                */
                class AttributeLabel : public AbstractModel
                {
                public:
                    AttributeLabel();
                    ~AttributeLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Standard word ID.
                     * @return LabelBizId Standard word ID.
                     * 
                     */
                    std::string GetLabelBizId() const;

                    /**
                     * 设置Standard word ID.
                     * @param _labelBizId Standard word ID.
                     * 
                     */
                    void SetLabelBizId(const std::string& _labelBizId);

                    /**
                     * 判断参数 LabelBizId 是否已赋值
                     * @return LabelBizId 是否已赋值
                     * 
                     */
                    bool LabelBizIdHasBeenSet() const;

                    /**
                     * 获取Standard word name.
                     * @return LabelName Standard word name.
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置Standard word name.
                     * @param _labelName Standard word name.
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
                     * 获取Synonym name.
                     * @return SimilarLabels Synonym name.
                     * 
                     */
                    std::vector<std::string> GetSimilarLabels() const;

                    /**
                     * 设置Synonym name.
                     * @param _similarLabels Synonym name.
                     * 
                     */
                    void SetSimilarLabels(const std::vector<std::string>& _similarLabels);

                    /**
                     * 判断参数 SimilarLabels 是否已赋值
                     * @return SimilarLabels 是否已赋值
                     * 
                     */
                    bool SimilarLabelsHasBeenSet() const;

                private:

                    /**
                     * Standard word ID.
                     */
                    std::string m_labelBizId;
                    bool m_labelBizIdHasBeenSet;

                    /**
                     * Standard word name.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * Synonym name.
                     */
                    std::vector<std::string> m_similarLabels;
                    bool m_similarLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ATTRIBUTELABEL_H_
