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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAssetTag request structure.
                */
                class ModifyAssetTagRequest : public AbstractModel
                {
                public:
                    ModifyAssetTagRequest();
                    ~ModifyAssetTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Tag key</p>
                     * @return Key <p>Tag key</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>Tag key</p>
                     * @param _key <p>Tag key</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>Tag value.</p>
                     * @return Value <p>Tag value.</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Tag value.</p>
                     * @param _value <p>Tag value.</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID</p>
                     * @return TagID <p>Tag ID</p>
                     * 
                     */
                    uint64_t GetTagID() const;

                    /**
                     * 设置<p>Tag ID</p>
                     * @param _tagID <p>Tag ID</p>
                     * 
                     */
                    void SetTagID(const uint64_t& _tagID);

                    /**
                     * 判断参数 TagID 是否已赋值
                     * @return TagID 是否已赋值
                     * 
                     */
                    bool TagIDHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Color</p>
                     * @return Color <p>Color</p>
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>Color</p>
                     * @param _color <p>Color</p>
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Tagging policy.</p>
                     * @return TaggingRule <p>Tagging policy.</p>
                     * 
                     */
                    std::string GetTaggingRule() const;

                    /**
                     * 设置<p>Tagging policy.</p>
                     * @param _taggingRule <p>Tagging policy.</p>
                     * 
                     */
                    void SetTaggingRule(const std::string& _taggingRule);

                    /**
                     * 判断参数 TaggingRule 是否已赋值
                     * @return TaggingRule 是否已赋值
                     * 
                     */
                    bool TaggingRuleHasBeenSet() const;

                    /**
                     * 获取<p>Whether to execute asset tagging immediately</p>
                     * @return ApplyNow <p>Whether to execute asset tagging immediately</p>
                     * 
                     */
                    bool GetApplyNow() const;

                    /**
                     * 设置<p>Whether to execute asset tagging immediately</p>
                     * @param _applyNow <p>Whether to execute asset tagging immediately</p>
                     * 
                     */
                    void SetApplyNow(const bool& _applyNow);

                    /**
                     * 判断参数 ApplyNow 是否已赋值
                     * @return ApplyNow 是否已赋值
                     * 
                     */
                    bool ApplyNowHasBeenSet() const;

                private:

                    /**
                     * <p>Tag key</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>Tag value.</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>Tag ID</p>
                     */
                    uint64_t m_tagID;
                    bool m_tagIDHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Color</p>
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Tagging policy.</p>
                     */
                    std::string m_taggingRule;
                    bool m_taggingRuleHasBeenSet;

                    /**
                     * <p>Whether to execute asset tagging immediately</p>
                     */
                    bool m_applyNow;
                    bool m_applyNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGREQUEST_H_
