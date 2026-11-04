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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CHECKLABELREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CHECKLABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CheckLabel request structure.
                */
                class CheckLabelRequest : public AbstractModel
                {
                public:
                    CheckLabelRequest();
                    ~CheckLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the knowledge base it belongs to</p>
                     * @return KbId <p>ID of the knowledge base it belongs to</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>ID of the knowledge base it belongs to</p>
                     * @param _kbId <p>ID of the knowledge base it belongs to</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>List of standard words to be checked (quantity: 1–100)</p>
                     * @return TermList <p>List of standard words to be checked (quantity: 1–100)</p>
                     * 
                     */
                    std::vector<std::string> GetTermList() const;

                    /**
                     * 设置<p>List of standard words to be checked (quantity: 1–100)</p>
                     * @param _termList <p>List of standard words to be checked (quantity: 1–100)</p>
                     * 
                     */
                    void SetTermList(const std::vector<std::string>& _termList);

                    /**
                     * 判断参数 TermList 是否已赋值
                     * @return TermList 是否已赋值
                     * 
                     */
                    bool TermListHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID (validates the uniqueness of standard terms under the specified tag)</p>
                     * @return LabelId <p>Tag ID (validates the uniqueness of standard terms under the specified tag)</p>
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置<p>Tag ID (validates the uniqueness of standard terms under the specified tag)</p>
                     * @param _labelId <p>Tag ID (validates the uniqueness of standard terms under the specified tag)</p>
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the knowledge base it belongs to</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>List of standard words to be checked (quantity: 1–100)</p>
                     */
                    std::vector<std::string> m_termList;
                    bool m_termListHasBeenSet;

                    /**
                     * <p>Tag ID (validates the uniqueness of standard terms under the specified tag)</p>
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CHECKLABELREQUEST_H_
