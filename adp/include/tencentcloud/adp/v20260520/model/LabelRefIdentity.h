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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LABELREFIDENTITY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LABELREFIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Tag reference identifier (input parameter)
                */
                class LabelRefIdentity : public AbstractModel
                {
                public:
                    LabelRefIdentity();
                    ~LabelRefIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tag ID</p>
                     * @return LabelId <p>Tag ID</p>
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置<p>Tag ID</p>
                     * @param _labelId <p>Tag ID</p>
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取<p>Tag standard term ID list</p>
                     * @return LabelTermIdList <p>Tag standard term ID list</p>
                     * 
                     */
                    std::vector<std::string> GetLabelTermIdList() const;

                    /**
                     * 设置<p>Tag standard term ID list</p>
                     * @param _labelTermIdList <p>Tag standard term ID list</p>
                     * 
                     */
                    void SetLabelTermIdList(const std::vector<std::string>& _labelTermIdList);

                    /**
                     * 判断参数 LabelTermIdList 是否已赋值
                     * @return LabelTermIdList 是否已赋值
                     * 
                     */
                    bool LabelTermIdListHasBeenSet() const;

                private:

                    /**
                     * <p>Tag ID</p>
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * <p>Tag standard term ID list</p>
                     */
                    std::vector<std::string> m_labelTermIdList;
                    bool m_labelTermIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LABELREFIDENTITY_H_
