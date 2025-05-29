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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABEL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Label.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Label details.
                */
                class AttrLabel : public AbstractModel
                {
                public:
                    AttrLabel();
                    ~AttrLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Label source.
                     * @return Source Label source.
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置Label source.
                     * @param _source Label source.
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Label ID.
                     * @return AttrBizId Label ID.
                     * 
                     */
                    std::string GetAttrBizId() const;

                    /**
                     * 设置Label ID.
                     * @param _attrBizId Label ID.
                     * 
                     */
                    void SetAttrBizId(const std::string& _attrBizId);

                    /**
                     * 判断参数 AttrBizId 是否已赋值
                     * @return AttrBizId 是否已赋值
                     * 
                     */
                    bool AttrBizIdHasBeenSet() const;

                    /**
                     * 获取Label identification.
                     * @return AttrKey Label identification.
                     * 
                     */
                    std::string GetAttrKey() const;

                    /**
                     * 设置Label identification.
                     * @param _attrKey Label identification.
                     * 
                     */
                    void SetAttrKey(const std::string& _attrKey);

                    /**
                     * 判断参数 AttrKey 是否已赋值
                     * @return AttrKey 是否已赋值
                     * 
                     */
                    bool AttrKeyHasBeenSet() const;

                    /**
                     * 获取Label name.
                     * @return AttrName Label name.
                     * 
                     */
                    std::string GetAttrName() const;

                    /**
                     * 设置Label name.
                     * @param _attrName Label name.
                     * 
                     */
                    void SetAttrName(const std::string& _attrName);

                    /**
                     * 判断参数 AttrName 是否已赋值
                     * @return AttrName 是否已赋值
                     * 
                     */
                    bool AttrNameHasBeenSet() const;

                    /**
                     * 获取Label value.
                     * @return Labels Label value.
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Label value.
                     * @param _labels Label value.
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * Label source.
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Label ID.
                     */
                    std::string m_attrBizId;
                    bool m_attrBizIdHasBeenSet;

                    /**
                     * Label identification.
                     */
                    std::string m_attrKey;
                    bool m_attrKeyHasBeenSet;

                    /**
                     * Label name.
                     */
                    std::string m_attrName;
                    bool m_attrNameHasBeenSet;

                    /**
                     * Label value.
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ATTRLABEL_H_
