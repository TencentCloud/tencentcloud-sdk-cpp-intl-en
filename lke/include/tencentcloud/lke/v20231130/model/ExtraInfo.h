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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_EXTRAINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_EXTRAINFO_H_

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
                * 
                */
                class ExtraInfo : public AbstractModel
                {
                public:
                    ExtraInfo();
                    ~ExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return EChartsInfo 
                     * 
                     */
                    std::vector<std::string> GetEChartsInfo() const;

                    /**
                     * 设置
                     * @param _eChartsInfo 
                     * 
                     */
                    void SetEChartsInfo(const std::vector<std::string>& _eChartsInfo);

                    /**
                     * 判断参数 EChartsInfo 是否已赋值
                     * @return EChartsInfo 是否已赋值
                     * 
                     */
                    bool EChartsInfoHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<std::string> m_eChartsInfo;
                    bool m_eChartsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_EXTRAINFO_H_
