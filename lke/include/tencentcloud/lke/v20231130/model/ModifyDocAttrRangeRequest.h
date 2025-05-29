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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYDOCATTRRANGEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYDOCATTRRANGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabelRefer.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ModifyDocAttrRange request structure.
                */
                class ModifyDocAttrRangeRequest : public AbstractModel
                {
                public:
                    ModifyDocAttrRangeRequest();
                    ~ModifyDocAttrRangeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Document ID.
                     * @return DocBizIds Document ID.
                     * 
                     */
                    std::vector<std::string> GetDocBizIds() const;

                    /**
                     * 设置Document ID.
                     * @param _docBizIds Document ID.
                     * 
                     */
                    void SetDocBizIds(const std::vector<std::string>& _docBizIds);

                    /**
                     * 判断参数 DocBizIds 是否已赋值
                     * @return DocBizIds 是否已赋值
                     * 
                     */
                    bool DocBizIdsHasBeenSet() const;

                    /**
                     * 获取Attribute label applicable scope: 1: all, 2: by conditions.
                     * @return AttrRange Attribute label applicable scope: 1: all, 2: by conditions.
                     * 
                     */
                    uint64_t GetAttrRange() const;

                    /**
                     * 设置Attribute label applicable scope: 1: all, 2: by conditions.
                     * @param _attrRange Attribute label applicable scope: 1: all, 2: by conditions.
                     * 
                     */
                    void SetAttrRange(const uint64_t& _attrRange);

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取Attribute label reference.
                     * @return AttrLabels Attribute label reference.
                     * 
                     */
                    std::vector<AttrLabelRefer> GetAttrLabels() const;

                    /**
                     * 设置Attribute label reference.
                     * @param _attrLabels Attribute label reference.
                     * 
                     */
                    void SetAttrLabels(const std::vector<AttrLabelRefer>& _attrLabels);

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Document ID.
                     */
                    std::vector<std::string> m_docBizIds;
                    bool m_docBizIdsHasBeenSet;

                    /**
                     * Attribute label applicable scope: 1: all, 2: by conditions.
                     */
                    uint64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * Attribute label reference.
                     */
                    std::vector<AttrLabelRefer> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYDOCATTRRANGEREQUEST_H_
