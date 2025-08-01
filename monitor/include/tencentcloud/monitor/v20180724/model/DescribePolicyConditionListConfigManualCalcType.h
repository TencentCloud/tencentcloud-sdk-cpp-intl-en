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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALCALCTYPE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALCALCTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionList.ConfigManual.CalcType
                */
                class DescribePolicyConditionListConfigManualCalcType : public AbstractModel
                {
                public:
                    DescribePolicyConditionListConfigManualCalcType();
                    ~DescribePolicyConditionListConfigManualCalcType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Value of CalcType.
Note: This field may return null, indicating that no valid value was found.
                     * @return Keys Value of CalcType.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<int64_t> GetKeys() const;

                    /**
                     * 设置Value of CalcType.
Note: This field may return null, indicating that no valid value was found.
                     * @param _keys Value of CalcType.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetKeys(const std::vector<int64_t>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Required or not.
                     * @return Need Required or not.
                     * 
                     */
                    bool GetNeed() const;

                    /**
                     * 设置Required or not.
                     * @param _need Required or not.
                     * 
                     */
                    void SetNeed(const bool& _need);

                    /**
                     * 判断参数 Need 是否已赋值
                     * @return Need 是否已赋值
                     * 
                     */
                    bool NeedHasBeenSet() const;

                private:

                    /**
                     * Value of CalcType.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<int64_t> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Required or not.
                     */
                    bool m_need;
                    bool m_needHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALCALCTYPE_H_
