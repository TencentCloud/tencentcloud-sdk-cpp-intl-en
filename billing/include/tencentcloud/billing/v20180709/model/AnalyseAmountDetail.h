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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEAMOUNTDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEAMOUNTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Cost analysis amount return data model
                */
                class AnalyseAmountDetail : public AbstractModel
                {
                public:
                    AnalyseAmountDetail();
                    ~AnalyseAmountDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fee type
                     * @return Key Fee type
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Fee type
                     * @param _key Fee type
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
                     * 获取Indicates whether to display
                     * @return Display Indicates whether to display
                     * 
                     */
                    int64_t GetDisplay() const;

                    /**
                     * 设置Indicates whether to display
                     * @param _display Indicates whether to display
                     * 
                     */
                    void SetDisplay(const int64_t& _display);

                    /**
                     * 判断参数 Display 是否已赋值
                     * @return Display 是否已赋值
                     * 
                     */
                    bool DisplayHasBeenSet() const;

                private:

                    /**
                     * Fee type
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Indicates whether to display
                     */
                    int64_t m_display;
                    bool m_displayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEAMOUNTDETAIL_H_
