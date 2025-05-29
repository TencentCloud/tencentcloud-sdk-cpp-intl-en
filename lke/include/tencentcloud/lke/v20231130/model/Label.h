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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LABEL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LABEL_H_

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
                * Label ID.
                */
                class Label : public AbstractModel
                {
                public:
                    Label();
                    ~Label() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Label ID.
                     * @return LabelBizId Label ID.
                     * 
                     */
                    std::string GetLabelBizId() const;

                    /**
                     * 设置Label ID.
                     * @param _labelBizId Label ID.
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
                     * 获取Label name.
                     * @return LabelName Label name.
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置Label name.
                     * @param _labelName Label name.
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                private:

                    /**
                     * Label ID.
                     */
                    std::string m_labelBizId;
                    bool m_labelBizIdHasBeenSet;

                    /**
                     * Label name.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LABEL_H_
