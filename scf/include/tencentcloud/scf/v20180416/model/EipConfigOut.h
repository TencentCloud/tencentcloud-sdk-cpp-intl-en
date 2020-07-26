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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_EIPCONFIGOUT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_EIPCONFIGOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Fixed IP configuration for public network access
                */
                class EipConfigOut : public AbstractModel
                {
                public:
                    EipConfigOut();
                    ~EipConfigOut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is a fixed IP. Valid values: ["ENABLE","DISABLE"]
                     * @return EipStatus Whether it is a fixed IP. Valid values: ["ENABLE","DISABLE"]
                     */
                    std::string GetEipStatus() const;

                    /**
                     * 设置Whether it is a fixed IP. Valid values: ["ENABLE","DISABLE"]
                     * @param EipStatus Whether it is a fixed IP. Valid values: ["ENABLE","DISABLE"]
                     */
                    void SetEipStatus(const std::string& _eipStatus);

                    /**
                     * 判断参数 EipStatus 是否已赋值
                     * @return EipStatus 是否已赋值
                     */
                    bool EipStatusHasBeenSet() const;

                    /**
                     * 获取IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EipAddress IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetEipAddress() const;

                    /**
                     * 设置IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EipAddress IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEipAddress(const std::vector<std::string>& _eipAddress);

                    /**
                     * 判断参数 EipAddress 是否已赋值
                     * @return EipAddress 是否已赋值
                     */
                    bool EipAddressHasBeenSet() const;

                private:

                    /**
                     * Whether it is a fixed IP. Valid values: ["ENABLE","DISABLE"]
                     */
                    std::string m_eipStatus;
                    bool m_eipStatusHasBeenSet;

                    /**
                     * IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_eipAddress;
                    bool m_eipAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_EIPCONFIGOUT_H_
