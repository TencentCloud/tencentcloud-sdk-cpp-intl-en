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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/Tag.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateGlobalAccelerator request structure.
                */
                class CreateGlobalAcceleratorRequest : public AbstractModel
                {
                public:
                    CreateGlobalAcceleratorRequest();
                    ~CreateGlobalAcceleratorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * @return Name <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * @param _name <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Billing mode. PREPAID: prepaid mode, i.e., Monthly Subscription. POSTPAID: postpaid, i.e., pay-as-you-go. Default: POSTPAID. Currently, only pay-as-you-go is supported.</p>
                     * @return InstanceChargeType <p>Billing mode. PREPAID: prepaid mode, i.e., Monthly Subscription. POSTPAID: postpaid, i.e., pay-as-you-go. Default: POSTPAID. Currently, only pay-as-you-go is supported.</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Billing mode. PREPAID: prepaid mode, i.e., Monthly Subscription. POSTPAID: postpaid, i.e., pay-as-you-go. Default: POSTPAID. Currently, only pay-as-you-go is supported.</p>
                     * @param _instanceChargeType <p>Billing mode. PREPAID: prepaid mode, i.e., Monthly Subscription. POSTPAID: postpaid, i.e., pay-as-you-go. Default: POSTPAID. Currently, only pay-as-you-go is supported.</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
                     * @return Description <p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
                     * @param _description <p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
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
                     * 获取<p>Cross-border type; HighQuality: dedicated BGP-IP cross-border; Unicom: China Unicom Direct Connect cross-border.</p>
                     * @return CrossBorderType <p>Cross-border type; HighQuality: dedicated BGP-IP cross-border; Unicom: China Unicom Direct Connect cross-border.</p>
                     * 
                     */
                    std::string GetCrossBorderType() const;

                    /**
                     * 设置<p>Cross-border type; HighQuality: dedicated BGP-IP cross-border; Unicom: China Unicom Direct Connect cross-border.</p>
                     * @param _crossBorderType <p>Cross-border type; HighQuality: dedicated BGP-IP cross-border; Unicom: China Unicom Direct Connect cross-border.</p>
                     * 
                     */
                    void SetCrossBorderType(const std::string& _crossBorderType);

                    /**
                     * 判断参数 CrossBorderType 是否已赋值
                     * @return CrossBorderType 是否已赋值
                     * 
                     */
                    bool CrossBorderTypeHasBeenSet() const;

                    /**
                     * 获取<p>This Flag represents signing the cross-border service commitment. When using cross-border service, this field is required. True: represents signed.</p>
                     * @return CrossBorderPromiseFlag <p>This Flag represents signing the cross-border service commitment. When using cross-border service, this field is required. True: represents signed.</p>
                     * 
                     */
                    bool GetCrossBorderPromiseFlag() const;

                    /**
                     * 设置<p>This Flag represents signing the cross-border service commitment. When using cross-border service, this field is required. True: represents signed.</p>
                     * @param _crossBorderPromiseFlag <p>This Flag represents signing the cross-border service commitment. When using cross-border service, this field is required. True: represents signed.</p>
                     * 
                     */
                    void SetCrossBorderPromiseFlag(const bool& _crossBorderPromiseFlag);

                    /**
                     * 判断参数 CrossBorderPromiseFlag 是否已赋值
                     * @return CrossBorderPromiseFlag 是否已赋值
                     * 
                     */
                    bool CrossBorderPromiseFlagHasBeenSet() const;

                    /**
                     * 获取<p>Tag information.</p>
                     * @return Tags <p>Tag information.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag information.</p>
                     * @param _tags <p>Tag information.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>Name.</p><p>Parameter format: starting with a letter or Chinese characters, 2–128 characters in length, supporting letters, digits, Chinese characters, . - _</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Billing mode. PREPAID: prepaid mode, i.e., Monthly Subscription. POSTPAID: postpaid, i.e., pay-as-you-go. Default: POSTPAID. Currently, only pay-as-you-go is supported.</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Description.</p><p>Parameter format: should not exceed 100 characters.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Cross-border type; HighQuality: dedicated BGP-IP cross-border; Unicom: China Unicom Direct Connect cross-border.</p>
                     */
                    std::string m_crossBorderType;
                    bool m_crossBorderTypeHasBeenSet;

                    /**
                     * <p>This Flag represents signing the cross-border service commitment. When using cross-border service, this field is required. True: represents signed.</p>
                     */
                    bool m_crossBorderPromiseFlag;
                    bool m_crossBorderPromiseFlagHasBeenSet;

                    /**
                     * <p>Tag information.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORREQUEST_H_
