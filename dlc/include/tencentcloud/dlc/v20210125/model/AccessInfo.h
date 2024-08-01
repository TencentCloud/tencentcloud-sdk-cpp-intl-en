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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ACCESSINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Information about visits to the engine
                */
                class AccessInfo : public AbstractModel
                {
                public:
                    AccessInfo();
                    ~AccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Methods to visit the engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessType Methods to visit the engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Methods to visit the engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessType Methods to visit the engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取URL that visits the engine and part of internal parameters should be taken place according to the actual situation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessConnectionInfos URL that visits the engine and part of internal parameters should be taken place according to the actual situation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAccessConnectionInfos() const;

                    /**
                     * 设置URL that visits the engine and part of internal parameters should be taken place according to the actual situation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessConnectionInfos URL that visits the engine and part of internal parameters should be taken place according to the actual situation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessConnectionInfos(const std::vector<std::string>& _accessConnectionInfos);

                    /**
                     * 判断参数 AccessConnectionInfos 是否已赋值
                     * @return AccessConnectionInfos 是否已赋值
                     * 
                     */
                    bool AccessConnectionInfosHasBeenSet() const;

                private:

                    /**
                     * Methods to visit the engine
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * URL that visits the engine and part of internal parameters should be taken place according to the actual situation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_accessConnectionInfos;
                    bool m_accessConnectionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ACCESSINFO_H_
