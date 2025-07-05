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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBUNDLE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBUNDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Price.h>
#include <tencentcloud/lighthouse/v20200324/model/Bundle.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Changeable packages for the instance.
                */
                class ModifyBundle : public AbstractModel
                {
                public:
                    ModifyBundle();
                    ~ModifyBundle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Price difference that you need to pay for the new instance package after change.
                     * @return ModifyPrice Price difference that you need to pay for the new instance package after change.
                     * 
                     */
                    Price GetModifyPrice() const;

                    /**
                     * 设置Price difference that you need to pay for the new instance package after change.
                     * @param _modifyPrice Price difference that you need to pay for the new instance package after change.
                     * 
                     */
                    void SetModifyPrice(const Price& _modifyPrice);

                    /**
                     * 判断参数 ModifyPrice 是否已赋值
                     * @return ModifyPrice 是否已赋值
                     * 
                     */
                    bool ModifyPriceHasBeenSet() const;

                    /**
                     * 获取Package change status. Valid values:
<li>SOLD_OUT: packages are sold out</li>
<li>AVAILABLE: packages can be changed</li>
<li>UNAVAILABLE: packages cannot be changed currently</li>
                     * @return ModifyBundleState Package change status. Valid values:
<li>SOLD_OUT: packages are sold out</li>
<li>AVAILABLE: packages can be changed</li>
<li>UNAVAILABLE: packages cannot be changed currently</li>
                     * 
                     */
                    std::string GetModifyBundleState() const;

                    /**
                     * 设置Package change status. Valid values:
<li>SOLD_OUT: packages are sold out</li>
<li>AVAILABLE: packages can be changed</li>
<li>UNAVAILABLE: packages cannot be changed currently</li>
                     * @param _modifyBundleState Package change status. Valid values:
<li>SOLD_OUT: packages are sold out</li>
<li>AVAILABLE: packages can be changed</li>
<li>UNAVAILABLE: packages cannot be changed currently</li>
                     * 
                     */
                    void SetModifyBundleState(const std::string& _modifyBundleState);

                    /**
                     * 判断参数 ModifyBundleState 是否已赋值
                     * @return ModifyBundleState 是否已赋值
                     * 
                     */
                    bool ModifyBundleStateHasBeenSet() const;

                    /**
                     * 获取Package information.
                     * @return Bundle Package information.
                     * 
                     */
                    Bundle GetBundle() const;

                    /**
                     * 设置Package information.
                     * @param _bundle Package information.
                     * 
                     */
                    void SetBundle(const Bundle& _bundle);

                    /**
                     * 判断参数 Bundle 是否已赋值
                     * @return Bundle 是否已赋值
                     * 
                     */
                    bool BundleHasBeenSet() const;

                    /**
                     * 获取The reason of package changing failure. It’s empty if the package change status is `AVAILABLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return NotSupportModifyMessage The reason of package changing failure. It’s empty if the package change status is `AVAILABLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNotSupportModifyMessage() const;

                    /**
                     * 设置The reason of package changing failure. It’s empty if the package change status is `AVAILABLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _notSupportModifyMessage The reason of package changing failure. It’s empty if the package change status is `AVAILABLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotSupportModifyMessage(const std::string& _notSupportModifyMessage);

                    /**
                     * 判断参数 NotSupportModifyMessage 是否已赋值
                     * @return NotSupportModifyMessage 是否已赋值
                     * 
                     */
                    bool NotSupportModifyMessageHasBeenSet() const;

                private:

                    /**
                     * Price difference that you need to pay for the new instance package after change.
                     */
                    Price m_modifyPrice;
                    bool m_modifyPriceHasBeenSet;

                    /**
                     * Package change status. Valid values:
<li>SOLD_OUT: packages are sold out</li>
<li>AVAILABLE: packages can be changed</li>
<li>UNAVAILABLE: packages cannot be changed currently</li>
                     */
                    std::string m_modifyBundleState;
                    bool m_modifyBundleStateHasBeenSet;

                    /**
                     * Package information.
                     */
                    Bundle m_bundle;
                    bool m_bundleHasBeenSet;

                    /**
                     * The reason of package changing failure. It’s empty if the package change status is `AVAILABLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_notSupportModifyMessage;
                    bool m_notSupportModifyMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBUNDLE_H_
